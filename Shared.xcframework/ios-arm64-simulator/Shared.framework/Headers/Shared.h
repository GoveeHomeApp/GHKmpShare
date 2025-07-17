#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedKmpProtocolHelper, SharedKmpSceneConfigInfo, SharedKmpDeviceInfo, SharedKotlinByteArray, SharedKmpGoodsType, SharedKmpInfoChecker, SharedKmpSku, SharedKmpBrightModeCompanion, SharedKotlinIntArray, SharedKmpColorListInfo, SharedKmpDeviceInfoCompanion, SharedKmpH6020DirectionCompanion, SharedKmpH6020Speed, SharedKmpH6020Direction, SharedKmpH6020DirectionSpeedInfoCompanion, SharedKmpH6020DirectionSpeedInfo, SharedKmpH6020GraffitiSceneSpeedBeanExt, SharedKmpH6020GraffitiSceneSpeedBeanCompanion, SharedKmpH6020GraffitiSceneSpeedBeanExtCompanion, SharedKmpH6020SpeedCompanion, SharedKmpH61DXConfigInfoCompanion, SharedKotlinArray<T>, SharedKmpH70CXSpeedModeCompanion, SharedKmpSceneSpeedInfo, SharedKmpSceneDirectionInfo, SharedKmpSceneSpeedInfoCompanion, SharedKmpSpeedInfoCompanion, SharedKmpSpeedInfo, SharedKmpSpeedModeCompanion, SharedKmpBrightMode, SharedKmpToneColorInfo, SharedKmpToneColorListInfo, SharedAbsKmpProtocol, SharedKmpCommonProtocol0x00Companion, SharedKmpCommonProtocol0x00, SharedKmpRgbICGraffitiShareProtocol0x08Companion, SharedKmpRgbICGraffitiShareProtocol0x08, SharedKotlinTriple<__covariant A, __covariant B, __covariant C>, SharedKmpCellGraffitiDataNewProtocolCompanion, SharedKmpLayersInfo, SharedKmpCellGraffitiDataNewProtocol, SharedKmpDiyGraffitiV2, SharedKmpGraffitiDefaultData, SharedKmpGraffitiSendDataCompanion, SharedKmpLayerBase, SharedKmpLayerPaintingData, SharedMoveLayer, SharedTextGravity, SharedTextSize, SharedLayerTextData, SharedKotlinEnumCompanion, SharedKotlinEnum<E>, SharedKmpH6020AbsSub, SharedKmpH6020CaiHongCompanion, SharedKmpH6020CaiHong, SharedKmpH6020CaiQiangCompanion, SharedKmpH6020CaiQiang, SharedKmpH6020CellGraffitiDataNewProtocolCompanion, SharedKmpH6020CellGraffitiDataNewProtocol, SharedKmpH6020DangYangCompanion, SharedKmpH6020DangYang, SharedKmpH6020DuiJi4ShangXiaCompanion, SharedKmpH6020DuiJi4ShangXia, SharedKmpH6020DuiJi4XingZhuangCompanion, SharedKmpH6020DuiJi4XingZhuang, SharedKmpH6020HuXiCompanion, SharedKmpH6020HuXi, SharedKmpH6020HuoYanCompanion, SharedKmpH6020HuoYan, SharedKmpH6020JianBianCompanion, SharedKmpH6020JianBian, SharedKmpH6020JiaoTi4ShangXiaCompanion, SharedKmpH6020JiaoTi4ShangXia, SharedKmpH6020JiaoTi4XingZhuangCompanion, SharedKmpH6020JiaoTi4XingZhuang, SharedKmpH6020LayerPaintingData, SharedKmpH6020LayersInfoCompanion, SharedKmpH6020LianYiCompanion, SharedKmpH6020LianYi, SharedKmpH6020MengHuanCompanion, SharedKmpH6020MengHuan, SharedKmpH6020ProtocolCompanion, SharedKmpH6020ShenSuo4ShangXia, SharedKmpH6020ShenSuo4XingZhuang, SharedKmpH6020TanChiShe, SharedKmpH6020TanTiaoQiu, SharedKmpH6020TiaoWen, SharedKmpH6020XiaoXiaoLe, SharedKmpH6020YanHua, SharedKmpH6020YueDong, SharedKmpH6020YunRan, SharedKmpH6020Protocol, SharedKmpH6020ShenSuo4ShangXiaCompanion, SharedKmpH6020ShenSuo4XingZhuangCompanion, SharedKmpH6020TanChiSheCompanion, SharedKmpH6020TanTiaoQiuCompanion, SharedKmpH6020TiaoWenCompanion, SharedKmpH6020XiaoXiaoLeCompanion, SharedKmpH6020YanHuaCompanion, SharedKmpH6020YueDongCompanion, SharedKmpH6020YunRanCompanion, SharedKmpH6063PageEffectCompanion, SharedLayerPointMsg, SharedKmpH61DXAbsSub, SharedKmpH6063SubEffectFlickering, SharedKmpH6063SubEffectFlow, SharedKmpH6063SubEffectStretch, SharedKmpH6063PageEffect, SharedKmpH6063ProtocolCompanion, SharedKotlinPair<__covariant A, __covariant B>, SharedKmpH6063Protocol, SharedKmpH6063SubEffectFlickeringCompanion, SharedKmpH6063SubEffectFlowCompanion, SharedKmpH6063SubEffectStretchCompanion, SharedKmpH61DXPageEffectCompanion, SharedKmpH61DXSubEffect4DuiJi, SharedKmpH61DXSubEffect4JiHe, SharedKmpH61DXSubEffect4LiuDong, SharedKmpH61DXSubEffect4SuiJi, SharedKmpH61DXSubEffect4XianXing, SharedKmpH61DXPageEffect, SharedKmpH61DXProtocolCompanion, SharedKmpH61DXProtocol, SharedKmpH61DXSubEffect4DuiJiCompanion, SharedKmpH61DXSubEffect4JiHeCompanion, SharedKmpH61DXSubEffect4LiuDongCompanion, SharedKmpH61DXSubEffect4SuiJiCompanion, SharedKmpH61DXSubEffect4XianXingCompanion, SharedKmpH6630GraffitiProtocolCompanion, SharedKmpH6630GraffitiProtocol, SharedKmpH6630ProtocolCompanion, SharedKmpH663XXuanZhuan4BoBanTang, SharedKmpH663XBoDong4BoFeng, SharedKmpH663XYunRan4CaiQiang, SharedKmpH663XXuanZhuan4DaFengChe, SharedKmpH663XLiuDong4DieJia, SharedKmpH663XYunRan4FuGai, SharedKmpH663XXianXing4PenShe, SharedKmpH663XLiuDong4ShenSuo, SharedKmpH663XBoDong4ShuangLuoXuan, SharedKmpH663XSuiJi4TanChiShe, SharedKmpH663XSuiJi4TanTiaoQiu, SharedKmpH663XXianXing4TianChong, SharedKmpH663XXianXing4XiangSu, SharedKmpH663XSuiJi4XiaoXiaoLe, SharedKmpH663XSuiJi4YanHua, SharedKmpH6630Protocol, SharedKmpH663XAbsSub, SharedKmpH663XBoDong4BoFengCompanion, SharedKmpH663XBoDong4ShuangLuoXuanCompanion, SharedKmpH663XDirectionConfigCompanion, SharedKmpH663XJuLongKuoSanConfigCompanion, SharedKmpH663XLiuDong4DieJiaCompanion, SharedKmpH663XLiuDong4ShenSuoCompanion, SharedKmpH663XProtocolHelper, SharedKmpH663XSuiJi4TanChiSheCompanion, SharedKmpH663XSuiJi4TanTiaoQiuCompanion, SharedKmpH663XSuiJi4XiaoXiaoLeCompanion, SharedKmpH663XSuiJi4YanHuaCompanion, SharedKmpH663XXianXing4PenSheCompanion, SharedKmpH663XXianXing4TianChongCompanion, SharedKmpH663XXianXing4XiangSuCompanion, SharedKmpH663XXuanZhuan4BoBanTangCompanion, SharedKmpH663XXuanZhuan4DaFengCheCompanion, SharedKmpH663XYunRan4CaiQiangCompanion, SharedKmpH663XYunRan4FuGaiCompanion, SharedKmpH70CXBrightnessConfigCompanion, SharedKmpH70CXDirectionConfigCompanion, SharedKmpH70CXJiDianConfigCompanion, SharedKmpH70CXProtocolCompanion, SharedKmpH70CXProtocol, SharedKmpH70CXSubEffectConfigCompanion, SharedKmpH70CXAbsSub, SharedKmpH70CXSub4CaiHongCompanion, SharedKmpH70CXSub4CaiHong, SharedKmpH70CXSub4FenCengCompanion, SharedKmpH70CXSub4FenCeng, SharedKmpH70CXSub4HuoYanCompanion, SharedKmpH70CXSub4HuoYan, SharedKmpH70CXSub4KuoSanCompanion, SharedKmpH70CXSub4KuoSan, SharedKmpH70CXSub4LiuDongCompanion, SharedKmpH70CXSub4LiuDong, SharedKmpH70CXSub4LuoXuanCompanion, SharedKmpH70CXSub4LuoXuan, SharedKmpH70CXSub4TongXinYuanCompanion, SharedKmpH70CXSub4TongXinYuan, SharedKmpH70CXSub4XingGuangCompanion, SharedKmpH70CXSub4XingGuang, SharedKmpH70CXSub4XuanWoCompanion, SharedKmpH70CXSub4XuanWo, SharedKmpH70CXSub4XuanZhuanCompanion, SharedKmpH70CXSub4XuanZhuan, SharedKmpH70CXSub4ZhuiZhuCompanion, SharedKmpH70CXSub4ZhuiZhu, SharedLayerCompanion, SharedLayer, SharedSub4MultiLayerCompanion, SharedSub4MultiLayer, SharedKmpAreaMoveEffectCompanion, SharedKmpAreaMoveEffect, SharedKmpBrightnessEffectCompanion, SharedKmpBrightnessEffect, SharedKmpColorEffectCompanion, SharedKmpColorEffect, SharedKmpInAreaMoveEffectCompanion, SharedKmpInAreaMoveEffect, SharedKmpRgbICEffectCompanion, SharedKmpRgbICEffect, SharedKmpRgbICProtocolCompanion, SharedKmpRgbICProtocol, SharedKmpArrayUtils, SharedKotlinBooleanArray, SharedKotlinCharArray, SharedKotlinDoubleArray, SharedKotlinFloatArray, SharedKotlinLongArray, SharedKotlinShortArray, SharedKmpBleUtils, SharedKmpByteUtils, SharedKmpColorUtils, SharedKmpConstants, SharedKmpImageConverterManager, SharedKmpLog, SharedKmpLogManager, SharedKotlinx_serialization_jsonJsonElement, SharedKotlinx_serialization_jsonJson, SharedKotlinByteIterator, SharedKotlinIntIterator, SharedKotlinThrowable, SharedKotlinBooleanIterator, SharedKotlinCharIterator, SharedKotlinDoubleIterator, SharedKotlinFloatIterator, SharedKotlinLongIterator, SharedKotlinShortIterator, SharedKotlinx_serialization_jsonJsonElementCompanion, SharedKotlinx_serialization_coreSerializersModule, SharedKotlinx_serialization_jsonJsonDefault, SharedKotlinx_serialization_jsonJsonConfiguration, SharedKotlinx_serialization_coreSerialKind, SharedKotlinNothing, SharedKotlinx_serialization_jsonClassDiscriminatorMode;

@protocol SharedIKmpProtocol, SharedKotlinx_serialization_coreKSerializer, SharedKotlinComparable, SharedKmpImageProcessor, SharedKmpLogProcessor, SharedKotlinx_serialization_coreEncoder, SharedKotlinx_serialization_coreSerialDescriptor, SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDecoder, SharedKotlinx_serialization_coreDeserializationStrategy, SharedKotlinIterator, SharedKotlinx_serialization_coreSerialFormat, SharedKotlinx_serialization_coreStringFormat, SharedKotlinx_serialization_coreCompositeEncoder, SharedKotlinAnnotation, SharedKotlinx_serialization_coreCompositeDecoder, SharedKotlinx_serialization_coreSerializersModuleCollector, SharedKotlinKClass, SharedKotlinx_serialization_jsonJsonNamingStrategy, SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpProtocolHelper")))
@interface SharedKmpProtocolHelper : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kmpProtocolHelper __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpProtocolHelper *shared __attribute__((swift_name("shared")));
- (NSString * _Nullable)changeSceneSpeedIndexSpeedInfoStr:(NSString * _Nullable)speedInfoStr speedIndex:(int32_t)speedIndex __attribute__((swift_name("changeSceneSpeedIndex(speedInfoStr:speedIndex:)")));
- (SharedKmpSceneConfigInfo * _Nullable)getSceneConfigInfoConfig:(NSString * _Nullable)config info:(SharedKmpDeviceInfo *)info __attribute__((swift_name("getSceneConfigInfo(config:info:)")));
- (id<SharedIKmpProtocol> _Nullable)parseSceneType:(int32_t)sceneType effectBytes:(SharedKotlinByteArray *)effectBytes info:(SharedKmpDeviceInfo *)info __attribute__((swift_name("parse(sceneType:effectBytes:info:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpGoodsType")))
@interface SharedKmpGoodsType : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kmpGoodsType __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpGoodsType *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t GOODS_TYPE_4_H5130 __attribute__((swift_name("GOODS_TYPE_4_H5130")));
@property (readonly) int32_t GOODS_TYPE_VALUE_146 __attribute__((swift_name("GOODS_TYPE_VALUE_146")));
@property (readonly) int32_t GOODS_TYPE_VALUE_152 __attribute__((swift_name("GOODS_TYPE_VALUE_152")));
@property (readonly) int32_t GOODS_TYPE_VALUE_160 __attribute__((swift_name("GOODS_TYPE_VALUE_160")));
@property (readonly) int32_t GOODS_TYPE_VALUE_168 __attribute__((swift_name("GOODS_TYPE_VALUE_168")));
@property (readonly) int32_t GOODS_TYPE_VALUE_177 __attribute__((swift_name("GOODS_TYPE_VALUE_177")));
@property (readonly) int32_t GOODS_TYPE_VALUE_189 __attribute__((swift_name("GOODS_TYPE_VALUE_189")));
@property (readonly) int32_t GOODS_TYPE_VALUE_4_GATEWAY_H5042 __attribute__((swift_name("GOODS_TYPE_VALUE_4_GATEWAY_H5042")));
@property (readonly) int32_t GOODS_TYPE_VALUE_4_GW_H5044 __attribute__((swift_name("GOODS_TYPE_VALUE_4_GW_H5044")));
@property (readonly) int32_t GOODS_TYPE_VALUE_4_H5059 __attribute__((swift_name("GOODS_TYPE_VALUE_4_H5059")));
@property (readonly) int32_t GOODS_TYPE_VALUE_4_H5089 __attribute__((swift_name("GOODS_TYPE_VALUE_4_H5089")));
@property (readonly) int32_t GOODS_TYPE_VALUE_4_H5109 __attribute__((swift_name("GOODS_TYPE_VALUE_4_H5109")));
@property (readonly) int32_t GOODS_TYPE_VALUE_4_H5110 __attribute__((swift_name("GOODS_TYPE_VALUE_4_H5110")));
@property (readonly) int32_t GOODS_TYPE_VALUE_4_H5111 __attribute__((swift_name("GOODS_TYPE_VALUE_4_H5111")));
@property (readonly) int32_t GOODS_TYPE_VALUE_4_H5194 __attribute__((swift_name("GOODS_TYPE_VALUE_4_H5194")));
@property (readonly) int32_t GOODS_TYPE_VALUE_4_H7103 __attribute__((swift_name("GOODS_TYPE_VALUE_4_H7103")));
@property (readonly) int32_t GOODS_TYPE_VALUE_4_H7105 __attribute__((swift_name("GOODS_TYPE_VALUE_4_H7105")));
@property (readonly) int32_t GOODS_TYPE_VALUE_4_H7106 __attribute__((swift_name("GOODS_TYPE_VALUE_4_H7106")));
@property (readonly) int32_t GOODS_TYPE_VALUE_4_H7107 __attribute__((swift_name("GOODS_TYPE_VALUE_4_H7107")));
@property (readonly) int32_t GOODS_TYPE_VALUE_4_MEAT_TH_H5191 __attribute__((swift_name("GOODS_TYPE_VALUE_4_MEAT_TH_H5191")));
@property (readonly) int32_t GOODS_TYPE_VALUE_4_MEAT_TH_H5192 __attribute__((swift_name("GOODS_TYPE_VALUE_4_MEAT_TH_H5192")));
@property (readonly) int32_t GOODS_TYPE_VALUE_4_MEAT_TH_H5196 __attribute__((swift_name("GOODS_TYPE_VALUE_4_MEAT_TH_H5196")));
@property (readonly) int32_t GOODS_TYPE_VALUE_4_MEAT_TH_H5199 __attribute__((swift_name("GOODS_TYPE_VALUE_4_MEAT_TH_H5199")));
@property (readonly) int32_t GOODS_TYPE_VALUE_4_TH_H5104 __attribute__((swift_name("GOODS_TYPE_VALUE_4_TH_H5104")));
@property (readonly) int32_t GOODS_TYPE_VALUE_4_TH_H5108 __attribute__((swift_name("GOODS_TYPE_VALUE_4_TH_H5108")));
@property (readonly) int32_t GOODS_TYPE_VALUE_AIR_CLEANER __attribute__((swift_name("GOODS_TYPE_VALUE_AIR_CLEANER")));
@property (readonly) int32_t GOODS_TYPE_VALUE_AIR_CLEANER_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_AIR_CLEANER_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_AIR_CLEANER_V3 __attribute__((swift_name("GOODS_TYPE_VALUE_AIR_CLEANER_V3")));
@property (readonly) int32_t GOODS_TYPE_VALUE_AIR_CLEANER_V4 __attribute__((swift_name("GOODS_TYPE_VALUE_AIR_CLEANER_V4")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BARBECUE_BLE_MULTI_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_BARBECUE_BLE_MULTI_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BARBECUE_BLE_MULTI_V4 __attribute__((swift_name("GOODS_TYPE_VALUE_BARBECUE_BLE_MULTI_V4")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BARBECUE_BLE_NO_SCREEN_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_BARBECUE_BLE_NO_SCREEN_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BARBECUE_BLE_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_BARBECUE_BLE_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BARE_LIGHT_BLE_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_BARE_LIGHT_BLE_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BBQ_BLE_IOT_MULTI_V4 __attribute__((swift_name("GOODS_TYPE_VALUE_BBQ_BLE_IOT_MULTI_V4")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BBQ_NO_SCREEN_2 __attribute__((swift_name("GOODS_TYPE_VALUE_BBQ_NO_SCREEN_2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BBQ_NO_SCREEN_4 __attribute__((swift_name("GOODS_TYPE_VALUE_BBQ_NO_SCREEN_4")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BED_LIGHT_BLE_WIFI_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_BED_LIGHT_BLE_WIFI_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BK_BLE_RGB __attribute__((swift_name("GOODS_TYPE_VALUE_BK_BLE_RGB")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BK_BLE_WIFI_RGB __attribute__((swift_name("GOODS_TYPE_VALUE_BK_BLE_WIFI_RGB")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_AI_MUSIC_BOX __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_AI_MUSIC_BOX")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_ALEXA_RGB __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_ALEXA_RGB")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_ALEXA_RGB_LIMIT __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_ALEXA_RGB_LIMIT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_BALL_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_BALL_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_IOT_TOWER_FAN_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_IOT_TOWER_FAN_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_MUSIC_BOX_1167 __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_MUSIC_BOX_1167")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_MUSIC_BOX_1168 __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_MUSIC_BOX_1168")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_RGBWW_BALL_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_RGBWW_BALL_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_CHILD_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_CHILD_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_CURTAIN_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_CURTAIN_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_CURTAIN_LIGHT_H70B2 __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_CURTAIN_LIGHT_H70B2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_DESK_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_DESK_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_FLOOD_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_FLOOD_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_GAME_FEAST __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_GAME_FEAST")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_GAME_FEAST_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_GAME_FEAST_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_GAME_FEAST_V3 __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_GAME_FEAST_V3")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_GAME_FEAST_V4 __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_GAME_FEAST_V4")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_H5127 __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_H5127")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_H60A0 __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_H60A0")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_H60A1 __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_H60A1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_H6175 __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_H6175")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_H70C1_H70C2 __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_H70C1_H70C2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_H7134 __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_H7134")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_LAMP_TRIANGLE __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_LAMP_TRIANGLE")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_LAMP_Y __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_LAMP_Y")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_OUTDOOR_LAMP __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_OUTDOOR_LAMP")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_RGBIC_H6603 __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_RGBIC_H6603")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_RGBIC_HIGH_END __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_RGBIC_HIGH_END")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_RGBIC_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_RGBIC_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_RGBIC_LIGHT_HDMI __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_RGBIC_LIGHT_HDMI")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_RGBIC_PC_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_RGBIC_PC_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_RGBIC_TV_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_RGBIC_TV_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_RGB_FLUSH_LIGHT_PANEL __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_RGB_FLUSH_LIGHT_PANEL")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_RGB_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_RGB_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_TV_FEAST_6042 __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_TV_FEAST_6042")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_TV_FEAST_6043 __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_TV_FEAST_6043")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_TV_GAME_FEAST __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_TV_GAME_FEAST")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BLE_WIFI_WASH_THE_WALL_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_BLE_WIFI_WASH_THE_WALL_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BULB __attribute__((swift_name("GOODS_TYPE_VALUE_BULB")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BULB_LIGHT_BLE_WIFI_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_BULB_LIGHT_BLE_WIFI_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BULB_LIGHT_BLE_WIFI_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_BULB_LIGHT_BLE_WIFI_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BULB_LIGHT_IOT_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_BULB_LIGHT_IOT_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BULB_LIGHT_STRING_BLE_IOT_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_BULB_LIGHT_STRING_BLE_IOT_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BULB_LIGHT_STRING_BLE_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_BULB_LIGHT_STRING_BLE_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BULB_LIGHT_STRING_BLE_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_BULB_LIGHT_STRING_BLE_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BULB_STRING __attribute__((swift_name("GOODS_TYPE_VALUE_BULB_STRING")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BULB_STRING_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_BULB_STRING_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BULB_STRING_V3 __attribute__((swift_name("GOODS_TYPE_VALUE_BULB_STRING_V3")));
@property (readonly) int32_t GOODS_TYPE_VALUE_BULB_STRING_V4 __attribute__((swift_name("GOODS_TYPE_VALUE_BULB_STRING_V4")));
@property (readonly) int32_t GOODS_TYPE_VALUE_CAMPING_LIGHT_BLE_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_CAMPING_LIGHT_BLE_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_CAR_BOTTOM_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_CAR_BOTTOM_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_CAR_BOTTOM_LIGHT_6 __attribute__((swift_name("GOODS_TYPE_VALUE_CAR_BOTTOM_LIGHT_6")));
@property (readonly) int32_t GOODS_TYPE_VALUE_CAR_BOTTOM_LIGHT_8 __attribute__((swift_name("GOODS_TYPE_VALUE_CAR_BOTTOM_LIGHT_8")));
@property (readonly) int32_t GOODS_TYPE_VALUE_CAR_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_CAR_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_CAR_LIGHT_BLE_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_CAR_LIGHT_BLE_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_CAR_LIGHT_H7095 __attribute__((swift_name("GOODS_TYPE_VALUE_CAR_LIGHT_H7095")));
@property (readonly) int32_t GOODS_TYPE_VALUE_CH_LIGHT_BLE_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_CH_LIGHT_BLE_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_CIRCULATION_FAN_BLE_IOT_DESKTOP_AIR_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_CIRCULATION_FAN_BLE_IOT_DESKTOP_AIR_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_CRUEL_WALL_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_CRUEL_WALL_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_CUBE_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_CUBE_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_CUBE_LIGHT_606A __attribute__((swift_name("GOODS_TYPE_VALUE_CUBE_LIGHT_606A")));
@property (readonly) int32_t GOODS_TYPE_VALUE_CUBE_LIGHT_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_CUBE_LIGHT_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_DEHUMIDIFIER_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_DEHUMIDIFIER_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_DEHUMIDIFIER_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_DEHUMIDIFIER_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_DOOR_SENSOR __attribute__((swift_name("GOODS_TYPE_VALUE_DOOR_SENSOR")));
@property (readonly) int32_t GOODS_TYPE_VALUE_DREAM_COLOR_LIGHT_BLE_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_DREAM_COLOR_LIGHT_BLE_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_DREAM_COLOR_LIGHT_BLE_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_DREAM_COLOR_LIGHT_BLE_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_DREAM_COLOR_LIGHT_BLE_WIFI_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_DREAM_COLOR_LIGHT_BLE_WIFI_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_DREAM_COLOR_LIGHT_BLE_WIFI_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_DREAM_COLOR_LIGHT_BLE_WIFI_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_DREAM_COLOR_LIGHT_LIMIT_BLE_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_DREAM_COLOR_LIGHT_LIMIT_BLE_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_FLOOD_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_FLOOD_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_FLOOD_LIGHT_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_FLOOD_LIGHT_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_GATEWAY_H5043 __attribute__((swift_name("GOODS_TYPE_VALUE_GATEWAY_H5043")));
@property (readonly) int32_t GOODS_TYPE_VALUE_GOING_TO_STICK __attribute__((swift_name("GOODS_TYPE_VALUE_GOING_TO_STICK")));
@property (readonly) int32_t GOODS_TYPE_VALUE_GOOSENECK_FLOOR_LAMP_BLE_WIFI_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_GOOSENECK_FLOOR_LAMP_BLE_WIFI_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_GOOSE_NECK_POT __attribute__((swift_name("GOODS_TYPE_VALUE_GOOSE_NECK_POT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_GOOSE_NECK_POT_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_GOOSE_NECK_POT_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_GW_SUB_H5058 __attribute__((swift_name("GOODS_TYPE_VALUE_GW_SUB_H5058")));
@property (readonly) int32_t GOODS_TYPE_VALUE_GW_SUB_H5107 __attribute__((swift_name("GOODS_TYPE_VALUE_GW_SUB_H5107")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H5140 __attribute__((swift_name("GOODS_TYPE_VALUE_H5140")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H5171 __attribute__((swift_name("GOODS_TYPE_VALUE_H5171")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H601EF __attribute__((swift_name("GOODS_TYPE_VALUE_H601EF")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6020 __attribute__((swift_name("GOODS_TYPE_VALUE_H6020")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6022 __attribute__((swift_name("GOODS_TYPE_VALUE_H6022")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6032 __attribute__((swift_name("GOODS_TYPE_VALUE_H6032")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6038 __attribute__((swift_name("GOODS_TYPE_VALUE_H6038")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6039 __attribute__((swift_name("GOODS_TYPE_VALUE_H6039")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6048 __attribute__((swift_name("GOODS_TYPE_VALUE_H6048")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H605A __attribute__((swift_name("GOODS_TYPE_VALUE_H605A")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6063 __attribute__((swift_name("GOODS_TYPE_VALUE_H6063")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6069 __attribute__((swift_name("GOODS_TYPE_VALUE_H6069")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6088 __attribute__((swift_name("GOODS_TYPE_VALUE_H6088")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6093 __attribute__((swift_name("GOODS_TYPE_VALUE_H6093")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6094 __attribute__((swift_name("GOODS_TYPE_VALUE_H6094")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6095 __attribute__((swift_name("GOODS_TYPE_VALUE_H6095")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6097 __attribute__((swift_name("GOODS_TYPE_VALUE_H6097")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H609D __attribute__((swift_name("GOODS_TYPE_VALUE_H609D")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H60A4 __attribute__((swift_name("GOODS_TYPE_VALUE_H60A4")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H60A6 __attribute__((swift_name("GOODS_TYPE_VALUE_H60A6")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H60B0 __attribute__((swift_name("GOODS_TYPE_VALUE_H60B0")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H60B1 __attribute__((swift_name("GOODS_TYPE_VALUE_H60B1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H60B2 __attribute__((swift_name("GOODS_TYPE_VALUE_H60B2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H60C1 __attribute__((swift_name("GOODS_TYPE_VALUE_H60C1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6169 __attribute__((swift_name("GOODS_TYPE_VALUE_H6169")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H616C __attribute__((swift_name("GOODS_TYPE_VALUE_H616C")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H61A9 __attribute__((swift_name("GOODS_TYPE_VALUE_H61A9")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H61B0_B3_B6 __attribute__((swift_name("GOODS_TYPE_VALUE_H61B0_B3_B6")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H61D3_D5 __attribute__((swift_name("GOODS_TYPE_VALUE_H61D3_D5")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H61E5 __attribute__((swift_name("GOODS_TYPE_VALUE_H61E5")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H61E6 __attribute__((swift_name("GOODS_TYPE_VALUE_H61E6")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H61F6 __attribute__((swift_name("GOODS_TYPE_VALUE_H61F6")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6608 __attribute__((swift_name("GOODS_TYPE_VALUE_H6608")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6630 __attribute__((swift_name("GOODS_TYPE_VALUE_H6630")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6631 __attribute__((swift_name("GOODS_TYPE_VALUE_H6631")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6640 __attribute__((swift_name("GOODS_TYPE_VALUE_H6640")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6641 __attribute__((swift_name("GOODS_TYPE_VALUE_H6641")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6690 __attribute__((swift_name("GOODS_TYPE_VALUE_H6690")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6800 __attribute__((swift_name("GOODS_TYPE_VALUE_H6800")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6810 __attribute__((swift_name("GOODS_TYPE_VALUE_H6810")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6811 __attribute__((swift_name("GOODS_TYPE_VALUE_H6811")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6812 __attribute__((swift_name("GOODS_TYPE_VALUE_H6812")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6820 __attribute__((swift_name("GOODS_TYPE_VALUE_H6820")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6821 __attribute__((swift_name("GOODS_TYPE_VALUE_H6821")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6840 __attribute__((swift_name("GOODS_TYPE_VALUE_H6840")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H6841 __attribute__((swift_name("GOODS_TYPE_VALUE_H6841")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7025 __attribute__((swift_name("GOODS_TYPE_VALUE_H7025")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7026 __attribute__((swift_name("GOODS_TYPE_VALUE_H7026")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H702ABC __attribute__((swift_name("GOODS_TYPE_VALUE_H702ABC")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7030 __attribute__((swift_name("GOODS_TYPE_VALUE_H7030")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7037 __attribute__((swift_name("GOODS_TYPE_VALUE_H7037")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H703A_B __attribute__((swift_name("GOODS_TYPE_VALUE_H703A_B")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7056 __attribute__((swift_name("GOODS_TYPE_VALUE_H7056")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7057 __attribute__((swift_name("GOODS_TYPE_VALUE_H7057")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7058 __attribute__((swift_name("GOODS_TYPE_VALUE_H7058")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H705DEF_H805ABC __attribute__((swift_name("GOODS_TYPE_VALUE_H705DEF_H805ABC")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7063 __attribute__((swift_name("GOODS_TYPE_VALUE_H7063")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7066 __attribute__((swift_name("GOODS_TYPE_VALUE_H7066")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7067_68_69 __attribute__((swift_name("GOODS_TYPE_VALUE_H7067_68_69")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H706A_B_C __attribute__((swift_name("GOODS_TYPE_VALUE_H706A_B_C")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7070 __attribute__((swift_name("GOODS_TYPE_VALUE_H7070")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7072 __attribute__((swift_name("GOODS_TYPE_VALUE_H7072")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7076 __attribute__((swift_name("GOODS_TYPE_VALUE_H7076")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7085 __attribute__((swift_name("GOODS_TYPE_VALUE_H7085")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7086 __attribute__((swift_name("GOODS_TYPE_VALUE_H7086")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7087 __attribute__((swift_name("GOODS_TYPE_VALUE_H7087")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7093 __attribute__((swift_name("GOODS_TYPE_VALUE_H7093")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7094 __attribute__((swift_name("GOODS_TYPE_VALUE_H7094")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H70A1_A2_A3 __attribute__((swift_name("GOODS_TYPE_VALUE_H70A1_A2_A3")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H70B3 __attribute__((swift_name("GOODS_TYPE_VALUE_H70B3")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H70B4 __attribute__((swift_name("GOODS_TYPE_VALUE_H70B4")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H70B5 __attribute__((swift_name("GOODS_TYPE_VALUE_H70B5")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H70BC __attribute__((swift_name("GOODS_TYPE_VALUE_H70BC")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H70C4_5_6_7_8_9 __attribute__((swift_name("GOODS_TYPE_VALUE_H70C4_5_6_7_8_9")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H70D1 __attribute__((swift_name("GOODS_TYPE_VALUE_H70D1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H70D2 __attribute__((swift_name("GOODS_TYPE_VALUE_H70D2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H70D3 __attribute__((swift_name("GOODS_TYPE_VALUE_H70D3")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7112 __attribute__((swift_name("GOODS_TYPE_VALUE_H7112")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7124 __attribute__((swift_name("GOODS_TYPE_VALUE_H7124")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7127 __attribute__((swift_name("GOODS_TYPE_VALUE_H7127")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7128 __attribute__((swift_name("GOODS_TYPE_VALUE_H7128")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7129 __attribute__((swift_name("GOODS_TYPE_VALUE_H7129")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H712C __attribute__((swift_name("GOODS_TYPE_VALUE_H712C")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7137 __attribute__((swift_name("GOODS_TYPE_VALUE_H7137")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7138 __attribute__((swift_name("GOODS_TYPE_VALUE_H7138")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H713E __attribute__((swift_name("GOODS_TYPE_VALUE_H713E")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7146 __attribute__((swift_name("GOODS_TYPE_VALUE_H7146")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7147 __attribute__((swift_name("GOODS_TYPE_VALUE_H7147")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7148 __attribute__((swift_name("GOODS_TYPE_VALUE_H7148")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7149 __attribute__((swift_name("GOODS_TYPE_VALUE_H7149")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H714E __attribute__((swift_name("GOODS_TYPE_VALUE_H714E")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7152 __attribute__((swift_name("GOODS_TYPE_VALUE_H7152")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7153 __attribute__((swift_name("GOODS_TYPE_VALUE_H7153")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7178 __attribute__((swift_name("GOODS_TYPE_VALUE_H7178")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H717D __attribute__((swift_name("GOODS_TYPE_VALUE_H717D")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H7184 __attribute__((swift_name("GOODS_TYPE_VALUE_H7184")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H8015 __attribute__((swift_name("GOODS_TYPE_VALUE_H8015")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H8066 __attribute__((swift_name("GOODS_TYPE_VALUE_H8066")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H8120 __attribute__((swift_name("GOODS_TYPE_VALUE_H8120")));
@property (readonly) int32_t GOODS_TYPE_VALUE_H8121 __attribute__((swift_name("GOODS_TYPE_VALUE_H8121")));
@property (readonly) int32_t GOODS_TYPE_VALUE_HEATER __attribute__((swift_name("GOODS_TYPE_VALUE_HEATER")));
@property (readonly) int32_t GOODS_TYPE_VALUE_HEATER_7132 __attribute__((swift_name("GOODS_TYPE_VALUE_HEATER_7132")));
@property (readonly) int32_t GOODS_TYPE_VALUE_HEATER_7133 __attribute__((swift_name("GOODS_TYPE_VALUE_HEATER_7133")));
@property (readonly) int32_t GOODS_TYPE_VALUE_HEATER_7135 __attribute__((swift_name("GOODS_TYPE_VALUE_HEATER_7135")));
@property (readonly) int32_t GOODS_TYPE_VALUE_HEATER_H7136 __attribute__((swift_name("GOODS_TYPE_VALUE_HEATER_H7136")));
@property (readonly) int32_t GOODS_TYPE_VALUE_HEATER_H713D __attribute__((swift_name("GOODS_TYPE_VALUE_HEATER_H713D")));
@property (readonly) int32_t GOODS_TYPE_VALUE_HOME_LIGHT_RGBWW_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_HOME_LIGHT_RGBWW_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_HUMAN_SENSOR __attribute__((swift_name("GOODS_TYPE_VALUE_HUMAN_SENSOR")));
@property (readonly) int32_t GOODS_TYPE_VALUE_HUMAN_SENSOR_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_HUMAN_SENSOR_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_HUMIDIFIER __attribute__((swift_name("GOODS_TYPE_VALUE_HUMIDIFIER")));
@property (readonly) int32_t GOODS_TYPE_VALUE_HUMIDIFIER_170 __attribute__((swift_name("GOODS_TYPE_VALUE_HUMIDIFIER_170")));
@property (readonly) int32_t GOODS_TYPE_VALUE_HUMIDIFIER_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_HUMIDIFIER_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_HUMIDIFIER_V3 __attribute__((swift_name("GOODS_TYPE_VALUE_HUMIDIFIER_V3")));
@property (readonly) int32_t GOODS_TYPE_VALUE_HUMIDIFIER_V4 __attribute__((swift_name("GOODS_TYPE_VALUE_HUMIDIFIER_V4")));
@property (readonly) int32_t GOODS_TYPE_VALUE_HUMIDIFIER_V6 __attribute__((swift_name("GOODS_TYPE_VALUE_HUMIDIFIER_V6")));
@property (readonly) int32_t GOODS_TYPE_VALUE_IC_MAKER __attribute__((swift_name("GOODS_TYPE_VALUE_IC_MAKER")));
@property (readonly) int32_t GOODS_TYPE_VALUE_KEY_SENSOR __attribute__((swift_name("GOODS_TYPE_VALUE_KEY_SENSOR")));
@property (readonly) int32_t GOODS_TYPE_VALUE_LED_BULB_BLE_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_LED_BULB_BLE_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_LED_PATH_LIGHTS __attribute__((swift_name("GOODS_TYPE_VALUE_LED_PATH_LIGHTS")));
@property (readonly) int32_t GOODS_TYPE_VALUE_MOVE_ATMOSPHERE_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_MOVE_ATMOSPHERE_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_MOVE_ATMOSPHERE_LIGHT_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_MOVE_ATMOSPHERE_LIGHT_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_MUSIC_LIGHT_BAR __attribute__((swift_name("GOODS_TYPE_VALUE_MUSIC_LIGHT_BAR")));
@property (readonly) int32_t GOODS_TYPE_VALUE_OUTDOOR_LIGHT_BULB __attribute__((swift_name("GOODS_TYPE_VALUE_OUTDOOR_LIGHT_BULB")));
@property (readonly) int32_t GOODS_TYPE_VALUE_OUTDOOR_LIGHT_BULB_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_OUTDOOR_LIGHT_BULB_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_OUTDOOR_PLUG_IOT_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_OUTDOOR_PLUG_IOT_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_PATH_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_PATH_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_PATH_LIGHT_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_PATH_LIGHT_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_PICKUP_BOX_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_PICKUP_BOX_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_PICKUP_BOX_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_PICKUP_BOX_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_PLUG_BLE_IOT_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_PLUG_BLE_IOT_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_PLUG_IOT_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_PLUG_IOT_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_RGBIC_AI_HDMI_H6604 __attribute__((swift_name("GOODS_TYPE_VALUE_RGBIC_AI_HDMI_H6604")));
@property (readonly) int32_t GOODS_TYPE_VALUE_RGBIC_BLE_4_SECRET __attribute__((swift_name("GOODS_TYPE_VALUE_RGBIC_BLE_4_SECRET")));
@property (readonly) int32_t GOODS_TYPE_VALUE_RGBIC_BLE_4_SECRET_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_RGBIC_BLE_4_SECRET_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_RGBIC_BLE_CAR_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_RGBIC_BLE_CAR_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_RGBIC_BLE_WIFI_4_SECRET __attribute__((swift_name("GOODS_TYPE_VALUE_RGBIC_BLE_WIFI_4_SECRET")));
@property (readonly) int32_t GOODS_TYPE_VALUE_RGBIC_BLE_WIFI_4_SECRET_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_RGBIC_BLE_WIFI_4_SECRET_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_RGBIC_BLE_WIFI_4_SECRET_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_RGBIC_BLE_WIFI_4_SECRET_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_RGBIC_BLE_WIFI_4_SECRET_V3 __attribute__((swift_name("GOODS_TYPE_VALUE_RGBIC_BLE_WIFI_4_SECRET_V3")));
@property (readonly) int32_t GOODS_TYPE_VALUE_RGBIC_BLE_WIFI_HDMI_ONLY_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_RGBIC_BLE_WIFI_HDMI_ONLY_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_RGBIC_CAMERA_TV_H6098 __attribute__((swift_name("GOODS_TYPE_VALUE_RGBIC_CAMERA_TV_H6098")));
@property (readonly) int32_t GOODS_TYPE_VALUE_RGBIC_CAMERA_TV_H6099 __attribute__((swift_name("GOODS_TYPE_VALUE_RGBIC_CAMERA_TV_H6099")));
@property (readonly) int32_t GOODS_TYPE_VALUE_RGBIC_LIGHT_H61BA __attribute__((swift_name("GOODS_TYPE_VALUE_RGBIC_LIGHT_H61BA")));
@property (readonly) int32_t GOODS_TYPE_VALUE_RGBIC_LIGHT_H61BC __attribute__((swift_name("GOODS_TYPE_VALUE_RGBIC_LIGHT_H61BC")));
@property (readonly) int32_t GOODS_TYPE_VALUE_RGBIC_LIGHT_H61BE __attribute__((swift_name("GOODS_TYPE_VALUE_RGBIC_LIGHT_H61BE")));
@property (readonly) int32_t GOODS_TYPE_VALUE_RGBIC_WW_FLOOR_LAMP __attribute__((swift_name("GOODS_TYPE_VALUE_RGBIC_WW_FLOOR_LAMP")));
@property (readonly) int32_t GOODS_TYPE_VALUE_RGBIC_WW_FLOOR_LAMP_H607C __attribute__((swift_name("GOODS_TYPE_VALUE_RGBIC_WW_FLOOR_LAMP_H607C")));
@property (readonly) int32_t GOODS_TYPE_VALUE_RGB_BLE_WIFI_CHILDREN_LAMP_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_RGB_BLE_WIFI_CHILDREN_LAMP_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_SHOOT_LIGHT_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_SHOOT_LIGHT_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_SIX_BUTTON_SENSOR __attribute__((swift_name("GOODS_TYPE_VALUE_SIX_BUTTON_SENSOR")));
@property (readonly) int32_t GOODS_TYPE_VALUE_SMART_PLUG_PRO_H5086 __attribute__((swift_name("GOODS_TYPE_VALUE_SMART_PLUG_PRO_H5086")));
@property (readonly) int32_t GOODS_TYPE_VALUE_SPLICE_STRIP_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_SPLICE_STRIP_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_SPLICE_STRIP_LIGHT_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_SPLICE_STRIP_LIGHT_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_START_SKY_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_START_SKY_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_STRAIGHT_FLOOR_LAMP_BLE_WIFI_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_STRAIGHT_FLOOR_LAMP_BLE_WIFI_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_STRAIGHT_FLOOR_LAMP_BLE_WIFI_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_STRAIGHT_FLOOR_LAMP_BLE_WIFI_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_STRING_LIGHT_BLE_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_STRING_LIGHT_BLE_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_STRING_LIGHT_BLE_WIFI_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_STRING_LIGHT_BLE_WIFI_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_TABLE_LAMP_BLE_WIFI_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_TABLE_LAMP_BLE_WIFI_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_THP_BLE_WIFI __attribute__((swift_name("GOODS_TYPE_VALUE_THP_BLE_WIFI")));
@property (readonly) int32_t GOODS_TYPE_VALUE_TH_BLE __attribute__((swift_name("GOODS_TYPE_VALUE_TH_BLE")));
@property (readonly) int32_t GOODS_TYPE_VALUE_TH_BLE_H5105 __attribute__((swift_name("GOODS_TYPE_VALUE_TH_BLE_H5105")));
@property (readonly) int32_t GOODS_TYPE_VALUE_TH_BLE_IOT_GATEWAY __attribute__((swift_name("GOODS_TYPE_VALUE_TH_BLE_IOT_GATEWAY")));
@property (readonly) int32_t GOODS_TYPE_VALUE_TH_BLE_MULTI_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_TH_BLE_MULTI_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_TH_BLE_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_TH_BLE_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_TH_BLE_WIFI_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_TH_BLE_WIFI_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_TH_BLE_WIFI_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_TH_BLE_WIFI_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_TOWER_FAN_BLE_IOT __attribute__((swift_name("GOODS_TYPE_VALUE_TOWER_FAN_BLE_IOT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_TRIPLE_PLUG_BLE_IOT __attribute__((swift_name("GOODS_TYPE_VALUE_TRIPLE_PLUG_BLE_IOT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_TV_ATMOSPHERE_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_TV_ATMOSPHERE_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_TV_ATMOSPHERE_LIGHT_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_TV_ATMOSPHERE_LIGHT_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_TV_LIGHT_BLE_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_TV_LIGHT_BLE_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_TV_LIGHT_BLE_WIFI_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_TV_LIGHT_BLE_WIFI_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_TV_LIGHT_BLE_WIFI_V4 __attribute__((swift_name("GOODS_TYPE_VALUE_TV_LIGHT_BLE_WIFI_V4")));
@property (readonly) int32_t GOODS_TYPE_VALUE_TV_RGBIC_LIGHT_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_TV_RGBIC_LIGHT_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_TWO_BUTTON_SENSOR __attribute__((swift_name("GOODS_TYPE_VALUE_TWO_BUTTON_SENSOR")));
@property (readonly) int32_t GOODS_TYPE_VALUE_TWO_PLUG_BLE_IOT_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_TWO_PLUG_BLE_IOT_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_UNDERGROUND_LAMP_H7052 __attribute__((swift_name("GOODS_TYPE_VALUE_UNDERGROUND_LAMP_H7052")));
@property (readonly) int32_t GOODS_TYPE_VALUE_UNDERGROUND_LAMP_H7053 __attribute__((swift_name("GOODS_TYPE_VALUE_UNDERGROUND_LAMP_H7053")));
@property (readonly) int32_t GOODS_TYPE_VALUE_UPGLOW_FLOOR_LAMP_WW_BLE_WIFI_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_UPGLOW_FLOOR_LAMP_WW_BLE_WIFI_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_UPGLOW_LAMP_BLE_WIFI_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_UPGLOW_LAMP_BLE_WIFI_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_VERTICAL_HOLLOW_LAMP_BLE_WIFI_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_VERTICAL_HOLLOW_LAMP_BLE_WIFI_V1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_WALL_LAMP_H7075 __attribute__((swift_name("GOODS_TYPE_VALUE_WALL_LAMP_H7075")));
@property (readonly) int32_t GOODS_TYPE_VALUE_WALL_LAMP_H7078 __attribute__((swift_name("GOODS_TYPE_VALUE_WALL_LAMP_H7078")));
@property (readonly) int32_t GOODS_TYPE_VALUE_WALL_SWITCH_ONE_IOT_V1_1 __attribute__((swift_name("GOODS_TYPE_VALUE_WALL_SWITCH_ONE_IOT_V1_1")));
@property (readonly) int32_t GOODS_TYPE_VALUE_WARM_WHITE_BULB_LIGHT __attribute__((swift_name("GOODS_TYPE_VALUE_WARM_WHITE_BULB_LIGHT")));
@property (readonly) int32_t GOODS_TYPE_VALUE_WARM_WHITE_BULB_LIGHT_V2 __attribute__((swift_name("GOODS_TYPE_VALUE_WARM_WHITE_BULB_LIGHT_V2")));
@property (readonly) int32_t GOODS_TYPE_VALUE_WHITE_BULB_LIGHT_IOT_V1 __attribute__((swift_name("GOODS_TYPE_VALUE_WHITE_BULB_LIGHT_IOT_V1")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpInfoChecker")))
@interface SharedKmpInfoChecker : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kmpInfoChecker __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpInfoChecker *shared __attribute__((swift_name("shared")));
- (BOOL)isH6020Info:(SharedKmpDeviceInfo *)info __attribute__((swift_name("isH6020(info:)")));
- (BOOL)isH6063Info:(SharedKmpDeviceInfo *)info __attribute__((swift_name("isH6063(info:)")));
- (BOOL)isH61DXInfo:(SharedKmpDeviceInfo *)info __attribute__((swift_name("isH61DX(info:)")));
- (BOOL)isH663XInfo:(SharedKmpDeviceInfo *)info __attribute__((swift_name("isH663X(info:)")));
- (BOOL)isH70CXInfo:(SharedKmpDeviceInfo *)info __attribute__((swift_name("isH70CX(info:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpSku")))
@interface SharedKmpSku : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kmpSku __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpSku *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *H6020 __attribute__((swift_name("H6020")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpBrightMode")))
@interface SharedKmpBrightMode : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpBrightModeCompanion *companion __attribute__((swift_name("companion")));
@property int32_t brightPage __attribute__((swift_name("brightPage")));
@property SharedKotlinIntArray * _Nullable brightValue __attribute__((swift_name("brightValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpBrightMode.Companion")))
@interface SharedKmpBrightModeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpBrightModeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpColorListInfo")))
@interface SharedKmpColorListInfo : SharedBase
- (instancetype)initWithColors:(NSArray<SharedInt *> *)colors width:(int32_t)width height:(int32_t)height __attribute__((swift_name("init(colors:width:height:)"))) __attribute__((objc_designated_initializer));
- (SharedKmpColorListInfo *)doCopyColors:(NSArray<SharedInt *> *)colors width:(int32_t)width height:(int32_t)height __attribute__((swift_name("doCopy(colors:width:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedInt *> *colors __attribute__((swift_name("colors")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpDeviceInfo")))
@interface SharedKmpDeviceInfo : SharedBase
- (instancetype)initWithSku:(NSString *)sku name:(NSString *)name device:(NSString *)device goodsType:(int32_t)goodsType softVersion:(NSString *)softVersion hardVersion:(NSString *)hardVersion pactType:(int32_t)pactType pactCode:(int32_t)pactCode ext:(NSString *)ext __attribute__((swift_name("init(sku:name:device:goodsType:softVersion:hardVersion:pactType:pactCode:ext:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKmpDeviceInfoCompanion *companion __attribute__((swift_name("companion")));
- (SharedKmpDeviceInfo *)doCopySku:(NSString *)sku name:(NSString *)name device:(NSString *)device goodsType:(int32_t)goodsType softVersion:(NSString *)softVersion hardVersion:(NSString *)hardVersion pactType:(int32_t)pactType pactCode:(int32_t)pactCode ext:(NSString *)ext __attribute__((swift_name("doCopy(sku:name:device:goodsType:softVersion:hardVersion:pactType:pactCode:ext:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *device __attribute__((swift_name("device")));
@property (readonly) NSString *ext __attribute__((swift_name("ext")));
@property (readonly) int32_t goodsType __attribute__((swift_name("goodsType")));
@property (readonly) NSString *hardVersion __attribute__((swift_name("hardVersion")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t pactCode __attribute__((swift_name("pactCode")));
@property (readonly) int32_t pactType __attribute__((swift_name("pactType")));
@property (readonly) NSString *sku __attribute__((swift_name("sku")));
@property (readonly) NSString *softVersion __attribute__((swift_name("softVersion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpDeviceInfo.Companion")))
@interface SharedKmpDeviceInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpDeviceInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020Direction")))
@interface SharedKmpH6020Direction : SharedBase
- (instancetype)initWithDefDirIndex:(int32_t)defDirIndex supportDirections:(NSMutableArray<SharedInt *> *)supportDirections __attribute__((swift_name("init(defDirIndex:supportDirections:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKmpH6020DirectionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t defDirIndex __attribute__((swift_name("defDirIndex")));
@property (readonly) NSMutableArray<SharedInt *> *supportDirections __attribute__((swift_name("supportDirections")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020Direction.Companion")))
@interface SharedKmpH6020DirectionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020DirectionCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020DirectionSpeedInfo")))
@interface SharedKmpH6020DirectionSpeedInfo : SharedBase
- (instancetype)initWithSpeed:(SharedKmpH6020Speed * _Nullable)speed direction:(SharedKmpH6020Direction * _Nullable)direction __attribute__((swift_name("init(speed:direction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKmpH6020DirectionSpeedInfoCompanion *companion __attribute__((swift_name("companion")));
- (SharedKmpH6020DirectionSpeedInfo *)doCopySpeed:(SharedKmpH6020Speed * _Nullable)speed direction:(SharedKmpH6020Direction * _Nullable)direction __attribute__((swift_name("doCopy(speed:direction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKmpH6020Direction * _Nullable direction __attribute__((swift_name("direction")));
@property (readonly) SharedKmpH6020Speed * _Nullable speed __attribute__((swift_name("speed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020DirectionSpeedInfo.Companion")))
@interface SharedKmpH6020DirectionSpeedInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020DirectionSpeedInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020GraffitiSceneSpeedBean")))
@interface SharedKmpH6020GraffitiSceneSpeedBean : SharedBase
- (instancetype)initWithMinSpeedValue:(int32_t)minSpeedValue maxSpeedValue:(int32_t)maxSpeedValue currentSpeedValue:(int32_t)currentSpeedValue foregroud:(NSMutableArray<SharedKmpH6020GraffitiSceneSpeedBeanExt *> * _Nullable)foregroud backgroud:(NSMutableArray<SharedKmpH6020GraffitiSceneSpeedBeanExt *> * _Nullable)backgroud overly:(NSMutableArray<SharedKmpH6020GraffitiSceneSpeedBeanExt *> * _Nullable)overly __attribute__((swift_name("init(minSpeedValue:maxSpeedValue:currentSpeedValue:foregroud:backgroud:overly:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKmpH6020GraffitiSceneSpeedBeanCompanion *companion __attribute__((swift_name("companion")));
- (SharedKotlinIntArray *)getSpeedRange __attribute__((swift_name("getSpeedRange()")));
@property (readonly) NSMutableArray<SharedKmpH6020GraffitiSceneSpeedBeanExt *> * _Nullable backgroud __attribute__((swift_name("backgroud")));
@property (readonly) int32_t currentSpeedValue __attribute__((swift_name("currentSpeedValue")));
@property (readonly) NSMutableArray<SharedKmpH6020GraffitiSceneSpeedBeanExt *> * _Nullable foregroud __attribute__((swift_name("foregroud")));
@property (readonly) int32_t maxSpeedValue __attribute__((swift_name("maxSpeedValue")));
@property (readonly) int32_t minSpeedValue __attribute__((swift_name("minSpeedValue")));
@property (readonly) NSMutableArray<SharedKmpH6020GraffitiSceneSpeedBeanExt *> * _Nullable overly __attribute__((swift_name("overly")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020GraffitiSceneSpeedBean.Companion")))
@interface SharedKmpH6020GraffitiSceneSpeedBeanCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020GraffitiSceneSpeedBeanCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020GraffitiSceneSpeedBeanExt")))
@interface SharedKmpH6020GraffitiSceneSpeedBeanExt : SharedBase
- (instancetype)initWithSpeedValue:(int32_t)speedValue layerFlag:(int32_t)layerFlag layerIndex:(int32_t)layerIndex __attribute__((swift_name("init(speedValue:layerFlag:layerIndex:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKmpH6020GraffitiSceneSpeedBeanExtCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)calculateVariableSpeedValueDefaultLayerDefaultSpeed:(int32_t)defaultLayerDefaultSpeed defaultLayerCurrentSpeedValue:(int32_t)defaultLayerCurrentSpeedValue __attribute__((swift_name("calculateVariableSpeedValue(defaultLayerDefaultSpeed:defaultLayerCurrentSpeedValue:)")));
- (BOOL)isVariableLayer __attribute__((swift_name("isVariableLayer()")));
@property (readonly) int32_t layerFlag __attribute__((swift_name("layerFlag")));
@property (readonly) int32_t layerIndex __attribute__((swift_name("layerIndex")));
@property (readonly) int32_t speedValue __attribute__((swift_name("speedValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020GraffitiSceneSpeedBeanExt.Companion")))
@interface SharedKmpH6020GraffitiSceneSpeedBeanExtCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020GraffitiSceneSpeedBeanExtCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) int32_t LAYER_TYPE_DEFAULT __attribute__((swift_name("LAYER_TYPE_DEFAULT")));
@property (readonly) int32_t LAYER_TYPE_IMMUTABLE __attribute__((swift_name("LAYER_TYPE_IMMUTABLE")));
@property (readonly) int32_t LAYER_TYPE_VARIABLE __attribute__((swift_name("LAYER_TYPE_VARIABLE")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020Speed")))
@interface SharedKmpH6020Speed : SharedBase
- (instancetype)initWithDefSpeed:(int32_t)defSpeed speedRange:(SharedKotlinIntArray *)speedRange __attribute__((swift_name("init(defSpeed:speedRange:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKmpH6020SpeedCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t defSpeed __attribute__((swift_name("defSpeed")));
@property (readonly) SharedKotlinIntArray *speedRange __attribute__((swift_name("speedRange")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020Speed.Companion")))
@interface SharedKmpH6020SpeedCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020SpeedCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH61DXConfigInfo")))
@interface SharedKmpH61DXConfigInfo : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpH61DXConfigInfoCompanion *companion __attribute__((swift_name("companion")));
@property int32_t defDirIndex __attribute__((swift_name("defDirIndex")));
@property int32_t defSpeedIndex __attribute__((swift_name("defSpeedIndex")));
@property SharedInt * _Nullable speedType __attribute__((swift_name("speedType")));
@property SharedKotlinIntArray * _Nullable supportDirections __attribute__((swift_name("supportDirections")));
@property SharedKotlinArray<SharedKotlinIntArray *> * _Nullable supportSpeedConfigs __attribute__((swift_name("supportSpeedConfigs")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH61DXConfigInfo.Companion")))
@interface SharedKmpH61DXConfigInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH61DXConfigInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSpeedMode")))
@interface SharedKmpH70CXSpeedMode : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpH70CXSpeedModeCompanion *companion __attribute__((swift_name("companion")));
@property int32_t defDirIndex __attribute__((swift_name("defDirIndex")));
@property int32_t defSpeed __attribute__((swift_name("defSpeed")));
@property SharedKotlinIntArray * _Nullable directions __attribute__((swift_name("directions")));
@property NSArray<NSArray<SharedInt *> *> * _Nullable multiLayerSpeeds __attribute__((swift_name("multiLayerSpeeds")));
@property NSArray<SharedInt *> * _Nullable multiLayersDirectionRange __attribute__((swift_name("multiLayersDirectionRange")));
@property SharedKotlinIntArray * _Nullable speedRange __attribute__((swift_name("speedRange")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSpeedMode.Companion")))
@interface SharedKmpH70CXSpeedModeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH70CXSpeedModeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpSceneConfigInfo")))
@interface SharedKmpSceneConfigInfo : SharedBase
- (instancetype)initWithSpeedInfo:(SharedKmpSceneSpeedInfo * _Nullable)speedInfo directionInfo:(SharedKmpSceneDirectionInfo * _Nullable)directionInfo __attribute__((swift_name("init(speedInfo:directionInfo:)"))) __attribute__((objc_designated_initializer));
- (SharedKmpSceneConfigInfo *)doCopySpeedInfo:(SharedKmpSceneSpeedInfo * _Nullable)speedInfo directionInfo:(SharedKmpSceneDirectionInfo * _Nullable)directionInfo __attribute__((swift_name("doCopy(speedInfo:directionInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedKmpSceneDirectionInfo * _Nullable directionInfo __attribute__((swift_name("directionInfo")));
@property SharedKmpSceneSpeedInfo * _Nullable speedInfo __attribute__((swift_name("speedInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpSceneDirectionInfo")))
@interface SharedKmpSceneDirectionInfo : SharedBase
- (instancetype)initWithDefIndex:(int32_t)defIndex supportDirections:(SharedKotlinIntArray * _Nullable)supportDirections __attribute__((swift_name("init(defIndex:supportDirections:)"))) __attribute__((objc_designated_initializer));
- (SharedKmpSceneDirectionInfo *)doCopyDefIndex:(int32_t)defIndex supportDirections:(SharedKotlinIntArray * _Nullable)supportDirections __attribute__((swift_name("doCopy(defIndex:supportDirections:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defIndex __attribute__((swift_name("defIndex")));
@property (readonly) SharedKotlinIntArray * _Nullable supportDirections __attribute__((swift_name("supportDirections")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpSceneSpeedInfo")))
@interface SharedKmpSceneSpeedInfo : SharedBase
- (instancetype)initWithSpeedType:(int32_t)speedType defSpeed:(int32_t)defSpeed speedRange:(SharedKotlinIntArray * _Nullable)speedRange speedGearCount:(int32_t)speedGearCount __attribute__((swift_name("init(speedType:defSpeed:speedRange:speedGearCount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKmpSceneSpeedInfoCompanion *companion __attribute__((swift_name("companion")));
- (SharedKmpSceneSpeedInfo *)doCopySpeedType:(int32_t)speedType defSpeed:(int32_t)defSpeed speedRange:(SharedKotlinIntArray * _Nullable)speedRange speedGearCount:(int32_t)speedGearCount __attribute__((swift_name("doCopy(speedType:defSpeed:speedRange:speedGearCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defSpeed __attribute__((swift_name("defSpeed")));
@property (readonly) int32_t speedGearCount __attribute__((swift_name("speedGearCount")));
@property (readonly) SharedKotlinIntArray * _Nullable speedRange __attribute__((swift_name("speedRange")));
@property (readonly) int32_t speedType __attribute__((swift_name("speedType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpSceneSpeedInfo.Companion")))
@interface SharedKmpSceneSpeedInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpSceneSpeedInfoCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t SPEED_TYPE_GEARS __attribute__((swift_name("SPEED_TYPE_GEARS")));
@property (readonly) int32_t SPEED_TYPE_STEPLESS __attribute__((swift_name("SPEED_TYPE_STEPLESS")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpSpeedInfo")))
@interface SharedKmpSpeedInfo : SharedBase
- (instancetype)initWithConfig:(NSString *)config supSpeed:(BOOL)supSpeed speedIndex:(int32_t)speedIndex scenceParamId:(int32_t)scenceParamId __attribute__((swift_name("init(config:supSpeed:speedIndex:scenceParamId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKmpSpeedInfoCompanion *companion __attribute__((swift_name("companion")));
- (SharedKmpSpeedInfo *)doCopyConfig:(NSString *)config supSpeed:(BOOL)supSpeed speedIndex:(int32_t)speedIndex scenceParamId:(int32_t)scenceParamId __attribute__((swift_name("doCopy(config:supSpeed:speedIndex:scenceParamId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *config __attribute__((swift_name("config")));
@property int32_t scenceParamId __attribute__((swift_name("scenceParamId")));
@property int32_t speedIndex __attribute__((swift_name("speedIndex")));
@property BOOL supSpeed __attribute__((swift_name("supSpeed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpSpeedInfo.Companion")))
@interface SharedKmpSpeedInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpSpeedInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpSpeedMode")))
@interface SharedKmpSpeedMode : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpSpeedModeCompanion *companion __attribute__((swift_name("companion")));
@property NSArray<SharedKmpBrightMode *> * _Nullable bright __attribute__((swift_name("bright")));
@property SharedKotlinIntArray * _Nullable color __attribute__((swift_name("color")));
@property int32_t defaultIndex __attribute__((swift_name("defaultIndex")));
@property SharedKotlinIntArray * _Nullable moveAll __attribute__((swift_name("moveAll")));
@property SharedKotlinIntArray * _Nullable moveIn __attribute__((swift_name("moveIn")));
@property int32_t page __attribute__((swift_name("page")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpSpeedMode.Companion")))
@interface SharedKmpSpeedModeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpSpeedModeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpToneColorInfo")))
@interface SharedKmpToneColorInfo : SharedBase
- (instancetype)initWithH:(int32_t)h toneColorList:(NSArray<SharedInt *> *)toneColorList __attribute__((swift_name("init(h:toneColorList:)"))) __attribute__((objc_designated_initializer));
- (SharedKmpToneColorInfo *)doCopyH:(int32_t)h toneColorList:(NSArray<SharedInt *> *)toneColorList __attribute__((swift_name("doCopy(h:toneColorList:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t h __attribute__((swift_name("h")));
@property (readonly) NSArray<SharedInt *> *toneColorList __attribute__((swift_name("toneColorList")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpToneColorListInfo")))
@interface SharedKmpToneColorListInfo : SharedBase
- (instancetype)initWithBaseColor:(SharedInt * _Nullable)baseColor list:(NSArray<SharedKmpToneColorInfo *> *)list __attribute__((swift_name("init(baseColor:list:)"))) __attribute__((objc_designated_initializer));
- (SharedKmpToneColorListInfo *)doCopyBaseColor:(SharedInt * _Nullable)baseColor list:(NSArray<SharedKmpToneColorInfo *> *)list __attribute__((swift_name("doCopy(baseColor:list:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedInt * _Nullable baseColor __attribute__((swift_name("baseColor")));
@property (readonly) NSArray<SharedKmpToneColorInfo *> *list __attribute__((swift_name("list")));
@end

__attribute__((swift_name("IKmpProtocol")))
@protocol SharedIKmpProtocol
@required
- (NSArray<SharedByte *> * _Nullable)bytes __attribute__((swift_name("bytes()")));
- (SharedKmpToneColorListInfo *)getToneColors __attribute__((swift_name("getToneColors()")));
- (void)resetColor __attribute__((swift_name("resetColor()")));
- (void)updateColorH:(float)h __attribute__((swift_name("updateColor(h:)")));
- (void)updateDirectionDirectionOrIndex:(SharedInt * _Nullable)directionOrIndex config:(NSString * _Nullable)config __attribute__((swift_name("updateDirection(directionOrIndex:config:)")));
- (void)updateSpeedSpeedOrIndex:(SharedInt * _Nullable)speedOrIndex config:(NSString * _Nullable)config __attribute__((swift_name("updateSpeed(speedOrIndex:config:)")));
@end

__attribute__((swift_name("AbsKmpProtocol")))
@interface SharedAbsKmpProtocol : SharedBase <SharedIKmpProtocol>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)resetColor __attribute__((swift_name("resetColor()")));
- (void)updateColorH:(float)h __attribute__((swift_name("updateColor(h:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property SharedFloat * _Nullable h __attribute__((swift_name("h")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSMutableArray<SharedKmpToneColorInfo *> *toneColorList __attribute__((swift_name("toneColorList")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpCommonProtocol0x00")))
@interface SharedKmpCommonProtocol0x00 : SharedAbsKmpProtocol
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpCommonProtocol0x00Companion *companion __attribute__((swift_name("companion")));
- (NSArray<SharedByte *> *)bytes __attribute__((swift_name("bytes()")));
- (SharedKmpToneColorListInfo *)getToneColors __attribute__((swift_name("getToneColors()")));
- (void)updateDirectionDirectionOrIndex:(SharedInt * _Nullable)directionOrIndex config:(NSString * _Nullable)config __attribute__((swift_name("updateDirection(directionOrIndex:config:)")));
- (void)updateSpeedSpeedOrIndex:(SharedInt * _Nullable)speedOrIndex config:(NSString * _Nullable)config __attribute__((swift_name("updateSpeed(speedOrIndex:config:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpCommonProtocol0x00.Companion")))
@interface SharedKmpCommonProtocol0x00Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpCommonProtocol0x00Companion *shared __attribute__((swift_name("shared")));
- (SharedKmpCommonProtocol0x00 * _Nullable)parseBytesEffectBytes:(SharedKotlinByteArray *)effectBytes __attribute__((swift_name("parseBytes(effectBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpRgbICGraffitiShareProtocol0x08")))
@interface SharedKmpRgbICGraffitiShareProtocol0x08 : SharedAbsKmpProtocol
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpRgbICGraffitiShareProtocol0x08Companion *companion __attribute__((swift_name("companion")));
- (NSArray<SharedByte *> *)bytes __attribute__((swift_name("bytes()")));
- (SharedKmpToneColorListInfo *)getToneColors __attribute__((swift_name("getToneColors()")));
- (void)updateDirectionDirectionOrIndex:(SharedInt * _Nullable)directionOrIndex config:(NSString * _Nullable)config __attribute__((swift_name("updateDirection(directionOrIndex:config:)")));
- (void)updateSpeedSpeedOrIndex:(SharedInt * _Nullable)speedOrIndex config:(NSString * _Nullable)config __attribute__((swift_name("updateSpeed(speedOrIndex:config:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpRgbICGraffitiShareProtocol0x08.Companion")))
@interface SharedKmpRgbICGraffitiShareProtocol0x08Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpRgbICGraffitiShareProtocol0x08Companion *shared __attribute__((swift_name("shared")));
- (SharedKmpRgbICGraffitiShareProtocol0x08 * _Nullable)parseBytesEffectBytes:(SharedKotlinByteArray *)effectBytes __attribute__((swift_name("parseBytes(effectBytes:)")));
@end

__attribute__((swift_name("KmpCellGraffitiDataNewProtocol")))
@interface SharedKmpCellGraffitiDataNewProtocol : SharedBase
- (instancetype)initWithDefDuration:(int32_t)defDuration triple:(SharedKotlinTriple<SharedInt *, SharedInt *, SharedInt *> *)triple __attribute__((swift_name("init(defDuration:triple:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKmpCellGraffitiDataNewProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<SharedInt *> *)getAllColors __attribute__((swift_name("getAllColors()")));
- (SharedKotlinByteArray *)getByteData __attribute__((swift_name("getByteData()")));
- (BOOL)parseByteEffectByte:(SharedKotlinByteArray *)effectByte defDuration:(int32_t)defDuration __attribute__((swift_name("parseByte(effectByte:defDuration:)")));
- (void)resetColor __attribute__((swift_name("resetColor()")));
- (void)updateColorsH:(float)h __attribute__((swift_name("updateColors(h:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property SharedKmpLayersInfo *animationFrame __attribute__((swift_name("animationFrame")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property float baseColorH __attribute__((swift_name("baseColorH")));
@property int32_t bgBrightness __attribute__((swift_name("bgBrightness")));
@property int32_t bgColor __attribute__((swift_name("bgColor")));
@property SharedKmpLayersInfo *bgFrame __attribute__((swift_name("bgFrame")));
@property (readonly) int32_t defDuration __attribute__((swift_name("defDuration")));
@property SharedKmpLayersInfo *fgFrame __attribute__((swift_name("fgFrame")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property float offsetH __attribute__((swift_name("offsetH")));
@property int8_t showType __attribute__((swift_name("showType")));
@property (readonly) SharedKotlinTriple<SharedInt *, SharedInt *, SharedInt *> *triple __attribute__((swift_name("triple")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpCellGraffitiDataNewProtocol.Companion")))
@interface SharedKmpCellGraffitiDataNewProtocolCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpCellGraffitiDataNewProtocolCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpCellGraffitiDataNewProtocol * _Nullable)parseDetails:(SharedKotlinByteArray *)details __attribute__((swift_name("parse(details:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpDiyGraffitiV2")))
@interface SharedKmpDiyGraffitiV2 : SharedBase
- (instancetype)initWithDiyCode:(int32_t)diyCode icNum:(int32_t)icNum subEffect:(int32_t)subEffect speed:(int32_t)speed baseColorBrightness:(int32_t)baseColorBrightness baseColor:(int32_t)baseColor colors:(SharedKotlinArray<SharedKotlinIntArray *> * _Nullable)colors __attribute__((swift_name("init(diyCode:icNum:subEffect:speed:baseColorBrightness:baseColor:colors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDiyCode:(int32_t)diyCode icNum:(int32_t)icNum subEffect:(int32_t)subEffect speed:(int32_t)speed baseColorBrightness:(int32_t)baseColorBrightness baseColor:(int32_t)baseColor colorMap:(SharedMutableDictionary<SharedInt *, NSMutableArray<SharedInt *> *> * _Nullable)colorMap __attribute__((swift_name("init(diyCode:icNum:subEffect:speed:baseColorBrightness:baseColor:colorMap:)"))) __attribute__((objc_designated_initializer));
- (SharedKmpDiyGraffitiV2 *)doCopy __attribute__((swift_name("doCopy()")));
- (SharedKotlinByteArray *)getEffectBytes __attribute__((swift_name("getEffectBytes()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpGraffitiDefaultData")))
@interface SharedKmpGraffitiDefaultData : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kmpGraffitiDefaultData __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpGraffitiDefaultData *shared __attribute__((swift_name("shared")));
@property (readonly) int8_t DEFAULT_ACTION __attribute__((swift_name("DEFAULT_ACTION")));
@property (readonly) int32_t DEFAULT_BASE_BRIGHTNESS __attribute__((swift_name("DEFAULT_BASE_BRIGHTNESS")));
@property (readonly) int32_t DEFAULT_BG_COLOR __attribute__((swift_name("DEFAULT_BG_COLOR")));
@property (readonly) int32_t DEFAULT_DURATION __attribute__((swift_name("DEFAULT_DURATION")));
@property (readonly) int8_t DEFAULT_GRAFFITI_TYPE __attribute__((swift_name("DEFAULT_GRAFFITI_TYPE")));
@property (readonly) int8_t DEFAULT_PRIORITY __attribute__((swift_name("DEFAULT_PRIORITY")));
@property (readonly) int8_t DEFAULT_SHOW_TYPE __attribute__((swift_name("DEFAULT_SHOW_TYPE")));
@property (readonly) int8_t DEFAULT_SPEED __attribute__((swift_name("DEFAULT_SPEED")));
@property (readonly) int32_t DEFAULT_TEXT_BG_COLOR __attribute__((swift_name("DEFAULT_TEXT_BG_COLOR")));
@property (readonly) int32_t DEFAULT_TEXT_COLOR __attribute__((swift_name("DEFAULT_TEXT_COLOR")));
@property (readonly) int8_t DEFAULT_TYPE_TEXT_ALIGN __attribute__((swift_name("DEFAULT_TYPE_TEXT_ALIGN")));
@property (readonly) int8_t DEFAULT_TYPE_TEXT_SIZE __attribute__((swift_name("DEFAULT_TYPE_TEXT_SIZE")));
@property (readonly) int32_t MAX_DURATION __attribute__((swift_name("MAX_DURATION")));
@property (readonly) int8_t TYPE_CAROUSEL __attribute__((swift_name("TYPE_CAROUSEL")));
@property (readonly) int8_t TYPE_CUSTOM __attribute__((swift_name("TYPE_CUSTOM")));
@property (readonly) int8_t TYPE_CUSTOM_H6020 __attribute__((swift_name("TYPE_CUSTOM_H6020")));
@property (readonly) int8_t TYPE_GRAFFITI_COORDINATE __attribute__((swift_name("TYPE_GRAFFITI_COORDINATE")));
@property (readonly) int8_t TYPE_GRAFFITI_ICON __attribute__((swift_name("TYPE_GRAFFITI_ICON")));
@property (readonly) int8_t TYPE_GRAFFITI_PAINT __attribute__((swift_name("TYPE_GRAFFITI_PAINT")));
@property (readonly) int8_t TYPE_GRAFFITI_TEXT __attribute__((swift_name("TYPE_GRAFFITI_TEXT")));
@property (readonly) int8_t TYPE_GRAFFITI_TEXT_H6020 __attribute__((swift_name("TYPE_GRAFFITI_TEXT_H6020")));
@property (readonly) int8_t TYPE_OVERLAY __attribute__((swift_name("TYPE_OVERLAY")));
@property (readonly) int8_t TYPE_TEXT_ALIGN_BOTTOM __attribute__((swift_name("TYPE_TEXT_ALIGN_BOTTOM")));
@property (readonly) int8_t TYPE_TEXT_ALIGN_CENTER __attribute__((swift_name("TYPE_TEXT_ALIGN_CENTER")));
@property (readonly) int8_t TYPE_TEXT_ALIGN_TOP __attribute__((swift_name("TYPE_TEXT_ALIGN_TOP")));
@property (readonly) int8_t TYPE_TEXT_SIZE_BIG __attribute__((swift_name("TYPE_TEXT_SIZE_BIG")));
@property (readonly) int8_t TYPE_TEXT_SIZE_SMALL __attribute__((swift_name("TYPE_TEXT_SIZE_SMALL")));
@property (readonly) SharedMutableDictionary<SharedInt *, SharedInt *> *actionIconMap __attribute__((swift_name("actionIconMap")));
@property (readonly) SharedMutableDictionary<SharedByte *, SharedInt *> *showTypeMap __attribute__((swift_name("showTypeMap")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpGraffitiSendData")))
@interface SharedKmpGraffitiSendData : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpGraffitiSendDataCompanion *companion __attribute__((swift_name("companion")));
@property int32_t baseColor __attribute__((swift_name("baseColor")));
@property int32_t brightness __attribute__((swift_name("brightness")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpGraffitiSendData.Companion")))
@interface SharedKmpGraffitiSendDataCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpGraffitiSendDataCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t ACTION_ANTI_CLOCKWISE __attribute__((swift_name("ACTION_ANTI_CLOCKWISE")));
@property (readonly) int32_t ACTION_BLINKING __attribute__((swift_name("ACTION_BLINKING")));
@property (readonly) int32_t ACTION_CLOCKWISE __attribute__((swift_name("ACTION_CLOCKWISE")));
@property (readonly) int32_t ACTION_DOWN __attribute__((swift_name("ACTION_DOWN")));
@property (readonly) int32_t ACTION_LEFT_DOWN __attribute__((swift_name("ACTION_LEFT_DOWN")));
@property (readonly) int32_t ACTION_LEFT_H7037 __attribute__((swift_name("ACTION_LEFT_H7037")));
@property (readonly) int32_t ACTION_LEFT_RIGHT_IN __attribute__((swift_name("ACTION_LEFT_RIGHT_IN")));
@property (readonly) int32_t ACTION_LEFT_RIGHT_IN_UP_DOWN_OUT __attribute__((swift_name("ACTION_LEFT_RIGHT_IN_UP_DOWN_OUT")));
@property (readonly) int32_t ACTION_LEFT_UP __attribute__((swift_name("ACTION_LEFT_UP")));
@property (readonly) int32_t ACTION_LINER_DOWN_LEFT_UP_RIGHT __attribute__((swift_name("ACTION_LINER_DOWN_LEFT_UP_RIGHT")));
@property (readonly) int32_t ACTION_LINER_DOWN_RIGHT_UP_LEFT __attribute__((swift_name("ACTION_LINER_DOWN_RIGHT_UP_LEFT")));
@property (readonly) int32_t ACTION_LINER_DOWN_UP_MOVE __attribute__((swift_name("ACTION_LINER_DOWN_UP_MOVE")));
@property (readonly) int32_t ACTION_LINER_DOWN_UP_MOVE_BACK __attribute__((swift_name("ACTION_LINER_DOWN_UP_MOVE_BACK")));
@property (readonly) int32_t ACTION_LINER_UP_DOWN_MOVE __attribute__((swift_name("ACTION_LINER_UP_DOWN_MOVE")));
@property (readonly) int32_t ACTION_LINER_UP_DOWN_MOVE_BACK __attribute__((swift_name("ACTION_LINER_UP_DOWN_MOVE_BACK")));
@property (readonly) int32_t ACTION_LINER_UP_LEFT_DOWN_RIGHT __attribute__((swift_name("ACTION_LINER_UP_LEFT_DOWN_RIGHT")));
@property (readonly) int32_t ACTION_LINER_UP_RIGHT_DOWN_LEFT __attribute__((swift_name("ACTION_LINER_UP_RIGHT_DOWN_LEFT")));
@property (readonly) int32_t ACTION_NONE __attribute__((swift_name("ACTION_NONE")));
@property (readonly) int32_t ACTION_RIGHT_DOWN __attribute__((swift_name("ACTION_RIGHT_DOWN")));
@property (readonly) int32_t ACTION_RIGHT_H7037 __attribute__((swift_name("ACTION_RIGHT_H7037")));
@property (readonly) int32_t ACTION_RIGHT_UP __attribute__((swift_name("ACTION_RIGHT_UP")));
@property (readonly) int32_t ACTION_UP __attribute__((swift_name("ACTION_UP")));
@property (readonly) int32_t ACTION_UP_DOWN_IN __attribute__((swift_name("ACTION_UP_DOWN_IN")));
@property (readonly) int32_t ACTION_UP_DOWN_LEFT_RIGHT_IN __attribute__((swift_name("ACTION_UP_DOWN_LEFT_RIGHT_IN")));
@property (readonly) int32_t ACTION_UP_DOWN_LEFT_RIGHT_OUT __attribute__((swift_name("ACTION_UP_DOWN_LEFT_RIGHT_OUT")));
@property (readonly) int32_t ACTION_UP_DOWN_MOVE __attribute__((swift_name("ACTION_UP_DOWN_MOVE")));
@property (readonly) int32_t DEFAULT_ACTION __attribute__((swift_name("DEFAULT_ACTION")));
@property (readonly) int32_t DEFAULT_BASE_BRIGHTNESS __attribute__((swift_name("DEFAULT_BASE_BRIGHTNESS")));
@property (readonly) int32_t DEFAULT_BASE_COLOR __attribute__((swift_name("DEFAULT_BASE_COLOR")));
@property (readonly) int32_t DEFAULT_PRIORITY __attribute__((swift_name("DEFAULT_PRIORITY")));
@property (readonly) BOOL DEFAULT_PROFESSIONAL __attribute__((swift_name("DEFAULT_PROFESSIONAL")));
@property (readonly) int32_t DEFAULT_SPEED __attribute__((swift_name("DEFAULT_SPEED")));
@property (readonly) int32_t DEFAULT_SUB_EFFECT __attribute__((swift_name("DEFAULT_SUB_EFFECT")));
@property (readonly) int32_t PRIORITY_HIGH __attribute__((swift_name("PRIORITY_HIGH")));
@property (readonly) int32_t PRIORITY_LOW __attribute__((swift_name("PRIORITY_LOW")));
@property (readonly) int32_t PRIORITY_MID __attribute__((swift_name("PRIORITY_MID")));
@end

__attribute__((swift_name("KmpLayerBase")))
@interface SharedKmpLayerBase : SharedBase
- (instancetype)initWithGraffitiType:(int8_t)graffitiType defDuration:(int32_t)defDuration __attribute__((swift_name("init(graffitiType:defDuration:)"))) __attribute__((objc_designated_initializer));
- (SharedKmpLayerBase *)doCopy __attribute__((swift_name("doCopy()")));
- (NSArray<SharedInt *> *)getColorList __attribute__((swift_name("getColorList()")));
- (SharedKotlinByteArray *)getCommonData __attribute__((swift_name("getCommonData()")));
- (SharedKotlinByteArray *)getLayerDataOffsetH:(float)offsetH __attribute__((swift_name("getLayerData(offsetH:)")));
- (int32_t)getPaintColor __attribute__((swift_name("getPaintColor()")));
- (BOOL)haveData __attribute__((swift_name("haveData()")));
- (BOOL)isNoneAction __attribute__((swift_name("isNoneAction()")));
- (void)parseCommonDataEffectByteArray:(SharedKotlinByteArray *)effectByteArray startIndex:(int32_t)startIndex __attribute__((swift_name("parseCommonData(effectByteArray:startIndex:)")));
- (BOOL)setLayerDataData:(SharedKotlinByteArray *)data startIndex:(int32_t)startIndex length:(int32_t)length __attribute__((swift_name("setLayerData(data:startIndex:length:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property int8_t action __attribute__((swift_name("action")));
@property int32_t defDuration __attribute__((swift_name("defDuration")));
@property int32_t duration __attribute__((swift_name("duration")));
@property int8_t graffitiType __attribute__((swift_name("graffitiType")));
@property int8_t inAndOut __attribute__((swift_name("inAndOut")));
@property int8_t layerBrightness __attribute__((swift_name("layerBrightness")));
@property int8_t layerSpeed __attribute__((swift_name("layerSpeed")));
@property int8_t priority __attribute__((swift_name("priority")));
@property int8_t reentrant __attribute__((swift_name("reentrant")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpLayerPaintingData")))
@interface SharedKmpLayerPaintingData : SharedKmpLayerBase
- (instancetype)initWithDurationTime:(int32_t)durationTime pngBytes:(SharedKotlinByteArray *)pngBytes color4Paint:(int32_t)color4Paint __attribute__((swift_name("init(durationTime:pngBytes:color4Paint:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithGraffitiType:(int8_t)graffitiType defDuration:(int32_t)defDuration __attribute__((swift_name("init(graffitiType:defDuration:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedKmpLayerPaintingData *)doCopy __attribute__((swift_name("doCopy()")));
- (SharedKotlinByteArray *)getLayerDataOffsetH:(float)offsetH __attribute__((swift_name("getLayerData(offsetH:)")));
- (int32_t)getPaintColor __attribute__((swift_name("getPaintColor()")));
- (BOOL)haveData __attribute__((swift_name("haveData()")));
- (BOOL)setLayerDataData:(SharedKotlinByteArray *)data startIndex:(int32_t)startIndex length:(int32_t)length __attribute__((swift_name("setLayerData(data:startIndex:length:)")));
@property int32_t color4Paint __attribute__((swift_name("color4Paint")));
@property int32_t durationTime __attribute__((swift_name("durationTime")));
@property SharedKotlinByteArray *pngBytes __attribute__((swift_name("pngBytes")));
@end

__attribute__((swift_name("KmpLayersInfo")))
@interface SharedKmpLayersInfo : SharedBase
- (instancetype)initWithDefDuration:(int32_t)defDuration layers:(NSMutableArray<SharedKmpLayerBase *> *)layers curPage:(int32_t)curPage maxSize:(int32_t)maxSize __attribute__((swift_name("init(defDuration:layers:curPage:maxSize:)"))) __attribute__((objc_designated_initializer));
- (BOOL)addLayerLayer:(SharedKmpLayerBase *)layer index:(int32_t)index __attribute__((swift_name("addLayer(layer:index:)")));
- (void)addLayerDefDuration:(int32_t)defDuration isAllLayer:(BOOL)isAllLayer __attribute__((swift_name("addLayer(defDuration:isAllLayer:)")));
- (BOOL)doCopyCurLayer __attribute__((swift_name("doCopyCurLayer()")));
- (BOOL)doCopyLayerCopyLayer:(SharedKmpLayerBase *)copyLayer __attribute__((swift_name("doCopyLayer(copyLayer:)")));
- (void)deleteCurLayerDuration:(int32_t)duration __attribute__((swift_name("deleteCurLayer(duration:)")));
- (BOOL)deleteLayerIndex:(int32_t)index __attribute__((swift_name("deleteLayer(index:)")));
- (SharedKotlinByteArray *)getByteDataOffsetH:(float)offsetH __attribute__((swift_name("getByteData(offsetH:)")));
- (SharedKmpLayerBase *)getCurLayerDefDuration:(int32_t)defDuration __attribute__((swift_name("getCurLayer(defDuration:)")));
- (SharedKmpLayerBase *)getLayer4IndexIndex:(int32_t)index __attribute__((swift_name("getLayer4Index(index:)")));
- (BOOL)isCurrentPageLayer:(SharedKmpLayerBase *)layer __attribute__((swift_name("isCurrentPage(layer:)")));
- (BOOL)isCurrentPageIndex:(int32_t)index __attribute__((swift_name("isCurrentPage(index:)")));
- (BOOL)moveLayerType:(SharedMoveLayer *)type __attribute__((swift_name("moveLayer(type:)")));
- (int32_t)parseLayersBytes:(SharedKotlinByteArray *)bytes indexStart:(int32_t)indexStart __attribute__((swift_name("parseLayers(bytes:indexStart:)")));
@property int32_t curPage __attribute__((swift_name("curPage")));
@property (readonly) int32_t defDuration __attribute__((swift_name("defDuration")));
@property BOOL isMixMode __attribute__((swift_name("isMixMode")));
@property BOOL isOpenCurrentEffect __attribute__((swift_name("isOpenCurrentEffect")));
@property (readonly) NSMutableArray<SharedKmpLayerBase *> *layers __attribute__((swift_name("layers")));
@property int32_t layersPaintColor __attribute__((swift_name("layersPaintColor")));
@property int32_t maxSize __attribute__((swift_name("maxSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LayerTextData")))
@interface SharedLayerTextData : SharedKmpLayerBase
- (instancetype)initWithTextDurationTime:(int32_t)textDurationTime gravity:(SharedTextGravity *)gravity textContent:(NSString *)textContent textColors:(NSMutableArray<SharedInt *> *)textColors textSize:(SharedTextSize *)textSize __attribute__((swift_name("init(textDurationTime:gravity:textContent:textColors:textSize:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithGraffitiType:(int8_t)graffitiType defDuration:(int32_t)defDuration __attribute__((swift_name("init(graffitiType:defDuration:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedLayerTextData *)doCopy __attribute__((swift_name("doCopy()")));
- (SharedKotlinByteArray *)getLayerDataOffsetH:(float)offsetH __attribute__((swift_name("getLayerData(offsetH:)")));
- (int32_t)getPaintColor __attribute__((swift_name("getPaintColor()")));
- (BOOL)haveData __attribute__((swift_name("haveData()")));
- (BOOL)setLayerDataData:(SharedKotlinByteArray *)data startIndex:(int32_t)startIndex length:(int32_t)length __attribute__((swift_name("setLayerData(data:startIndex:length:)")));
@property SharedTextGravity *gravity __attribute__((swift_name("gravity")));
@property NSMutableArray<SharedInt *> *textColors __attribute__((swift_name("textColors")));
@property NSString *textContent __attribute__((swift_name("textContent")));
@property int32_t textDurationTime __attribute__((swift_name("textDurationTime")));
@property SharedTextSize *textSize __attribute__((swift_name("textSize")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoveLayer")))
@interface SharedMoveLayer : SharedKotlinEnum<SharedMoveLayer *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedMoveLayer *up __attribute__((swift_name("up")));
@property (class, readonly) SharedMoveLayer *down __attribute__((swift_name("down")));
+ (SharedKotlinArray<SharedMoveLayer *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedMoveLayer *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TextGravity")))
@interface SharedTextGravity : SharedKotlinEnum<SharedTextGravity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedTextGravity *top __attribute__((swift_name("top")));
@property (class, readonly) SharedTextGravity *center __attribute__((swift_name("center")));
@property (class, readonly) SharedTextGravity *bottom __attribute__((swift_name("bottom")));
+ (SharedKotlinArray<SharedTextGravity *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedTextGravity *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TextSize")))
@interface SharedTextSize : SharedKotlinEnum<SharedTextSize *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedTextSize *small __attribute__((swift_name("small")));
@property (class, readonly) SharedTextSize *big __attribute__((swift_name("big")));
+ (SharedKotlinArray<SharedTextSize *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedTextSize *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("KmpH6020AbsSub")))
@interface SharedKmpH6020AbsSub : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSMutableArray<SharedByte *> * _Nullable)bytesPos:(int32_t)pos __attribute__((swift_name("bytes(pos:)")));
- (void)colorChangedH:(float)h __attribute__((swift_name("colorChanged(h:)")));
- (NSMutableArray<SharedInt *> *)getMainColors __attribute__((swift_name("getMainColors()")));
- (int32_t)getSpeed __attribute__((swift_name("getSpeed()")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos __attribute__((swift_name("makeExtBytes(bytes:pos:)")));
- (int32_t)minColorSize __attribute__((swift_name("minColorSize()")));
- (void)resetColor __attribute__((swift_name("resetColor()")));
- (void)speedChangedSpeed:(int8_t)speed __attribute__((swift_name("speedChanged(speed:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property (readonly) NSMutableArray<SharedInt *> *colors __attribute__((swift_name("colors")));
@property int8_t speed __attribute__((swift_name("speed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020CaiHong")))
@interface SharedKmpH6020CaiHong : SharedKmpH6020AbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH6020CaiHongCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos __attribute__((swift_name("makeExtBytes(bytes:pos:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020CaiHong.Companion")))
@interface SharedKmpH6020CaiHongCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020CaiHongCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6020CaiHong *)makeDef __attribute__((swift_name("makeDef()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH6020CaiHong * _Nullable)parseDetails:(SharedKotlinByteArray *)details error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parse(details:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020CaiQiang")))
@interface SharedKmpH6020CaiQiang : SharedKmpH6020AbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH6020CaiQiangCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos __attribute__((swift_name("makeExtBytes(bytes:pos:)")));
@property int8_t direction __attribute__((swift_name("direction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020CaiQiang.Companion")))
@interface SharedKmpH6020CaiQiangCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020CaiQiangCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6020CaiQiang *)makeDef __attribute__((swift_name("makeDef()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH6020CaiQiang * _Nullable)parseDetails:(SharedKotlinByteArray *)details error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parse(details:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020CellGraffitiDataNewProtocol")))
@interface SharedKmpH6020CellGraffitiDataNewProtocol : SharedKmpCellGraffitiDataNewProtocol
- (instancetype)initWithDefDuration:(int32_t)defDuration triple:(SharedKotlinTriple<SharedInt *, SharedInt *, SharedInt *> *)triple __attribute__((swift_name("init(defDuration:triple:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKmpH6020CellGraffitiDataNewProtocolCompanion *companion __attribute__((swift_name("companion")));
- (SharedKotlinByteArray *)getByteData __attribute__((swift_name("getByteData()")));
- (BOOL)parseByteEffectByte:(SharedKotlinByteArray *)effectByte defDuration:(int32_t)defDuration __attribute__((swift_name("parseByte(effectByte:defDuration:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020CellGraffitiDataNewProtocol.Companion")))
@interface SharedKmpH6020CellGraffitiDataNewProtocolCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020CellGraffitiDataNewProtocolCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6020CellGraffitiDataNewProtocol *)makeDef __attribute__((swift_name("makeDef()")));
- (SharedKmpH6020CellGraffitiDataNewProtocol * _Nullable)parseDetails:(SharedKotlinByteArray *)details __attribute__((swift_name("parse(details:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020DangYang")))
@interface SharedKmpH6020DangYang : SharedKmpH6020AbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH6020DangYangCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos __attribute__((swift_name("makeExtBytes(bytes:pos:)")));
@property int8_t direction __attribute__((swift_name("direction")));
@property int8_t lineWidth __attribute__((swift_name("lineWidth")));
@property int8_t shape __attribute__((swift_name("shape")));
@property BOOL switch4Gradient __attribute__((swift_name("switch4Gradient")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020DangYang.Companion")))
@interface SharedKmpH6020DangYangCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020DangYangCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6020DangYang *)makeDef __attribute__((swift_name("makeDef()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH6020DangYang * _Nullable)parseDetails:(SharedKotlinByteArray *)details error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parse(details:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020DuiJi4ShangXia")))
@interface SharedKmpH6020DuiJi4ShangXia : SharedKmpH6020AbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH6020DuiJi4ShangXiaCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos __attribute__((swift_name("makeExtBytes(bytes:pos:)")));
@property int8_t direction __attribute__((swift_name("direction")));
@property int8_t lineWidth __attribute__((swift_name("lineWidth")));
@property BOOL switch4Gradient __attribute__((swift_name("switch4Gradient")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020DuiJi4ShangXia.Companion")))
@interface SharedKmpH6020DuiJi4ShangXiaCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020DuiJi4ShangXiaCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6020DuiJi4ShangXia *)makeDef __attribute__((swift_name("makeDef()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH6020DuiJi4ShangXia * _Nullable)parseDetails:(SharedKotlinByteArray *)details error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parse(details:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020DuiJi4XingZhuang")))
@interface SharedKmpH6020DuiJi4XingZhuang : SharedKmpH6020AbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH6020DuiJi4XingZhuangCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos __attribute__((swift_name("makeExtBytes(bytes:pos:)")));
@property int8_t direction __attribute__((swift_name("direction")));
@property int8_t lineWidth __attribute__((swift_name("lineWidth")));
@property int8_t shape __attribute__((swift_name("shape")));
@property BOOL switch4Gradient __attribute__((swift_name("switch4Gradient")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020DuiJi4XingZhuang.Companion")))
@interface SharedKmpH6020DuiJi4XingZhuangCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020DuiJi4XingZhuangCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6020DuiJi4XingZhuang *)makeDef __attribute__((swift_name("makeDef()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH6020DuiJi4XingZhuang * _Nullable)parseDetails:(SharedKotlinByteArray *)details error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parse(details:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020HuXi")))
@interface SharedKmpH6020HuXi : SharedKmpH6020AbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH6020HuXiCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos __attribute__((swift_name("makeExtBytes(bytes:pos:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020HuXi.Companion")))
@interface SharedKmpH6020HuXiCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020HuXiCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6020HuXi *)makeDef __attribute__((swift_name("makeDef()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH6020HuXi * _Nullable)parseDetails:(SharedKotlinByteArray *)details error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parse(details:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020HuoYan")))
@interface SharedKmpH6020HuoYan : SharedKmpH6020AbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH6020HuoYanCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos __attribute__((swift_name("makeExtBytes(bytes:pos:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020HuoYan.Companion")))
@interface SharedKmpH6020HuoYanCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020HuoYanCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6020HuoYan *)makeDef __attribute__((swift_name("makeDef()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH6020HuoYan * _Nullable)parseDetails:(SharedKotlinByteArray *)details error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parse(details:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020JianBian")))
@interface SharedKmpH6020JianBian : SharedKmpH6020AbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH6020JianBianCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos __attribute__((swift_name("makeExtBytes(bytes:pos:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020JianBian.Companion")))
@interface SharedKmpH6020JianBianCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020JianBianCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6020JianBian *)makeDef __attribute__((swift_name("makeDef()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH6020JianBian * _Nullable)parseDetails:(SharedKotlinByteArray *)details error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parse(details:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020JiaoTi4ShangXia")))
@interface SharedKmpH6020JiaoTi4ShangXia : SharedKmpH6020AbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH6020JiaoTi4ShangXiaCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos __attribute__((swift_name("makeExtBytes(bytes:pos:)")));
@property int8_t direction __attribute__((swift_name("direction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020JiaoTi4ShangXia.Companion")))
@interface SharedKmpH6020JiaoTi4ShangXiaCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020JiaoTi4ShangXiaCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6020JiaoTi4ShangXia *)makeDef __attribute__((swift_name("makeDef()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH6020JiaoTi4ShangXia * _Nullable)parseDetails:(SharedKotlinByteArray *)details error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parse(details:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020JiaoTi4XingZhuang")))
@interface SharedKmpH6020JiaoTi4XingZhuang : SharedKmpH6020AbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH6020JiaoTi4XingZhuangCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos __attribute__((swift_name("makeExtBytes(bytes:pos:)")));
@property int8_t direction __attribute__((swift_name("direction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020JiaoTi4XingZhuang.Companion")))
@interface SharedKmpH6020JiaoTi4XingZhuangCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020JiaoTi4XingZhuangCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6020JiaoTi4XingZhuang *)makeDef __attribute__((swift_name("makeDef()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH6020JiaoTi4XingZhuang * _Nullable)parseDetails:(SharedKotlinByteArray *)details error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parse(details:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020LayerPaintingData")))
@interface SharedKmpH6020LayerPaintingData : SharedKmpLayerBase
- (instancetype)initWithGraffitiType:(int8_t)graffitiType durationTime:(int32_t)durationTime pngBytes:(SharedKotlinByteArray *)pngBytes color4Paint:(int32_t)color4Paint __attribute__((swift_name("init(graffitiType:durationTime:pngBytes:color4Paint:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithGraffitiType:(int8_t)graffitiType defDuration:(int32_t)defDuration __attribute__((swift_name("init(graffitiType:defDuration:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedKmpH6020LayerPaintingData *)doCopy __attribute__((swift_name("doCopy()")));
- (NSArray<SharedInt *> *)getColorList __attribute__((swift_name("getColorList()")));
- (SharedKotlinByteArray *)getLayerDataOffsetH:(float)offsetH __attribute__((swift_name("getLayerData(offsetH:)")));
- (int32_t)getPaintColor __attribute__((swift_name("getPaintColor()")));
- (BOOL)haveData __attribute__((swift_name("haveData()")));
- (BOOL)setLayerDataData:(SharedKotlinByteArray *)data startIndex:(int32_t)startIndex length:(int32_t)length __attribute__((swift_name("setLayerData(data:startIndex:length:)")));
@property int32_t color4Paint __attribute__((swift_name("color4Paint")));
@property int32_t durationTime __attribute__((swift_name("durationTime")));
@property SharedKotlinByteArray *pngBytes __attribute__((swift_name("pngBytes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020LayersInfo")))
@interface SharedKmpH6020LayersInfo : SharedKmpLayersInfo
- (instancetype)initWithDefDuration:(int32_t)defDuration layers:(NSMutableArray<SharedKmpLayerBase *> *)layers curPage:(int32_t)curPage maxSize:(int32_t)maxSize __attribute__((swift_name("init(defDuration:layers:curPage:maxSize:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKmpH6020LayersInfoCompanion *companion __attribute__((swift_name("companion")));
- (void)addLayerDefDuration:(int32_t)defDuration isAllLayer:(BOOL)isAllLayer __attribute__((swift_name("addLayer(defDuration:isAllLayer:)")));
- (void)deleteCurLayerDuration:(int32_t)duration __attribute__((swift_name("deleteCurLayer(duration:)")));
- (SharedKmpLayerBase *)getCurLayerDefDuration:(int32_t)defDuration __attribute__((swift_name("getCurLayer(defDuration:)")));
- (SharedKmpLayerBase *)getLayer4IndexIndex:(int32_t)index __attribute__((swift_name("getLayer4Index(index:)")));
- (int32_t)parseLayersBytes:(SharedKotlinByteArray *)bytes indexStart:(int32_t)indexStart __attribute__((swift_name("parseLayers(bytes:indexStart:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020LayersInfo.Companion")))
@interface SharedKmpH6020LayersInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020LayersInfoCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int8_t TYPE_GRAFFITI_ALL __attribute__((swift_name("TYPE_GRAFFITI_ALL")));
@property (readonly) int8_t TYPE_GRAFFITI_BASE __attribute__((swift_name("TYPE_GRAFFITI_BASE")));
@property (readonly) int8_t TYPE_GRAFFITI_BODY __attribute__((swift_name("TYPE_GRAFFITI_BODY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020LianYi")))
@interface SharedKmpH6020LianYi : SharedKmpH6020AbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH6020LianYiCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos __attribute__((swift_name("makeExtBytes(bytes:pos:)")));
@property int32_t bgColor __attribute__((swift_name("bgColor")));
@property int8_t circleNum __attribute__((swift_name("circleNum")));
@property int8_t circleWidth __attribute__((swift_name("circleWidth")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020LianYi.Companion")))
@interface SharedKmpH6020LianYiCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020LianYiCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6020LianYi *)makeDef __attribute__((swift_name("makeDef()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH6020LianYi * _Nullable)parseDetails:(SharedKotlinByteArray *)details error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parse(details:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020MengHuan")))
@interface SharedKmpH6020MengHuan : SharedKmpH6020AbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH6020MengHuanCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos __attribute__((swift_name("makeExtBytes(bytes:pos:)")));
@property int8_t direction __attribute__((swift_name("direction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020MengHuan.Companion")))
@interface SharedKmpH6020MengHuanCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020MengHuanCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6020MengHuan *)makeDef __attribute__((swift_name("makeDef()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH6020MengHuan * _Nullable)parseDetails:(SharedKotlinByteArray *)details error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parse(details:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020Protocol")))
@interface SharedKmpH6020Protocol : SharedBase <SharedIKmpProtocol>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpH6020ProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<SharedByte *> * _Nullable)bytes __attribute__((swift_name("bytes()")));
- (SharedKmpToneColorListInfo *)getToneColors __attribute__((swift_name("getToneColors()")));
- (void)resetColor __attribute__((swift_name("resetColor()")));
- (void)updateColorH:(float)h __attribute__((swift_name("updateColor(h:)")));
- (void)updateDirectionDirectionOrIndex:(SharedInt * _Nullable)directionOrIndex config:(NSString * _Nullable)config __attribute__((swift_name("updateDirection(directionOrIndex:config:)")));
- (void)updateSpeedSpeedOrIndex:(SharedInt * _Nullable)speedOrIndex config:(NSString * _Nullable)config __attribute__((swift_name("updateSpeed(speedOrIndex:config:)")));
@property SharedKmpH6020CaiHong * _Nullable caiHong __attribute__((swift_name("caiHong")));
@property SharedKmpH6020CaiQiang * _Nullable caiQiang __attribute__((swift_name("caiQiang")));
@property SharedKmpH6020DangYang * _Nullable dangYang __attribute__((swift_name("dangYang")));
@property SharedKmpH6020DuiJi4ShangXia * _Nullable duiJi4ShangXia __attribute__((swift_name("duiJi4ShangXia")));
@property SharedKmpH6020DuiJi4XingZhuang * _Nullable duiJi4XingZhuang __attribute__((swift_name("duiJi4XingZhuang")));
@property SharedByte * _Nullable firstByte __attribute__((swift_name("firstByte")));
@property SharedKmpH6020HuXi * _Nullable huXi __attribute__((swift_name("huXi")));
@property SharedKmpH6020HuoYan * _Nullable huoYan __attribute__((swift_name("huoYan")));
@property SharedKmpH6020JianBian * _Nullable jianBian __attribute__((swift_name("jianBian")));
@property SharedKmpH6020JiaoTi4ShangXia * _Nullable jiaoTi4ShangXia __attribute__((swift_name("jiaoTi4ShangXia")));
@property SharedKmpH6020JiaoTi4XingZhuang * _Nullable jiaoTi4XingZhuang __attribute__((swift_name("jiaoTi4XingZhuang")));
@property SharedKmpH6020LianYi * _Nullable lianYi __attribute__((swift_name("lianYi")));
@property SharedKmpH6020MengHuan * _Nullable mengHuan __attribute__((swift_name("mengHuan")));
@property SharedKmpH6020ShenSuo4ShangXia * _Nullable shenSuo4ShangXia __attribute__((swift_name("shenSuo4ShangXia")));
@property SharedKmpH6020ShenSuo4XingZhuang * _Nullable shenSuo4XingZhuang __attribute__((swift_name("shenSuo4XingZhuang")));
@property (readonly) int8_t subEffect __attribute__((swift_name("subEffect")));
@property SharedKmpH6020TanChiShe * _Nullable tanChiShe __attribute__((swift_name("tanChiShe")));
@property SharedKmpH6020TanTiaoQiu * _Nullable tanTiaoQiu __attribute__((swift_name("tanTiaoQiu")));
@property SharedKmpH6020TiaoWen * _Nullable tiaoWen __attribute__((swift_name("tiaoWen")));
@property SharedKmpH6020CellGraffitiDataNewProtocol * _Nullable tuya __attribute__((swift_name("tuya")));
@property SharedKmpH6020XiaoXiaoLe * _Nullable xiaoXiaoLe __attribute__((swift_name("xiaoXiaoLe")));
@property SharedKmpH6020YanHua * _Nullable yanHua __attribute__((swift_name("yanHua")));
@property SharedKmpH6020YueDong * _Nullable yueDong __attribute__((swift_name("yueDong")));
@property SharedKmpH6020YunRan * _Nullable yunRan __attribute__((swift_name("yunRan")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020Protocol.Companion")))
@interface SharedKmpH6020ProtocolCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020ProtocolCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpSceneConfigInfo * _Nullable)getSceneConfigInfoConfig:(NSString * _Nullable)config __attribute__((swift_name("getSceneConfigInfo(config:)")));
- (SharedKmpH6020Protocol * _Nullable)parseBytesBytes:(SharedKotlinByteArray *)bytes __attribute__((swift_name("parseBytes(bytes:)")));
@property (readonly) int8_t direction_kuo_shan __attribute__((swift_name("direction_kuo_shan")));
@property (readonly) int8_t direction_shang __attribute__((swift_name("direction_shang")));
@property (readonly) int8_t direction_shu_xiang __attribute__((swift_name("direction_shu_xiang")));
@property (readonly) int8_t shape_circle __attribute__((swift_name("shape_circle")));
@property (readonly) int8_t sub_effect_caiHong __attribute__((swift_name("sub_effect_caiHong")));
@property (readonly) int8_t sub_effect_caiQiang __attribute__((swift_name("sub_effect_caiQiang")));
@property (readonly) int8_t sub_effect_dangYang __attribute__((swift_name("sub_effect_dangYang")));
@property (readonly) int8_t sub_effect_duiJi4ShangXia __attribute__((swift_name("sub_effect_duiJi4ShangXia")));
@property (readonly) int8_t sub_effect_duiJi4XingZhuang __attribute__((swift_name("sub_effect_duiJi4XingZhuang")));
@property (readonly) int8_t sub_effect_huXi __attribute__((swift_name("sub_effect_huXi")));
@property (readonly) int8_t sub_effect_huoYan __attribute__((swift_name("sub_effect_huoYan")));
@property (readonly) int8_t sub_effect_jianBian __attribute__((swift_name("sub_effect_jianBian")));
@property (readonly) int8_t sub_effect_jiaoTi4ShangXia __attribute__((swift_name("sub_effect_jiaoTi4ShangXia")));
@property (readonly) int8_t sub_effect_jiaoTi4XingZhuang __attribute__((swift_name("sub_effect_jiaoTi4XingZhuang")));
@property (readonly) int8_t sub_effect_lianYi __attribute__((swift_name("sub_effect_lianYi")));
@property (readonly) int8_t sub_effect_mengHuan __attribute__((swift_name("sub_effect_mengHuan")));
@property (readonly) int8_t sub_effect_shenSuo4ShangXia __attribute__((swift_name("sub_effect_shenSuo4ShangXia")));
@property (readonly) int8_t sub_effect_shenSuo4XingZhuang __attribute__((swift_name("sub_effect_shenSuo4XingZhuang")));
@property (readonly) int8_t sub_effect_tanChiShe __attribute__((swift_name("sub_effect_tanChiShe")));
@property (readonly) int8_t sub_effect_tanTiaoQiu __attribute__((swift_name("sub_effect_tanTiaoQiu")));
@property (readonly) int8_t sub_effect_tiaoWen __attribute__((swift_name("sub_effect_tiaoWen")));
@property (readonly) int8_t sub_effect_tuya __attribute__((swift_name("sub_effect_tuya")));
@property (readonly) int8_t sub_effect_xiaoXiaoLe __attribute__((swift_name("sub_effect_xiaoXiaoLe")));
@property (readonly) int8_t sub_effect_yanHua __attribute__((swift_name("sub_effect_yanHua")));
@property (readonly) int8_t sub_effect_yueDong __attribute__((swift_name("sub_effect_yueDong")));
@property (readonly) int8_t sub_effect_yunRan __attribute__((swift_name("sub_effect_yunRan")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020ShenSuo4ShangXia")))
@interface SharedKmpH6020ShenSuo4ShangXia : SharedKmpH6020AbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH6020ShenSuo4ShangXiaCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos __attribute__((swift_name("makeExtBytes(bytes:pos:)")));
@property int8_t direction __attribute__((swift_name("direction")));
@property BOOL switch4Gradient __attribute__((swift_name("switch4Gradient")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020ShenSuo4ShangXia.Companion")))
@interface SharedKmpH6020ShenSuo4ShangXiaCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020ShenSuo4ShangXiaCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6020ShenSuo4ShangXia *)makeDef __attribute__((swift_name("makeDef()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH6020ShenSuo4ShangXia * _Nullable)parseDetails:(SharedKotlinByteArray *)details error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parse(details:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020ShenSuo4XingZhuang")))
@interface SharedKmpH6020ShenSuo4XingZhuang : SharedKmpH6020AbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH6020ShenSuo4XingZhuangCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos __attribute__((swift_name("makeExtBytes(bytes:pos:)")));
@property (readonly) SharedKotlinByteArray *basePoint __attribute__((swift_name("basePoint")));
@property int8_t direction __attribute__((swift_name("direction")));
@property int8_t shape __attribute__((swift_name("shape")));
@property BOOL switch4Gradient __attribute__((swift_name("switch4Gradient")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020ShenSuo4XingZhuang.Companion")))
@interface SharedKmpH6020ShenSuo4XingZhuangCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020ShenSuo4XingZhuangCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6020ShenSuo4XingZhuang *)makeDef __attribute__((swift_name("makeDef()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH6020ShenSuo4XingZhuang * _Nullable)parseDetails:(SharedKotlinByteArray *)details error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parse(details:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020TanChiShe")))
@interface SharedKmpH6020TanChiShe : SharedKmpH6020AbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH6020TanChiSheCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos __attribute__((swift_name("makeExtBytes(bytes:pos:)")));
@property int8_t beans __attribute__((swift_name("beans")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020TanChiShe.Companion")))
@interface SharedKmpH6020TanChiSheCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020TanChiSheCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6020TanChiShe *)makeDef __attribute__((swift_name("makeDef()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH6020TanChiShe * _Nullable)parseDetails:(SharedKotlinByteArray *)details error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parse(details:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020TanTiaoQiu")))
@interface SharedKmpH6020TanTiaoQiu : SharedKmpH6020AbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH6020TanTiaoQiuCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos __attribute__((swift_name("makeExtBytes(bytes:pos:)")));
@property int8_t ballNum __attribute__((swift_name("ballNum")));
@property int8_t ballRadius __attribute__((swift_name("ballRadius")));
@property BOOL switch4TuoWei __attribute__((swift_name("switch4TuoWei")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020TanTiaoQiu.Companion")))
@interface SharedKmpH6020TanTiaoQiuCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020TanTiaoQiuCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6020TanTiaoQiu *)makeDef __attribute__((swift_name("makeDef()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH6020TanTiaoQiu * _Nullable)parseDetails:(SharedKotlinByteArray *)details error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parse(details:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020TiaoWen")))
@interface SharedKmpH6020TiaoWen : SharedKmpH6020AbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH6020TiaoWenCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos __attribute__((swift_name("makeExtBytes(bytes:pos:)")));
@property int8_t direction __attribute__((swift_name("direction")));
@property int8_t interval __attribute__((swift_name("interval")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020TiaoWen.Companion")))
@interface SharedKmpH6020TiaoWenCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020TiaoWenCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6020TiaoWen *)makeDef __attribute__((swift_name("makeDef()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH6020TiaoWen * _Nullable)parseDetails:(SharedKotlinByteArray *)details error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parse(details:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020XiaoXiaoLe")))
@interface SharedKmpH6020XiaoXiaoLe : SharedKmpH6020AbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH6020XiaoXiaoLeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos __attribute__((swift_name("makeExtBytes(bytes:pos:)")));
@property int8_t shapeSize __attribute__((swift_name("shapeSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020XiaoXiaoLe.Companion")))
@interface SharedKmpH6020XiaoXiaoLeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020XiaoXiaoLeCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6020XiaoXiaoLe *)makeDef __attribute__((swift_name("makeDef()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH6020XiaoXiaoLe * _Nullable)parseDetails:(SharedKotlinByteArray *)details error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parse(details:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020YanHua")))
@interface SharedKmpH6020YanHua : SharedKmpH6020AbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH6020YanHuaCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos __attribute__((swift_name("makeExtBytes(bytes:pos:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020YanHua.Companion")))
@interface SharedKmpH6020YanHuaCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020YanHuaCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6020YanHua *)makeDef __attribute__((swift_name("makeDef()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH6020YanHua * _Nullable)parseDetails:(SharedKotlinByteArray *)details error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parse(details:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020YueDong")))
@interface SharedKmpH6020YueDong : SharedKmpH6020AbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH6020YueDongCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos __attribute__((swift_name("makeExtBytes(bytes:pos:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020YueDong.Companion")))
@interface SharedKmpH6020YueDongCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020YueDongCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6020YueDong *)makeDef __attribute__((swift_name("makeDef()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH6020YueDong * _Nullable)parseDetails:(SharedKotlinByteArray *)details error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parse(details:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020YunRan")))
@interface SharedKmpH6020YunRan : SharedKmpH6020AbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH6020YunRanCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos __attribute__((swift_name("makeExtBytes(bytes:pos:)")));
@property int8_t direction __attribute__((swift_name("direction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6020YunRan.Companion")))
@interface SharedKmpH6020YunRanCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6020YunRanCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6020YunRan *)makeDef __attribute__((swift_name("makeDef()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH6020YunRan * _Nullable)parseDetails:(SharedKotlinByteArray *)details error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parse(details:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6063PageEffect")))
@interface SharedKmpH6063PageEffect : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpH6063PageEffectCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)changeActionEffectModeAction:(int32_t)action __attribute__((swift_name("changeActionEffectMode(action:)")));
- (NSMutableArray<SharedInt *> *)getColors __attribute__((swift_name("getColors()")));
- (NSMutableArray<SharedByte *> *)toBytesPos:(int32_t)pos msg:(void (^ _Nullable)(NSString *))msg __attribute__((swift_name("toBytes(pos:msg:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)updateColorOffsetHOffsetH:(float)offsetH __attribute__((swift_name("updateColorOffsetH(offsetH:)")));
@property int32_t actionEffect __attribute__((swift_name("actionEffect")));
@property int32_t area __attribute__((swift_name("area")));
@property int32_t direction __attribute__((swift_name("direction")));
@property BOOL isAdd __attribute__((swift_name("isAdd")));
@property SharedLayerPointMsg *layerPointMsg __attribute__((swift_name("layerPointMsg")));
@property int32_t layerPriority __attribute__((swift_name("layerPriority")));
@property int8_t layerSpeed __attribute__((swift_name("layerSpeed")));
@property SharedKmpH61DXAbsSub * _Nullable subEffect __attribute__((swift_name("subEffect")));
@property SharedKmpH6063SubEffectFlickering * _Nullable subEffect4Flickering __attribute__((swift_name("subEffect4Flickering")));
@property SharedKmpH6063SubEffectFlow * _Nullable subEffect4LiuDong __attribute__((swift_name("subEffect4LiuDong")));
@property SharedKmpH6063SubEffectStretch * _Nullable subEffect4Stretch __attribute__((swift_name("subEffect4Stretch")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6063PageEffect.Companion")))
@interface SharedKmpH6063PageEffectCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6063PageEffectCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6063PageEffect *)doCopyPageEffect:(SharedKmpH6063PageEffect *)pageEffect __attribute__((swift_name("doCopy(pageEffect:)")));
- (SharedKmpH6063PageEffect * _Nullable)parseEffectValue:(SharedKotlinByteArray *)effectValue __attribute__((swift_name("parse(effectValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6063Protocol")))
@interface SharedKmpH6063Protocol : SharedAbsKmpProtocol
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpH6063ProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<SharedByte *> *)bytes __attribute__((swift_name("bytes()")));
- (SharedKmpToneColorListInfo *)getToneColors __attribute__((swift_name("getToneColors()")));
- (void)resetColor __attribute__((swift_name("resetColor()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)updateColorH:(float)h __attribute__((swift_name("updateColor(h:)")));
- (void)updateDirectionDirectionOrIndex:(SharedInt * _Nullable)directionOrIndex config:(NSString * _Nullable)config __attribute__((swift_name("updateDirection(directionOrIndex:config:)")));
- (void)updateSpeedSpeed:(int32_t)speed __attribute__((swift_name("updateSpeed(speed:)")));
- (void)updateSpeedSpeedOrIndex:(SharedInt * _Nullable)speedOrIndex config:(NSString * _Nullable)config __attribute__((swift_name("updateSpeed(speedOrIndex:config:)")));
@property SharedKotlinPair<SharedInt *, SharedKmpH6063PageEffect *> * _Nullable curPage __attribute__((swift_name("curPage")));
@property (readonly) NSMutableArray<SharedKmpH6063PageEffect *> *pageEffects __attribute__((swift_name("pageEffects")));
@property int8_t speedGradient __attribute__((swift_name("speedGradient")));
@property BOOL switchGradient __attribute__((swift_name("switchGradient")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6063Protocol.Companion")))
@interface SharedKmpH6063ProtocolCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6063ProtocolCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6063Protocol * _Nullable)parseBytesProtocolsBytes:(SharedKotlinByteArray *)protocolsBytes __attribute__((swift_name("parseBytes(protocolsBytes:)")));
@end

__attribute__((swift_name("KmpH61DXAbsSub")))
@interface SharedKmpH61DXAbsSub : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)changeDirectionDirection:(int8_t)direction __attribute__((swift_name("changeDirection(direction:)")));
- (NSMutableArray<SharedInt *> *)getCurColors __attribute__((swift_name("getCurColors()")));
- (NSMutableArray<SharedByte *> * _Nullable)toBytesPos:(int32_t)pos msg:(void (^ _Nullable)(NSString *))msg __attribute__((swift_name("toBytes(pos:msg:)")));
- (void)updateColorOffsetHOffsetH:(float)offsetH __attribute__((swift_name("updateColorOffsetH(offsetH:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property float offsetH __attribute__((swift_name("offsetH")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6063SubEffectFlickering")))
@interface SharedKmpH6063SubEffectFlickering : SharedKmpH61DXAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpH6063SubEffectFlickeringCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<SharedInt *> *)getCurColors __attribute__((swift_name("getCurColors()")));
- (NSMutableArray<SharedByte *> * _Nullable)toBytesPos:(int32_t)pos msg:(void (^ _Nullable)(NSString *))msg __attribute__((swift_name("toBytes(pos:msg:)")));
@property int32_t bgColorBrightnesses __attribute__((swift_name("bgColorBrightnesses")));
@property int32_t bgColorGradientLen __attribute__((swift_name("bgColorGradientLen")));
@property NSMutableArray<SharedInt *> *bgColors __attribute__((swift_name("bgColors")));
@property int8_t brightnessType __attribute__((swift_name("brightnessType")));
@property SharedKotlinIntArray *brightnesses __attribute__((swift_name("brightnesses")));
@property NSMutableArray<SharedInt *> *colors __attribute__((swift_name("colors")));
@property SharedKotlinByteArray *flickerType __attribute__((swift_name("flickerType")));
@property SharedKotlinIntArray *flickeringBlockRange __attribute__((swift_name("flickeringBlockRange")));
@property int32_t flickeringNum __attribute__((swift_name("flickeringNum")));
@property BOOL locationRandom __attribute__((swift_name("locationRandom")));
@property int32_t quSeRandom __attribute__((swift_name("quSeRandom")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6063SubEffectFlickering.Companion")))
@interface SharedKmpH6063SubEffectFlickeringCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6063SubEffectFlickeringCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6063SubEffectFlickering * _Nullable)parseActionBytes:(SharedKotlinByteArray *)actionBytes __attribute__((swift_name("parse(actionBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6063SubEffectFlow")))
@interface SharedKmpH6063SubEffectFlow : SharedKmpH61DXAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpH6063SubEffectFlowCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<SharedInt *> *)getCurColors __attribute__((swift_name("getCurColors()")));
- (int32_t)quSeBuChang __attribute__((swift_name("quSeBuChang()")));
- (NSMutableArray<SharedByte *> * _Nullable)toBytesPos:(int32_t)pos msg:(void (^ _Nullable)(NSString *))msg __attribute__((swift_name("toBytes(pos:msg:)")));
@property SharedKotlinByteArray *brightnesses __attribute__((swift_name("brightnesses")));
@property NSMutableArray<SharedInt *> *colors __attribute__((swift_name("colors")));
@property int32_t insertBlackNum __attribute__((swift_name("insertBlackNum")));
@property SharedKotlinByteArray *liuDongDirection __attribute__((swift_name("liuDongDirection")));
@property int8_t liuDongStyle __attribute__((swift_name("liuDongStyle")));
@property BOOL puMan __attribute__((swift_name("puMan")));
@property SharedKotlinByteArray *quSeStyle __attribute__((swift_name("quSeStyle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6063SubEffectFlow.Companion")))
@interface SharedKmpH6063SubEffectFlowCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6063SubEffectFlowCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6063SubEffectFlow * _Nullable)parseActionBytes:(SharedKotlinByteArray *)actionBytes __attribute__((swift_name("parse(actionBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6063SubEffectStretch")))
@interface SharedKmpH6063SubEffectStretch : SharedKmpH61DXAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpH6063SubEffectStretchCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<SharedInt *> *)getCurColors __attribute__((swift_name("getCurColors()")));
- (NSMutableArray<SharedByte *> * _Nullable)toBytesPos:(int32_t)pos msg:(void (^ _Nullable)(NSString *))msg __attribute__((swift_name("toBytes(pos:msg:)")));
@property int32_t basicPointNum __attribute__((swift_name("basicPointNum")));
@property BOOL basicPointSwitch __attribute__((swift_name("basicPointSwitch")));
@property SharedKotlinByteArray *brightnesses __attribute__((swift_name("brightnesses")));
@property NSMutableArray<SharedInt *> *colors __attribute__((swift_name("colors")));
@property int32_t effectDirection __attribute__((swift_name("effectDirection")));
@property SharedKotlinByteArray *quSeStyle __attribute__((swift_name("quSeStyle")));
@property BOOL randomSwitch __attribute__((swift_name("randomSwitch")));
@property int32_t startOffset __attribute__((swift_name("startOffset")));
@property BOOL stretchType __attribute__((swift_name("stretchType")));
@property int32_t stretchTypeOffset __attribute__((swift_name("stretchTypeOffset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6063SubEffectStretch.Companion")))
@interface SharedKmpH6063SubEffectStretchCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6063SubEffectStretchCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6063SubEffectStretch * _Nullable)parseActionBytes:(SharedKotlinByteArray *)actionBytes __attribute__((swift_name("parse(actionBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LayerPointMsg")))
@interface SharedLayerPointMsg : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)parseDirection:(int32_t)direction bytes:(SharedKotlinByteArray *)bytes __attribute__((swift_name("parse(direction:bytes:)")));
- (SharedKotlinByteArray *)toBytesDirection:(int32_t)direction __attribute__((swift_name("toBytes(direction:)")));
@property int32_t lineCenter __attribute__((swift_name("lineCenter")));
@property int32_t lineStrip __attribute__((swift_name("lineStrip")));
@property int32_t overallCenter __attribute__((swift_name("overallCenter")));
@property int32_t x __attribute__((swift_name("x")));
@property int32_t y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH61DXPageEffect")))
@interface SharedKmpH61DXPageEffect : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpH61DXPageEffectCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)changeActionEffectMode __attribute__((swift_name("changeActionEffectMode()")));
- (void)changeDirectionDirection:(int8_t)direction __attribute__((swift_name("changeDirection(direction:)")));
- (NSMutableArray<SharedInt *> *)getColors __attribute__((swift_name("getColors()")));
- (NSMutableArray<SharedByte *> * _Nullable)toBytesPos:(int32_t)pos msg:(void (^ _Nullable)(NSString *))msg __attribute__((swift_name("toBytes(pos:msg:)")));
- (void)updateColorOffsetHOffsetH:(float)offsetH __attribute__((swift_name("updateColorOffsetH(offsetH:)")));
@property int8_t actionEffect __attribute__((swift_name("actionEffect")));
@property SharedKmpH61DXAbsSub * _Nullable iProMsg __attribute__((swift_name("iProMsg")));
@property BOOL isAdd __attribute__((swift_name("isAdd")));
@property int8_t speed __attribute__((swift_name("speed")));
@property SharedKmpH61DXSubEffect4DuiJi * _Nullable subEffect4DuiJi __attribute__((swift_name("subEffect4DuiJi")));
@property SharedKmpH61DXSubEffect4JiHe * _Nullable subEffect4JiHe __attribute__((swift_name("subEffect4JiHe")));
@property SharedKmpH61DXSubEffect4LiuDong * _Nullable subEffect4LiuDong __attribute__((swift_name("subEffect4LiuDong")));
@property SharedKmpH61DXSubEffect4SuiJi * _Nullable subEffect4SuiJi __attribute__((swift_name("subEffect4SuiJi")));
@property SharedKmpH61DXSubEffect4XianXing * _Nullable subEffect4XianXing __attribute__((swift_name("subEffect4XianXing")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH61DXPageEffect.Companion")))
@interface SharedKmpH61DXPageEffectCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH61DXPageEffectCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH61DXPageEffect * _Nullable)parseEffectValue:(SharedKotlinByteArray *)effectValue __attribute__((swift_name("parse(effectValue:)")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH61DXProtocol")))
@interface SharedKmpH61DXProtocol : SharedAbsKmpProtocol
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpH61DXProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<SharedByte *> *)bytes __attribute__((swift_name("bytes()")));
- (SharedKmpToneColorListInfo *)getToneColors __attribute__((swift_name("getToneColors()")));
- (void)resetColor __attribute__((swift_name("resetColor()")));
- (void)updateColorH:(float)h __attribute__((swift_name("updateColor(h:)")));
- (void)updateDirectionDirectionOrIndex:(SharedInt * _Nullable)directionOrIndex config:(NSString * _Nullable)config __attribute__((swift_name("updateDirection(directionOrIndex:config:)")));
- (void)updateSpeedSpeedOrIndex:(SharedInt * _Nullable)speedOrIndex config:(NSString * _Nullable)config __attribute__((swift_name("updateSpeed(speedOrIndex:config:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH61DXProtocol.Companion")))
@interface SharedKmpH61DXProtocolCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH61DXProtocolCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpSceneConfigInfo * _Nullable)getSceneConfigInfoConfig:(NSString * _Nullable)config __attribute__((swift_name("getSceneConfigInfo(config:)")));
- (SharedKmpH61DXProtocol * _Nullable)parseBytesEffectBytes:(SharedKotlinByteArray *)effectBytes __attribute__((swift_name("parseBytes(effectBytes:)")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property (readonly) int8_t pro_direction_jvlong __attribute__((swift_name("pro_direction_jvlong")));
@property (readonly) int8_t pro_direction_jvlong_shangxia __attribute__((swift_name("pro_direction_jvlong_shangxia")));
@property (readonly) int8_t pro_direction_jvlong_zuoyou __attribute__((swift_name("pro_direction_jvlong_zuoyou")));
@property (readonly) int8_t pro_direction_kuosan __attribute__((swift_name("pro_direction_kuosan")));
@property (readonly) int8_t pro_direction_kuosan_shangxia __attribute__((swift_name("pro_direction_kuosan_shangxia")));
@property (readonly) int8_t pro_direction_kuosan_zuoyou __attribute__((swift_name("pro_direction_kuosan_zuoyou")));
@property (readonly) int8_t pro_direction_nishizhen __attribute__((swift_name("pro_direction_nishizhen")));
@property (readonly) int8_t pro_direction_shang __attribute__((swift_name("pro_direction_shang")));
@property (readonly) int8_t pro_direction_shunshizhen __attribute__((swift_name("pro_direction_shunshizhen")));
@property (readonly) int8_t pro_direction_xia __attribute__((swift_name("pro_direction_xia")));
@property (readonly) int8_t pro_direction_xian_nishizhen __attribute__((swift_name("pro_direction_xian_nishizhen")));
@property (readonly) int8_t pro_direction_xian_shunshizhen __attribute__((swift_name("pro_direction_xian_shunshizhen")));
@property (readonly) int8_t pro_direction_you __attribute__((swift_name("pro_direction_you")));
@property (readonly) int8_t pro_direction_zuo __attribute__((swift_name("pro_direction_zuo")));
@property (readonly) int8_t rule_4_dieJia __attribute__((swift_name("rule_4_dieJia")));
@property (readonly) int8_t sub_effect_4_duiJi __attribute__((swift_name("sub_effect_4_duiJi")));
@property (readonly) int8_t sub_effect_4_jihe __attribute__((swift_name("sub_effect_4_jihe")));
@property (readonly) int8_t sub_effect_4_liuDong __attribute__((swift_name("sub_effect_4_liuDong")));
@property (readonly) int8_t sub_effect_4_suiJi __attribute__((swift_name("sub_effect_4_suiJi")));
@property (readonly) int8_t sub_effect_4_xianxing __attribute__((swift_name("sub_effect_4_xianxing")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH61DXSubEffect4DuiJi")))
@interface SharedKmpH61DXSubEffect4DuiJi : SharedKmpH61DXAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpH61DXSubEffect4DuiJiCompanion *companion __attribute__((swift_name("companion")));
- (void)changeDirectionDirection:(int8_t)direction __attribute__((swift_name("changeDirection(direction:)")));
- (NSMutableArray<SharedInt *> *)getCurColors __attribute__((swift_name("getCurColors()")));
- (NSMutableArray<SharedByte *> *)toBytesPos:(int32_t)pos msg:(void (^ _Nullable)(NSString *))msg __attribute__((swift_name("toBytes(pos:msg:)")));
- (void)updateDirectionDirection:(int8_t)direction effectType:(int8_t)effectType __attribute__((swift_name("updateDirection(direction:effectType:)")));
@property int32_t colorPieceNum __attribute__((swift_name("colorPieceNum")));
@property (readonly) NSMutableArray<SharedInt *> *colors __attribute__((swift_name("colors")));
@property int8_t direction __attribute__((swift_name("direction")));
@property int8_t effectType __attribute__((swift_name("effectType")));
@property SharedKotlinByteArray *fgValidValue __attribute__((swift_name("fgValidValue")));
@property int32_t pieceNum __attribute__((swift_name("pieceNum")));
@property SharedKotlinByteArray *sfValidValue __attribute__((swift_name("sfValidValue")));
@property int8_t subEffect __attribute__((swift_name("subEffect")));
@property SharedKotlinByteArray *xxlValidValue __attribute__((swift_name("xxlValidValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH61DXSubEffect4DuiJi.Companion")))
@interface SharedKmpH61DXSubEffect4DuiJiCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH61DXSubEffect4DuiJiCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH61DXSubEffect4DuiJi * _Nullable)parseEffectValue:(SharedKotlinByteArray *)effectValue __attribute__((swift_name("parse(effectValue:)")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property (readonly) int8_t color_type_zhengDuan __attribute__((swift_name("color_type_zhengDuan")));
@property (readonly) int8_t direction_start __attribute__((swift_name("direction_start")));
@property (readonly) int8_t effect_type_xianXing __attribute__((swift_name("effect_type_xianXing")));
@property (readonly) int8_t sub_effect_fuGai __attribute__((swift_name("sub_effect_fuGai")));
@property (readonly) int8_t sub_effect_shiFang __attribute__((swift_name("sub_effect_shiFang")));
@property (readonly) int8_t sub_effect_xiaoxiaole __attribute__((swift_name("sub_effect_xiaoxiaole")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH61DXSubEffect4JiHe")))
@interface SharedKmpH61DXSubEffect4JiHe : SharedKmpH61DXAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpH61DXSubEffect4JiHeCompanion *companion __attribute__((swift_name("companion")));
- (void)changeDirectionDirection:(int8_t)direction __attribute__((swift_name("changeDirection(direction:)")));
- (NSMutableArray<SharedInt *> *)getCurColors __attribute__((swift_name("getCurColors()")));
- (NSMutableArray<SharedByte *> *)toBytesPos:(int32_t)pos msg:(void (^ _Nullable)(NSString *))msg __attribute__((swift_name("toBytes(pos:msg:)")));
- (void)updateDirectionDirection:(int8_t)direction effectType:(int8_t)effectType __attribute__((swift_name("updateDirection(direction:effectType:)")));
@property BOOL colorGradual __attribute__((swift_name("colorGradual")));
@property (readonly) SharedKotlinIntArray *colorRangeArray __attribute__((swift_name("colorRangeArray")));
@property (readonly) NSMutableArray<SharedInt *> *colors __attribute__((swift_name("colors")));
@property int8_t direction __attribute__((swift_name("direction")));
@property int8_t effectType __attribute__((swift_name("effectType")));
@property BOOL entryAndExitEnable __attribute__((swift_name("entryAndExitEnable")));
@property SharedKotlinByteArray *hgValidValue __attribute__((swift_name("hgValidValue")));
@property int32_t pieceNum __attribute__((swift_name("pieceNum")));
@property int8_t subEffect __attribute__((swift_name("subEffect")));
@property (readonly) SharedKotlinIntArray *xzColorRangeArray __attribute__((swift_name("xzColorRangeArray")));
@property SharedKotlinByteArray *xzValidValue __attribute__((swift_name("xzValidValue")));
@property SharedKotlinByteArray *yxValidValue __attribute__((swift_name("yxValidValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH61DXSubEffect4JiHe.Companion")))
@interface SharedKmpH61DXSubEffect4JiHeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH61DXSubEffect4JiHeCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH61DXSubEffect4JiHe * _Nullable)parseEffectValue:(SharedKotlinByteArray *)effectValue __attribute__((swift_name("parse(effectValue:)")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property (readonly) int8_t centerPointCenter __attribute__((swift_name("centerPointCenter")));
@property (readonly) int8_t centerPointLeftTop __attribute__((swift_name("centerPointLeftTop")));
@property (readonly) int8_t effectDirectionKuosan __attribute__((swift_name("effectDirectionKuosan")));
@property (readonly) int8_t effectDirectionShun __attribute__((swift_name("effectDirectionShun")));
@property (readonly) int8_t sub_effect_huoguang __attribute__((swift_name("sub_effect_huoguang")));
@property (readonly) int8_t sub_effect_xuanzhuan __attribute__((swift_name("sub_effect_xuanzhuan")));
@property (readonly) int8_t sub_effect_yuanxing __attribute__((swift_name("sub_effect_yuanxing")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH61DXSubEffect4LiuDong")))
@interface SharedKmpH61DXSubEffect4LiuDong : SharedKmpH61DXAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpH61DXSubEffect4LiuDongCompanion *companion __attribute__((swift_name("companion")));
- (void)brightnessHighChangeValue:(int32_t)value __attribute__((swift_name("brightnessHighChange(value:)")));
- (void)brightnessLowChangeValue:(int32_t)value __attribute__((swift_name("brightnessLowChange(value:)")));
- (void)changeDirectionDirection:(int8_t)direction __attribute__((swift_name("changeDirection(direction:)")));
- (NSMutableArray<SharedInt *> *)getCurColors __attribute__((swift_name("getCurColors()")));
- (NSMutableArray<SharedByte *> * _Nullable)toBytesPos:(int32_t)pos msg:(void (^ _Nullable)(NSString *))msg __attribute__((swift_name("toBytes(pos:msg:)")));
@property (readonly) SharedKotlinIntArray *blockNumRang __attribute__((swift_name("blockNumRang")));
@property int8_t brightnessGradualType __attribute__((swift_name("brightnessGradualType")));
@property BOOL colorGradual __attribute__((swift_name("colorGradual")));
@property int8_t colorType __attribute__((swift_name("colorType")));
@property NSMutableArray<SharedInt *> * _Nullable colors __attribute__((swift_name("colors")));
@property int8_t direction __attribute__((swift_name("direction")));
@property int8_t effectType __attribute__((swift_name("effectType")));
@property BOOL entryAndExitEnable __attribute__((swift_name("entryAndExitEnable")));
@property int32_t pieceNum __attribute__((swift_name("pieceNum")));
@property (readonly) SharedKotlinIntArray *range4Brightness __attribute__((swift_name("range4Brightness")));
@property int8_t subEffect __attribute__((swift_name("subEffect")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH61DXSubEffect4LiuDong.Companion")))
@interface SharedKmpH61DXSubEffect4LiuDongCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH61DXSubEffect4LiuDongCompanion *shared __attribute__((swift_name("shared")));
- (SharedKotlinPair<SharedByte *, SharedByte *> *)changeDirectionSubEffect:(int8_t)subEffect __attribute__((swift_name("changeDirection(subEffect:)")));
- (SharedKmpH61DXSubEffect4LiuDong * _Nullable)parseEffectValue:(SharedKotlinByteArray *)effectValue __attribute__((swift_name("parse(effectValue:)")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property (readonly) int8_t brightness_gradual_type_piece __attribute__((swift_name("brightness_gradual_type_piece")));
@property (readonly) int8_t color_type_zhengDuan __attribute__((swift_name("color_type_zhengDuan")));
@property (readonly) int8_t direction_effect_not_support __attribute__((swift_name("direction_effect_not_support")));
@property (readonly) int8_t direction_hor __attribute__((swift_name("direction_hor")));
@property (readonly) int8_t direction_ver __attribute__((swift_name("direction_ver")));
@property (readonly) int8_t end_point __attribute__((swift_name("end_point")));
@property (readonly) int8_t ju_long __attribute__((swift_name("ju_long")));
@property (readonly) int8_t kuo_san __attribute__((swift_name("kuo_san")));
@property (readonly) int8_t liuDong_sub_effect_dieJia __attribute__((swift_name("liuDong_sub_effect_dieJia")));
@property (readonly) int8_t liuDong_sub_effect_fanFu __attribute__((swift_name("liuDong_sub_effect_fanFu")));
@property (readonly) int8_t liuDong_sub_effect_gunDong __attribute__((swift_name("liuDong_sub_effect_gunDong")));
@property (readonly) int8_t liuDong_sub_effect_yaoBai __attribute__((swift_name("liuDong_sub_effect_yaoBai")));
@property (readonly) int8_t mian_jvlong __attribute__((swift_name("mian_jvlong")));
@property (readonly) int8_t mian_kuosan __attribute__((swift_name("mian_kuosan")));
@property (readonly) int8_t nishizhen __attribute__((swift_name("nishizhen")));
@property (readonly) int32_t pro_brightness_change_style_changLiang __attribute__((swift_name("pro_brightness_change_style_changLiang")));
@property (readonly) int32_t pro_brightness_change_style_custom __attribute__((swift_name("pro_brightness_change_style_custom")));
@property (readonly) int8_t shunshizhen __attribute__((swift_name("shunshizhen")));
@property (readonly) int8_t start_point __attribute__((swift_name("start_point")));
@property (readonly) int8_t xian_nishizhen __attribute__((swift_name("xian_nishizhen")));
@property (readonly) int8_t xian_shunshizhen __attribute__((swift_name("xian_shunshizhen")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH61DXSubEffect4SuiJi")))
@interface SharedKmpH61DXSubEffect4SuiJi : SharedKmpH61DXAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpH61DXSubEffect4SuiJiCompanion *companion __attribute__((swift_name("companion")));
- (void)bgColorChangedRgbBytes:(SharedKotlinIntArray *)rgbBytes __attribute__((swift_name("bgColorChanged(rgbBytes:)")));
- (void)colorChangedRgbBytes:(SharedKotlinIntArray *)rgbBytes __attribute__((swift_name("colorChanged(rgbBytes:)")));
- (NSMutableArray<SharedInt *> *)getCurColors __attribute__((swift_name("getCurColors()")));
- (NSMutableArray<SharedByte *> * _Nullable)toBytesPos:(int32_t)pos msg:(void (^ _Nullable)(NSString *))msg __attribute__((swift_name("toBytes(pos:msg:)")));
@property int32_t bgColor __attribute__((swift_name("bgColor")));
@property BOOL colorGradual __attribute__((swift_name("colorGradual")));
@property BOOL colorPartSwitch __attribute__((swift_name("colorPartSwitch")));
@property (readonly) NSMutableArray<SharedInt *> *colors __attribute__((swift_name("colors")));
@property SharedKotlinByteArray *dieJia4SuiJiRange __attribute__((swift_name("dieJia4SuiJiRange")));
@property int8_t direction __attribute__((swift_name("direction")));
@property int32_t pieceNum __attribute__((swift_name("pieceNum")));
@property int8_t subEffect __attribute__((swift_name("subEffect")));
@property SharedKotlinByteArray *yueDong4ShanSuoRange __attribute__((swift_name("yueDong4ShanSuoRange")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH61DXSubEffect4SuiJi.Companion")))
@interface SharedKmpH61DXSubEffect4SuiJiCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH61DXSubEffect4SuiJiCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH61DXSubEffect4SuiJi * _Nullable)parseEffectValue:(SharedKotlinByteArray *)effectValue __attribute__((swift_name("parse(effectValue:)")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property (readonly) int8_t direction_zuo2You __attribute__((swift_name("direction_zuo2You")));
@property (readonly) int8_t effect_type_xianXing __attribute__((swift_name("effect_type_xianXing")));
@property (readonly) int8_t sub_effect_caiHui __attribute__((swift_name("sub_effect_caiHui")));
@property (readonly) int8_t sub_effect_dieJia __attribute__((swift_name("sub_effect_dieJia")));
@property (readonly) int8_t sub_effect_pingPu __attribute__((swift_name("sub_effect_pingPu")));
@property (readonly) int8_t sub_effect_yueDong __attribute__((swift_name("sub_effect_yueDong")));
@property (readonly) int8_t sub_effect_zhanFang __attribute__((swift_name("sub_effect_zhanFang")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH61DXSubEffect4XianXing")))
@interface SharedKmpH61DXSubEffect4XianXing : SharedKmpH61DXAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpH61DXSubEffect4XianXingCompanion *companion __attribute__((swift_name("companion")));
- (void)changeDirectionDirection:(int8_t)direction __attribute__((swift_name("changeDirection(direction:)")));
- (NSMutableArray<SharedInt *> *)getCurColors __attribute__((swift_name("getCurColors()")));
- (NSMutableArray<SharedByte *> *)toBytesPos:(int32_t)pos msg:(void (^ _Nullable)(NSString *))msg __attribute__((swift_name("toBytes(pos:msg:)")));
- (void)updateDirectionDirection:(int8_t)direction __attribute__((swift_name("updateDirection(direction:)")));
@property int8_t colorDisplayModel __attribute__((swift_name("colorDisplayModel")));
@property BOOL colorGradual __attribute__((swift_name("colorGradual")));
@property (readonly) NSMutableArray<SharedInt *> *colors __attribute__((swift_name("colors")));
@property int8_t direction __attribute__((swift_name("direction")));
@property int8_t effectType __attribute__((swift_name("effectType")));
@property BOOL entryAndExitEnable __attribute__((swift_name("entryAndExitEnable")));
@property int32_t meteorsNum __attribute__((swift_name("meteorsNum")));
@property int8_t subEffect __attribute__((swift_name("subEffect")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH61DXSubEffect4XianXing.Companion")))
@interface SharedKmpH61DXSubEffect4XianXingCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH61DXSubEffect4XianXingCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH61DXSubEffect4XianXing * _Nullable)parseEffectValue:(SharedKotlinByteArray *)effectValue __attribute__((swift_name("parse(effectValue:)")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property (readonly) int8_t color_type_zhengDuan __attribute__((swift_name("color_type_zhengDuan")));
@property (readonly) int8_t effectDirectionNi __attribute__((swift_name("effectDirectionNi")));
@property (readonly) int8_t meteorsNum_single __attribute__((swift_name("meteorsNum_single")));
@property (readonly) int8_t sub_effect_caihong __attribute__((swift_name("sub_effect_caihong")));
@property (readonly) int8_t sub_effect_danrudanchu __attribute__((swift_name("sub_effect_danrudanchu")));
@property (readonly) int8_t sub_effect_huxi __attribute__((swift_name("sub_effect_huxi")));
@property (readonly) int8_t sub_effect_liuxing __attribute__((swift_name("sub_effect_liuxing")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6630GraffitiProtocol")))
@interface SharedKmpH6630GraffitiProtocol : SharedBase <SharedIKmpProtocol>
@property (class, readonly, getter=companion) SharedKmpH6630GraffitiProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<SharedByte *> * _Nullable)bytes __attribute__((swift_name("bytes()")));
- (SharedKmpToneColorListInfo *)getToneColors __attribute__((swift_name("getToneColors()")));
- (void)resetColor __attribute__((swift_name("resetColor()")));
- (void)updateColorH:(float)h __attribute__((swift_name("updateColor(h:)")));
- (void)updateDirectionDirectionOrIndex:(SharedInt * _Nullable)directionOrIndex config:(NSString * _Nullable)config __attribute__((swift_name("updateDirection(directionOrIndex:config:)")));
- (void)updateSpeedSpeedOrIndex:(SharedInt * _Nullable)speedOrIndex config:(NSString * _Nullable)config __attribute__((swift_name("updateSpeed(speedOrIndex:config:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6630GraffitiProtocol.Companion")))
@interface SharedKmpH6630GraffitiProtocolCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6630GraffitiProtocolCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6630GraffitiProtocol * _Nullable)parseBytesEffectBytes:(SharedKotlinByteArray *)effectBytes __attribute__((swift_name("parseBytes(effectBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6630Protocol")))
@interface SharedKmpH6630Protocol : SharedAbsKmpProtocol
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH6630ProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<SharedByte *> * _Nullable)bytes __attribute__((swift_name("bytes()")));
- (SharedKmpToneColorListInfo *)getToneColors __attribute__((swift_name("getToneColors()")));
- (void)updateDirectionDirectionOrIndex:(SharedInt * _Nullable)directionOrIndex config:(NSString * _Nullable)config __attribute__((swift_name("updateDirection(directionOrIndex:config:)")));
- (void)updateSpeedSpeedOrIndex:(SharedInt * _Nullable)speedOrIndex config:(NSString * _Nullable)config __attribute__((swift_name("updateSpeed(speedOrIndex:config:)")));
@property SharedKmpH663XXuanZhuan4BoBanTang * _Nullable boBanTang __attribute__((swift_name("boBanTang")));
@property SharedKmpH663XBoDong4BoFeng * _Nullable boFeng __attribute__((swift_name("boFeng")));
@property SharedKmpH663XYunRan4CaiQiang * _Nullable caiQiang __attribute__((swift_name("caiQiang")));
@property SharedKmpH663XXuanZhuan4DaFengChe * _Nullable daFengChe __attribute__((swift_name("daFengChe")));
@property SharedKmpH663XLiuDong4DieJia * _Nullable dieJia __attribute__((swift_name("dieJia")));
@property SharedKmpH663XYunRan4FuGai * _Nullable fuGai __attribute__((swift_name("fuGai")));
@property SharedKmpH663XXianXing4PenShe * _Nullable penShe __attribute__((swift_name("penShe")));
@property int8_t secondSubEffect __attribute__((swift_name("secondSubEffect")));
@property SharedKmpH663XLiuDong4ShenSuo * _Nullable shenSuo __attribute__((swift_name("shenSuo")));
@property SharedKmpH663XBoDong4ShuangLuoXuan * _Nullable shuangLuoXuan __attribute__((swift_name("shuangLuoXuan")));
@property int8_t subEffect __attribute__((swift_name("subEffect")));
@property SharedKmpH663XSuiJi4TanChiShe * _Nullable tanChiShe __attribute__((swift_name("tanChiShe")));
@property SharedKmpH663XSuiJi4TanTiaoQiu * _Nullable tanTiaoQiu __attribute__((swift_name("tanTiaoQiu")));
@property SharedKmpH663XXianXing4TianChong * _Nullable tianChong __attribute__((swift_name("tianChong")));
@property SharedKmpH663XXianXing4XiangSu * _Nullable xiangSu __attribute__((swift_name("xiangSu")));
@property SharedKmpH663XSuiJi4XiaoXiaoLe * _Nullable xiaoXiaoLe __attribute__((swift_name("xiaoXiaoLe")));
@property SharedKmpH663XSuiJi4YanHua * _Nullable yanHua __attribute__((swift_name("yanHua")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH6630Protocol.Companion")))
@interface SharedKmpH6630ProtocolCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH6630ProtocolCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH6630Protocol * _Nullable)parseBytesBytes:(SharedKotlinByteArray *)bytes __attribute__((swift_name("parseBytes(bytes:)")));
@end

__attribute__((swift_name("KmpH663XAbsSub")))
@interface SharedKmpH663XAbsSub : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSMutableArray<SharedByte *> * _Nullable)bytesPos:(int32_t)pos msg:(void (^)(NSString *))msg __attribute__((swift_name("bytes(pos:msg:)")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos msg:(void (^)(NSString *))msg __attribute__((swift_name("makeExtBytes(bytes:pos:msg:)")));
- (int32_t)minColorSize __attribute__((swift_name("minColorSize()")));
- (void)updateColorHH:(SharedFloat * _Nullable)h __attribute__((swift_name("updateColorH(h:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property (readonly) NSMutableArray<SharedInt *> *colors __attribute__((swift_name("colors")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XBoDong4BoFeng")))
@interface SharedKmpH663XBoDong4BoFeng : SharedKmpH663XAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH663XBoDong4BoFengCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos msg:(void (^)(NSString *))msg __attribute__((swift_name("makeExtBytes(bytes:pos:msg:)")));
- (int32_t)minColorSize __attribute__((swift_name("minColorSize()")));
@property int8_t gaoDu __attribute__((swift_name("gaoDu")));
@property int8_t pinLv __attribute__((swift_name("pinLv")));
@property int8_t speed __attribute__((swift_name("speed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XBoDong4BoFeng.Companion")))
@interface SharedKmpH663XBoDong4BoFengCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH663XBoDong4BoFengCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH663XBoDong4BoFeng * _Nullable)parseBytesBytes:(SharedKotlinByteArray *)bytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseBytes(bytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XBoDong4ShuangLuoXuan")))
@interface SharedKmpH663XBoDong4ShuangLuoXuan : SharedKmpH663XAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH663XBoDong4ShuangLuoXuanCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos msg:(void (^)(NSString *))msg __attribute__((swift_name("makeExtBytes(bytes:pos:msg:)")));
- (int32_t)minColorSize __attribute__((swift_name("minColorSize()")));
@property int8_t pinLv __attribute__((swift_name("pinLv")));
@property int8_t speed __attribute__((swift_name("speed")));
@property int8_t tuoWei __attribute__((swift_name("tuoWei")));
@property int8_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XBoDong4ShuangLuoXuan.Companion")))
@interface SharedKmpH663XBoDong4ShuangLuoXuanCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH663XBoDong4ShuangLuoXuanCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH663XBoDong4ShuangLuoXuan * _Nullable)parseBytesBytes:(SharedKotlinByteArray *)bytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseBytes(bytes:)")));
@property (readonly) int8_t tuo_wei_open __attribute__((swift_name("tuo_wei_open")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XDirectionConfig")))
@interface SharedKmpH663XDirectionConfig : SharedBase
@property (class, readonly, getter=companion) SharedKmpH663XDirectionConfigCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XDirectionConfig.Companion")))
@interface SharedKmpH663XDirectionConfigCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH663XDirectionConfigCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int8_t direction_juLongKuoSan __attribute__((swift_name("direction_juLongKuoSan")));
@property (readonly) int8_t direction_shang __attribute__((swift_name("direction_shang")));
@property (readonly) int8_t direction_zongXiangDaoYou __attribute__((swift_name("direction_zongXiangDaoYou")));
@property (readonly) int8_t direction_zongXiangKuoSan __attribute__((swift_name("direction_zongXiangKuoSan")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XJuLongKuoSanConfig")))
@interface SharedKmpH663XJuLongKuoSanConfig : SharedBase
@property (class, readonly, getter=companion) SharedKmpH663XJuLongKuoSanConfigCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XJuLongKuoSanConfig.Companion")))
@interface SharedKmpH663XJuLongKuoSanConfigCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH663XJuLongKuoSanConfigCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int8_t shape_position_center __attribute__((swift_name("shape_position_center")));
@property (readonly) int8_t shape_position_zuoShangJiao __attribute__((swift_name("shape_position_zuoShangJiao")));
@property (readonly) int8_t shape_yuanXing __attribute__((swift_name("shape_yuanXing")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XLiuDong4DieJia")))
@interface SharedKmpH663XLiuDong4DieJia : SharedKmpH663XAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH663XLiuDong4DieJiaCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos msg:(void (^)(NSString *))msg __attribute__((swift_name("makeExtBytes(bytes:pos:msg:)")));
- (int32_t)minColorSize __attribute__((swift_name("minColorSize()")));
@property int8_t colorPieceLen __attribute__((swift_name("colorPieceLen")));
@property int8_t direction __attribute__((swift_name("direction")));
@property int8_t shape __attribute__((swift_name("shape")));
@property int8_t shapePosition __attribute__((swift_name("shapePosition")));
@property int8_t speed __attribute__((swift_name("speed")));
@property BOOL switch4Gradual __attribute__((swift_name("switch4Gradual")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XLiuDong4DieJia.Companion")))
@interface SharedKmpH663XLiuDong4DieJiaCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH663XLiuDong4DieJiaCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH663XLiuDong4DieJia * _Nullable)parseBytesBytes:(SharedKotlinByteArray *)bytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseBytes(bytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XLiuDong4ShenSuo")))
@interface SharedKmpH663XLiuDong4ShenSuo : SharedKmpH663XAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH663XLiuDong4ShenSuoCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos msg:(void (^)(NSString *))msg __attribute__((swift_name("makeExtBytes(bytes:pos:msg:)")));
- (int32_t)minColorSize __attribute__((swift_name("minColorSize()")));
@property int8_t direction __attribute__((swift_name("direction")));
@property int8_t shape __attribute__((swift_name("shape")));
@property int8_t shapePosition __attribute__((swift_name("shapePosition")));
@property int8_t speed __attribute__((swift_name("speed")));
@property BOOL switch4BrightnessGradual __attribute__((swift_name("switch4BrightnessGradual")));
@property BOOL switch4Random __attribute__((swift_name("switch4Random")));
@property BOOL switch4XuanZhuan __attribute__((swift_name("switch4XuanZhuan")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XLiuDong4ShenSuo.Companion")))
@interface SharedKmpH663XLiuDong4ShenSuoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH663XLiuDong4ShenSuoCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH663XLiuDong4ShenSuo * _Nullable)parseBytesBytes:(SharedKotlinByteArray *)bytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseBytes(bytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XProtocolHelper")))
@interface SharedKmpH663XProtocolHelper : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kmpH663XProtocolHelper __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH663XProtocolHelper *shared __attribute__((swift_name("shared")));
- (id<SharedIKmpProtocol> _Nullable)parseBytesEffectBytes:(SharedKotlinByteArray *)effectBytes __attribute__((swift_name("parseBytes(effectBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XSuiJi4TanChiShe")))
@interface SharedKmpH663XSuiJi4TanChiShe : SharedKmpH663XAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH663XSuiJi4TanChiSheCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos msg:(void (^)(NSString *))msg __attribute__((swift_name("makeExtBytes(bytes:pos:msg:)")));
- (int32_t)minColorSize __attribute__((swift_name("minColorSize()")));
@property int8_t douZiSize __attribute__((swift_name("douZiSize")));
@property int8_t speed __attribute__((swift_name("speed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XSuiJi4TanChiShe.Companion")))
@interface SharedKmpH663XSuiJi4TanChiSheCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH663XSuiJi4TanChiSheCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH663XSuiJi4TanChiShe * _Nullable)parseBytesBytes:(SharedKotlinByteArray *)bytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseBytes(bytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XSuiJi4TanTiaoQiu")))
@interface SharedKmpH663XSuiJi4TanTiaoQiu : SharedKmpH663XAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH663XSuiJi4TanTiaoQiuCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos msg:(void (^)(NSString *))msg __attribute__((swift_name("makeExtBytes(bytes:pos:msg:)")));
- (int32_t)minColorSize __attribute__((swift_name("minColorSize()")));
@property int8_t biLi __attribute__((swift_name("biLi")));
@property int8_t speed __attribute__((swift_name("speed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XSuiJi4TanTiaoQiu.Companion")))
@interface SharedKmpH663XSuiJi4TanTiaoQiuCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH663XSuiJi4TanTiaoQiuCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH663XSuiJi4TanTiaoQiu * _Nullable)parseBytesBytes:(SharedKotlinByteArray *)bytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseBytes(bytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XSuiJi4XiaoXiaoLe")))
@interface SharedKmpH663XSuiJi4XiaoXiaoLe : SharedKmpH663XAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH663XSuiJi4XiaoXiaoLeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos msg:(void (^)(NSString *))msg __attribute__((swift_name("makeExtBytes(bytes:pos:msg:)")));
- (int32_t)minColorSize __attribute__((swift_name("minColorSize()")));
@property int8_t duJiSize __attribute__((swift_name("duJiSize")));
@property int8_t speed __attribute__((swift_name("speed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XSuiJi4XiaoXiaoLe.Companion")))
@interface SharedKmpH663XSuiJi4XiaoXiaoLeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH663XSuiJi4XiaoXiaoLeCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH663XSuiJi4XiaoXiaoLe * _Nullable)parseBytesBytes:(SharedKotlinByteArray *)bytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseBytes(bytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XSuiJi4YanHua")))
@interface SharedKmpH663XSuiJi4YanHua : SharedKmpH663XAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH663XSuiJi4YanHuaCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos msg:(void (^)(NSString *))msg __attribute__((swift_name("makeExtBytes(bytes:pos:msg:)")));
- (int32_t)minColorSize __attribute__((swift_name("minColorSize()")));
@property int32_t bgColor __attribute__((swift_name("bgColor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XSuiJi4YanHua.Companion")))
@interface SharedKmpH663XSuiJi4YanHuaCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH663XSuiJi4YanHuaCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH663XSuiJi4YanHua * _Nullable)parseBytesBytes:(SharedKotlinByteArray *)bytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseBytes(bytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XXianXing4PenShe")))
@interface SharedKmpH663XXianXing4PenShe : SharedKmpH663XAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH663XXianXing4PenSheCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos msg:(void (^)(NSString *))msg __attribute__((swift_name("makeExtBytes(bytes:pos:msg:)")));
- (int32_t)minColorSize __attribute__((swift_name("minColorSize()")));
@property int8_t colorPieceLen __attribute__((swift_name("colorPieceLen")));
@property int8_t direction __attribute__((swift_name("direction")));
@property int8_t speed __attribute__((swift_name("speed")));
@property BOOL switch4ChuRuChang __attribute__((swift_name("switch4ChuRuChang")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XXianXing4PenShe.Companion")))
@interface SharedKmpH663XXianXing4PenSheCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH663XXianXing4PenSheCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH663XXianXing4PenShe * _Nullable)parseBytesBytes:(SharedKotlinByteArray *)bytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseBytes(bytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XXianXing4TianChong")))
@interface SharedKmpH663XXianXing4TianChong : SharedKmpH663XAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH663XXianXing4TianChongCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos msg:(void (^)(NSString *))msg __attribute__((swift_name("makeExtBytes(bytes:pos:msg:)")));
- (int32_t)minColorSize __attribute__((swift_name("minColorSize()")));
@property int8_t direction __attribute__((swift_name("direction")));
@property int8_t speed __attribute__((swift_name("speed")));
@property BOOL switch4BrightnessGradual __attribute__((swift_name("switch4BrightnessGradual")));
@property BOOL switch4ChuRuChang __attribute__((swift_name("switch4ChuRuChang")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XXianXing4TianChong.Companion")))
@interface SharedKmpH663XXianXing4TianChongCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH663XXianXing4TianChongCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH663XXianXing4TianChong * _Nullable)parseBytesBytes:(SharedKotlinByteArray *)bytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseBytes(bytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XXianXing4XiangSu")))
@interface SharedKmpH663XXianXing4XiangSu : SharedKmpH663XAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH663XXianXing4XiangSuCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos msg:(void (^)(NSString *))msg __attribute__((swift_name("makeExtBytes(bytes:pos:msg:)")));
- (int32_t)minColorSize __attribute__((swift_name("minColorSize()")));
@property int8_t colorPieceLen __attribute__((swift_name("colorPieceLen")));
@property int8_t direction __attribute__((swift_name("direction")));
@property int8_t gradualEffect __attribute__((swift_name("gradualEffect")));
@property int8_t speed __attribute__((swift_name("speed")));
@property BOOL switch4ChuRuChang __attribute__((swift_name("switch4ChuRuChang")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XXianXing4XiangSu.Companion")))
@interface SharedKmpH663XXianXing4XiangSuCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH663XXianXing4XiangSuCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH663XXianXing4XiangSu * _Nullable)parseBytesBytes:(SharedKotlinByteArray *)bytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseBytes(bytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XXuanZhuan4BoBanTang")))
@interface SharedKmpH663XXuanZhuan4BoBanTang : SharedKmpH663XAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH663XXuanZhuan4BoBanTangCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos msg:(void (^)(NSString *))msg __attribute__((swift_name("makeExtBytes(bytes:pos:msg:)")));
- (int32_t)minColorSize __attribute__((swift_name("minColorSize()")));
@property int8_t piece __attribute__((swift_name("piece")));
@property int8_t speed __attribute__((swift_name("speed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XXuanZhuan4BoBanTang.Companion")))
@interface SharedKmpH663XXuanZhuan4BoBanTangCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH663XXuanZhuan4BoBanTangCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH663XXuanZhuan4BoBanTang * _Nullable)parseBytesBytes:(SharedKotlinByteArray *)bytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseBytes(bytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XXuanZhuan4DaFengChe")))
@interface SharedKmpH663XXuanZhuan4DaFengChe : SharedKmpH663XAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH663XXuanZhuan4DaFengCheCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos msg:(void (^)(NSString *))msg __attribute__((swift_name("makeExtBytes(bytes:pos:msg:)")));
- (int32_t)minColorSize __attribute__((swift_name("minColorSize()")));
@property int8_t piece __attribute__((swift_name("piece")));
@property int8_t position __attribute__((swift_name("position")));
@property int8_t speed __attribute__((swift_name("speed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XXuanZhuan4DaFengChe.Companion")))
@interface SharedKmpH663XXuanZhuan4DaFengCheCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH663XXuanZhuan4DaFengCheCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH663XXuanZhuan4DaFengChe * _Nullable)parseBytesBytes:(SharedKotlinByteArray *)bytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseBytes(bytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XYunRan4CaiQiang")))
@interface SharedKmpH663XYunRan4CaiQiang : SharedKmpH663XAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH663XYunRan4CaiQiangCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos msg:(void (^)(NSString *))msg __attribute__((swift_name("makeExtBytes(bytes:pos:msg:)")));
- (int32_t)minColorSize __attribute__((swift_name("minColorSize()")));
@property int8_t speed __attribute__((swift_name("speed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XYunRan4CaiQiang.Companion")))
@interface SharedKmpH663XYunRan4CaiQiangCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH663XYunRan4CaiQiangCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH663XYunRan4CaiQiang *)parseBytesBytes:(SharedKotlinByteArray *)bytes __attribute__((swift_name("parseBytes(bytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XYunRan4FuGai")))
@interface SharedKmpH663XYunRan4FuGai : SharedKmpH663XAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH663XYunRan4FuGaiCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)makeExtBytesBytes:(NSMutableArray<SharedByte *> *)bytes pos:(int32_t)pos msg:(void (^)(NSString *))msg __attribute__((swift_name("makeExtBytes(bytes:pos:msg:)")));
- (int32_t)minColorSize __attribute__((swift_name("minColorSize()")));
@property int8_t direction __attribute__((swift_name("direction")));
@property int8_t speed __attribute__((swift_name("speed")));
@property BOOL switch4XuanCai __attribute__((swift_name("switch4XuanCai")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH663XYunRan4FuGai.Companion")))
@interface SharedKmpH663XYunRan4FuGaiCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH663XYunRan4FuGaiCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH663XYunRan4FuGai * _Nullable)parseBytesBytes:(SharedKotlinByteArray *)bytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseBytes(bytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXBrightnessConfig")))
@interface SharedKmpH70CXBrightnessConfig : SharedBase
@property (class, readonly, getter=companion) SharedKmpH70CXBrightnessConfigCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXBrightnessConfig.Companion")))
@interface SharedKmpH70CXBrightnessConfigCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH70CXBrightnessConfigCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int8_t brightness_type_diGao __attribute__((swift_name("brightness_type_diGao")));
@property (readonly) int8_t brightness_type_diGaoDi __attribute__((swift_name("brightness_type_diGaoDi")));
@property (readonly) int8_t brightness_type_gaoDi __attribute__((swift_name("brightness_type_gaoDi")));
@property (readonly) int8_t brightness_type_gaoDiGao __attribute__((swift_name("brightness_type_gaoDiGao")));
@property (readonly) int8_t brightness_type_tongYi __attribute__((swift_name("brightness_type_tongYi")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXDirectionConfig")))
@interface SharedKmpH70CXDirectionConfig : SharedBase
@property (class, readonly, getter=companion) SharedKmpH70CXDirectionConfigCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXDirectionConfig.Companion")))
@interface SharedKmpH70CXDirectionConfigCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH70CXDirectionConfigCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int8_t direction_hengXiang_fanFangXiangJuLong __attribute__((swift_name("direction_hengXiang_fanFangXiangJuLong")));
@property (readonly) int8_t direction_hengXiang_fanFangXiangKuoSan __attribute__((swift_name("direction_hengXiang_fanFangXiangKuoSan")));
@property (readonly) int8_t direction_hengXiang_tongFangXiang __attribute__((swift_name("direction_hengXiang_tongFangXiang")));
@property (readonly) int8_t direction_kuoSan __attribute__((swift_name("direction_kuoSan")));
@property (readonly) int8_t direction_niShiZhen __attribute__((swift_name("direction_niShiZhen")));
@property (readonly) int8_t direction_niShiZhen2Shang __attribute__((swift_name("direction_niShiZhen2Shang")));
@property (readonly) int8_t direction_niShiZhen2Xia __attribute__((swift_name("direction_niShiZhen2Xia")));
@property (readonly) int8_t direction_shang __attribute__((swift_name("direction_shang")));
@property (readonly) int8_t direction_shangXiaJuLong __attribute__((swift_name("direction_shangXiaJuLong")));
@property (readonly) int8_t direction_shangXiaKuoSan __attribute__((swift_name("direction_shangXiaKuoSan")));
@property (readonly) int8_t direction_shouSuo __attribute__((swift_name("direction_shouSuo")));
@property (readonly) int8_t direction_shunShiZhen __attribute__((swift_name("direction_shunShiZhen")));
@property (readonly) int8_t direction_shunShiZhen2Shang __attribute__((swift_name("direction_shunShiZhen2Shang")));
@property (readonly) int8_t direction_shunShiZhen2Xia __attribute__((swift_name("direction_shunShiZhen2Xia")));
@property (readonly) int8_t direction_xia __attribute__((swift_name("direction_xia")));
@property (readonly) int8_t direction_you __attribute__((swift_name("direction_you")));
@property (readonly) int8_t direction_youShang __attribute__((swift_name("direction_youShang")));
@property (readonly) int8_t direction_youXia __attribute__((swift_name("direction_youXia")));
@property (readonly) int8_t direction_zongXiang_fanFangXiangJuLong __attribute__((swift_name("direction_zongXiang_fanFangXiangJuLong")));
@property (readonly) int8_t direction_zongXiang_fanFangXiangKuoSan __attribute__((swift_name("direction_zongXiang_fanFangXiangKuoSan")));
@property (readonly) int8_t direction_zongXiang_tongFangXiang __attribute__((swift_name("direction_zongXiang_tongFangXiang")));
@property (readonly) int8_t direction_zuo __attribute__((swift_name("direction_zuo")));
@property (readonly) int8_t direction_zuoShang __attribute__((swift_name("direction_zuoShang")));
@property (readonly) int8_t direction_zuoXia __attribute__((swift_name("direction_zuoXia")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXJiDianConfig")))
@interface SharedKmpH70CXJiDianConfig : SharedBase
@property (class, readonly, getter=companion) SharedKmpH70CXJiDianConfigCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXJiDianConfig.Companion")))
@interface SharedKmpH70CXJiDianConfigCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH70CXJiDianConfigCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int8_t JI_DIAN_CENTER __attribute__((swift_name("JI_DIAN_CENTER")));
@property (readonly) int8_t JI_DIAN_SELF __attribute__((swift_name("JI_DIAN_SELF")));
@property (readonly) int8_t JI_DIAN_YOU_XIA __attribute__((swift_name("JI_DIAN_YOU_XIA")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXProtocol")))
@interface SharedKmpH70CXProtocol : SharedBase <SharedIKmpProtocol>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpH70CXProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<SharedByte *> *)bytes __attribute__((swift_name("bytes()")));
- (BOOL)changeMultiMultiLayer:(BOOL)multiLayer __attribute__((swift_name("changeMulti(multiLayer:)")));
- (SharedKmpToneColorListInfo *)getToneColors __attribute__((swift_name("getToneColors()")));
- (void)makeDefSubSubCode:(int8_t)subCode __attribute__((swift_name("makeDefSub(subCode:)")));
- (void)resetColor __attribute__((swift_name("resetColor()")));
- (void)updateColorH:(float)h __attribute__((swift_name("updateColor(h:)")));
- (void)updateDirectionDirectionOrIndex:(SharedInt * _Nullable)directionOrIndex config:(NSString * _Nullable)config __attribute__((swift_name("updateDirection(directionOrIndex:config:)")));
- (void)updateSpeedSpeedOrIndex:(SharedInt * _Nullable)speedOrIndex config:(NSString * _Nullable)config __attribute__((swift_name("updateSpeed(speedOrIndex:config:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXProtocol.Companion")))
@interface SharedKmpH70CXProtocolCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH70CXProtocolCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpSceneConfigInfo * _Nullable)getSceneConfigInfoConfig:(NSString * _Nullable)config __attribute__((swift_name("getSceneConfigInfo(config:)")));
- (SharedKmpH70CXProtocol *)makeDefKmpH70CXProtocol __attribute__((swift_name("makeDefKmpH70CXProtocol()")));
- (id<SharedIKmpProtocol> _Nullable)parseBytesEffectBytes:(SharedKotlinByteArray *)effectBytes __attribute__((swift_name("parseBytes(effectBytes:)")));
@property (readonly) int32_t shareCode __attribute__((swift_name("shareCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSubEffectConfig")))
@interface SharedKmpH70CXSubEffectConfig : SharedBase
@property (class, readonly, getter=companion) SharedKmpH70CXSubEffectConfigCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSubEffectConfig.Companion")))
@interface SharedKmpH70CXSubEffectConfigCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH70CXSubEffectConfigCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int8_t sub_effect_caiHong __attribute__((swift_name("sub_effect_caiHong")));
@property (readonly) int8_t sub_effect_fenCeng __attribute__((swift_name("sub_effect_fenCeng")));
@property (readonly) int8_t sub_effect_huoYan __attribute__((swift_name("sub_effect_huoYan")));
@property (readonly) int8_t sub_effect_kuoSan __attribute__((swift_name("sub_effect_kuoSan")));
@property (readonly) int8_t sub_effect_liuDong __attribute__((swift_name("sub_effect_liuDong")));
@property (readonly) int8_t sub_effect_luoXuan __attribute__((swift_name("sub_effect_luoXuan")));
@property (readonly) int8_t sub_effect_multiLayers __attribute__((swift_name("sub_effect_multiLayers")));
@property (readonly) int8_t sub_effect_tongXinYuan __attribute__((swift_name("sub_effect_tongXinYuan")));
@property (readonly) int8_t sub_effect_xingGuang __attribute__((swift_name("sub_effect_xingGuang")));
@property (readonly) int8_t sub_effect_xuanWo __attribute__((swift_name("sub_effect_xuanWo")));
@property (readonly) int8_t sub_effect_xuanZhuan __attribute__((swift_name("sub_effect_xuanZhuan")));
@property (readonly) int8_t sub_effect_zhuiZhu __attribute__((swift_name("sub_effect_zhuiZhu")));
@end

__attribute__((swift_name("KmpH70CXAbsSub")))
@interface SharedKmpH70CXAbsSub : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSMutableArray<SharedByte *> * _Nullable)bytesPos:(int32_t)pos msg:(void (^)(NSString *))msg __attribute__((swift_name("bytes(pos:msg:)")));
- (void)colorChangedColorBytes:(NSMutableArray<SharedInt *> *)colorBytes __attribute__((swift_name("colorChanged(colorBytes:)")));
- (void)makeWithoutColorBytesBytes:(NSMutableArray<SharedByte *> *)bytes msg:(void (^)(NSString *))msg __attribute__((swift_name("makeWithoutColorBytes(bytes:msg:)")));
- (void)resetColorH __attribute__((swift_name("resetColorH()")));
- (void)updateColorHH:(float)h __attribute__((swift_name("updateColorH(h:)")));
@property NSMutableArray<SharedInt *> *colors __attribute__((swift_name("colors")));
@property int8_t pieceNum __attribute__((swift_name("pieceNum")));
@property int8_t speed __attribute__((swift_name("speed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSub4CaiHong")))
@interface SharedKmpH70CXSub4CaiHong : SharedKmpH70CXAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH70CXSub4CaiHongCompanion *companion __attribute__((swift_name("companion")));
- (void)makeWithoutColorBytesBytes:(NSMutableArray<SharedByte *> *)bytes msg:(void (^)(NSString *))msg __attribute__((swift_name("makeWithoutColorBytes(bytes:msg:)")));
@property int8_t direction __attribute__((swift_name("direction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSub4CaiHong.Companion")))
@interface SharedKmpH70CXSub4CaiHongCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH70CXSub4CaiHongCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH70CXSub4CaiHong *)makeDefSub __attribute__((swift_name("makeDefSub()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH70CXSub4CaiHong * _Nullable)parseSubEffectSubEffectBytes:(SharedKotlinByteArray *)subEffectBytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseSubEffect(subEffectBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSub4FenCeng")))
@interface SharedKmpH70CXSub4FenCeng : SharedKmpH70CXAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH70CXSub4FenCengCompanion *companion __attribute__((swift_name("companion")));
- (void)makeWithoutColorBytesBytes:(NSMutableArray<SharedByte *> *)bytes msg:(void (^)(NSString *))msg __attribute__((swift_name("makeWithoutColorBytes(bytes:msg:)")));
@property int8_t direction __attribute__((swift_name("direction")));
@property int8_t interval __attribute__((swift_name("interval")));
@property BOOL jianBianSwitch __attribute__((swift_name("jianBianSwitch")));
@property int8_t tuoWeiLowBrightness __attribute__((swift_name("tuoWeiLowBrightness")));
@property BOOL tuoWeiSwitch __attribute__((swift_name("tuoWeiSwitch")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSub4FenCeng.Companion")))
@interface SharedKmpH70CXSub4FenCengCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH70CXSub4FenCengCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH70CXSub4FenCeng *)makeDefSub __attribute__((swift_name("makeDefSub()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH70CXSub4FenCeng * _Nullable)parseSubEffectSubEffectBytes:(SharedKotlinByteArray *)subEffectBytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseSubEffect(subEffectBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSub4HuoYan")))
@interface SharedKmpH70CXSub4HuoYan : SharedKmpH70CXAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH70CXSub4HuoYanCompanion *companion __attribute__((swift_name("companion")));
- (void)makeWithoutColorBytesBytes:(NSMutableArray<SharedByte *> *)bytes msg:(void (^)(NSString *))msg __attribute__((swift_name("makeWithoutColorBytes(bytes:msg:)")));
@property BOOL gradualSwitch __attribute__((swift_name("gradualSwitch")));
@property BOOL xuanCaiSwitch __attribute__((swift_name("xuanCaiSwitch")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSub4HuoYan.Companion")))
@interface SharedKmpH70CXSub4HuoYanCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH70CXSub4HuoYanCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH70CXSub4HuoYan *)makeDefSub __attribute__((swift_name("makeDefSub()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH70CXSub4HuoYan * _Nullable)parseSubEffectSubEffectBytes:(SharedKotlinByteArray *)subEffectBytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseSubEffect(subEffectBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSub4KuoSan")))
@interface SharedKmpH70CXSub4KuoSan : SharedKmpH70CXAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH70CXSub4KuoSanCompanion *companion __attribute__((swift_name("companion")));
- (void)changeCenterPointXPointX:(int32_t)pointX __attribute__((swift_name("changeCenterPointX(pointX:)")));
- (void)changeCenterPointYPointY:(int32_t)pointY __attribute__((swift_name("changeCenterPointY(pointY:)")));
- (BOOL)changeJiDianJiDian:(int8_t)jiDian __attribute__((swift_name("changeJiDian(jiDian:)")));
- (void)makeWithoutColorBytesBytes:(NSMutableArray<SharedByte *> *)bytes msg:(void (^)(NSString *))msg __attribute__((swift_name("makeWithoutColorBytes(bytes:msg:)")));
@property (readonly) SharedKotlinIntArray *centerPoint __attribute__((swift_name("centerPoint")));
@property BOOL gradualSwitch __attribute__((swift_name("gradualSwitch")));
@property int8_t interval __attribute__((swift_name("interval")));
@property (readonly) int8_t jiDian __attribute__((swift_name("jiDian")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSub4KuoSan.Companion")))
@interface SharedKmpH70CXSub4KuoSanCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH70CXSub4KuoSanCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH70CXSub4KuoSan *)makeDefSub __attribute__((swift_name("makeDefSub()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH70CXSub4KuoSan * _Nullable)parseSubEffectSubEffectBytes:(SharedKotlinByteArray *)subEffectBytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseSubEffect(subEffectBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSub4LiuDong")))
@interface SharedKmpH70CXSub4LiuDong : SharedKmpH70CXAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH70CXSub4LiuDongCompanion *companion __attribute__((swift_name("companion")));
- (void)makeWithoutColorBytesBytes:(NSMutableArray<SharedByte *> *)bytes msg:(void (^)(NSString *))msg __attribute__((swift_name("makeWithoutColorBytes(bytes:msg:)")));
@property int8_t direction __attribute__((swift_name("direction")));
@property BOOL jianBianSwitch __attribute__((swift_name("jianBianSwitch")));
@property int8_t tuoWeiLowBrightness __attribute__((swift_name("tuoWeiLowBrightness")));
@property BOOL tuoWeiSwitch __attribute__((swift_name("tuoWeiSwitch")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSub4LiuDong.Companion")))
@interface SharedKmpH70CXSub4LiuDongCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH70CXSub4LiuDongCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH70CXSub4LiuDong *)makeDefSub __attribute__((swift_name("makeDefSub()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH70CXSub4LiuDong * _Nullable)parseSubEffectSubEffectBytes:(SharedKotlinByteArray *)subEffectBytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseSubEffect(subEffectBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSub4LuoXuan")))
@interface SharedKmpH70CXSub4LuoXuan : SharedKmpH70CXAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpH70CXSub4LuoXuanCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)changeBrightnessTypeBrightnessType:(int8_t)brightnessType __attribute__((swift_name("changeBrightnessType(brightnessType:)")));
- (void)makeWithoutColorBytesBytes:(NSMutableArray<SharedByte *> *)bytes msg:(void (^)(NSString *))msg __attribute__((swift_name("makeWithoutColorBytes(bytes:msg:)")));
@property (readonly) SharedKotlinByteArray *brightnessRange __attribute__((swift_name("brightnessRange")));
@property (readonly) int8_t brightnessType __attribute__((swift_name("brightnessType")));
@property int8_t direction __attribute__((swift_name("direction")));
@property int8_t offsetIcNum __attribute__((swift_name("offsetIcNum")));
@property BOOL switch4ChuRuChang __attribute__((swift_name("switch4ChuRuChang")));
@property BOOL switch4Gradual __attribute__((swift_name("switch4Gradual")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSub4LuoXuan.Companion")))
@interface SharedKmpH70CXSub4LuoXuanCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH70CXSub4LuoXuanCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH70CXSub4LuoXuan *)makeDefSub __attribute__((swift_name("makeDefSub()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH70CXSub4LuoXuan * _Nullable)parseSubEffectSubEffectBytes:(SharedKotlinByteArray *)subEffectBytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseSubEffect(subEffectBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSub4TongXinYuan")))
@interface SharedKmpH70CXSub4TongXinYuan : SharedKmpH70CXAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH70CXSub4TongXinYuanCompanion *companion __attribute__((swift_name("companion")));
- (void)changeCenterPointXPointX:(int32_t)pointX __attribute__((swift_name("changeCenterPointX(pointX:)")));
- (void)changeCenterPointYPointY:(int32_t)pointY __attribute__((swift_name("changeCenterPointY(pointY:)")));
- (BOOL)changeJiDianJiDian:(int8_t)jiDian __attribute__((swift_name("changeJiDian(jiDian:)")));
- (void)makeWithoutColorBytesBytes:(NSMutableArray<SharedByte *> *)bytes msg:(void (^)(NSString *))msg __attribute__((swift_name("makeWithoutColorBytes(bytes:msg:)")));
@property (readonly) SharedKotlinIntArray *centerPoint __attribute__((swift_name("centerPoint")));
@property BOOL gradualSwitch __attribute__((swift_name("gradualSwitch")));
@property int8_t interval __attribute__((swift_name("interval")));
@property (readonly) int8_t jiDian __attribute__((swift_name("jiDian")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSub4TongXinYuan.Companion")))
@interface SharedKmpH70CXSub4TongXinYuanCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH70CXSub4TongXinYuanCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH70CXSub4TongXinYuan *)makeDefSub __attribute__((swift_name("makeDefSub()")));
- (SharedKmpH70CXSub4TongXinYuan *)parseSubEffectSubEffectBytes:(SharedKotlinByteArray *)subEffectBytes __attribute__((swift_name("parseSubEffect(subEffectBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSub4XingGuang")))
@interface SharedKmpH70CXSub4XingGuang : SharedKmpH70CXAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpH70CXSub4XingGuangCompanion *companion __attribute__((swift_name("companion")));
- (void)makeWithoutColorBytesBytes:(NSMutableArray<SharedByte *> *)bytes msg:(void (^)(NSString *))msg __attribute__((swift_name("makeWithoutColorBytes(bytes:msg:)")));
- (SharedKotlinByteArray *)rangeBytes __attribute__((swift_name("rangeBytes()")));
@property (readonly) SharedKotlinIntArray *range __attribute__((swift_name("range")));
@property BOOL switch4ColorTongYi __attribute__((swift_name("switch4ColorTongYi")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSub4XingGuang.Companion")))
@interface SharedKmpH70CXSub4XingGuangCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH70CXSub4XingGuangCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH70CXSub4XingGuang *)makeDefSub __attribute__((swift_name("makeDefSub()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH70CXSub4XingGuang * _Nullable)parseSubEffectSubEffectBytes:(SharedKotlinByteArray *)subEffectBytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseSubEffect(subEffectBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSub4XuanWo")))
@interface SharedKmpH70CXSub4XuanWo : SharedKmpH70CXAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH70CXSub4XuanWoCompanion *companion __attribute__((swift_name("companion")));
- (void)changeCenterPointXPointX:(int32_t)pointX __attribute__((swift_name("changeCenterPointX(pointX:)")));
- (void)changeCenterPointYPointY:(int32_t)pointY __attribute__((swift_name("changeCenterPointY(pointY:)")));
- (BOOL)changeJiDianJiDian:(int8_t)jiDian __attribute__((swift_name("changeJiDian(jiDian:)")));
- (void)makeWithoutColorBytesBytes:(NSMutableArray<SharedByte *> *)bytes msg:(void (^)(NSString *))msg __attribute__((swift_name("makeWithoutColorBytes(bytes:msg:)")));
@property (readonly) SharedKotlinIntArray *centerPoint __attribute__((swift_name("centerPoint")));
@property int8_t direction __attribute__((swift_name("direction")));
@property BOOL gradualSwitch __attribute__((swift_name("gradualSwitch")));
@property (readonly) int8_t jiDian __attribute__((swift_name("jiDian")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSub4XuanWo.Companion")))
@interface SharedKmpH70CXSub4XuanWoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH70CXSub4XuanWoCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH70CXSub4XuanWo *)makeDefSub __attribute__((swift_name("makeDefSub()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH70CXSub4XuanWo * _Nullable)parseSubEffectSubEffectBytes:(SharedKotlinByteArray *)subEffectBytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseSubEffect(subEffectBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSub4XuanZhuan")))
@interface SharedKmpH70CXSub4XuanZhuan : SharedKmpH70CXAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKmpH70CXSub4XuanZhuanCompanion *companion __attribute__((swift_name("companion")));
- (void)changeCenterPointXPointX:(int32_t)pointX __attribute__((swift_name("changeCenterPointX(pointX:)")));
- (void)changeCenterPointYPointY:(int32_t)pointY __attribute__((swift_name("changeCenterPointY(pointY:)")));
- (BOOL)changeJiDianJiDian:(int8_t)jiDian __attribute__((swift_name("changeJiDian(jiDian:)")));
- (void)makeWithoutColorBytesBytes:(NSMutableArray<SharedByte *> *)bytes msg:(void (^)(NSString *))msg __attribute__((swift_name("makeWithoutColorBytes(bytes:msg:)")));
@property (readonly) SharedKotlinIntArray *centerPoint __attribute__((swift_name("centerPoint")));
@property int8_t direction __attribute__((swift_name("direction")));
@property BOOL gradualSwitch __attribute__((swift_name("gradualSwitch")));
@property int8_t interval __attribute__((swift_name("interval")));
@property (readonly) int8_t jiDian __attribute__((swift_name("jiDian")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSub4XuanZhuan.Companion")))
@interface SharedKmpH70CXSub4XuanZhuanCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH70CXSub4XuanZhuanCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH70CXSub4XuanZhuan *)makeDefSub __attribute__((swift_name("makeDefSub()")));
- (SharedKmpH70CXSub4XuanZhuan *)parseSubEffectSubEffectBytes:(SharedKotlinByteArray *)subEffectBytes __attribute__((swift_name("parseSubEffect(subEffectBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSub4ZhuiZhu")))
@interface SharedKmpH70CXSub4ZhuiZhu : SharedKmpH70CXAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpH70CXSub4ZhuiZhuCompanion *companion __attribute__((swift_name("companion")));
- (void)makeWithoutColorBytesBytes:(NSMutableArray<SharedByte *> *)bytes msg:(void (^)(NSString *))msg __attribute__((swift_name("makeWithoutColorBytes(bytes:msg:)")));
@property int8_t direction __attribute__((swift_name("direction")));
@property int8_t duration4Delay __attribute__((swift_name("duration4Delay")));
@property int8_t tuoWeiLen __attribute__((swift_name("tuoWeiLen")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpH70CXSub4ZhuiZhu.Companion")))
@interface SharedKmpH70CXSub4ZhuiZhuCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpH70CXSub4ZhuiZhuCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpH70CXSub4ZhuiZhu *)makeDefSub __attribute__((swift_name("makeDefSub()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKmpH70CXSub4ZhuiZhu * _Nullable)parseSubEffectSubEffectBytes:(SharedKotlinByteArray *)subEffectBytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseSubEffect(subEffectBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Layer")))
@interface SharedLayer : SharedBase
@property (class, readonly, getter=companion) SharedLayerCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<SharedByte *> * _Nullable)bytesPos:(int32_t)pos msg:(void (^)(NSString *))msg __attribute__((swift_name("bytes(pos:msg:)")));
- (BOOL)changeSubEffectSubEffect:(int8_t)subEffect __attribute__((swift_name("changeSubEffect(subEffect:)")));
- (void)syncLayer:(SharedLayer *)layer __attribute__((swift_name("sync(layer:)")));
- (void)updateSpeedDirectionSpeed:(int32_t)speed direction:(int32_t)direction __attribute__((swift_name("updateSpeedDirection(speed:direction:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Layer.Companion")))
@interface SharedLayerCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLayerCompanion *shared __attribute__((swift_name("shared")));
- (SharedLayer *)makeDef __attribute__((swift_name("makeDef()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedLayer * _Nullable)parseBytesLayerBytes:(SharedKotlinByteArray *)layerBytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseBytes(layerBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sub4MultiLayer")))
@interface SharedSub4MultiLayer : SharedKmpH70CXAbsSub
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSub4MultiLayerCompanion *companion __attribute__((swift_name("companion")));
- (void)addLayerLayer:(SharedLayer *)layer __attribute__((swift_name("addLayer(layer:)")));
- (NSMutableArray<SharedByte *> * _Nullable)bytesPos:(int32_t)pos msg:(void (^)(NSString *))msg __attribute__((swift_name("bytes(pos:msg:)")));
- (BOOL)canShowLuBoDuration __attribute__((swift_name("canShowLuBoDuration()")));
- (void)changeShowTypeShowType:(int8_t)showType __attribute__((swift_name("changeShowType(showType:)")));
- (BOOL)deleteLayerPos:(int32_t)pos __attribute__((swift_name("deleteLayer(pos:)")));
- (void)makeWithoutColorBytesBytes:(NSMutableArray<SharedByte *> *)bytes msg:(void (^)(NSString *))msg __attribute__((swift_name("makeWithoutColorBytes(bytes:msg:)")));
- (SharedLayer * _Nullable)queryLayerPos:(int32_t)pos __attribute__((swift_name("queryLayer(pos:)")));
- (void)updateMultiLayerDirectionList:(SharedKotlinIntArray * _Nullable)directionList dirIndex:(int32_t)dirIndex multiLayerSpeeds:(NSArray<NSArray<SharedInt *> *> * _Nullable)multiLayerSpeeds speedIndex:(int32_t)speedIndex multiLayersDirectionRange:(NSArray<SharedInt *> * _Nullable)multiLayersDirectionRange __attribute__((swift_name("updateMultiLayer(directionList:dirIndex:multiLayerSpeeds:speedIndex:multiLayersDirectionRange:)")));
@property int8_t lunBoDuration __attribute__((swift_name("lunBoDuration")));
@property (readonly) int8_t showType __attribute__((swift_name("showType")));
@property (readonly) NSMutableArray<SharedLayer *> *subList __attribute__((swift_name("subList")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sub4MultiLayer.Companion")))
@interface SharedSub4MultiLayerCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSub4MultiLayerCompanion *shared __attribute__((swift_name("shared")));
- (SharedSub4MultiLayer *)makeDefSub __attribute__((swift_name("makeDefSub()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedSub4MultiLayer * _Nullable)parseSubEffectSubEffectBytes:(SharedKotlinByteArray *)subEffectBytes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseSubEffect(subEffectBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpAreaMoveEffect")))
@interface SharedKmpAreaMoveEffect : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithAreaMoveAndOverlayBytes:(SharedKotlinByteArray *)areaMoveAndOverlayBytes __attribute__((swift_name("init(areaMoveAndOverlayBytes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKmpAreaMoveEffectCompanion *companion __attribute__((swift_name("companion")));
- (SharedKmpAreaMoveEffect *)doCopy __attribute__((swift_name("doCopy()")));
- (SharedKotlinByteArray *)getBytes __attribute__((swift_name("getBytes()")));
@property BOOL canMove __attribute__((swift_name("canMove")));
@property int32_t offset __attribute__((swift_name("offset")));
@property int32_t order __attribute__((swift_name("order")));
@property int32_t priority __attribute__((swift_name("priority")));
@property int32_t speed __attribute__((swift_name("speed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpAreaMoveEffect.Companion")))
@interface SharedKmpAreaMoveEffectCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpAreaMoveEffectCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpAreaMoveEffect *)makeMoveOrder:(int32_t)order offset:(int32_t)offset speed:(int32_t)speed priority:(int32_t)priority __attribute__((swift_name("makeMove(order:offset:speed:priority:)")));
- (SharedKmpAreaMoveEffect *)makeNoMovePriority:(int32_t)priority __attribute__((swift_name("makeNoMove(priority:)")));
@property (readonly) int32_t area_move_order_0 __attribute__((swift_name("area_move_order_0")));
@property (readonly) int32_t area_move_order_1 __attribute__((swift_name("area_move_order_1")));
@property (readonly) int32_t area_move_order_2 __attribute__((swift_name("area_move_order_2")));
@property (readonly) int32_t area_move_order_3 __attribute__((swift_name("area_move_order_3")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpBrightnessEffect")))
@interface SharedKmpBrightnessEffect : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpBrightnessEffectCompanion *companion __attribute__((swift_name("companion")));
- (SharedKmpBrightnessEffect *)doCopy __attribute__((swift_name("doCopy()")));
- (void)doCopyEffect:(SharedKmpBrightnessEffect *)effect __attribute__((swift_name("doCopy(effect:)")));
- (SharedKotlinByteArray *)getBytes __attribute__((swift_name("getBytes()")));
@property int32_t duration4MaxBrightness __attribute__((swift_name("duration4MaxBrightness")));
@property int32_t duration4MinBrightness __attribute__((swift_name("duration4MinBrightness")));
@property int32_t maxBrightness __attribute__((swift_name("maxBrightness")));
@property int32_t minBrightness __attribute__((swift_name("minBrightness")));
@property int32_t order __attribute__((swift_name("order")));
@property int32_t speed __attribute__((swift_name("speed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpBrightnessEffect.Companion")))
@interface SharedKmpBrightnessEffectCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpBrightnessEffectCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpBrightnessEffect *)parserBrightnessEffectBytes:(SharedKotlinByteArray *)brightnessEffectBytes __attribute__((swift_name("parser(brightnessEffectBytes:)")));
@property (readonly) int32_t brightness_order_0 __attribute__((swift_name("brightness_order_0")));
@property (readonly) int32_t brightness_order_1 __attribute__((swift_name("brightness_order_1")));
@property (readonly) int32_t brightness_order_2 __attribute__((swift_name("brightness_order_2")));
@property (readonly) int32_t brightness_order_3 __attribute__((swift_name("brightness_order_3")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpColorEffect")))
@interface SharedKmpColorEffect : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithIc4colorType:(int8_t)ic4colorType speed:(int32_t)speed duration:(int32_t)duration rgbBytes:(SharedKotlinByteArray *)rgbBytes __attribute__((swift_name("init(ic4colorType:speed:duration:rgbBytes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKmpColorEffectCompanion *companion __attribute__((swift_name("companion")));
- (void)changeColorsColorSet:(SharedKotlinIntArray * _Nullable)colorSet __attribute__((swift_name("changeColors(colorSet:)")));
- (void)changeColorsColorList:(NSArray<SharedInt *> * _Nullable)colorList __attribute__((swift_name("changeColors(colorList:)")));
- (SharedKmpColorEffect *)doCopy __attribute__((swift_name("doCopy()")));
- (SharedKotlinByteArray *)getBytes __attribute__((swift_name("getBytes()")));
- (void)updateColorOffsetHOffsetH:(float)offsetH __attribute__((swift_name("updateColorOffsetH(offsetH:)")));
@property NSMutableArray<SharedInt *> *colors __attribute__((swift_name("colors")));
@property BOOL directionIsPositive __attribute__((swift_name("directionIsPositive")));
@property int32_t duration __attribute__((swift_name("duration")));
@property BOOL gradual __attribute__((swift_name("gradual")));
@property int32_t ic4colorType __attribute__((swift_name("ic4colorType")));
@property float offsetH __attribute__((swift_name("offsetH")));
@property int32_t speed __attribute__((swift_name("speed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpColorEffect.Companion")))
@interface SharedKmpColorEffectCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpColorEffectCompanion *shared __attribute__((swift_name("shared")));
- (int8_t)makeColorIcByteIc4colorType:(int32_t)ic4colorType gradual:(BOOL)gradual ic4colorOrder:(BOOL)ic4colorOrder __attribute__((swift_name("makeColorIcByte(ic4colorType:gradual:ic4colorOrder:)")));
@property (readonly) int32_t ic4colorType_all __attribute__((swift_name("ic4colorType_all")));
@property (readonly) int32_t ic4colorType_ic_one __attribute__((swift_name("ic4colorType_ic_one")));
@property (readonly) int32_t ic4colorType_piece_one __attribute__((swift_name("ic4colorType_piece_one")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpInAreaMoveEffect")))
@interface SharedKmpInAreaMoveEffect : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithInAreaMoveBytes:(SharedKotlinByteArray *)inAreaMoveBytes __attribute__((swift_name("init(inAreaMoveBytes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKmpInAreaMoveEffectCompanion *companion __attribute__((swift_name("companion")));
- (SharedKmpInAreaMoveEffect *)doCopy __attribute__((swift_name("doCopy()")));
- (SharedKotlinByteArray *)getBytes __attribute__((swift_name("getBytes()")));
@property BOOL canMove __attribute__((swift_name("canMove")));
@property int32_t offset __attribute__((swift_name("offset")));
@property int32_t order __attribute__((swift_name("order")));
@property int32_t speed __attribute__((swift_name("speed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpInAreaMoveEffect.Companion")))
@interface SharedKmpInAreaMoveEffectCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpInAreaMoveEffectCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpInAreaMoveEffect *)makeMoveOrder:(int32_t)order offset:(int32_t)offset speed:(int32_t)speed __attribute__((swift_name("makeMove(order:offset:speed:)")));
- (SharedKmpInAreaMoveEffect *)makeNoMove __attribute__((swift_name("makeNoMove()")));
@property (readonly) int32_t in_area_move_order_0 __attribute__((swift_name("in_area_move_order_0")));
@property (readonly) int32_t in_area_move_order_1 __attribute__((swift_name("in_area_move_order_1")));
@property (readonly) int32_t in_area_move_order_2 __attribute__((swift_name("in_area_move_order_2")));
@property (readonly) int32_t in_area_move_order_3 __attribute__((swift_name("in_area_move_order_3")));
@property (readonly) int32_t in_area_move_order_4 __attribute__((swift_name("in_area_move_order_4")));
@property (readonly) int32_t in_area_move_order_5 __attribute__((swift_name("in_area_move_order_5")));
@property (readonly) int32_t in_area_move_order_6 __attribute__((swift_name("in_area_move_order_6")));
@property (readonly) int32_t in_area_move_order_7 __attribute__((swift_name("in_area_move_order_7")));
@end

__attribute__((swift_name("KmpRgbICEffect")))
@interface SharedKmpRgbICEffect : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpRgbICEffectCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int8_t)getAreaByteAreaIndex:(int32_t)areaIndex areaNum:(int32_t)areaNum __attribute__((swift_name("getAreaByte(areaIndex:areaNum:)")));
- (int32_t)getAreaMoveSpeed __attribute__((swift_name("getAreaMoveSpeed()")));
- (SharedKotlinIntArray *)getBrightnessRange __attribute__((swift_name("getBrightnessRange()")));
- (int32_t)getColor __attribute__((swift_name("getColor()")));
- (int32_t)getColorDuration __attribute__((swift_name("getColorDuration()")));
- (int32_t)getColorIc4colorType __attribute__((swift_name("getColorIc4colorType()")));
- (int32_t)getColorSpeed __attribute__((swift_name("getColorSpeed()")));
- (NSArray<SharedInt *> * _Nullable)getColors __attribute__((swift_name("getColors()")));
- (SharedKotlinByteArray *)getEffectBytes __attribute__((swift_name("getEffectBytes()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (SharedKotlinByteArray *)getIc4AreaTypes __attribute__((swift_name("getIc4AreaTypes()")));
- (int32_t)getInAreaMoveOrder __attribute__((swift_name("getInAreaMoveOrder()")));
- (int32_t)getInAreaMoveSpeed __attribute__((swift_name("getInAreaMoveSpeed()")));
- (void)updateAreaMoveOrderOrder:(int32_t)order __attribute__((swift_name("updateAreaMoveOrder(order:)")));
- (void)updateAreaMovePriorityPriority:(int32_t)priority __attribute__((swift_name("updateAreaMovePriority(priority:)")));
- (void)updateAreaMoveSpeedSpeed:(int32_t)speed __attribute__((swift_name("updateAreaMoveSpeed(speed:)")));
- (void)updateBrightnessOrderOrder:(int32_t)order __attribute__((swift_name("updateBrightnessOrder(order:)")));
- (void)updateBrightnessRangeBrightnessArea:(SharedKotlinIntArray *)brightnessArea __attribute__((swift_name("updateBrightnessRange(brightnessArea:)")));
- (void)updateBrightnessSpeedSpeed:(int32_t)speed __attribute__((swift_name("updateBrightnessSpeed(speed:)")));
- (void)updateColorColor:(SharedKotlinIntArray * _Nullable)color __attribute__((swift_name("updateColor(color:)")));
- (void)updateColorColor_:(NSArray<SharedInt *> * _Nullable)color __attribute__((swift_name("updateColor(color_:)")));
- (void)updateColorDurationDuration:(int32_t)duration __attribute__((swift_name("updateColorDuration(duration:)")));
- (void)updateColorIc4colorTypeIc4colorType:(int32_t)ic4colorType __attribute__((swift_name("updateColorIc4colorType(ic4colorType:)")));
- (void)updateColorSpeedSpeed:(int32_t)speed __attribute__((swift_name("updateColorSpeed(speed:)")));
- (void)updateInAreaMoveOrderOrder:(int32_t)order __attribute__((swift_name("updateInAreaMoveOrder(order:)")));
- (void)updateInAreaMoveSpeedSpeed:(int32_t)speed __attribute__((swift_name("updateInAreaMoveSpeed(speed:)")));
- (void)updateMaxBrightnessBrightness:(int32_t)brightness __attribute__((swift_name("updateMaxBrightness(brightness:)")));
- (void)updateRandomNumRandomRange:(SharedKotlinIntArray *)randomRange __attribute__((swift_name("updateRandomNum(randomRange:)")));
@property int32_t areaIndex __attribute__((swift_name("areaIndex")));
@property SharedKmpAreaMoveEffect * _Nullable areaMoveEffect __attribute__((swift_name("areaMoveEffect")));
@property int32_t areaNum __attribute__((swift_name("areaNum")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) SharedKotlinByteArray *brightnessBytes __attribute__((swift_name("brightnessBytes")));
@property NSMutableArray<SharedKmpBrightnessEffect *> *brightnessEffects __attribute__((swift_name("brightnessEffects")));
@property int32_t chooseNum __attribute__((swift_name("chooseNum")));
@property SharedKmpColorEffect * _Nullable colorEffect __attribute__((swift_name("colorEffect")));
@property int32_t eachIcNum __attribute__((swift_name("eachIcNum")));
@property int32_t ic4areaType __attribute__((swift_name("ic4areaType")));
@property int32_t ic4brightnessType __attribute__((swift_name("ic4brightnessType")));
@property SharedKmpInAreaMoveEffect * _Nullable inAreaMoveEffect __attribute__((swift_name("inAreaMoveEffect")));
@property int32_t intervalIcNum __attribute__((swift_name("intervalIcNum")));
@property int32_t maxRandomNum __attribute__((swift_name("maxRandomNum")));
@property int32_t minRandomNum __attribute__((swift_name("minRandomNum")));
@property int32_t pieceNum __attribute__((swift_name("pieceNum")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpRgbICEffect.Companion")))
@interface SharedKmpRgbICEffectCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpRgbICEffectCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t ic4areaType_choose __attribute__((swift_name("ic4areaType_choose")));
@property (readonly) int32_t ic4areaType_custom __attribute__((swift_name("ic4areaType_custom")));
@property (readonly) int32_t ic4areaType_piece __attribute__((swift_name("ic4areaType_piece")));
@property (readonly) int32_t ic4areaType_random __attribute__((swift_name("ic4areaType_random")));
@property (readonly) int32_t ic4brightnessType_all __attribute__((swift_name("ic4brightnessType_all")));
@property (readonly) int32_t ic4brightnessType_all_fade __attribute__((swift_name("ic4brightnessType_all_fade")));
@property (readonly) int32_t ic4brightnessType_piece __attribute__((swift_name("ic4brightnessType_piece")));
@property (readonly) int32_t ic4brightnessType_piece_fade __attribute__((swift_name("ic4brightnessType_piece_fade")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpRgbICEffectV2")))
@interface SharedKmpRgbICEffectV2 : SharedKmpRgbICEffect
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedKotlinByteArray *)getEffectBytes __attribute__((swift_name("getEffectBytes()")));
@property int32_t composeWay __attribute__((swift_name("composeWay")));
@property int8_t effectKeepDuration __attribute__((swift_name("effectKeepDuration")));
@property SharedKotlinByteArray *supportDeviceByte __attribute__((swift_name("supportDeviceByte")));
@property int32_t supportDeviceNum __attribute__((swift_name("supportDeviceNum")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpRgbICProtocol")))
@interface SharedKmpRgbICProtocol : SharedAbsKmpProtocol
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKmpRgbICProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<SharedByte *> * _Nullable)bytes __attribute__((swift_name("bytes()")));
- (SharedKmpToneColorListInfo *)getToneColors __attribute__((swift_name("getToneColors()")));
- (void)updateDirectionDirectionOrIndex:(SharedInt * _Nullable)directionOrIndex config:(NSString * _Nullable)config __attribute__((swift_name("updateDirection(directionOrIndex:config:)")));
- (void)updateSpeedSpeedOrIndex:(SharedInt * _Nullable)speedOrIndex config:(NSString * _Nullable)config __attribute__((swift_name("updateSpeed(speedOrIndex:config:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpRgbICProtocol.Companion")))
@interface SharedKmpRgbICProtocolCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpRgbICProtocolCompanion *shared __attribute__((swift_name("shared")));
- (SharedKmpSceneConfigInfo * _Nullable)getSceneConfigInfoConfig:(NSString * _Nullable)config __attribute__((swift_name("getSceneConfigInfo(config:)")));
- (SharedKmpRgbICProtocol * _Nullable)parseBytesEffectBytes:(SharedKotlinByteArray *)effectBytes sceneType:(int32_t)sceneType __attribute__((swift_name("parseBytes(effectBytes:sceneType:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpArrayUtils")))
@interface SharedKmpArrayUtils : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kmpArrayUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpArrayUtils *shared __attribute__((swift_name("shared")));
- (void)arraycopySrc:(SharedKotlinArray<id> *)src srcPos:(int32_t)srcPos dest:(SharedKotlinArray<id> *)dest destPos:(int32_t)destPos length:(int32_t)length __attribute__((swift_name("arraycopy(src:srcPos:dest:destPos:length:)")));
- (void)arraycopySrc:(SharedKotlinBooleanArray *)src srcPos:(int32_t)srcPos dest:(SharedKotlinBooleanArray *)dest destPos:(int32_t)destPos length_:(int32_t)length __attribute__((swift_name("arraycopy(src:srcPos:dest:destPos:length_:)")));
- (void)arraycopySrc:(SharedKotlinByteArray *)src srcPos:(int32_t)srcPos dest:(SharedKotlinByteArray *)dest destPos:(int32_t)destPos length__:(int32_t)length __attribute__((swift_name("arraycopy(src:srcPos:dest:destPos:length__:)")));
- (void)arraycopySrc:(SharedKotlinCharArray *)src srcPos:(int32_t)srcPos dest:(SharedKotlinCharArray *)dest destPos:(int32_t)destPos length___:(int32_t)length __attribute__((swift_name("arraycopy(src:srcPos:dest:destPos:length___:)")));
- (void)arraycopySrc:(SharedKotlinDoubleArray *)src srcPos:(int32_t)srcPos dest:(SharedKotlinDoubleArray *)dest destPos:(int32_t)destPos length____:(int32_t)length __attribute__((swift_name("arraycopy(src:srcPos:dest:destPos:length____:)")));
- (void)arraycopySrc:(SharedKotlinFloatArray *)src srcPos:(int32_t)srcPos dest:(SharedKotlinFloatArray *)dest destPos:(int32_t)destPos length_____:(int32_t)length __attribute__((swift_name("arraycopy(src:srcPos:dest:destPos:length_____:)")));
- (void)arraycopySrc:(SharedKotlinIntArray *)src srcPos:(int32_t)srcPos dest:(SharedKotlinIntArray *)dest destPos:(int32_t)destPos length______:(int32_t)length __attribute__((swift_name("arraycopy(src:srcPos:dest:destPos:length______:)")));
- (void)arraycopySrc:(SharedKotlinLongArray *)src srcPos:(int32_t)srcPos dest:(SharedKotlinLongArray *)dest destPos:(int32_t)destPos length_______:(int32_t)length __attribute__((swift_name("arraycopy(src:srcPos:dest:destPos:length_______:)")));
- (void)fillA:(SharedKotlinByteArray *)a value:(int8_t)value __attribute__((swift_name("fill(a:value:)")));
- (void)fillA:(SharedKotlinDoubleArray *)a value_:(double)value __attribute__((swift_name("fill(a:value_:)")));
- (void)fillA:(SharedKotlinFloatArray *)a value__:(float)value __attribute__((swift_name("fill(a:value__:)")));
- (void)fillA:(SharedKotlinIntArray *)a value___:(int32_t)value __attribute__((swift_name("fill(a:value___:)")));
- (void)fillA:(SharedKotlinLongArray *)a value____:(int64_t)value __attribute__((swift_name("fill(a:value____:)")));
- (void)fillA:(SharedKotlinShortArray *)a value_____:(int16_t)value __attribute__((swift_name("fill(a:value_____:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpBleUtils")))
@interface SharedKmpBleUtils : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kmpBleUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpBleUtils *shared __attribute__((swift_name("shared")));
- (int32_t)byte2IntB:(int8_t)b __attribute__((swift_name("byte2Int(b:)")));
- (NSString *)byteToHexStringB:(int8_t)b __attribute__((swift_name("byteToHexString(b:)")));
- (NSString * _Nullable)bytesToHexStringSrc:(SharedKotlinByteArray * _Nullable)src __attribute__((swift_name("bytesToHexString(src:)")));
- (NSString * _Nullable)bytesToHexStringSrc_:(NSMutableArray<SharedByte *> * _Nullable)src __attribute__((swift_name("bytesToHexString(src_:)")));
- (SharedKotlinByteArray *)getAscIIBytesStr:(NSString *)str __attribute__((swift_name("getAscIIBytes(str:)")));
- (SharedKotlinByteArray *)getLowHighBytesData:(int32_t)data __attribute__((swift_name("getLowHighBytes(data:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedKotlinByteArray *)getSignedBytesFor2Value:(int32_t)value hFirst:(BOOL)hFirst __attribute__((swift_name("getSignedBytesFor2(value:hFirst:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedKotlinByteArray *)getSignedBytesFor3Value:(int32_t)value hFirst:(BOOL)hFirst __attribute__((swift_name("getSignedBytesFor3(value:hFirst:)")));
- (int32_t)getSignedIntValue:(SharedKotlinByteArray *)value __attribute__((swift_name("getSignedInt(value:)")));
- (int32_t)getSignedIntValue:(SharedKotlinByteArray *)value hFirst:(BOOL)hFirst __attribute__((swift_name("getSignedInt(value:hFirst:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (int16_t)getSignedShortH:(int8_t)h l:(int8_t)l __attribute__((swift_name("getSignedShort(h:l:)")));
- (NSString *)getStrByAscIIBytesBytes:(SharedKotlinByteArray * _Nullable)bytes __attribute__((swift_name("getStrByAscIIBytes(bytes:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (int32_t)getUnsignedByteData:(int8_t)data __attribute__((swift_name("getUnsignedByte(data:)")));
- (SharedKotlinByteArray *)list2ByteArrayData:(NSArray<SharedKotlinByteArray *> * _Nullable)data __attribute__((swift_name("list2ByteArray(data:)")));
- (SharedKotlinByteArray *)mergeByteArrayData1:(SharedKotlinByteArray * _Nullable)data1 data2:(SharedKotlinByteArray * _Nullable)data2 __attribute__((swift_name("mergeByteArray(data1:data2:)")));
- (int32_t)parserByteWith4BitB:(int8_t)b high:(BOOL)high __attribute__((swift_name("parserByteWith4Bit(b:high:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpByteUtils")))
@interface SharedKmpByteUtils : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kmpByteUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpByteUtils *shared __attribute__((swift_name("shared")));
- (int32_t)byte2IntB:(int8_t)b __attribute__((swift_name("byte2Int(b:)")));
- (int32_t)getValueB:(int8_t)b startIndex:(int32_t)startIndex count:(int32_t)count __attribute__((swift_name("getValue(b:startIndex:count:)")));
- (SharedKotlinByteArray *)replacePngBytesOffsetHPngBytes:(SharedKotlinByteArray *)pngBytes offsetH:(float)offsetH __attribute__((swift_name("replacePngBytesOffsetH(pngBytes:offsetH:)")));
- (NSString *)toUnsignedBinaryString:(int8_t)receiver __attribute__((swift_name("toUnsignedBinaryString(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpColorUtils")))
@interface SharedKmpColorUtils : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kmpColorUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpColorUtils *shared __attribute__((swift_name("shared")));
- (int32_t)alphaColor:(int32_t)color __attribute__((swift_name("alpha(color:)")));
- (int32_t)argbAlpha:(float)alpha red:(float)red green:(float)green blue:(float)blue __attribute__((swift_name("argb(alpha:red:green:blue:)")));
- (int32_t)argbAlpha:(int32_t)alpha red:(int32_t)red green:(int32_t)green blue_:(int32_t)blue __attribute__((swift_name("argb(alpha:red:green:blue_:)")));
- (int32_t)blueColor:(int32_t)color __attribute__((swift_name("blue(color:)")));
- (float)calcOffsetHBaseColorH:(float)baseColorH h:(SharedFloat * _Nullable)h __attribute__((swift_name("calcOffsetH(baseColorH:h:)")));
- (float)calcOffsetHColor:(SharedInt * _Nullable)color h:(SharedFloat * _Nullable)h __attribute__((swift_name("calcOffsetH(color:h:)")));
- (NSArray<SharedInt *> *)changeColorListHColors:(NSArray<SharedInt *> * _Nullable)colors h:(SharedFloat * _Nullable)h __attribute__((swift_name("changeColorListH(colors:h:)")));
- (NSArray<SharedInt *> *)colorListOffsetHColors:(NSArray<SharedInt *> * _Nullable)colors offsetH:(float)offsetH __attribute__((swift_name("colorListOffsetH(colors:offsetH:)")));
- (int32_t)convertColorByAlphaColor:(int32_t)color newAlpha:(float)newAlpha __attribute__((swift_name("convertColorByAlpha(color:newAlpha:)")));
- (NSArray<SharedKmpToneColorInfo *> *)generateToneColorsColors:(NSArray<SharedInt *> * _Nullable)colors __attribute__((swift_name("generateToneColors(colors:)")));
- (int32_t)getColorTemKelvinColorTem:(int32_t)colorTem minKelvin:(int32_t)minKelvin maxKelvin:(int32_t)maxKelvin __attribute__((swift_name("getColorTemKelvin(colorTem:minKelvin:maxKelvin:)")));
- (SharedKotlinIntArray *)getRgbColor:(int32_t)color __attribute__((swift_name("getRgb(color:)")));
- (SharedKotlinByteArray *)getRgbBytesColor:(int32_t)color __attribute__((swift_name("getRgbBytes(color:)")));
- (float)getRgbColorHColor:(int32_t)color __attribute__((swift_name("getRgbColorH(color:)")));
- (int32_t)greenColor:(int32_t)color __attribute__((swift_name("green(color:)")));
- (BOOL)hadColorTemRgbSet:(SharedKotlinIntArray *)rgbSet __attribute__((swift_name("hadColorTem(rgbSet:)")));
- (BOOL)hadColorTemRgbSet_:(NSArray<SharedInt *> *)rgbSet __attribute__((swift_name("hadColorTem(rgbSet_:)")));
- (int32_t)hsvToRgbHsv:(SharedKotlinFloatArray *)hsv __attribute__((swift_name("hsvToRgb(hsv:)")));
- (BOOL)isAllColorSameRgbSet:(SharedKotlinIntArray * _Nullable)rgbSet __attribute__((swift_name("isAllColorSame(rgbSet:)")));
- (SharedInt * _Nullable)isAllColorSameAndIsKelvinRgbSet:(SharedKotlinIntArray * _Nullable)rgbSet __attribute__((swift_name("isAllColorSameAndIsKelvin(rgbSet:)")));
- (SharedKotlinPair<SharedBoolean *, SharedInt *> *)isAllColorSameAndKelvinValueRgbSet:(SharedKotlinIntArray * _Nullable)rgbSet __attribute__((swift_name("isAllColorSameAndKelvinValue(rgbSet:)")));
- (BOOL)isColorTemRgb4Int:(int32_t)rgb4Int __attribute__((swift_name("isColorTem(rgb4Int:)")));
- (BOOL)isColorTemRgbSet:(SharedKotlinIntArray *)rgbSet __attribute__((swift_name("isColorTem(rgbSet:)")));
- (BOOL)isNearWhiteColorRgb:(int32_t)rgb __attribute__((swift_name("isNearWhiteColor(rgb:)")));
- (BOOL)isNoColorColor:(int32_t)color __attribute__((swift_name("isNoColor(color:)")));
- (SharedKotlinBooleanArray *)makeNewPosSetPosSet:(SharedKotlinBooleanArray *)posSet __attribute__((swift_name("makeNewPosSet(posSet:)")));
- (SharedKotlinIntArray *)makeNewSetSet:(SharedKotlinIntArray *)set posSet:(SharedKotlinBooleanArray *)posSet replaceValue:(int32_t)replaceValue __attribute__((swift_name("makeNewSet(set:posSet:replaceValue:)")));
- (int32_t)offsetHsvToRgbColor:(int32_t)color offsetH:(float)offsetH __attribute__((swift_name("offsetHsvToRgb(color:offsetH:)")));
- (SharedKotlinByteArray *)offsetHsvToRgbBytesColor:(int32_t)color offsetH:(float)offsetH __attribute__((swift_name("offsetHsvToRgbBytes(color:offsetH:)")));
- (int32_t)parseColorColorString:(NSString *)colorString __attribute__((swift_name("parseColor(colorString:)")));
- (SharedKotlinIntArray *)parseColorTemKelvinRgb:(int32_t)rgb __attribute__((swift_name("parseColorTemKelvin(rgb:)")));
- (int32_t)redColor:(int32_t)color __attribute__((swift_name("red(color:)")));
- (int32_t)rgbRed:(float)red green:(float)green blue:(float)blue __attribute__((swift_name("rgb(red:green:blue:)")));
- (int32_t)rgbRed:(int32_t)red green:(int32_t)green blue_:(int32_t)blue __attribute__((swift_name("rgb(red:green:blue_:)")));
- (SharedKotlinFloatArray *)rgbToHsvColor:(int32_t)color __attribute__((swift_name("rgbToHsv(color:)")));
- (int32_t)toBlack __attribute__((swift_name("toBlack()")));
- (int32_t)toColorRgbBytes:(SharedKotlinByteArray *)rgbBytes __attribute__((swift_name("toColor(rgbBytes:)")));
- (int32_t)toColorBR:(int8_t)bR bG:(int8_t)bG bB:(int8_t)bB __attribute__((swift_name("toColor(bR:bG:bB:)")));
- (int32_t)toColorR:(int32_t)r g:(int32_t)g b:(int32_t)b __attribute__((swift_name("toColor(r:g:b:)")));
- (int32_t)toColorIntValueA:(int32_t)a r:(int32_t)r g:(int32_t)g b:(int32_t)b __attribute__((swift_name("toColorIntValue(a:r:g:b:)")));
- (int32_t)toNoColor __attribute__((swift_name("toNoColor()")));
- (int32_t)toWhite __attribute__((swift_name("toWhite()")));
@property (readonly) NSMutableArray<SharedInt *> *colorTemperatureArray __attribute__((swift_name("colorTemperatureArray")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpConstants")))
@interface SharedKmpConstants : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kmpConstants __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpConstants *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<SharedInt *> *H_LIST __attribute__((swift_name("H_LIST")));
@property (readonly) int32_t SCENE_TYPE_DIY __attribute__((swift_name("SCENE_TYPE_DIY")));
@property (readonly) int32_t SCENE_TYPE_RGBIC __attribute__((swift_name("SCENE_TYPE_RGBIC")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpImageConverterManager")))
@interface SharedKmpImageConverterManager : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kmpImageConverterManager __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpImageConverterManager *shared __attribute__((swift_name("shared")));
- (SharedKotlinByteArray *)convertColorsToPngBytesColors:(NSArray<SharedInt *> *)colors width:(int32_t)width height:(int32_t)height __attribute__((swift_name("convertColorsToPngBytes(colors:width:height:)")));
- (SharedKmpColorListInfo *)convertPngBytesToColorInfoPngBytes:(SharedKotlinByteArray *)pngBytes __attribute__((swift_name("convertPngBytesToColorInfo(pngBytes:)")));
- (NSArray<SharedInt *> *)convertPngBytesToColorsPngBytes:(SharedKotlinByteArray *)pngBytes __attribute__((swift_name("convertPngBytesToColors(pngBytes:)")));
- (void)setProcessorProcessor:(id<SharedKmpImageProcessor>)processor __attribute__((swift_name("setProcessor(processor:)")));
@end

__attribute__((swift_name("KmpImageProcessor")))
@protocol SharedKmpImageProcessor
@required
- (SharedKotlinByteArray *)convertColorsToPngBytesColors:(NSArray<SharedInt *> *)colors width:(int32_t)width height:(int32_t)height __attribute__((swift_name("convertColorsToPngBytes(colors:width:height:)")));
- (SharedKmpColorListInfo *)convertPngBytesToColorInfoPngBytes:(SharedKotlinByteArray *)pngBytes __attribute__((swift_name("convertPngBytesToColorInfo(pngBytes:)")));
- (NSArray<SharedInt *> *)convertPngBytesToColorsPngBytes:(SharedKotlinByteArray *)pngBytes __attribute__((swift_name("convertPngBytesToColors(pngBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpLog")))
@interface SharedKmpLog : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kmpLog __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpLog *shared __attribute__((swift_name("shared")));
- (void)dTag:(NSString *)tag info:(NSString *(^)(void))info __attribute__((swift_name("d(tag:info:)")));
- (void)dTag:(NSString *)tag info_:(NSString *)info __attribute__((swift_name("d(tag:info_:)")));
- (void)eTag:(NSString *)tag info:(NSString *(^)(void))info __attribute__((swift_name("e(tag:info:)")));
- (void)eTag:(NSString *)tag info_:(NSString *)info __attribute__((swift_name("e(tag:info_:)")));
- (void)iTag:(NSString *)tag info:(NSString *(^)(void))info __attribute__((swift_name("i(tag:info:)")));
- (void)iTag:(NSString *)tag info_:(NSString *)info __attribute__((swift_name("i(tag:info_:)")));
- (void)openLogOpen:(BOOL)open __attribute__((swift_name("openLog(open:)")));
- (void)wTag:(NSString *)tag info:(NSString *(^)(void))info __attribute__((swift_name("w(tag:info:)")));
- (void)wTag:(NSString *)tag info_:(NSString *)info __attribute__((swift_name("w(tag:info_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpLogManager")))
@interface SharedKmpLogManager : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kmpLogManager __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKmpLogManager *shared __attribute__((swift_name("shared")));
- (void)logDebugTag:(NSString *)tag info:(NSString *)info __attribute__((swift_name("logDebug(tag:info:)")));
- (void)logErrorTag:(NSString *)tag info:(NSString *)info __attribute__((swift_name("logError(tag:info:)")));
- (void)logInfoTag:(NSString *)tag info:(NSString *)info __attribute__((swift_name("logInfo(tag:info:)")));
- (void)logWarnTag:(NSString *)tag info:(NSString *)info __attribute__((swift_name("logWarn(tag:info:)")));
- (void)setProcessorProcessor:(id<SharedKmpLogProcessor>)processor __attribute__((swift_name("setProcessor(processor:)")));
@end

__attribute__((swift_name("KmpLogProcessor")))
@protocol SharedKmpLogProcessor
@required
- (void)logDebugTag:(NSString *)tag info:(NSString *)info __attribute__((swift_name("logDebug(tag:info:)")));
- (void)logErrorTag:(NSString *)tag info:(NSString *)info __attribute__((swift_name("logError(tag:info:)")));
- (void)logInfoTag:(NSString *)tag info:(NSString *)info __attribute__((swift_name("logInfo(tag:info:)")));
- (void)logWarnTag:(NSString *)tag info:(NSString *)info __attribute__((swift_name("logWarn(tag:info:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpDigitalUtilsKt")))
@interface SharedKmpDigitalUtilsKt : SharedBase
+ (NSString *)toHexString:(int32_t)receiver __attribute__((swift_name("toHexString(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpExtUtilsKt")))
@interface SharedKmpExtUtilsKt : SharedBase
+ (id _Nullable)removeOrNull:(NSMutableArray<id> *)receiver index:(int32_t)index __attribute__((swift_name("removeOrNull(_:index:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpImageConverter_iosKt")))
@interface SharedKmpImageConverter_iosKt : SharedBase
+ (SharedKotlinByteArray *)convertColorsToPngBytesColors:(NSArray<SharedInt *> *)colors width:(int32_t)width height:(int32_t)height __attribute__((swift_name("convertColorsToPngBytes(colors:width:height:)")));
+ (SharedKmpColorListInfo *)convertPngBytesToColorInfoPngBytes:(SharedKotlinByteArray *)pngBytes __attribute__((swift_name("convertPngBytesToColorInfo(pngBytes:)")));
+ (NSArray<SharedInt *> *)convertPngBytesToColorsPngBytes:(SharedKotlinByteArray *)pngBytes __attribute__((swift_name("convertPngBytesToColors(pngBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpJsonUtilsKt")))
@interface SharedKmpJsonUtilsKt : SharedBase
+ (id _Nullable)fromJson:(NSString *)receiver __attribute__((swift_name("fromJson(_:)")));
+ (SharedKotlinx_serialization_jsonJsonElement * _Nullable)parseToJsonElement:(NSString *)receiver __attribute__((swift_name("parseToJsonElement(_:)")));
+ (NSString *)toJson:(id _Nullable)receiver __attribute__((swift_name("toJson(_:)")));
@property (class, readonly) SharedKotlinx_serialization_jsonJson *kmpJson __attribute__((swift_name("kmpJson")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpLayersInfoKt")))
@interface SharedKmpLayersInfoKt : SharedBase
+ (void)forEach:(int32_t)receiver step:(int32_t)step isUntil:(BOOL)isUntil rock:(void (^)(SharedInt *))rock __attribute__((swift_name("forEach(_:step:isUntil:rock:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpLog_iosKt")))
@interface SharedKmpLog_iosKt : SharedBase
+ (void)logDebugTag:(NSString *)tag info:(NSString *)info __attribute__((swift_name("logDebug(tag:info:)")));
+ (void)logErrorTag:(NSString *)tag info:(NSString *)info __attribute__((swift_name("logError(tag:info:)")));
+ (void)logInfoTag:(NSString *)tag info:(NSString *)info __attribute__((swift_name("logInfo(tag:info:)")));
+ (void)logWarnTag:(NSString *)tag info:(NSString *)info __attribute__((swift_name("logWarn(tag:info:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SharedKotlinByteArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedByte *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface SharedKotlinIntArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedInt *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SharedKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SharedKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SharedKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SharedKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SharedKotlinx_serialization_coreKSerializer <SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinTriple")))
@interface SharedKotlinTriple<__covariant A, __covariant B, __covariant C> : SharedBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second third:(C _Nullable)third __attribute__((swift_name("init(first:second:third:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinTriple<A, B, C> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second third:(C _Nullable)third __attribute__((swift_name("doCopy(first:second:third:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@property (readonly) C _Nullable third __attribute__((swift_name("third")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedKotlinEnumCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface SharedKotlinPair<__covariant A, __covariant B> : SharedBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinBooleanArray")))
@interface SharedKotlinBooleanArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedBoolean *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (BOOL)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinBooleanIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(BOOL)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface SharedKotlinCharArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinDoubleArray")))
@interface SharedKotlinDoubleArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedDouble *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (double)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinDoubleIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(double)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinFloatArray")))
@interface SharedKotlinFloatArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedFloat *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (float)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinFloatIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(float)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongArray")))
@interface SharedKotlinLongArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedLong *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int64_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinLongIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int64_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinShortArray")))
@interface SharedKotlinShortArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedShort *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int16_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinShortIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int16_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface SharedKotlinx_serialization_jsonJsonElement : SharedBase
@property (class, readonly, getter=companion) SharedKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol SharedKotlinx_serialization_coreSerialFormat
@required
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol SharedKotlinx_serialization_coreStringFormat <SharedKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface SharedKotlinx_serialization_jsonJson : SharedBase <SharedKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) SharedKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(SharedKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (SharedKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (SharedKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) SharedKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface SharedKotlinByteIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface SharedKotlinIntIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SharedKotlinx_serialization_coreEncoder
@required
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SharedKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<SharedKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<SharedKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) SharedKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SharedKotlinx_serialization_coreDecoder
@required
- (id<SharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (SharedKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinBooleanIterator")))
@interface SharedKotlinBooleanIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedBoolean *)next __attribute__((swift_name("next()")));
- (BOOL)nextBoolean __attribute__((swift_name("nextBoolean()")));
@end

__attribute__((swift_name("KotlinCharIterator")))
@interface SharedKotlinCharIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next __attribute__((swift_name("next()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end

__attribute__((swift_name("KotlinDoubleIterator")))
@interface SharedKotlinDoubleIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedDouble *)next __attribute__((swift_name("next()")));
- (double)nextDouble __attribute__((swift_name("nextDouble()")));
@end

__attribute__((swift_name("KotlinFloatIterator")))
@interface SharedKotlinFloatIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedFloat *)next __attribute__((swift_name("next()")));
- (float)nextFloat __attribute__((swift_name("nextFloat()")));
@end

__attribute__((swift_name("KotlinLongIterator")))
@interface SharedKotlinLongIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedLong *)next __attribute__((swift_name("next()")));
- (int64_t)nextLong __attribute__((swift_name("nextLong()")));
@end

__attribute__((swift_name("KotlinShortIterator")))
@interface SharedKotlinShortIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedShort *)next __attribute__((swift_name("next()")));
- (int16_t)nextShort __attribute__((swift_name("nextShort()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface SharedKotlinx_serialization_jsonJsonElementCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SharedKotlinx_serialization_coreSerializersModule : SharedBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<SharedKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<SharedKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface SharedKotlinx_serialization_jsonJsonDefault : SharedKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface SharedKotlinx_serialization_jsonJsonConfiguration : SharedBase
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowComments __attribute__((swift_name("allowComments")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowTrailingComma __attribute__((swift_name("allowTrailingComma")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property SharedKotlinx_serialization_jsonClassDiscriminatorMode *classDiscriminatorMode __attribute__((swift_name("classDiscriminatorMode")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL decodeEnumsCaseInsensitive __attribute__((swift_name("decodeEnumsCaseInsensitive")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<SharedKotlinx_serialization_jsonJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SharedKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol SharedKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SharedKotlinx_serialization_coreSerialKind : SharedBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SharedKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedKotlinNothing : SharedBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SharedKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass provider:(id<SharedKotlinx_serialization_coreKSerializer> (^)(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass serializer:(id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SharedKotlinKClass>)baseClass actualClass:(id<SharedKotlinKClass>)actualClass actualSerializer:(id<SharedKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<SharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<SharedKotlinKClass>)baseClass defaultSerializerProvider:(id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol SharedKotlinKClass <SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonClassDiscriminatorMode")))
@interface SharedKotlinx_serialization_jsonClassDiscriminatorMode : SharedKotlinEnum<SharedKotlinx_serialization_jsonClassDiscriminatorMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKotlinx_serialization_jsonClassDiscriminatorMode *none __attribute__((swift_name("none")));
@property (class, readonly) SharedKotlinx_serialization_jsonClassDiscriminatorMode *allJsonObjects __attribute__((swift_name("allJsonObjects")));
@property (class, readonly) SharedKotlinx_serialization_jsonClassDiscriminatorMode *polymorphic __attribute__((swift_name("polymorphic")));
+ (SharedKotlinArray<SharedKotlinx_serialization_jsonClassDiscriminatorMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedKotlinx_serialization_jsonClassDiscriminatorMode *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNamingStrategy")))
@protocol SharedKotlinx_serialization_jsonJsonNamingStrategy
@required
- (NSString *)serialNameForJsonDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
