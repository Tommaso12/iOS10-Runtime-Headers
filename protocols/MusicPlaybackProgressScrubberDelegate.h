/* Generated by RuntimeBrowser.
 */

@protocol MusicPlaybackProgressScrubberDelegate <NSObject>

@optional

- (void)playbackProgressScrubber:(id <MusicPlaybackProgressScrubbing>)arg1 didChangeCurrentTime:(double)arg2;
- (void)playbackProgressScrubber:(id <MusicPlaybackProgressScrubbing>)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)playbackProgressScrubberTrackingDidBegin:(id <MusicPlaybackProgressScrubbing>)arg1;
- (void)playbackProgressScrubberTrackingDidEnd:(id <MusicPlaybackProgressScrubbing>)arg1;

@end
