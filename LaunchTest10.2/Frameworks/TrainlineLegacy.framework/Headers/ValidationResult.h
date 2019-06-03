@import Foundation;

typedef NS_ENUM(NSInteger, ValidationState) {
    ValidationStateNotRun,
    ValidationStateFailed,
    ValidationStateSucceeded
};

@interface ValidationResult : NSObject

@property (nonatomic, nullable) NSString *fieldName;
@property (nonatomic, nullable) NSString *fieldValue;
@property (nonatomic, readonly) ValidationState validationState;
@property (nonatomic, nullable) NSError *error;

+ (nonnull ValidationResult *)validationResultForKeyPath:(nullable NSString *)keyPath fromObject:(nullable NSObject *)object;

- (nonnull instancetype)initWithValidationState:(ValidationState)state error:(nullable NSError *)error fieldName:(nullable NSString *)name fieldValue:(nullable id)value;

@end
