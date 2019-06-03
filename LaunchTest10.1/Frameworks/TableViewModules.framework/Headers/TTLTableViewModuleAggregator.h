//
//  TTLTableViewModuleAggregator.h
//  Trainline
//
//  Created by Andrey Kozlov on 09/03/2015.
//  Copyright © 2015 Trainline. All rights reserved.
//

#import "TTLTableViewModule.h"

/**
 * -sectionIndexTitlesForTableView: and -tableView:sectionForSectionIndexTitle:atIndex: are unsupported.
 */
@interface TTLTableViewModuleAggregator : TTLTableViewModule

- (instancetype)initWithDataSources:(NSArray *)dataSources;

@property (nonatomic, strong) NSArray *dataSources;

- (TTLTableViewModule *)dataSourceForSection:(NSInteger)section;

- (void)beginUpdates;

- (void)endUpdates;

- (void)insertModule:(TTLTableViewModule *)module atIndex:(NSUInteger)index withRowAnimation:(UITableViewRowAnimation)animation;
- (TTLTableViewModule *)removeModule:(TTLTableViewModule *)module withRowAnimation:(UITableViewRowAnimation)animation;
- (TTLTableViewModule *)removeModuleAtIndex:(NSUInteger)index withRowAnimation:(UITableViewRowAnimation)animation;

@end
