@import Foundation;

@class RowItem;

typedef BOOL (^SectionControllerPredicateBlock)(id obj);

@interface SectionControllerTableViewController : UITableViewController

@property (nonatomic, strong) NSArray *sectionControllers;

- (NSIndexPath *)indexPathForRowItemPassingTest:(SectionControllerPredicateBlock)predicate;

- (NSIndexPath *)indexPathForRowItemWithTag:(NSUInteger)tag;
- (NSIndexPath *)indexPathForRowItemWithValidationState:(NSInteger)validationState;

- (RowItem *)rowItemForCellAtIndexPath:(NSIndexPath *)indexPath;

- (void)trackValidationErrorsForEventName:(NSString *)eventName PageName:(NSString *)pageName additionalContextData:(NSDictionary *)additionalData;

- (void)updateSectionControllers;
@end
