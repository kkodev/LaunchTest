//
//  TTLTableViewModule.h
//  Trainline
//
//  Created by Andrey Kozlov on 09/03/2015.
//  Copyright © 2015 Trainline. All rights reserved.
//

@import Foundation;
@import UIKit;

#import "TTLModuleTableViewCellInterface.h"

extern NSString * const TTLModuleActionErrorKey;

@class TTLTableViewModule;


@protocol TTLTableViewModuleDelegate <NSObject, UITableViewDelegate>


@optional

/**
 * Called when a module wants to present a view controller as the result of a user's action. It is up to the delegate to present the view controller in an appropriate way.
 */
- (void)module:(TTLTableViewModule *)module showViewController:(UIViewController *)viewController;

/**
*  Called when a module wants to present a segue as the result of a user's action.
*  @param identifier - the identifier for Segue
*  @param sender - object to support segue
*/
- (void)module:(TTLTableViewModule *)module performSegueWithIdentifier:(NSString *)identifier sender:(id)sender;

/**
 * Called when the module successfully loaded it's data from an external data source.
 * This callback method is invoked on the main thread.
 */
- (void)moduleDidFinishLoading:(TTLTableViewModule *)module;

/**
 * Called when the module failed to load the data from an external data source.
 * This callback method is invoked on the main thread.
 * @param module - the module which failed to load the data.
 * @param error - the error which describes the reason why the data failed to load.
 */
- (void)module:(TTLTableViewModule *)module failedToLoadDataWithError:(NSError *)error;

/**
 * Invoked when the module wants to start an action and have the delegate react to the starting of this action. If this sounds vague and abstract, this is the intent. Delegates
 * implementing this method should fully understand the collection of actions that they can request. One example of such an `action` is starting a cash out process. A Cash Out
 * module would ask it's delegate to splash the screen while the user is cashing out of a market. The delegate in this case would need to react to this `action` and show an
 * activity view.
 * @param module - the module which is requesting the action on the delegate.
 * @param action - unique string identifier for the action. Ideally, delegates implementing this method should be aware of all the actions which the modules can request and
 * react accordingly based on a switch on the action.
 */
- (void)module:(TTLTableViewModule *)module didStartAction:(NSString *)action;

/**
 * Invoked when the module wants to update an action and have the delegate react to this.
 * @param module - the module which is requesting the action on the delegate.
 * @param action - unique string identifier for the action. Ideally, delegates implementing this method should be aware of all the actions which the modules can request and
 * react accordingly based on a switch on the action.
 * @param message - a message to update the action with.
 */
- (void)module:(TTLTableViewModule *)module didUpdateAction:(NSString *)action withMessage:(NSString *)message;

/**
 * Invoked when the module wasnt to stop an action and have the delegate react to the finishing of this action. In much the same vein as the `didStartAction` method, this method
 * is intentionally abstract and allows the delegate to decide exactly what it should do with the parameters passed in the method signature.
 * @param module - the module which is requesting the action on the delegate.
 * @param action - unique string identifier for the action. Ideally, delegates implementing this method should be aware of all the actions which the modules can request and
 * react accordingly based on a switch on the action.
 * @param parameters - dictionary of parameters that we want to share with module delegate
 */
- (void)module:(TTLTableViewModule *)module didFinishAction:(NSString *)action parameters:(NSDictionary *)parameters;

@end

@interface TTLTableViewModule : NSObject <UITableViewDataSource, UITableViewDelegate>

/**
 * Should only be called once.
 * @warning *Warning:* Subclasses should not override this method
 */
- (void)manageTableView:(UITableView *)tableView;

@property (nonatomic, weak) id<TTLTableViewModuleDelegate> delegate;

@property (nonatomic, weak) UITableView *tableView;

@property (nonatomic) NSInteger sectionOffset;

- (NSArray *)viewModels;

- (NSIndexPath *)adjustedIndexPathForIndexPath:(NSIndexPath *)indexPath;

- (id)dataAtIndexPath:(NSIndexPath *)unadjustedIndexPath;

/**
 * This method should be overridden by subclasses to fetch the corect data for a given indexPath.
 * To fetch data, do not call this method but use -dataAtIndexPath: instead unless you know that you have an adjusted indexPath.
 *
 * @param adjustedIndexPath An index path that has been normalised to start at (0,0), even if the module is used to represent sections not starting at section 0.
 * @warning You should generally not call this method yourself, use -dataAtIndexPath: instead.
 * @see dataAtIndexPath:
 */
- (id)dataAtAdjustedIndexPath:(NSIndexPath *)adjustedIndexPath;

/**
 * This method is called automatically and should be overridden to register different types of cells that are needed to represent the data.
 *
 * @param tableView The table view to register cells into
 * @warning You *MUST* call super in your subclass implementation
 */
- (void)registerCellsForTableView:(UITableView *)tableView NS_REQUIRES_SUPER;

/**
 * Method used to refresh fetched data
 * @warning You *MUST* call super in your subclass implementation
 */
- (void)refresh;

/**
 * Method used to signal that a refresh may be appropriate.
 * A view controller may call this method in -viewWillAppear: to ask modules to get updated if needed.
 * A module can decide what is appropriate and may ignore this call.
 * The base implementation calls through to refresh.
 * @info You should not to call super in your subclass implementation.
 */
- (void)refreshIfNeeded;

/* override this template method to register your cell classes */
- (void)registerViewModels;

/* Use this method to register a dynamic cell driven by a view model data class  */
- (void)registerCellClass:(Class)cellClass forDataClass:(Class)dataClass;

/* Use this method to register a static cell with the module */
- (void)registerStaticCellClass:(Class)cellClass forIdentifier:(NSObject<NSCopying> *)cellIdentifier;

- (Class <TTLModuleTableViewCellInterface>)cellClassForIndexPath:(NSIndexPath *)indexPath;
@end
