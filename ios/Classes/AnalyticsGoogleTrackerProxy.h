/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2012 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiProxy.h"

#import "GAI.h"
#import "GAIDictionaryBuilder.h"
#import "GAIFields.h"
#import "TiUtils.h"

@interface AnalyticsGoogleTrackerProxy : TiProxy {
    id<GAITracker> tracker;
    NSString *trackingId;
    BOOL *anonymizeIP;
}

@property (nonatomic,readonly) id<GAITracker> tracker;

-(id)initWithDefault;
-(id)initWithTrackingId:(id)trackingId;

@end
