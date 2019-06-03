//
//  BaseTableView.h
//  Trainline
//
//  Created by Andy Bettis on 26/11/2012.
//  Copyright © 2012 Trainline. All rights reserved.
//

@import UIKit;

@interface BaseTableView : UITableView

@property (nonatomic,strong) NSString* emptyMessage;
@property (nonatomic,strong) NSString* loadingMessage;

- (void) showLoading:(BOOL)pLoading;

- (BOOL) isLoading;

+ (void) setEmptyMessage:(NSString*)pMessage for:(UITableView*)pTableView;

@end
