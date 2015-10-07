//
//  MediaManager.h
//  Fireworks
//
//  Created by Mo DeJong on 10/3/15.
//  Copyright © 2015 helpurock. All rights reserved.
//
//  This object makes it possible to manage Media objects and resources
//  as view controllers change.

#import <UIKit/UIKit.h>

@class AVAsset2MvidResourceLoader;
@class AVAnimatorMedia;
@class AVAssetJoinAlphaResourceLoader;

@interface MediaManager : UIViewController

@property (nonatomic, retain) AVAsset2MvidResourceLoader *wheelLoader;
@property (nonatomic, retain) AVAnimatorMedia *wheelMedia;

@property (nonatomic, retain) AVAsset2MvidResourceLoader *redLoader;
@property (nonatomic, retain) AVAnimatorMedia *redMedia;

@property (nonatomic, retain) AVAssetJoinAlphaResourceLoader *L42Loader;
@property (nonatomic, retain) AVAnimatorMedia *L42Media;

@property (nonatomic, retain) AVAssetJoinAlphaResourceLoader *L92Loader;
@property (nonatomic, retain) AVAnimatorMedia *L92Media;

@property (nonatomic, retain) AVAssetJoinAlphaResourceLoader *L112Loader;
@property (nonatomic, retain) AVAnimatorMedia *L112Media;

// constructor

+ (MediaManager*) mediaManager;

- (void) makeLoaders;

// Kick off background loading thread. This call does not block, but
// it can be useful to avoid kicking off threads until the main app
// loop is up and runnning (do not call from viewDidLoad init path
// for example.

- (void) startAsyncLoading;

// Check to see if all loaders are ready now

- (BOOL) allLoadersReady;

@end

