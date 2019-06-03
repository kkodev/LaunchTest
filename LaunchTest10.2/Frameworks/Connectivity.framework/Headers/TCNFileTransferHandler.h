//
//  TCNFileTransferHandler.h
//  Connectivity
//
//  Created by Grzegorz Kozłowski on 10/03/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;

@class TCNFileTransfer;

@protocol TCNFileTransferHandler <NSObject>

@required

- (BOOL)canHandleFileTransfer:(TCNFileTransfer *)fileTransfer;
- (void)didReceiveFileTransfer:(TCNFileTransfer *)fileTransfer;

@end
