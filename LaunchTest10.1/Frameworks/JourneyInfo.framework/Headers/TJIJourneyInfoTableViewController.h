@import Foundation;

@class LDBSearchParameters;
@class JSSJourneySearchParams;
@class JSSJourney;
@class RefreshBarButtonItem;
@class TJIJourneyInfoTableViewController;
@class TLCStation;
@class TBBBusyBot;
@class JSSDisruption;

#import "TJIAnalytics.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, TJIJourneyInfoTableViewControllerReloadTrigger) {
    TJIJourneyInfoTableViewControllerReloadTriggerNone,
    TJIJourneyInfoTableViewControllerReloadTriggerTimer,
    TJIJourneyInfoTableViewControllerReloadTriggerButton,
    TJIJourneyInfoTableViewControllerReloadTriggerPullToRefresh
};

@protocol TJIJourneyInfoTableViewControllerDelegate <NSObject>

@optional

- (void)journeyInfoTableViewControllerDidFinishRefreshing;
- (void)journeyInfoTableViewControllerDidLoadModules:(TJIJourneyInfoTableViewController *)journeyInfoTableViewController;

- (void)journeyInfoTableViewController:(TJIJourneyInfoTableViewController *)journeyInfoTableViewController
                         didTapStation:(TLCStation *)station;

- (void)journeyInfoTableViewController:(TJIJourneyInfoTableViewController *)journeyInfoTableViewController
                     didTapTubeStation:(TLCStation *)station;

- (void)journeyInfoTableViewController:(TJIJourneyInfoTableViewController *)journeyInfoTableViewController
    didTapDelayRepayForServiceProvider:(nullable NSString *)serviceProviderCode;

- (void)journeyInfoTableViewControllerDidTapUnconfirmedTimetable:(TJIJourneyInfoTableViewController *)journeyInfoTableViewController;

- (void)journeyInfoTableViewController:(TJIJourneyInfoTableViewController *)journeyInfoTableViewController
                      didTapDisruption:(JSSDisruption *)disruption;

- (void)journeyInfoTableViewController:(TJIJourneyInfoTableViewController *)journeyInfoTableViewController
     userFeedbackPositiveForDisruption:(JSSDisruption *)disruption;

- (void)journeyInfoTableViewController:(TJIJourneyInfoTableViewController *)journeyInfoTableViewController
     userFeedbackNegativeForDisruption:(JSSDisruption *)disruption;

- (void)journeyInfoTableViewController:(TJIJourneyInfoTableViewController *)journeyInfoTableViewController
            didFailToLoadDataWithError:(nullable NSError *)error;

/** Returning nil here indicates that no footer should be used. */
- (UIView *)footerViewForJourneyInfoTableViewController:(TJIJourneyInfoTableViewController *)journeyInfoTableViewController;

- (void)didTapAddToSiri:(JSSLeg *)leg;
- (BOOL)isVoiceShortcutAddedFor:(JSSLeg *)leg;
- (BOOL)shouldShowSiriButton;

@end

@interface TJIJourneyInfoTableViewController : UITableViewController

@property (nonatomic, strong, nullable) JSSJourney *journey;
@property (nonatomic, assign) BOOL overtakenNoticeEnabled;
@property (nonatomic, assign) BOOL highlightRailReplacementLegs;
@property (nonatomic, assign) BOOL highlightDisruptedJourneys;
@property (nonatomic, assign) BOOL disruptionFeedbackEnabled;
@property (nonatomic, copy, nullable) NSString *analyticsScreenName;

@property (nonatomic, weak, nullable) id<TJIJourneyInfoTableViewControllerDelegate> delegate;

/** Set a BusyBot object to display/receive BusyBot feedback. Defaults to `nil`. */
@property (nonatomic, nullable) TBBBusyBot *busyBot;

@property (nonatomic, strong) NSURL *apiBaseURL;
@property (nonatomic, strong) NSURL *realTimeAPIBaseURL;

@property (nonatomic, readonly) BOOL shownBusyBotInformation;
@property (nonatomic, readonly) BOOL shownDelayRepayButton;
@property (nonatomic, readonly) BOOL shownOvertakenNotice;
@property (nonatomic, readonly) BOOL shownUnconfirmedTimetable;

@property (nonatomic, copy, nullable) void (^busyBotVisibilityChangedBlock)(BOOL busyBotIsShown);

@property (nonatomic, copy, nullable) NSString *customerIdentifier;
@property (nonatomic, strong, nullable) NSObject<TJIAnalytics> *analytics;

@property (nonatomic, strong) id<TLCStationLoader> stationLoader;

- (void)reloadDataWithTrigger:(TJIJourneyInfoTableViewControllerReloadTrigger)trigger;
- (void)dismissBusyBotFeedback;

- (void)setTableViewInsets:(UIEdgeInsets)insets;

/** Force the footer view to update - the delegate will be queried for a footer view if the table view is loaded. */
- (void)reloadFooterView;

@end

NS_ASSUME_NONNULL_END
