//
// Created by Tom Fletcher on 10/04/2018.
// Copyright (c) 2018 Trainline. All rights reserved.
//

@import Foundation;
@class LocalizedAttributedStringConfiguration;

NS_ASSUME_NONNULL_BEGIN

/**
 * Set this user defaults key (`TTLDoubleLocalizedStrings`) to `YES` to double the length
 * of all localised strings for debugging purposes.
 *
 * This can be in either standard user defaults (most likely via command line) or in `tsd_sharedUserDefaults`
 * (most likely via configurator).
 
 * Usually you'll want to set this as a command line argument of the form `-TTLDoubleLocalizedStrings 1`.
 *
 * Essentially, the same as Cocoa's `NSDoubleLocalizedStrings` key, but affecting the `TTL` macros instead.
 *
 * https://developer.apple.com/library/archive/documentation/MacOSX/Conceptual/BPInternational/InternationalizingYourUserInterface/InternationalizingYourUserInterface.html#//apple_ref/doc/uid/10000171i-CH3-SW1
 */
extern NSString *const TTLDoubleLocalizedStringsUserDefaultsKey;

/**
 Marks this string as user-visible but as something that should not be localized.
 This is usually when a string is displayed as part of something that must be of
 fixed locale, e.g. a ticket that must be displayed in the language of the staff
 validating the ticket.

 @param value The string that is being marked.
 @return A passthrough - just returns the value.
 */
NSString *DoNotLocalize(NSString *value);

/**
 Localization method for most strings. This requires a key, value and comment.
 It's a wrapper around NSLocalizedString to make clear what params we need.

 @param key The key by which the format string is labelled in the strings file.
 @param value The localized value in the base language.
 @param comment A descriptive comment for translators.
 @return Localized text.
 */
NSString *TTLLocalizedString(NSString *key, NSString *value, NSString *comment);
NSString *TTLLocalizedStringWithBundle(NSString *key, NSString *value, NSString *comment, NSBundle *bundle);

/**
 Combines a localizable format string containing pluralization,
 with any required parameters to produce a fully localized string for display.
 Use with plural formats, e.g. ("%d Passengers", numPassengers).
 This is identical to LocalizedFormattedString but it assists automated
 localization validation tools to identify the string as requiring an entry in
 a stringsdict file.

 @param key The key by which the desired format string is labelled in its stringsdict file.
 @param comment Describes the format string to the translator.
 @param ... Values for any placeholders referenced in the format string.
 @return A localized string using the supplied format and arguments.
 */
NSString *TTLLocalizedStringPlural(NSString *key, NSString *comment, ...);
NSString *TTLLocalizedStringPluralWithBundle(NSString *key, NSString *comment, NSBundle *bundle, ...);

/**
 * Returns a doubled version of `string` if the `TTLDoubleLocalizedStrings` UserDefault
 * key has a value of `true`. Otherwise, returns `string`.
 *
 * Note that all of the string localisation methods themselves double their returned strings
 * if the user default is enabled, so you probably don't ever need to use this function directly.
 *
 * @param string The `string` to double.
 * @return Either a doubled version of the string, or the original string if doubling not enabled.
 */
NSString *TTLDoubleStringIfStringDoublingEnabled(NSString *string);

/**
 Marks out a localizable string whose key is computed at runtime, so automated tools
 can find it. Otherwise, no different to calling NSLocalizedString directly.
 Note that selecting keys at runtime limits automated validation and you should avoid
 if possible. Currently this happens only with leanplum strings (BONSP-6693 covers
 finding a better way for those).

 @param key A string variable holding the key to use. If you can replace this argument
 with a string literal, you should replace this call with NSLocalizedString instead.
 @param comment Describes the format string to the translator.
 @return A localized string identified by the key.
 */
#define TTLLocalizedStringWithDynamicKeyAndBundle(key, comment, bundle) \
    [bundle localizedStringForKey:(key) value:@"" table:nil]

#define TTLLocalizedStringWithDynamicKey(key, comment) \
    TTLLocalizedStringWithDynamicKeyAndBundle(key, comment, [NSBundle mainBundle])

#define TTLLocalizedFormattedStringWithBundle(key, valueInBaseLanguage, comment, bundle, ...) \
    [NSString localizedStringWithFormat:[bundle localizedStringForKey:(key ?: valueInBaseLanguage) value:valueInBaseLanguage table:nil], __VA_ARGS__]

#define TTLLocalizedFormattedString(key, valueInBaseLanguage, comment, ...) \
    TTLDoubleStringIfStringDoublingEnabled(TTLLocalizedFormattedStringWithBundle(key, valueInBaseLanguage, comment, [NSBundle mainBundle], __VA_ARGS__))

/**
 Identifies a style of list separator; used to pick a set of separators in TTLLocalizedStringByJoiningElements.

 - TTLLocalizedStringJoinStandard: The list is formatted as though a sentence.
 - TTLLocalizedStringJoinBrief: The list is formatted with shorter separators than used in standard.
 - TTLLocalizedStringJoinSymbol: The list elements are separated with a basic typographic symbol (in english, &).
 */
typedef NS_ENUM(NSUInteger, TTLLocalizedStringJoinStyle) {
    TTLLocalizedStringJoinStandard,
    TTLLocalizedStringJoinBrief,
    TTLLocalizedStringJoinSymbol,
    TTLLocalizedStringJoinBasicList,
    TTLLocalizedStringJoinAccessibilityItems,
    TTLLocalizedStringJoinAccessibilityGroups,
};

/**
 Converts the items in the elements array into a single string,
 by joining them with localized separators. The separators are
 selected by a style parameter.

 @param elements The list of items we want to format.
 @param style The style of separator to use.
 @return The elements as a single string, with localized separators.
 */
NSString *TTLLocalizedStringByJoiningElements(NSArray<NSString*> *elements, TTLLocalizedStringJoinStyle style);
NSString *TTLLocalizedStringByJoiningElementsWithBundle(NSArray<NSString*> *elements, TTLLocalizedStringJoinStyle style, NSBundle *bundle);

/**
 Converts the items in the elements array into a single string,
 by joining them with localized separators. The separators can
 be individually specified.

 @param elements The list of items we want to format.
 @param twoElementListSeparator Separator to use if the list has only two items.
 @param firstPairSeparator Separator to use for the first pair of items in a longer list.
 @param middlePairSeparator Separator to use for any pair of items not the first or last, in a longer list.
 @param lastPairSeparator Separator to use for the last pair of items in a longer list.
 @return The elements as a single string, with localized separators.
 */
NSString *TTLLocalizedStringByJoiningElementsWithSeparators(NSArray<NSString*> *elements, NSString* twoElementListSeparator, NSString* firstPairSeparator, NSString* middlePairSeparator, NSString* lastPairSeparator);
NSString *TTLLocalizedStringByJoiningElementsWithSeparatorsWithBundle(NSArray<NSString*> *elements, NSString* twoElementListSeparator, NSString* firstPairSeparator, NSString* middlePairSeparator, NSString* lastPairSeparator, NSBundle *bundle);

/**
 Marks out a localized string which can make use of mark-up elements to produce
 attributes, resulting in an attributed string.

 Supported tags are em to add emphasis to a region, and link to make a region a hyperlink
 where the key attribute provides the unique key of the configured link to use.

 @param key The key by which the format string is labelled in its .stringsdict or .strings file.
 @param value The default string value in the base language.  If nil, the key will be used instead.
 @param comment Describes the format string to the translator.
 @param configuration The styles and link configuration for the localized attributed string.
 @return A localized attributed string using the supplied style and link configuration as appropriate.
 */
NSAttributedString *TTLLocalizedAttributedString(
        NSString *key,
        NSString *value,
        NSString *comment,
        LocalizedAttributedStringConfiguration *configuration
);
NSAttributedString *TTLLocalizedAttributedStringWithBundle(
        NSString *key,
        NSString *value,
        NSString *comment,
        LocalizedAttributedStringConfiguration *configuration,
        NSBundle *bundle
);

/**
 Combines a localizable format string containing pluralization,
 with any required parameters to produce a fully localized string for display.

 Then it processes any mark-up in the string to ensure that styles are applied,
 yielding an attributed string.

 Use with plural formats and mark-up.

 This is identical to LocalizedFormattedAttributedString but it assists automated
 localization validation tools to identify the string as requiring an entry in
 a stringsdict file.

 @param key The key by which the desired format string is labelled in its stringsdict file.
 @param comment Describes the format string to the translator.
 @param ... Values for any placeholders referenced in the format string.
 @return A localized string using the supplied format and arguments.
 */
NSAttributedString *TTLLocalizedFormattedAttributedString(
        NSString *key,
        NSString *value,
        NSString *comment,
        LocalizedAttributedStringConfiguration *configuration,
        ...
);
NSAttributedString *TTLLocalizedFormattedAttributedStringWithBundle(
        NSString *key,
        NSString *value,
        NSString *comment,
        LocalizedAttributedStringConfiguration *configuration,
        NSBundle *bundle,
        ...
);

/**
 Combines a localizable format string with parameters and resolves mark-up tags
 to produce a localized attributed string.

 @param key The key by which the format string is labelled in its .stringsdict or .strings file.
 @param comment Describes the format string to the translator.
 @param configuration The styles and link configuration for the localized attributed string.
 @param ... Values for any placeholders in the format string.
 @return A localized string using the supplied format, arguments and style configuration.
 */
NSAttributedString *TTLLocalizedAttributedStringPlural(
        NSString *key,
        NSString *comment,
        LocalizedAttributedStringConfiguration *configuration,
        ...
);
NSAttributedString *TTLLocalizedAttributedStringPluralWithBundle(
        NSString *key,
        NSString *comment,
        LocalizedAttributedStringConfiguration *configuration,
        NSBundle *bundle,
        ...
);

NS_ASSUME_NONNULL_END
