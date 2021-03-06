/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneHostWrapperView : UIView <BSDescriptionProviding, FBSceneHostView, FBSceneLayerHostContainerViewDataSource, FBSceneLayerManagerObserver, _FBSceneGeometryObserver> {
    unsigned long long  _appearanceStyle;
    UIColor * _backgroundColorWhileHosting;
    UIColor * _backgroundColorWhileNotHosting;
    <FBSceneHostViewDelegate> * _delegate;
    NSMutableSet * _hiddenLayers;
    FBSceneLayerHostContainerView * _hostContainerView;
    unsigned long long  _hostedLayerTypes;
    FBSceneLayerManager * _layerManager;
    FBSceneHostManager * _manager;
    NSString * _requester;
    FBScene * _scene;
    bool  _usingDefaultLayerTypes;
}

@property (nonatomic) unsigned long long appearanceStyle;
@property (nonatomic, retain) UIColor *backgroundColorWhileHosting;
@property (nonatomic, retain) UIColor *backgroundColorWhileNotHosting;
@property (getter=isContextHosted, nonatomic, readonly) bool contextHosted;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBSceneHostViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSSet *hiddenLayers;
@property (nonatomic, retain) FBSceneLayerHostContainerView *hostContainerView;
@property (nonatomic) unsigned long long hostedLayerTypes;
@property (getter=isHosting, nonatomic, readonly) bool hosting;
@property (nonatomic, readonly, retain) NSSet *hostingDisabledLayers;
@property (nonatomic, readonly) double level;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } referenceFrame;
@property (nonatomic, readonly, copy) NSString *requester;
@property (nonatomic, readonly, retain) FBScene *scene;
@property (readonly) Class superclass;

- (id)_backgroundColorWhileHosting;
- (id)_backgroundColorWhileNotHosting;
- (id)_hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (void)_hostingStatusChanged;
- (bool)_isReallyHosting;
- (void)_scene:(id)arg1 didChangeLayoutWithAnimationSettings:(id)arg2;
- (void)_setAppearanceStyle:(unsigned long long)arg1 force:(bool)arg2;
- (id)_stringForAppearanceStyle;
- (void)_toggleBackgroundColorIfNecessary;
- (unsigned long long)appearanceStyle;
- (id)backgroundColorWhileHosting;
- (id)backgroundColorWhileNotHosting;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)hiddenLayers;
- (id)hostContainerView;
- (unsigned long long)hostedLayerTypes;
- (id)hostingDisabledLayers;
- (id)initWithScene:(id)arg1 requester:(id)arg2;
- (void)invalidate;
- (bool)isContextHosted;
- (bool)isHosting;
- (id)layersForHostContainerView:(id)arg1;
- (double)level;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })referenceFrame;
- (id)requester;
- (id)scene;
- (void)sceneLayerManager:(id)arg1 didRepositionLayer:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)setAppearanceStyle:(unsigned long long)arg1;
- (void)setBackgroundColorWhileHosting:(id)arg1;
- (void)setBackgroundColorWhileNotHosting:(id)arg1;
- (void)setDefaultHostedLayerTypes:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostContainerView:(id)arg1;
- (void)setHostedLayerTypes:(unsigned long long)arg1;
- (void)setLayer:(id)arg1 hidden:(bool)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateBackgroundColor;
- (id)window;

@end
