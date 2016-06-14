/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraProfile : HMDAccessoryProfile <HMDCameraSettingsControlManagerDelegate> {
    NSSet * _cameraStreamManagers;
    bool  _microphonePresent;
    HMDCameraSettingsControlManager * _settingsControlManager;
    HMDCameraSnapshotManager * _snapshotManager;
    bool  _speakerPresent;
    HMDCameraStreamSnapshotHandler * _streamSnapshotHandler;
}

@property (nonatomic, readonly) NSSet *cameraStreamManagers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMicrophonePresent, nonatomic, readonly) bool microphonePresent;
@property (nonatomic, readonly) HMDCameraSettingsControlManager *settingsControlManager;
@property (nonatomic, readonly) HMDCameraSnapshotManager *snapshotManager;
@property (getter=isSpeakerPresent, nonatomic, readonly) bool speakerPresent;
@property (nonatomic, readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_createCameraControlManager;
- (id)_createCameraManagers;
- (void)_handleNegotiateStreamRequest:(id)arg1;
- (void)_handleStreamControlRequest:(id)arg1;
- (void)_setControlSupport;
- (void)cameraSettingsManager:(id)arg1 didUpdateValues:(id)arg2;
- (id)cameraStreamManagers;
- (void)dealloc;
- (id)description;
- (id)dumpState;
- (unsigned long long)hash;
- (id)initWithWorkQueue:(id)arg1 uuid:(id)arg2 accessory:(id)arg3 services:(id)arg4 msgDispatcher:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isMicrophonePresent;
- (bool)isSpeakerPresent;
- (id)logIdentifier;
- (void)monitorForEventsForServices:(id)arg1;
- (void)registerForMessages;
- (id)settingsControlManager;
- (id)snapshotManager;
- (id)streamSnapshotHandler;

@end