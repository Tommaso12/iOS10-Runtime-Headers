/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPrivateClientZone : BRCClientZone {
    NSMutableArray * _faultsLiveBarriers;
    BRCProblemReport * _problemReport;
    NSMutableArray * _syncBarriers;
    BRCServerZoneHealthState * _zoneHealthState;
}

@property (nonatomic, readonly) BRCAppLibrary *defaultAppLibrary;
@property (nonatomic, readonly) BRCPrivateAppLibrary *defaultPrivateAppLibrary;
@property (nonatomic, readonly) bool isDocumentScopePublic;
@property (nonatomic, readonly) bool isPrivateZone;
@property (nonatomic, readonly) bool isSharedZone;
@property (nonatomic, readonly) BRCPrivateServerZone *privateServerZone;
@property (nonatomic, readonly) bool zoneHealthNeedsSyncUp;
@property (nonatomic, readonly) BRCServerZoneHealthState *zoneHealthState;

- (void).cxx_destruct;
- (void)_checkResultSetIsEmpty:(id)arg1 logToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg2 reason:(id)arg3 result:(bool*)arg4;
- (id)aliasByUnsaltedBookmarkData:(id)arg1;
- (id)asPrivateClientZone;
- (bool)checkIfAppSyncShouldBeEnabled;
- (void)clearProblemReport;
- (id)defaultPrivateAppLibrary;
- (bool)dumpActivityToContext:(id)arg1 error:(id*)arg2;
- (bool)dumpTablesToContext:(id)arg1 error:(id*)arg2;
- (bool)existsByParentID:(id)arg1 andName:(id)arg2;
- (id)faultByParentID:(id)arg1 andDisplayName:(id)arg2;
- (void)fixupItemsOnInitialZoneCreation;
- (bool)isDocumentScopePublic;
- (bool)isPrivateZone;
- (id)itemByParentID:(id)arg1 andName:(id)arg2;
- (bool)itemID:(id)arg1 isStrictChildOfItemID:(id)arg2;
- (void)notifyClient:(id)arg1 whenFaultingIsDone:(id /* block */)arg2;
- (void)performBlock:(id /* block */)arg1 whenSyncDownCompletesLookingForAliasWithBookmarkData:(id)arg2;
- (id)plist;
- (id)prepareProblemReportForSyncWithRequestID:(long long)arg1;
- (id)privateServerZone;
- (bool)recomputeAppSyncBlockState;
- (bool)removeSyncDownForAliasData:(id)arg1;
- (void)reportProblemWithType:(int)arg1 recordName:(id)arg2;
- (id)reservedItemByParentID:(id)arg1 andDisplayName:(id)arg2;
- (id)resolveClashOfAlias:(id)arg1 atPath:(id)arg2 withAlias:(id)arg3 atPath:(id)arg4;
- (void)resume;
- (id)serverAliasByUnsaltedBookmarkData:(id)arg1;
- (id)serverItemByParentID:(id)arg1 andName:(id)arg2;
- (void)setServerZone:(id)arg1;
- (void)signalFaultingWatchersWithError:(id)arg1;
- (void)syncedDownZoneHealthRequestID:(long long)arg1;
- (void)syncedDownZoneHealthState:(id)arg1;
- (void)updateWithPlist:(id)arg1;
- (bool)validateItemsLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (bool)validateStructureLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (bool)zoneHealthNeedsSyncUp;
- (id)zoneHealthState;
- (void)zoneHealthWasReset;

@end
