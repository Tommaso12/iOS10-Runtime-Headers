/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGlobeLineContainer : NSObject <VKPolylineGroupOverlayObserver, VKPolylineObserver> {
    <VKGlobeLineContainerDelegate> * _delegate;
    struct GlobeView { int (**x1)(); struct AnchorManagerPrivate {} *x2; struct Scene {} *x3; struct Context {} *x4; struct DtmCacheNode {} *x5; struct DtmRequestManager {} *x6; struct FreezeViewNode {} *x7; struct Projection { struct Perspective { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_8_1_1; struct Ortho { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; double x_2_2_5; double x_2_2_6; } x_8_1_2; bool x_8_1_3; bool x_8_1_4; } x8; struct FrameLatLon { double x_9_1_1; double x_9_1_2; double x_9_1_3; double x_9_1_4; struct PositionLatLonAlt { double x_5_2_1; double x_5_2_2; double x_5_2_3; } x_9_1_5; } x9; bool x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_11_1_1; } x11; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_12_1_1; } x12; struct vector<altitude::TileBound, std::__1::allocator<altitude::TileBound> > { struct TileBound {} *x_13_1_1; struct TileBound {} *x_13_1_2; struct __compressed_pair<altitude::TileBound *, std::__1::allocator<altitude::TileBound> > { struct TileBound {} *x_3_2_1; } x_13_1_3; } x13; struct vector<altitude::SimpleTileKey, std::__1::allocator<altitude::SimpleTileKey> > { struct SimpleTileKey {} *x_14_1_1; struct SimpleTileKey {} *x_14_1_2; struct __compressed_pair<altitude::SimpleTileKey *, std::__1::allocator<altitude::SimpleTileKey> > { struct SimpleTileKey {} *x_3_2_1; } x_14_1_3; } x14; bool x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; struct VKClassicGlobeCanvas { } *x20; bool x21; bool x22; int x23; struct AnimationManager { struct AnimationTimer { struct AnimationReferenceTimer {} *x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_24_1_1; double x_24_1_2; struct vector<altitude::AnimationObjectHolder, std::__1::allocator<altitude::AnimationObjectHolder> > { struct AnimationObjectHolder {} *x_3_2_1; struct AnimationObjectHolder {} *x_3_2_2; struct __compressed_pair<altitude::AnimationObjectHolder *, std::__1::allocator<altitude::AnimationObjectHolder> > { struct AnimationObjectHolder {} *x_3_3_1; } x_3_2_3; } x_24_1_3; } x24; struct Timer { double x_25_1_1; } x25; double x26; bool x27; double x28; double x29; double x30; struct FrameLatLon { double x_31_1_1; double x_31_1_2; double x_31_1_3; double x_31_1_4; struct PositionLatLonAlt { double x_5_2_1; double x_5_2_2; double x_5_2_3; } x_31_1_5; } x31; struct C3mmRequestManager {} *x32; struct RenderableGroup {} *x33; unsigned int x34; double x35; bool x36; bool x37; struct LabelDataManagerPrivate {} *x38; bool x39; bool x40; bool x41; bool x42; struct RouteLineManager {} *x43; struct GlobeCleanupLoader {} *x44; struct CompleteGlobeTileSetCullingGraph {} *x45; struct CompleteGlobeTileSetLoader {} *x46; struct TileSetNode {} *x47; struct GlobeTileRenderManager {} *x48; struct CullingNode {} *x49; struct EarthAdjustedViewNode {} *x50; struct UserViewNode {} *x51; struct View {} *x52; struct BasicViewNode {} *x53; struct GlobeMainViewNode {} *x54; struct C3bRequestManager {} *x55; float x56; bool x57; struct shared_ptr<bool> { bool *x_58_1_1; struct __shared_weak_count {} *x_58_1_2; } x58; struct HeightRequestManager {} *x59; struct map<gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d>, altitude::GlobeView::LessVector2i, std::__1::allocator<std::__1::pair<const gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d> > > > { struct __tree<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d> >, std::__1::__map_value_compare<gm::Matrix<int, 2, 1>, std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d> >, altitude::GlobeView::LessVector2i, true>, std::__1::allocator<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d> > > > { struct __tree_node<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d> >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<gm::Matrix<int, 2, 1>, std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d> >, altitude::GlobeView::LessVector2i, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_60_1_1; } x60; struct Mutex { void *x_61_1_1; } x61; struct shared_ptr<altitude::Stylesheet> { struct Stylesheet {} *x_62_1_1; struct __shared_weak_count {} *x_62_1_2; } x62; struct FlyoverTour {} *x63; bool x64; struct TriggerManager {} *x65; struct Viewport { int x_66_1_1; int x_66_1_2; int x_66_1_3; int x_66_1_4; } x66; struct AnimationReferenceTimer { double x_67_1_1; double x_67_1_2; double x_67_1_3; } x67; bool x68; struct set<altitude::ManifestListener *, std::__1::less<altitude::ManifestListener *>, std::__1::allocator<altitude::ManifestListener *> > { struct __tree<altitude::ManifestListener *, std::__1::less<altitude::ManifestListener *>, std::__1::allocator<altitude::ManifestListener *> > { struct __tree_node<altitude::ManifestListener *, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<altitude::ManifestListener *, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<altitude::ManifestListener *> > { unsigned long long x_3_3_1; } x_1_2_3; } x_69_1_1; } x69; struct GeoServicesLoader {} *x70; struct ManifestManager {} *x71; struct GlobeDispatch {} *x72; } * _globeView;
    NSMutableArray * _overlays;
    NSMutableSet * _persistentOverlays;
    struct map<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData>, std::__1::less<VKPolylineOverlay *>, std::__1::allocator<std::__1::pair<VKPolylineOverlay *const, std::__1::weak_ptr<altitude::RouteLineData> > > > { 
        struct __tree<std::__1::__value_type<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData> >, std::__1::__map_value_compare<VKPolylineOverlay *, std::__1::__value_type<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData> >, std::__1::less<VKPolylineOverlay *>, true>, std::__1::allocator<std::__1::__value_type<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData> > > > { 
            struct __tree_node<std::__1::__value_type<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData> >, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData> >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<VKPolylineOverlay *, std::__1::__value_type<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData> >, std::__1::less<VKPolylineOverlay *>, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _polylinesToRoutes;
    <VKRouteMatchedAnnotationPresentation> * _routeLineSplitAnnotation;
    struct VKGlobeRouteSplit { int (**x1)(); id x2; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x3; void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; unsigned short x74; bool x75; unsigned long x76; out BOOL x77; void*x78; unsigned short x79; BOOL x80; const void*x81; void*x82; in void*x83; long x84; void*x85; void*x86; int x87; in void*x88; void*x89; void*x90; void*x91; const void*x92; in BOOL x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; long long x109; void*x110; void*x111; void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; void*x123; void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; void*x140; void*x141; void*x142; void*x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; void*x151; void*x152; void*x153; void*x154; void*x155; void*x156; void*x157; void*x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; void*x176; void*x177; void*x178; void*x179; void*x180; void*x181; void*x182; void*x183; void*x184; void*x185; void*x186; void*x187; void*x188; void*x189; void*x190; void*x191; void*x192; void*x193; void*x194; void*x195; void*x196; void*x197; void*x198; void*x199; void*x200; void*x201; void*x202; void*x203; void*x204; void*x205; void*x206; void*x207; void*x208; void*x209; void*x210; void*x211; void*x212; void*x213; void*x214; void*x215; void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; id x224; void*x225; void*x226; void*x227; void*x228; void*x229; void*x230; void*x231; void*x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void*x239; id x240; void*x241; void*x242; void*x243; void*x244; void*x245; void*x246; void*x247; void*x248; void*x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; void*x257; void*x258; void*x259; void*x260; void*x261; void*x262; void*x263; void*x264; void*x265; void*x266; void*x267; void*x268; void*x269; void*x270; void*x271; void*x272; long long x273; void*x274; void*x275; void*x276; void*x277; void*x278; void*x279; void*x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; void*x287; void*x288; void*x289; void*x290; void*x291; void*x292; void*x293; void*x294; void*x295; char *x296; const void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; short x303; void*x304; void*x305; void*x306; void*x307; void*x308; void*x309; void*x310; void*x311; void*x312; void*x313; void*x314; void*x315; void*x316; void*x317; void*x318; void*x319; void*x320; void*x321; void*x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; void*x335; void*x336; void*x337; void*x338; void*x339; void*x340; void*x341; void*x342; void*x343; void*x344; void*x345; void*x346; void*x347; void*x348; void*x349; void*x350; void*x351; void*x352; void*x353; void*x354; void*x355; void*x356; void*x357; void*x358; void*x359; void*x360; void*x361; void*x362; void*x363; void*x364; void*x365; void*x366; void*x367; void*x368; void*x369; void*x370; void*x371; void*x372; void*x373; void*x374; void*x375; void*x376; void*x377; void*x378; void*x379; void*x380; void*x381; id x382; void*x383; void*x384; void*x385; void*x386; void*x387; void*x388; void*x389; void*x390; void*x391; void*x392; void*x393; void*x394; void*x395; void*x396; void*x397; id x398; void*x399; void*x400; void*x401; id x402; void*x403; void*x404; void*x405; void*x406; void*x407; void*x408; void*x409; void*x410; void*x411; long long x412; void*x413; void*x414; void*x415; void*x416; void*x417; void*x418; void*x419; void*x420; void*x421; void*x422; void*x423; void*x424; void*x425; void*x426; void*x427; void*x428; void*x429; void*x430; void*x431; void*x432; void*x433; void*x434; void*x435; void*x436; void*x437; void*x438; void*x439; void*x440; void*x441; void*x442; void*x443; void*x444; void*x445; void*x446; void*x447; void*x448; void*x449; void*x450; void*x451; void*x452; void*x453; void*x454; void*x455; void*x456; void*x457; void*x458; void*x459; void*x460; void*x461; void*x462; void*x463; void*x464; void*x465; void*x466; void*x467; void*x468; void*x469; void*x470; void*x471; void*x472; void*x473; id x474; void*x475; void*x476; void*x477; void*x478; void*x479; void*x480; void*x481; void*x482; void*x483; void*x484; void*x485; void*x486; void*x487; void*x488; void*x489; void*x490; void*x491; void*x492; void*x493; void*x494; void*x495; void*x496; void*x497; void*x498; void*x499; void*x500; void*x501; void*x502; void*x503; void*x504; void*x505; void*x506; long long x507; void*x508; void*x509; void*x510; void*x511; void*x512; void*x513; void*x514; void*x515; void*x516; void*x517; void*x518; void*x519; void*x520; void*x521; void*x522; void*x523; void*x524; void*x525; void*x526; void*x527; void*x528; void*x529; void*x530; void*x531; void*x532; void*x533; void*x534; void*x535; void*x536; void*x537; void*x538; void*x539; void*x540; void*x541; void*x542; void*x543; void*x544; void*x545; void*x546; void*x547; void*x548; void*x549; void*x550; void*x551; void*x552; void*x553; void*x554; void*x555; void*x556; void*x557; void*x558; void*x559; void*x560; void*x561; void*x562; void*x563; void*x564; void*x565; void*x566; void*x567; void*x568; void*x569; void*x570; void*x571; void*x572; void*x573; void*x574; void*x575; void*x576; void*x577; void*x578; void*x579; void*x580; void*x581; void*x582; void*x583; void*x584; void*x585; void*x586; void*x587; void*x588; void*x589; void*x590; void*x591; void*x592; void*x593; void*x594; void*x595; void*x596; void*x597; void*x598; id x599; void*x600; void*x601; void*x602; void*x603; void*x604; void*x605; void*x606; void*x607; void*x608; void*x609; void*x610; void*x611; void*x612; void*x613; void*x614; void*x615; void*x616; void*x617; void*x618; void*x619; void*x620; void*x621; void*x622; void*x623; void*x624; void*x625; void*x626; void*x627; void*x628; void*x629; void*x630; unsigned short x631; bool x632; void*x633; unsigned int x634; unsigned long long x635; void*x636; int x637; void*x638; void*x639; void*x640; out double x641; void*x642; void*x643; long x644; void*x645; void*x646; void*x647; unsigned int x648/* : ? */; int x649; long x650; int x651; void*x652; void*x653; void*x654; void*x655; void*x656; void*x657; void*x658; void*x659; void*x660; void*x661; id x662; void*x663; void*x664; void*x665; void*x666; void*x667; void*x668; void*x669; void*x670; void*x671; void*x672; void*x673; void*x674; void*x675; void*x676; void*x677; void*x678; void*x679; void*x680; void*x681; void*x682; void*x683; void*x684; void*x685; void*x686; void*x687; void*x688; void*x689; void*x690; void*x691; void*x692; void*x693; void*x694; long long x695; void*x696; void*x697; void*x698; void*x699; void*x700; void*x701; void*x702; void*x703; void*x704; void*x705; void*x706; void*x707; void*x708; void*x709; void*x710; void*x711; void*x712; void*x713; void*x714; void*x715; void*x716; void*x717; void*x718; void*x719; void*x720; void*x721; void*x722; void*x723; void*x724; void*x725; void*x726; void*x727; void*x728; void*x729; void*x730; void*x731; void*x732; void*x733; void*x734; void*x735; void*x736; void*x737; void*x738; void*x739; void*x740; void*x741; void*x742; void*x743; void*x744; void*x745; void*x746; void*x747; void*x748; void*x749; void*x750; void*x751; void*x752; void*x753; void*x754; void*x755; void*x756; void*x757; void*x758; void*x759; void*x760; void*x761; void*x762; void*x763; void*x764; void*x765; void*x766; void*x767; void*x768; void*x769; void*x770; void*x771; void*x772; unsigned short x773; bool x774; void*x775; unsigned int x776; void*x777; long x778; void*x779; void*x780; int x781; in unsigned char x782; out in void*x783; const out long x784; long x785; void*x786; const void*x787; void*x788; void*x789; void*x790; void*x791; void*x792; void*x793; void*x794; void*x795; void*x796; void*x797; void*x798; void*x799; void*x800; void*x801; void*x802; void*x803; void*x804; void*x805; void*x806; void*x807; void*x808; void*x809; void*x810; void*x811; void*x812; void*x813; void*x814; void*x815; void*x816; void*x817; void*x818; void*x819; void*x820; void*x821; void*x822; void*x823; void*x824; void*x825; void*x826; void*x827; void*x828; void*x829; void*x830; void*x831; void*x832; void*x833; void*x834; void*x835; void*x836; void*x837; void*x838; void*x839; void*x840; void*x841; void*x842; void*x843; void*x844; void*x845; void*x846; void*x847; void*x848; void*x849; void*x850; void*x851; void*x852; void*x853; void*x854; void*x855; void*x856; void*x857; void*x858; void*x859; void*x860; void*x861; unsigned short x862; bool x863; void*x864; long x865; void*x866; void*x867; int x868; in bool x869; void*x870; in double x871; long x872; void*x873; unsigned char x874; out in void*x875; const out long x876; long x877; void*x878; const void*x879; void*x880; void*x881; void*x882; void*x883; void*x884; void*x885; void*x886; id x887; void*x888; void*x889; void*x890; void*x891; void*x892; void*x893; void*x894; void*x895; void*x896; void*x897; void*x898; void*x899; void*x900; void*x901; void*x902; void*x903; void*x904; void*x905; void*x906; void*x907; void*x908; void*x909; void*x910; void*x911; void*x912; void*x913; void*x914; void*x915; void*x916; void*x917; void*x918; void*x919; long long x920; void*x921; void*x922; void*x923; void*x924; void*x925; void*x926; void*x927; void*x928; void*x929; void*x930; void*x931; void*x932; void*x933; void*x934; void*x935; void*x936; void*x937; void*x938; void*x939; void*x940; void*x941; void*x942; void*x943; void*x944; void*x945; void*x946; void*x947; void*x948; void*x949; bool x950; unsigned short x951; void*x952; long x953; void*x954; void*x955; int x956; in bool x957; void*x958; in double x959; long x960; void*x961; unsigned char x962; out in void*x963; const out long x964; long x965; void*x966; const void*x967; void*x968; void*x969; void*x970; void*x971; void*x972; void*x973; void*x974; void*x975; void*x976; void*x977; void*x978; void*x979; void*x980; void*x981; void*x982; void*x983; void*x984; void*x985; void*x986; void*x987; void*x988; void*x989; void*x990; void*x991; void*x992; void*x993; void*x994; void*x995; void*x996; void*x997; void*x998; void*x999; void*x1000; void*x1001; void*x1002; void*x1003; void*x1004; void*x1005; void*x1006; void*x1007; void*x1008; void*x1009; void*x1010; void*x1011; void*x1012; void*x1013; void*x1014; void*x1015; void*x1016; void*x1017; void*x1018; void*x1019; void*x1020; void*x1021; void*x1022; void*x1023; void*x1024; void*x1025; void*x1026; void*x1027; void*x1028; void*x1029; void*x1030; void*x1031; void*x1032; void*x1033; void*x1034; void*x1035; void*x1036; void*x1037; void*x1038; void*x1039; void*x1040; void*x1041; void*x1042; void*x1043; void*x1044; void*x1045; void*x1046; void*x1047; void*x1048; void*x1049; void*x1050; void*x1051; void*x1052; void*x1053; void*x1054; void*x1055; void*x1056; void*x1057; void*x1058; void*x1059; void*x1060; void*x1061; void*x1062; id x1063; void*x1064; void*x1065; void*x1066; void*x1067; void*x1068; void*x1069; void*x1070; void*x1071; void*x1072; void*x1073; void*x1074; void*x1075; void*x1076; void*x1077; void*x1078; void*x1079; void*x1080; void*x1081; void*x1082; void*x1083; void*x1084; unsigned int x1085/* : ? */; void*x1086; void*x1087; void*x1088; void*x1089; void*x1090; void*x1091; void*x1092; void*x1093; void*x1094; void*x1095; void*x1096; void*x1097; void*x1098; void*x1099; void*x1100; void*x1101; void*x1102; void*x1103; void*x1104; void*x1105; void*x1106; void*x1107; void*x1108; void*x1109; void*x1110; void*x1111; void*x1112; void*x1113; void*x1114; void*x1115; void*x1116; void*x1117; void*x1118; void*x1119; void*x1120; void*x1121; void*x1122; id x1123; char *x1124; const void*x1125; void*x1126; void*x1127; void*x1128; void*x1129; void*x1130; void*x1131; void*x1132; void*x1133; void*x1134; void*x1135; void*x1136; void*x1137; void*x1138; void*x1139; void*x1140; void*x1141; void*x1142; void*x1143; void*x1144; void*x1145; void*x1146; void*x1147; void*x1148; void*x1149; void*x1150; void*x1151; void*x1152; void*x1153; void*x1154; void*x1155; void*x1156; void*x1157; void*x1158; void*x1159; void*x1160; void*x1161; void*x1162; void*x1163; void*x1164; void*x1165; void*x1166; void*x1167; void*x1168; void*x1169; void*x1170; void*x1171; void*x1172; void*x1173; void*x1174; void*x1175; void*x1176; void*x1177; void*x1178; void*x1179; void*x1180; void*x1181; void*x1182; void*x1183; void*x1184; void*x1185; void*x1186; void*x1187; void*x1188; void*x1189; void*x1190; void*x1191; id x1192; void*x1193; void*x1194; void*x1195; void*x1196; void*x1197; void*x1198; void*x1199; void*x1200; void*x1201; void*x1202; void*x1203; void*x1204; void*x1205; void*x1206; void*x1207; void*x1208; void*x1209; void*x1210; void*x1211; void*x1212; void*x1213; void*x1214; void*x1215; void*x1216; void*x1217; void*x1218; void*x1219; void*x1220; void*x1221; void*x1222; void*x1223; void*x1224; void*x1225; void*x1226; void*x1227; void*x1228; void*x1229; void*x1230; void*x1231; void*x1232; void*x1233; void*x1234; void*x1235; void*x1236; void*x1237; void*x1238; void*x1239; void*x1240; void*x1241; void*x1242; void*x1243; void*x1244; void*x1245; void*x1246; void*x1247; void*x1248; void*x1249; void*x1250; void*x1251; void*x1252; void*x1253; void*x1254; void*x1255; void*x1256; void*x1257; void*x1258; void*x1259; void*x1260; void*x1261; void*x1262; void*x1263; void*x1264; void*x1265; void*x1266; void*x1267; void*x1268; void*x1269; void*x1270; void*x1271; void*x1272; void*x1273; void*x1274; void*x1275; void*x1276; void*x1277; void*x1278; void*x1279; void*x1280; void*x1281; void*x1282; void*x1283; void*x1284; void*x1285; void*x1286; void*x1287; void*x1288; void*x1289; void*x1290; void*x1291; void*x1292; void*x1293; void*x1294; void*x1295; void*x1296; void*x1297; void*x1298; void*x1299; void*x1300; void*x1301; id x1302; void*x1303; void*x1304; void*x1305; void*x1306; void*x1307; void*x1308; void*x1309; void*x1310; void*x1311; void*x1312; void*x1313; void*x1314; void*x1315; void*x1316; void*x1317; void*x1318; void*x1319; void*x1320; void*x1321; void*x1322; void*x1323; void*x1324; void*x1325; void*x1326; void*x1327; void*x1328; void*x1329; void*x1330; void*x1331; void*x1332; struct x1333; void*x1334; void*x1335; void*x1336; void*x1337; void*x1338; void*x1339; void*x1340; void*x1341; void*x1342; void*x1343; void*x1344; void*x1345; void*x1346; void*x1347; void*x1348; void*x1349; void*x1350; void*x1351; void*x1352; void*x1353; void*x1354; void*x1355; void*x1356; void*x1357; void*x1358; void*x1359; void*x1360; void*x1361; void*x1362; void*x1363; void*x1364; void*x1365; void*x1366; void*x1367; void*x1368; void*x1369; void*x1370; void*x1371; void*x1372; void*x1373; void*x1374; void*x1375; void*x1376; void*x1377; void*x1378; void*x1379; void*x1380; void*x1381; void*x1382; void*x1383; void*x1384; void*x1385; void*x1386; void*x1387; void*x1388; void*x1389; void*x1390; void*x1391; void*x1392; void*x1393; void*x1394; void*x1395; void*x1396; void*x1397; void*x1398; void*x1399; void*x1400; void*x1401; void*x1402; void*x1403; void*x1404; void*x1405; void*x1406; void*x1407; void*x1408; void*x1409; unsigned short x1410; void*x1411; void*x1412; const BOOL x1413; void*x1414; void*x1415; unsigned int x1416; void*x1417; void*x1418; unsigned int x1419; BOOL x1420; out in void*x1421; void*x1422; void*x1423; void*x1424; unsigned char x1425; out in void*x1426; const out long x1427; long x1428; void*x1429; const void*x1430; void*x1431; void*x1432; void*x1433; void*x1434; void*x1435; void*x1436; void*x1437; void*x1438; void*x1439; void*x1440; void*x1441; void*x1442; void*x1443; void*x1444; void*x1445; void*x1446; void*x1447; void*x1448; void*x1449; void*x1450; void*x1451; void*x1452; void*x1453; void*x1454; void*x1455; void*x1456; void*x1457; void*x1458; void*x1459; void*x1460; void*x1461; void*x1462; void*x1463; void*x1464; void*x1465; void*x1466; void*x1467; void*x1468; void*x1469; void*x1470; void*x1471; void*x1472; void*x1473; void*x1474; void*x1475; void*x1476; void*x1477; void*x1478; void*x1479; void*x1480; void*x1481; void*x1482; void*x1483; void*x1484; void*x1485; void*x1486; void*x1487; void*x1488; void*x1489; void*x1490; void*x1491; void*x1492; void*x1493; void*x1494; void*x1495; void*x1496; void*x1497; void*x1498; void*x1499; void*x1500; void*x1501; void*x1502; void*x1503; void*x1504; void*x1505; void*x1506; void*x1507; void*x1508; void*x1509; void*x1510; void*x1511; void*x1512; void*x1513; void*x1514; void*x1515; void*x1516; void*x1517; void*x1518; void*x1519; void*x1520; void*x1521; void*x1522; void*x1523; void*x1524; void*x1525; void*x1526; id x1527; void*x1528; void*x1529; void*x1530; void*x1531; void*x1532; void*x1533; void*x1534; void*x1535; void*x1536; void*x1537; void*x1538; void*x1539; void*x1540; void*x1541; void*x1542; void*x1543; void*x1544; void*x1545; void*x1546; void*x1547; void*x1548; void*x1549; void*x1550; void*x1551; void*x1552; void*x1553; void*x1554; void*x1555; void*x1556; void*x1557; void*x1558; long long x1559; void*x1560; void*x1561; void*x1562; void*x1563; void*x1564; void*x1565; void*x1566; void*x1567; void*x1568; void*x1569; void*x1570; void*x1571; void*x1572; void*x1573; void*x1574; void*x1575; void*x1576; void*x1577; void*x1578; void*x1579; void*x1580; void*x1581; void*x1582; void*x1583; void*x1584; void*x1585; void*x1586; void*x1587; void*x1588; void*x1589; void*x1590; void*x1591; void*x1592; void*x1593; void*x1594; void*x1595; void*x1596; void*x1597; void*x1598; void*x1599; void*x1600; void*x1601; void*x1602; void*x1603; void*x1604; void*x1605; void*x1606; void*x1607; void*x1608; void*x1609; void*x1610; void*x1611; void*x1612; void*x1613; void*x1614; void*x1615; void*x1616; void*x1617; void*x1618; void*x1619; void*x1620; void*x1621; void*x1622; void*x1623; void*x1624; void*x1625; void*x1626; void*x1627; void*x1628; void*x1629; void*x1630; void*x1631; void*x1632; void*x1633; void*x1634; void*x1635; void*x1636; unsigned short x1637; bool x1638; unsigned long x1639; out BOOL x1640; void*x1641; unsigned short x1642; BOOL x1643; const void*x1644; void*x1645; in void*x1646; out double x1647; void*x1648; long x1649; oneway int x1650; void*x1651; void*x1652; void*x1653; void*x1654; BOOL x1655; void*x1656; out const void*x1657; void*x1658; void*x1659; void*x1660; void*x1661; id x1662; void*x1663; void*x1664; void*x1665; void*x1666; void*x1667; void*x1668; void*x1669; void*x1670; void*x1671; void*x1672; void*x1673; void*x1674; void*x1675; void*x1676; void*x1677; void*x1678; void*x1679; void*x1680; void*x1681; void*x1682; void*x1683; unsigned int x1684/* : ? */; void*x1685; void*x1686; void*x1687; void*x1688; void*x1689; void*x1690; id x1691; void*x1692; long long x1693; void*x1694; void*x1695; void*x1696; void*x1697; void*x1698; void*x1699; void*x1700; void*x1701; void*x1702; void*x1703; void*x1704; void*x1705; void*x1706; void*x1707; void*x1708; void*x1709; void*x1710; void*x1711; void*x1712; void*x1713; void*x1714; void*x1715; void*x1716; void*x1717; void*x1718; void*x1719; void*x1720; void*x1721; void*x1722; void*x1723; void*x1724; void*x1725; void*x1726; void*x1727; void*x1728; void*x1729; void*x1730; void*x1731; void*x1732; void*x1733; void*x1734; void*x1735; void*x1736; void*x1737; void*x1738; void*x1739; void*x1740; void*x1741; void*x1742; void*x1743; void*x1744; void*x1745; void*x1746; void*x1747; void*x1748; long long x1749; void*x1750; void*x1751; void*x1752; void*x1753; void*x1754; void*x1755; void*x1756; void*x1757; void*x1758; void*x1759; void*x1760; void*x1761; void*x1762; void*x1763; void*x1764; void*x1765; void*x1766; void*x1767; void*x1768; void*x1769; void*x1770; inout unsigned char x1771; oneway int x1772; unsigned int x1773/* : ? */; const void*x1774; in void*x1775; unsigned short x1776; void*x1777; void*x1778; long x1779; int x1780; in void*x1781; void*x1782; void*x1783; void*x1784; void*x1785; void*x1786; void*x1787; void*x1788; void*x1789; void*x1790; void*x1791; void*x1792; void*x1793; void*x1794; void*x1795; void*x1796; void*x1797; id x1798; void*x1799; void*x1800; void*x1801; void*x1802; void*x1803; void*x1804; void*x1805; void*x1806; void*x1807; void*x1808; void*x1809; void*x1810; void*x1811; void*x1812; void*x1813; void*x1814; void*x1815; void*x1816; void*x1817; void*x1818; id x1819; void*x1820; void*x1821; void*x1822; void*x1823; void*x1824; void*x1825; void*x1826; } * _routeSplit;
    VKPolylineOverlay * _selectedPolyline;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VKGlobeLineContainerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <VKRouteMatchedAnnotationPresentation> *routeLineSplitAnnotation;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_recreateLinesIfNeeded;
- (void)_updateRouteSplit;
- (void)addLine:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)clearLineSelection;
- (void)dealloc;
- (id)delegate;
- (id)initWithGlobeView:(struct GlobeView { int (**x1)(); struct AnchorManagerPrivate {} *x2; struct Scene {} *x3; struct Context {} *x4; struct DtmCacheNode {} *x5; struct DtmRequestManager {} *x6; struct FreezeViewNode {} *x7; struct Projection { struct Perspective { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_8_1_1; struct Ortho { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; double x_2_2_5; double x_2_2_6; } x_8_1_2; bool x_8_1_3; bool x_8_1_4; } x8; struct FrameLatLon { double x_9_1_1; double x_9_1_2; double x_9_1_3; double x_9_1_4; struct PositionLatLonAlt { double x_5_2_1; double x_5_2_2; double x_5_2_3; } x_9_1_5; } x9; bool x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_11_1_1; } x11; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_12_1_1; } x12; struct vector<altitude::TileBound, std::__1::allocator<altitude::TileBound> > { struct TileBound {} *x_13_1_1; struct TileBound {} *x_13_1_2; struct __compressed_pair<altitude::TileBound *, std::__1::allocator<altitude::TileBound> > { struct TileBound {} *x_3_2_1; } x_13_1_3; } x13; struct vector<altitude::SimpleTileKey, std::__1::allocator<altitude::SimpleTileKey> > { struct SimpleTileKey {} *x_14_1_1; struct SimpleTileKey {} *x_14_1_2; struct __compressed_pair<altitude::SimpleTileKey *, std::__1::allocator<altitude::SimpleTileKey> > { struct SimpleTileKey {} *x_3_2_1; } x_14_1_3; } x14; bool x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; struct VKClassicGlobeCanvas { } *x20; bool x21; bool x22; int x23; struct AnimationManager { struct AnimationTimer { struct AnimationReferenceTimer {} *x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_24_1_1; double x_24_1_2; struct vector<altitude::AnimationObjectHolder, std::__1::allocator<altitude::AnimationObjectHolder> > { struct AnimationObjectHolder {} *x_3_2_1; struct AnimationObjectHolder {} *x_3_2_2; struct __compressed_pair<altitude::AnimationObjectHolder *, std::__1::allocator<altitude::AnimationObjectHolder> > { struct AnimationObjectHolder {} *x_3_3_1; } x_3_2_3; } x_24_1_3; } x24; struct Timer { double x_25_1_1; } x25; double x26; bool x27; double x28; double x29; double x30; struct FrameLatLon { double x_31_1_1; double x_31_1_2; double x_31_1_3; double x_31_1_4; struct PositionLatLonAlt { double x_5_2_1; double x_5_2_2; double x_5_2_3; } x_31_1_5; } x31; struct C3mmRequestManager {} *x32; struct RenderableGroup {} *x33; unsigned int x34; double x35; bool x36; bool x37; struct LabelDataManagerPrivate {} *x38; bool x39; bool x40; bool x41; bool x42; struct RouteLineManager {} *x43; struct GlobeCleanupLoader {} *x44; struct CompleteGlobeTileSetCullingGraph {} *x45; struct CompleteGlobeTileSetLoader {} *x46; struct TileSetNode {} *x47; struct GlobeTileRenderManager {} *x48; struct CullingNode {} *x49; struct EarthAdjustedViewNode {} *x50; struct UserViewNode {} *x51; struct View {} *x52; struct BasicViewNode {} *x53; struct GlobeMainViewNode {} *x54; struct C3bRequestManager {} *x55; float x56; bool x57; struct shared_ptr<bool> { bool *x_58_1_1; struct __shared_weak_count {} *x_58_1_2; } x58; struct HeightRequestManager {} *x59; struct map<gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d>, altitude::GlobeView::LessVector2i, std::__1::allocator<std::__1::pair<const gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d> > > > { struct __tree<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d> >, std::__1::__map_value_compare<gm::Matrix<int, 2, 1>, std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d> >, altitude::GlobeView::LessVector2i, true>, std::__1::allocator<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d> > > > { struct __tree_node<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d> >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<gm::Matrix<int, 2, 1>, std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d> >, altitude::GlobeView::LessVector2i, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_60_1_1; } x60; struct Mutex { void *x_61_1_1; } x61; struct shared_ptr<altitude::Stylesheet> { struct Stylesheet {} *x_62_1_1; struct __shared_weak_count {} *x_62_1_2; } x62; struct FlyoverTour {} *x63; bool x64; struct TriggerManager {} *x65; struct Viewport { int x_66_1_1; int x_66_1_2; int x_66_1_3; int x_66_1_4; } x66; struct AnimationReferenceTimer { double x_67_1_1; double x_67_1_2; double x_67_1_3; } x67; bool x68; struct set<altitude::ManifestListener *, std::__1::less<altitude::ManifestListener *>, std::__1::allocator<altitude::ManifestListener *> > { struct __tree<altitude::ManifestListener *, std::__1::less<altitude::ManifestListener *>, std::__1::allocator<altitude::ManifestListener *> > { struct __tree_node<altitude::ManifestListener *, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<altitude::ManifestListener *, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<altitude::ManifestListener *> > { unsigned long long x_3_3_1; } x_1_2_3; } x_69_1_1; } x69; struct GeoServicesLoader {} *x70; struct ManifestManager {} *x71; struct GlobeDispatch {} *x72; }*)arg1 stylesheet:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)overlays;
- (id)persistentOverlays;
- (void)polyline:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;
- (void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2;
- (void)removeLine:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (id)routeLineSplitAnnotation;
- (void)setDelegate:(id)arg1;
- (void)setNeedsLayoutForPolyline:(id)arg1;
- (void)setRouteLineSplitAnnotation:(id)arg1;
- (void)setSelected:(id)arg1 selected:(bool)arg2;
- (void)update;

@end