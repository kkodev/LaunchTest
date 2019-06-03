@import Foundation;

#import "RowItem.h"

@class ValidationResult;

@interface ValidationRowItem : RowItem

@property (nonatomic, strong) ValidationResult *validationResult;

@end
