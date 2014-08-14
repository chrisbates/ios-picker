//
//  FPMediaInfo.h
//  FPPicker
//
//  Created by Ruben Nine on 14/08/14.
//  Copyright (c) 2014 Filepicker.io. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FPMediaInfo : NSObject

@property (nonatomic, strong) NSString *mediaType;
@property (nonatomic, strong) id originalImage; // UIImage on iOS; NSImage on OS X
@property (nonatomic, strong) NSURL *mediaURL;
@property (nonatomic, strong) NSURL *remoteURL;
@property (nonatomic, strong) NSString *filename;
@property (nonatomic, strong) NSString *key;

- (NSDictionary *)dictionary;

@end
