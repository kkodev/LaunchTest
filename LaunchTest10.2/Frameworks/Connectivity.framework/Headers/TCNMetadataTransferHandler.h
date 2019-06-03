//
//  TCNMetadataTransferHandler.h
//  Connectivity
//
//  Created by Grzegorz Kozłowski on 10/03/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;

@class TCNMetadataTransfer;

@protocol TCNMetadataTransferHandler <NSObject>

@required

- (BOOL)canHandleMetadataTransfer:(TCNMetadataTransfer *)metadataTransfer;
- (void)didReceiveMetadataTransfer:(TCNMetadataTransfer *)metadataTransfer;

@end
