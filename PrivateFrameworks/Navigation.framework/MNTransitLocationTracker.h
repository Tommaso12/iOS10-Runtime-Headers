/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTransitLocationTracker : MNSteppingLocationTracker <MNTransitScheduleTrackerDelegate> {
    MNLocation * _correctedLocation;
    bool  _debugSnapToTransitLines;
    bool  _hasArrived;
    NSDate * _lastLocationTimestamp;
    MNLocation * _lastUncorrectedGPSLocation;
    GEORoadMatcher * _roadMatcher;
    MNTransitScheduleTracker * _scheduleTracker;
    NSDate * _startDate;
    GEOTransitRouteMatcher * _transitRouteMatcher;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool debugSnapToTransitLines;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_correctedLocationForLocation:(id)arg1;
- (id)_matchedLocationForLocation:(id)arg1;
- (id)_roadMatchForOffRouteLocation:(id)arg1 routeMatch:(id)arg2;
- (bool)_shouldIgnoreLocation:(id)arg1;
- (void)_switchedToStepAtIndex:(unsigned long long)arg1;
- (double)_timeToDisplayStaleGPSLocation;
- (bool)debugSnapToTransitLines;
- (id)initWithNavigationSession:(id)arg1;
- (void)setDebugSnapToTransitLines:(bool)arg1;
- (void)startTracking;
- (void)stopTracking;
- (void)transitScheduleTracker:(id)arg1 willArriveAtStepIndex:(unsigned long long)arg2 inTimeInterval:(double)arg3;
- (int)transportType;

@end