//
//  TCFConfiguration.h
//  Configuration
//
//  Created by Grzegorz Kozłowski on 29/01/2015.
//  Copyright (c) 2015 Trainline. All rights reserved.
//

@import Foundation;

@class TCFEnvironment;

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ConfigurationDidUpdateSharedConfigurationNotification)
FOUNDATION_EXPORT NSString *const TCFConfigurationDidUpdateSharedConfigurationNotification;

NS_SWIFT_NAME(ConfigurationLogLevel)
typedef NS_ENUM(NSInteger, TCFConfigurationLogLevel) {
	TCFConfigurationLogLevelOff,
	TCFConfigurationLogLevelError,
	TCFConfigurationLogLevelWarning,
	TCFConfigurationLogLevelInfo,
	TCFConfigurationLogLevelDebug,
	TCFConfigurationLogLevelVerbose,
	TCFConfigurationLogLevelAll
};

NS_SWIFT_NAME(Configuration)
@interface TCFConfiguration : NSObject <NSSecureCoding>

/**
 Web Service Gateway configuration.
 
 @return If configuration has been saved as shared configuration and no value has been assigned, this property will return corresponding value from default configuration.
 */
@property (nonatomic, nullable, copy) TCFEnvironment *environment;

/**
 Enables demonstration mode for the whole application.
 */
@property (nonatomic, getter=isDemonstrationModeEnabled) BOOL demonstrationModeEnabled;

/**
 Enables test style (pink colors) for mobile tickets.
 */
@property (nonatomic, getter=isMobileTicketTestStyleEnabled) BOOL mobileTicketTestStyleEnabled;

/**
 Enables attribution tracking.
 */
@property (nonatomic, getter=isAttributionTrackingEnabled) BOOL attributionTrackingEnabled;

/**
 Enables analytics.
 */
@property (nonatomic, getter=isAnalyticsEnabled) BOOL analyticsEnabled;

/**
 Enables test configuration for analytics.
 */
@property (nonatomic, getter=isAnalyticsTestConfigurationEnabled) BOOL analyticsTestConfigurationEnabled;

/**
 Enables debug mode for analytics.
 */
@property (nonatomic, getter=isAnalyticsDebugModeEnabled) BOOL analyticsDebugModeEnabled;

/**
 Enables crash reporting.
 */
@property (nonatomic, getter=isCrashReportingEnabled) BOOL crashReportingEnabled;

/**
 Enables debug mode for crash reporting.
 */
@property (nonatomic, getter=isCrashReportingDebugModeEnabled) BOOL crashReportingDebugModeEnabled;

/**
 Enables multivariate testing.
 */
@property (nonatomic, getter=isMultivariateTestingEnabled) BOOL multivariateTestingEnabled;

/**
 Returns environment key for multivariate testing.
 
 @return If configuration has been saved as shared configuration and no value has been assigned, this property will return corresponding value from default configuration.
 */
@property (nonatomic, nullable, copy) NSString *multivariateTestingEnvironmentKey;

/**
 Enables visual editor for multivariate testing.
 */
@property (nonatomic, getter=isMultivariateTestingVisualEditorEnabled) BOOL multivariateTestingVisualEditorEnabled;

/**
 Enables debug mode for multivariate testing.
 */
@property (nonatomic, getter=isMultivariateTestingDebugModeEnabled) BOOL multivariateTestingDebugModeEnabled;

/**
 Enables New Relic.
 */
@property (nonatomic, getter=isNewRelicEnabled) BOOL newRelicEnabled;

/**
 Enables New Relic interaction tracing.
 */
@property (nonatomic, getter=isNewRelicInteractionTracingEnabled) BOOL newRelicInteractionTracingEnabled;

/**
 Enables New Relic Swift interaction tracing.
 */
@property (nonatomic, getter=isNewRelicSwiftInteractionTracingEnabled) BOOL newRelicSwiftInteractionTracingEnabled;

/**
 Enables New Relic gesture instrumentation.
 */
@property (nonatomic, getter=isNewRelicGestureInstrumentationEnabled) BOOL newRelicGestureInstrumentationEnabled;

/**
 Enables New Relic NSURLSession instrumentation.
 */
@property (nonatomic, getter=isNewRelicNSURLSessionInstrumentationEnabled) BOOL newRelicNSURLSessionInstrumentationEnabled;

/**
 Enables New Relic HTTP response body capture.
 */
@property (nonatomic, getter=isNewRelicHTTPResponseBodyCaptureEnabled) BOOL newRelicHTTPResponseBodyCaptureEnabled;

/**
 Enables New Relic experimental networking instrumentation.
 */
@property (nonatomic, getter=isNewRelicExperimentalNetworkingInstrumentationEnabled) BOOL newRelicExperimentalNetworkingInstrumentationEnabled;

/**
 Enables Snowplow.
 */
@property (nonatomic, getter=isSnowplowEnabled) BOOL snowplowEnabled;

/**
 Log level for CocoaLumberjack.
 */
@property (nonatomic) TCFConfigurationLogLevel logLevel;

/**
 Enables logging to shared log file.
 */
@property (nonatomic, getter=isFileLoggingEnabled) BOOL fileLoggingEnabled;

/**
 Enables network logging.
 */
@property (nonatomic, getter=isNetworkLoggingEnabled) BOOL networkLoggingEnabled;

/**
 Indicates if object has been registered as default configuration.
 */
@property (nonatomic, readonly) BOOL isDefaultConfiguration;

/**
 Indicates if object has been saved as shared configuration.
 */
@property (nonatomic, readonly) BOOL isSharedConfiguration;

/**
 Returns either custom or default configuration.
 */
+ (nullable TCFConfiguration *)currentConfiguration;

/**
 Registers default configuration used when custom configuration is not present.
 */
+ (void)registerDefaultConfiguration:(TCFConfiguration *)configuration;

/**
 Removes custom configuration from keychain.
 */
+ (void)clearSharedConfiguration;

/**
 Saves configuration to keychain.
 */
- (void)save;

@end

NS_ASSUME_NONNULL_END
