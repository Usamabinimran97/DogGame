#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<UnityEngine.InputSystem.PlayerInput>
struct Action_1_tD5FA47F50DE964EA177B87ABF2576790239219A3;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>
struct Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19;
// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>
struct Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>
struct Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D;
// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>
struct Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>
struct Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932;
// System.Action`1<UnityEngine.InputSystem.PlayerInput>[]
struct Action_1U5BU5D_tDDE8F0E5F72CDCC3C9228F7F50484C0B41BAF4E0;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>[]
struct Action_2U5BU5D_tBE18774DE78EE629377991D4C8F3B44D96E3A529;
// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>[]
struct Action_3U5BU5D_t624B9D1D653A8F69756207CB2B95EEF3143387DB;
// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>[]
struct Func_3U5BU5D_t46F58FB7530550D36B775F49E118190032295BE6;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// UnityEngine.InputSystem.Users.InputUser[]
struct InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.InputSystem.PlayerInput[]
struct PlayerInputU5BU5D_t68A8570E76E18996F872BEEBA1C81ED2E4671080;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection[]
struct OngoingAccountSelectionU5BU5D_t0CC84AB78BA7B45022C3D6E08B0DADA7A61BCBD8;
// UnityEngine.InputSystem.Users.InputUser/UserData[]
struct UserDataU5BU5D_t5CB4987877C71E61FA131704B58CA6D8E5272C7E;
// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem[]
struct DemoParticleSystemU5BU5D_t276B71C43FE5C96B19896B1C959B684286E4A77A;
// UnityEngine.InputSystem.PlayerInput/ActionEvent[]
struct ActionEventU5BU5D_t45BD340B9AA6F3287339EA686E3FE0A47801E88F;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174;
// UnityEngine.AnimationState
struct AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// BasicRigidBodyPush
struct BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraFollow
struct CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E;
// CameraSwitch
struct CameraSwitch_tB9EC45074FB9E0AB46A1D539728DD0C63679058C;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.InputSystem.UI.InputSystemUIInputModule
struct InputSystemUIInputModule_tB7D5B53F656D196BB5AF712FA16FEE22B2EE0C58;
// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// LevelReset
struct LevelReset_t9EA6532EFA025B9EFE7BDD0E62FA9B69972B47B7;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MenuSceneLoader
struct MenuSceneLoader_tB2C4C717B14D24B7B409BAA1B0E2494629A494B1;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MobileDisableAutoSwitchControls
struct MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityStandardAssets.SceneUtils.ParticleSceneControls
struct ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityStandardAssets.Effects.ParticleSystemMultiplier
struct ParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75;
// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityStandardAssets.SceneUtils.PlaceTargetWithMouse
struct PlaceTargetWithMouse_t30224FA54201F99D173D962314A1F439149ECDC9;
// UnityEngine.InputSystem.PlayerInput
struct PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// PropMovementScript
struct PropMovementScript_t6572CC4FC47275A8F9490B46B71547A55FFA9959;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// SceneAndURLLoader
struct SceneAndURLLoader_t92F763949B50192DA195986B5F4AF130A055719E;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityStandardAssets.SceneUtils.SlowMoButton
struct SlowMoButton_t2083E0FE81796D541577A6AE8BC0BCFECAE79AFD;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// StarterAssets.StarterAssetsInputs
struct StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// StarterAssets.ThirdPersonController
struct ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// StarterAssets.UICanvasControllerInput
struct UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F;
// UIVirtualButton
struct UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5;
// UIVirtualJoystick
struct UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16;
// UIVirtualTouchZone
struct UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem
struct DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972;
// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList
struct DemoParticleSystemList_t73787946F79EF5D423387622F7C30C9997A68ACC;
// UnityEngine.InputSystem.PlayerInput/ControlsChangedEvent
struct ControlsChangedEvent_t24A5BA4AB8034B3C662F956A4C85ECC6B8332B48;
// UnityEngine.InputSystem.PlayerInput/DeviceLostEvent
struct DeviceLostEvent_tDD8832F14B7DA15569261EFEBC47E67CF4E1B9D4;
// UnityEngine.InputSystem.PlayerInput/DeviceRegainedEvent
struct DeviceRegainedEvent_t24153E8876417F010AA4C0C1C25D6CB792EC01D1;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;
// UIVirtualButton/BoolEvent
struct BoolEvent_t81DF6CDEF90C1D7B2256C9310BCCE9D2D078480A;
// UIVirtualButton/Event
struct Event_tCD26C285BECBF219F0B786DA841165B26E05F0B8;
// UIVirtualJoystick/Event
struct Event_tE8BCFAF6D3E261F47341C3DE8E539FF5C42E17C3;
// UIVirtualTouchZone/Event
struct Event_t39EC29014C2EF54751D4079DD636172E90DCE53E;

IL2CPP_EXTERN_C RuntimeClass* CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CFCursor_t55D8EC0B1D866D5A5019A7270696A0601C4F8235_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B1BBFA44CAA416A6E13B3ADACB0CDB4EFF4AAB3;
IL2CPP_EXTERN_C String_t* _stringLiteral4700B5BBCBF829BC28448CAB621CD8AEDB030940;
IL2CPP_EXTERN_C String_t* _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteralAB4D84F7C62E7D302A9A088AA8E292DF6A477309;
IL2CPP_EXTERN_C String_t* _stringLiteralE2CFA0DCA9F3732AA69C3B65D12881F7F3CF5FC0;
IL2CPP_EXTERN_C String_t* _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6;
IL2CPP_EXTERN_C String_t* _stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisPauseMenu_t36539DEACE8377BD498A235C80769301799E1985_m1006D5934A242764425928B642A1DA98B564C0C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75_m4AEEED8A204656CCD3DCEDB2FEAC64EC3583F634_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m38E7C2988B6E5CA8AE1FC34B3318EDD01C0FB899_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParticleSceneControls_Next_mF607DF0E31B7407AD6A38D97ED115B351D764D00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParticleSceneControls_Previous_mCA412358968E80B7918A6A0ACA8B9D69BDBBA081_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_com;
struct UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_pinvoke;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct DemoParticleSystemU5BU5D_t276B71C43FE5C96B19896B1C959B684286E4A77A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8292C421BBB00D7661DC07462822936152BAB446_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem
struct DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972  : public RuntimeObject
{
	// UnityEngine.Transform UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_0;
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/Mode UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::mode
	int32_t ___mode_1;
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/AlignMode UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::align
	int32_t ___align_2;
	// System.Int32 UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::maxCount
	int32_t ___maxCount_3;
	// System.Single UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::minDist
	float ___minDist_4;
	// System.Int32 UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::camOffset
	int32_t ___camOffset_5;
	// System.String UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::instructionText
	String_t* ___instructionText_6;
};

// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList
struct DemoParticleSystemList_t73787946F79EF5D423387622F7C30C9997A68ACC  : public RuntimeObject
{
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem[] UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList::items
	DemoParticleSystemU5BU5D_t276B71C43FE5C96B19896B1C959B684286E4A77A* ___items_0;
};

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>
struct InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tD5FA47F50DE964EA177B87ABF2576790239219A3* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tDDE8F0E5F72CDCC3C9228F7F50484C0B41BAF4E0* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>
struct InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_2U5BU5D_tBE18774DE78EE629377991D4C8F3B44D96E3A529* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>
struct InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_3U5BU5D_t624B9D1D653A8F69756207CB2B95EEF3143387DB* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>
struct InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Func_3U5BU5D_t46F58FB7530550D36B775F49E118190032295BE6* ___additionalValues_2;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.AnimatorClipInfo
struct AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 
{
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 
{
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection::device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection::userId
	uint32_t ___userId_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_marshaled_pinvoke
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	uint32_t ___userId_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_marshaled_com
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	uint32_t ___userId_1;
};

// UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>
struct CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>
struct CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>
struct CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>
struct CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection>
struct InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	OngoingAccountSelectionU5BU5D_t0CC84AB78BA7B45022C3D6E08B0DADA7A61BCBD8* ___additionalValues_2;
};

// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Nullable_1_t69306F42657D3DC9EDCF5E87D81E582BDE7DAC42 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___value_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92  : public RuntimeObject
{
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshaled_pinvoke
{
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshaled_com
{
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UIVirtualButton/BoolEvent
struct BoolEvent_t81DF6CDEF90C1D7B2256C9310BCCE9D2D078480A  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// UIVirtualButton/Event
struct Event_tCD26C285BECBF219F0B786DA841165B26E05F0B8  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UIVirtualJoystick/Event
struct Event_tE8BCFAF6D3E261F47341C3DE8E539FF5C42E17C3  : public UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932
{
};

// UIVirtualTouchZone/Event
struct Event_t39EC29014C2EF54751D4079DD636172E90DCE53E  : public UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932
{
};

// UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174  : public RuntimeObject
{
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time_0;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName_1;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter_2;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectReferenceParameter_3;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter_4;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter_5;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions_6;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source_7;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_pinvoke
{
	float ___m_Time_0;
	char* ___m_FunctionName_1;
	char* ___m_StringParameter_2;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};
// Native definition for COM marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_com
{
	float ___m_Time_0;
	Il2CppChar* ___m_FunctionName_1;
	Il2CppChar* ___m_StringParameter_2;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231  : public RuntimeObject
{
	// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext> UnityEngine.InputSystem.InputValue::m_Context
	Nullable_1_t69306F42657D3DC9EDCF5E87D81E582BDE7DAC42 ___m_Context_0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3 
{
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::pairingStateVersion
	int32_t ___pairingStateVersion_0;
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser/GlobalState::lastUserId
	uint32_t ___lastUserId_1;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allUserCount
	int32_t ___allUserCount_2;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allPairedDeviceCount
	int32_t ___allPairedDeviceCount_3;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allLostDeviceCount
	int32_t ___allLostDeviceCount_4;
	// UnityEngine.InputSystem.Users.InputUser[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allUsers
	InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD* ___allUsers_5;
	// UnityEngine.InputSystem.Users.InputUser/UserData[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allUserData
	UserDataU5BU5D_t5CB4987877C71E61FA131704B58CA6D8E5272C7E* ___allUserData_6;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allPairedDevices
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices_7;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allLostDevices
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices_8;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection> UnityEngine.InputSystem.Users.InputUser/GlobalState::ongoingAccountSelections
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections_9;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onChange
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange_10;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onUnpairedDeviceUsed
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed_11;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onPreFilterUnpairedDeviceUsed
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed_12;
	// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange> UnityEngine.InputSystem.Users.InputUser/GlobalState::actionChangeDelegate
	Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D* ___actionChangeDelegate_13;
	// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange> UnityEngine.InputSystem.Users.InputUser/GlobalState::onDeviceChangeDelegate
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___onDeviceChangeDelegate_14;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.Users.InputUser/GlobalState::onEventDelegate
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___onEventDelegate_15;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onActionChangeHooked
	bool ___onActionChangeHooked_16;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onDeviceChangeHooked
	bool ___onDeviceChangeHooked_17;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onEventHooked
	bool ___onEventHooked_18;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::listenForUnpairedDeviceActivity
	int32_t ___listenForUnpairedDeviceActivity_19;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3_marshaled_pinvoke
{
	int32_t ___pairingStateVersion_0;
	uint32_t ___lastUserId_1;
	int32_t ___allUserCount_2;
	int32_t ___allPairedDeviceCount_3;
	int32_t ___allLostDeviceCount_4;
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E* ___allUsers_5;
	UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_pinvoke* ___allUserData_6;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices_7;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices_8;
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections_9;
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange_10;
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed_11;
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed_12;
	Il2CppMethodPointer ___actionChangeDelegate_13;
	Il2CppMethodPointer ___onDeviceChangeDelegate_14;
	Il2CppMethodPointer ___onEventDelegate_15;
	int32_t ___onActionChangeHooked_16;
	int32_t ___onDeviceChangeHooked_17;
	int32_t ___onEventHooked_18;
	int32_t ___listenForUnpairedDeviceActivity_19;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3_marshaled_com
{
	int32_t ___pairingStateVersion_0;
	uint32_t ___lastUserId_1;
	int32_t ___allUserCount_2;
	int32_t ___allPairedDeviceCount_3;
	int32_t ___allLostDeviceCount_4;
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E* ___allUsers_5;
	UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_com* ___allUserData_6;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices_7;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices_8;
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections_9;
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange_10;
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed_11;
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed_12;
	Il2CppMethodPointer ___actionChangeDelegate_13;
	Il2CppMethodPointer ___onDeviceChangeDelegate_14;
	Il2CppMethodPointer ___onEventDelegate_15;
	int32_t ___onActionChangeHooked_16;
	int32_t ___onDeviceChangeHooked_17;
	int32_t ___onEventHooked_18;
	int32_t ___listenForUnpairedDeviceActivity_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.Users.InputUser
struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E 
{
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser::m_Id
	uint32_t ___m_Id_1;
};

struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E_StaticFields
{
	// UnityEngine.InputSystem.Users.InputUser/GlobalState UnityEngine.InputSystem.Users.InputUser::s_GlobalState
	GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3 ___s_GlobalState_2;
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// BasicRigidBodyPush
struct BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LayerMask BasicRigidBodyPush::pushLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___pushLayers_4;
	// System.Boolean BasicRigidBodyPush::canPush
	bool ___canPush_5;
	// System.Single BasicRigidBodyPush::strength
	float ___strength_6;
};

// CameraFollow
struct CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform CameraFollow::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_4;
	// System.Single CameraFollow::smoothSpeed
	float ___smoothSpeed_5;
	// UnityEngine.Vector3 CameraFollow::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_6;
};

// CameraSwitch
struct CameraSwitch_tB9EC45074FB9E0AB46A1D539728DD0C63679058C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] CameraSwitch::objects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___objects_4;
	// UnityEngine.UI.Text CameraSwitch::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_5;
	// System.Int32 CameraSwitch::m_CurrentActiveObject
	int32_t ___m_CurrentActiveObject_6;
};

// LevelReset
struct LevelReset_t9EA6532EFA025B9EFE7BDD0E62FA9B69972B47B7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MenuSceneLoader
struct MenuSceneLoader_tB2C4C717B14D24B7B409BAA1B0E2494629A494B1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MenuSceneLoader::menuUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___menuUI_4;
	// UnityEngine.GameObject MenuSceneLoader::m_Go
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Go_5;
};

// MobileDisableAutoSwitchControls
struct MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.PlayerInput MobileDisableAutoSwitchControls::playerInput
	PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* ___playerInput_4;
};

// UnityStandardAssets.SceneUtils.ParticleSceneControls
struct ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList UnityStandardAssets.SceneUtils.ParticleSceneControls::demoParticles
	DemoParticleSystemList_t73787946F79EF5D423387622F7C30C9997A68ACC* ___demoParticles_4;
	// System.Single UnityStandardAssets.SceneUtils.ParticleSceneControls::spawnOffset
	float ___spawnOffset_5;
	// System.Single UnityStandardAssets.SceneUtils.ParticleSceneControls::multiply
	float ___multiply_6;
	// System.Boolean UnityStandardAssets.SceneUtils.ParticleSceneControls::clearOnChange
	bool ___clearOnChange_7;
	// UnityEngine.UI.Text UnityStandardAssets.SceneUtils.ParticleSceneControls::titleText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___titleText_8;
	// UnityEngine.Transform UnityStandardAssets.SceneUtils.ParticleSceneControls::sceneCamera
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___sceneCamera_9;
	// UnityEngine.UI.Text UnityStandardAssets.SceneUtils.ParticleSceneControls::instructionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___instructionText_10;
	// UnityEngine.UI.Button UnityStandardAssets.SceneUtils.ParticleSceneControls::previousButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___previousButton_11;
	// UnityEngine.UI.Button UnityStandardAssets.SceneUtils.ParticleSceneControls::nextButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___nextButton_12;
	// UnityEngine.UI.GraphicRaycaster UnityStandardAssets.SceneUtils.ParticleSceneControls::graphicRaycaster
	GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B* ___graphicRaycaster_13;
	// UnityEngine.EventSystems.EventSystem UnityStandardAssets.SceneUtils.ParticleSceneControls::eventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___eventSystem_14;
	// UnityStandardAssets.Effects.ParticleSystemMultiplier UnityStandardAssets.SceneUtils.ParticleSceneControls::m_ParticleMultiplier
	ParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75* ___m_ParticleMultiplier_15;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityStandardAssets.SceneUtils.ParticleSceneControls::m_CurrentParticleList
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___m_CurrentParticleList_16;
	// UnityEngine.Transform UnityStandardAssets.SceneUtils.ParticleSceneControls::m_Instance
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Instance_17;
	// UnityEngine.Vector3 UnityStandardAssets.SceneUtils.ParticleSceneControls::m_CamOffsetVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CamOffsetVelocity_19;
	// UnityEngine.Vector3 UnityStandardAssets.SceneUtils.ParticleSceneControls::m_LastPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LastPos_20;
};

struct ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields
{
	// System.Int32 UnityStandardAssets.SceneUtils.ParticleSceneControls::s_SelectedIndex
	int32_t ___s_SelectedIndex_18;
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem UnityStandardAssets.SceneUtils.ParticleSceneControls::s_Selected
	DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* ___s_Selected_21;
};

// UnityStandardAssets.Effects.ParticleSystemMultiplier
struct ParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityStandardAssets.Effects.ParticleSystemMultiplier::multiplier
	float ___multiplier_4;
};

// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Toggle PauseMenu::m_MenuToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___m_MenuToggle_4;
	// System.Single PauseMenu::m_TimeScaleRef
	float ___m_TimeScaleRef_5;
	// System.Single PauseMenu::m_VolumeRef
	float ___m_VolumeRef_6;
	// System.Boolean PauseMenu::m_Paused
	bool ___m_Paused_7;
};

// UnityStandardAssets.SceneUtils.PlaceTargetWithMouse
struct PlaceTargetWithMouse_t30224FA54201F99D173D962314A1F439149ECDC9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityStandardAssets.SceneUtils.PlaceTargetWithMouse::surfaceOffset
	float ___surfaceOffset_4;
	// UnityEngine.GameObject UnityStandardAssets.SceneUtils.PlaceTargetWithMouse::setTargetOn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___setTargetOn_5;
};

// UnityEngine.InputSystem.PlayerInput
struct PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.PlayerInput::m_Actions
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Actions_7;
	// UnityEngine.InputSystem.PlayerNotifications UnityEngine.InputSystem.PlayerInput::m_NotificationBehavior
	int32_t ___m_NotificationBehavior_8;
	// UnityEngine.InputSystem.UI.InputSystemUIInputModule UnityEngine.InputSystem.PlayerInput::m_UIInputModule
	InputSystemUIInputModule_tB7D5B53F656D196BB5AF712FA16FEE22B2EE0C58* ___m_UIInputModule_9;
	// UnityEngine.InputSystem.PlayerInput/DeviceLostEvent UnityEngine.InputSystem.PlayerInput::m_DeviceLostEvent
	DeviceLostEvent_tDD8832F14B7DA15569261EFEBC47E67CF4E1B9D4* ___m_DeviceLostEvent_10;
	// UnityEngine.InputSystem.PlayerInput/DeviceRegainedEvent UnityEngine.InputSystem.PlayerInput::m_DeviceRegainedEvent
	DeviceRegainedEvent_t24153E8876417F010AA4C0C1C25D6CB792EC01D1* ___m_DeviceRegainedEvent_11;
	// UnityEngine.InputSystem.PlayerInput/ControlsChangedEvent UnityEngine.InputSystem.PlayerInput::m_ControlsChangedEvent
	ControlsChangedEvent_t24A5BA4AB8034B3C662F956A4C85ECC6B8332B48* ___m_ControlsChangedEvent_12;
	// UnityEngine.InputSystem.PlayerInput/ActionEvent[] UnityEngine.InputSystem.PlayerInput::m_ActionEvents
	ActionEventU5BU5D_t45BD340B9AA6F3287339EA686E3FE0A47801E88F* ___m_ActionEvents_13;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_NeverAutoSwitchControlSchemes
	bool ___m_NeverAutoSwitchControlSchemes_14;
	// System.String UnityEngine.InputSystem.PlayerInput::m_DefaultControlScheme
	String_t* ___m_DefaultControlScheme_15;
	// System.String UnityEngine.InputSystem.PlayerInput::m_DefaultActionMap
	String_t* ___m_DefaultActionMap_16;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::m_SplitScreenIndex
	int32_t ___m_SplitScreenIndex_17;
	// UnityEngine.Camera UnityEngine.InputSystem.PlayerInput::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_18;
	// UnityEngine.InputSystem.InputValue UnityEngine.InputSystem.PlayerInput::m_InputValueObject
	InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___m_InputValueObject_19;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.PlayerInput::m_CurrentActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_CurrentActionMap_20;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::m_PlayerIndex
	int32_t ___m_PlayerIndex_21;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_InputActive
	bool ___m_InputActive_22;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_Enabled
	bool ___m_Enabled_23;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_ActionsInitialized
	bool ___m_ActionsInitialized_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.InputSystem.PlayerInput::m_ActionMessageNames
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___m_ActionMessageNames_25;
	// UnityEngine.InputSystem.Users.InputUser UnityEngine.InputSystem.PlayerInput::m_InputUser
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E ___m_InputUser_26;
	// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext> UnityEngine.InputSystem.PlayerInput::m_ActionTriggeredDelegate
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___m_ActionTriggeredDelegate_27;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_DeviceLostCallbacks
	CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F ___m_DeviceLostCallbacks_28;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_DeviceRegainedCallbacks
	CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F ___m_DeviceRegainedCallbacks_29;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_ControlsChangedCallbacks
	CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F ___m_ControlsChangedCallbacks_30;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.PlayerInput::m_ActionTriggeredCallbacks
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_ActionTriggeredCallbacks_31;
	// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr> UnityEngine.InputSystem.PlayerInput::m_UnpairedDeviceUsedDelegate
	Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19* ___m_UnpairedDeviceUsedDelegate_32;
	// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean> UnityEngine.InputSystem.PlayerInput::m_PreFilterUnpairedDeviceUsedDelegate
	Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937* ___m_PreFilterUnpairedDeviceUsedDelegate_33;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_OnUnpairedDeviceUsedHooked
	bool ___m_OnUnpairedDeviceUsedHooked_34;
	// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange> UnityEngine.InputSystem.PlayerInput::m_DeviceChangeDelegate
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___m_DeviceChangeDelegate_35;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_OnDeviceChangeHooked
	bool ___m_OnDeviceChangeHooked_36;
};

struct PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_StaticFields
{
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_AllActivePlayersCount
	int32_t ___s_AllActivePlayersCount_37;
	// UnityEngine.InputSystem.PlayerInput[] UnityEngine.InputSystem.PlayerInput::s_AllActivePlayers
	PlayerInputU5BU5D_t68A8570E76E18996F872BEEBA1C81ED2E4671080* ___s_AllActivePlayers_38;
	// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.PlayerInput::s_UserChangeDelegate
	Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0* ___s_UserChangeDelegate_39;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitPairWithDevicesCount
	int32_t ___s_InitPairWithDevicesCount_40;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.PlayerInput::s_InitPairWithDevices
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___s_InitPairWithDevices_41;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitPlayerIndex
	int32_t ___s_InitPlayerIndex_42;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitSplitScreenIndex
	int32_t ___s_InitSplitScreenIndex_43;
	// System.String UnityEngine.InputSystem.PlayerInput::s_InitControlScheme
	String_t* ___s_InitControlScheme_44;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::s_DestroyIfDeviceSetupUnsuccessful
	bool ___s_DestroyIfDeviceSetupUnsuccessful_45;
};

// PropMovementScript
struct PropMovementScript_t6572CC4FC47275A8F9490B46B71547A55FFA9959  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PropMovementScript::TrahsHold
	float ___TrahsHold_4;
	// System.Boolean PropMovementScript::isMoving
	bool ___isMoving_5;
	// UnityEngine.Vector3 PropMovementScript::targetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition_6;
	// System.Single PropMovementScript::speed
	float ___speed_7;
	// System.Boolean PropMovementScript::isRotating
	bool ___isRotating_8;
	// UnityEngine.Vector3 PropMovementScript::targetRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetRotation_9;
	// System.Single PropMovementScript::speedRotation
	float ___speedRotation_10;
	// UnityEngine.Vector3 PropMovementScript::startPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPosition_11;
	// UnityEngine.Vector3 PropMovementScript::startRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startRotation_12;
};

// SceneAndURLLoader
struct SceneAndURLLoader_t92F763949B50192DA195986B5F4AF130A055719E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PauseMenu SceneAndURLLoader::m_PauseMenu
	PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* ___m_PauseMenu_4;
};

// UnityStandardAssets.SceneUtils.SlowMoButton
struct SlowMoButton_t2083E0FE81796D541577A6AE8BC0BCFECAE79AFD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Sprite UnityStandardAssets.SceneUtils.SlowMoButton::FullSpeedTex
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___FullSpeedTex_4;
	// UnityEngine.Sprite UnityStandardAssets.SceneUtils.SlowMoButton::SlowSpeedTex
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___SlowSpeedTex_5;
	// System.Single UnityStandardAssets.SceneUtils.SlowMoButton::fullSpeed
	float ___fullSpeed_6;
	// System.Single UnityStandardAssets.SceneUtils.SlowMoButton::slowSpeed
	float ___slowSpeed_7;
	// UnityEngine.UI.Button UnityStandardAssets.SceneUtils.SlowMoButton::button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button_8;
	// System.Boolean UnityStandardAssets.SceneUtils.SlowMoButton::m_SlowMo
	bool ___m_SlowMo_9;
};

// StarterAssets.StarterAssetsInputs
struct StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 StarterAssets.StarterAssetsInputs::move
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___move_4;
	// UnityEngine.Vector2 StarterAssets.StarterAssetsInputs::look
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___look_5;
	// System.Boolean StarterAssets.StarterAssetsInputs::jump
	bool ___jump_6;
	// System.Boolean StarterAssets.StarterAssetsInputs::sprint
	bool ___sprint_7;
	// System.Boolean StarterAssets.StarterAssetsInputs::analogMovement
	bool ___analogMovement_8;
	// System.Boolean StarterAssets.StarterAssetsInputs::cursorLocked
	bool ___cursorLocked_9;
	// System.Boolean StarterAssets.StarterAssetsInputs::cursorInputForLook
	bool ___cursorInputForLook_10;
};

// StarterAssets.ThirdPersonController
struct ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single StarterAssets.ThirdPersonController::MoveSpeed
	float ___MoveSpeed_4;
	// System.Single StarterAssets.ThirdPersonController::SprintSpeed
	float ___SprintSpeed_5;
	// System.Single StarterAssets.ThirdPersonController::RotationSmoothTime
	float ___RotationSmoothTime_6;
	// System.Single StarterAssets.ThirdPersonController::SpeedChangeRate
	float ___SpeedChangeRate_7;
	// UnityEngine.AudioClip StarterAssets.ThirdPersonController::LandingAudioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___LandingAudioClip_8;
	// UnityEngine.AudioClip[] StarterAssets.ThirdPersonController::FootstepAudioClips
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___FootstepAudioClips_9;
	// System.Single StarterAssets.ThirdPersonController::FootstepAudioVolume
	float ___FootstepAudioVolume_10;
	// System.Single StarterAssets.ThirdPersonController::JumpHeight
	float ___JumpHeight_11;
	// System.Single StarterAssets.ThirdPersonController::Gravity
	float ___Gravity_12;
	// System.Single StarterAssets.ThirdPersonController::JumpTimeout
	float ___JumpTimeout_13;
	// System.Single StarterAssets.ThirdPersonController::FallTimeout
	float ___FallTimeout_14;
	// System.Boolean StarterAssets.ThirdPersonController::Grounded
	bool ___Grounded_15;
	// System.Single StarterAssets.ThirdPersonController::GroundedOffset
	float ___GroundedOffset_16;
	// System.Single StarterAssets.ThirdPersonController::GroundedRadius
	float ___GroundedRadius_17;
	// UnityEngine.LayerMask StarterAssets.ThirdPersonController::GroundLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___GroundLayers_18;
	// UnityEngine.GameObject StarterAssets.ThirdPersonController::CinemachineCameraTarget
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CinemachineCameraTarget_19;
	// System.Single StarterAssets.ThirdPersonController::TopClamp
	float ___TopClamp_20;
	// System.Single StarterAssets.ThirdPersonController::BottomClamp
	float ___BottomClamp_21;
	// System.Single StarterAssets.ThirdPersonController::CameraAngleOverride
	float ___CameraAngleOverride_22;
	// System.Boolean StarterAssets.ThirdPersonController::LockCameraPosition
	bool ___LockCameraPosition_23;
	// System.Single StarterAssets.ThirdPersonController::_cinemachineTargetYaw
	float ____cinemachineTargetYaw_24;
	// System.Single StarterAssets.ThirdPersonController::_cinemachineTargetPitch
	float ____cinemachineTargetPitch_25;
	// System.Single StarterAssets.ThirdPersonController::_speed
	float ____speed_26;
	// System.Single StarterAssets.ThirdPersonController::_animationBlend
	float ____animationBlend_27;
	// System.Single StarterAssets.ThirdPersonController::_targetRotation
	float ____targetRotation_28;
	// System.Single StarterAssets.ThirdPersonController::_rotationVelocity
	float ____rotationVelocity_29;
	// System.Single StarterAssets.ThirdPersonController::_verticalVelocity
	float ____verticalVelocity_30;
	// System.Single StarterAssets.ThirdPersonController::_terminalVelocity
	float ____terminalVelocity_31;
	// System.Single StarterAssets.ThirdPersonController::_jumpTimeoutDelta
	float ____jumpTimeoutDelta_32;
	// System.Single StarterAssets.ThirdPersonController::_fallTimeoutDelta
	float ____fallTimeoutDelta_33;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDSpeed
	int32_t ____animIDSpeed_34;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDGrounded
	int32_t ____animIDGrounded_35;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDJump
	int32_t ____animIDJump_36;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDFreeFall
	int32_t ____animIDFreeFall_37;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDMotionSpeed
	int32_t ____animIDMotionSpeed_38;
	// UnityEngine.InputSystem.PlayerInput StarterAssets.ThirdPersonController::_playerInput
	PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* ____playerInput_39;
	// UnityEngine.Animator StarterAssets.ThirdPersonController::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_40;
	// UnityEngine.CharacterController StarterAssets.ThirdPersonController::_controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ____controller_41;
	// StarterAssets.StarterAssetsInputs StarterAssets.ThirdPersonController::_input
	StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* ____input_42;
	// UnityEngine.GameObject StarterAssets.ThirdPersonController::_mainCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____mainCamera_43;
	// System.Boolean StarterAssets.ThirdPersonController::_hasAnimator
	bool ____hasAnimator_45;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// StarterAssets.UICanvasControllerInput
struct UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// StarterAssets.StarterAssetsInputs StarterAssets.UICanvasControllerInput::starterAssetsInputs
	StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* ___starterAssetsInputs_4;
};

// UIVirtualButton
struct UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UIVirtualButton/BoolEvent UIVirtualButton::buttonStateOutputEvent
	BoolEvent_t81DF6CDEF90C1D7B2256C9310BCCE9D2D078480A* ___buttonStateOutputEvent_4;
	// UIVirtualButton/Event UIVirtualButton::buttonClickOutputEvent
	Event_tCD26C285BECBF219F0B786DA841165B26E05F0B8* ___buttonClickOutputEvent_5;
};

// UIVirtualJoystick
struct UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform UIVirtualJoystick::containerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___containerRect_4;
	// UnityEngine.RectTransform UIVirtualJoystick::handleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handleRect_5;
	// System.Single UIVirtualJoystick::joystickRange
	float ___joystickRange_6;
	// System.Single UIVirtualJoystick::magnitudeMultiplier
	float ___magnitudeMultiplier_7;
	// System.Boolean UIVirtualJoystick::invertXOutputValue
	bool ___invertXOutputValue_8;
	// System.Boolean UIVirtualJoystick::invertYOutputValue
	bool ___invertYOutputValue_9;
	// UIVirtualJoystick/Event UIVirtualJoystick::joystickOutputEvent
	Event_tE8BCFAF6D3E261F47341C3DE8E539FF5C42E17C3* ___joystickOutputEvent_10;
};

// UIVirtualTouchZone
struct UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform UIVirtualTouchZone::containerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___containerRect_4;
	// UnityEngine.RectTransform UIVirtualTouchZone::handleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handleRect_5;
	// System.Boolean UIVirtualTouchZone::clampToMagnitude
	bool ___clampToMagnitude_6;
	// System.Single UIVirtualTouchZone::magnitudeMultiplier
	float ___magnitudeMultiplier_7;
	// System.Boolean UIVirtualTouchZone::invertXOutputValue
	bool ___invertXOutputValue_8;
	// System.Boolean UIVirtualTouchZone::invertYOutputValue
	bool ___invertYOutputValue_9;
	// UnityEngine.Vector2 UIVirtualTouchZone::pointerDownPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pointerDownPosition_10;
	// UnityEngine.Vector2 UIVirtualTouchZone::currentPointerPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___currentPointerPosition_11;
	// UIVirtualTouchZone/Event UIVirtualTouchZone::touchZoneOutputEvent
	Event_t39EC29014C2EF54751D4079DD636172E90DCE53E* ___touchZoneOutputEvent_12;
};

// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.BaseRaycaster::m_RootRaycaster
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___m_RootRaycaster_4;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B  : public BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832
{
	// System.Boolean UnityEngine.UI.GraphicRaycaster::m_IgnoreReversedGraphics
	bool ___m_IgnoreReversedGraphics_6;
	// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::m_BlockingObjects
	int32_t ___m_BlockingObjects_7;
	// UnityEngine.LayerMask UnityEngine.UI.GraphicRaycaster::m_BlockingMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_BlockingMask_8;
	// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_9;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::m_RaycastResults
	List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F* ___m_RaycastResults_10;
};

struct GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::s_SortedGraphics
	List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F* ___s_SortedGraphics_11;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem[]
struct DemoParticleSystemU5BU5D_t276B71C43FE5C96B19896B1C959B684286E4A77A  : public RuntimeArray
{
	ALIGN_FIELD (8) DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* m_Items[1];

	inline DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_gshared (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_gshared (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_gshared (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___component0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_gshared (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Toggle>()
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioListener::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioListener_get_volume_mCE38EB0C7ACCECCC98E1816DA2F816E771EE4595 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioListener::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_volume_mC13591F71DDD0B3A64E52E475260050E89F64C9A (float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.Void PauseMenu::MenuOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_MenuOn_m9030D634E27028B04973E7870665A800CBC60C20 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) ;
// System.Void PauseMenu::MenuOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_MenuOff_m8030826E97D9A80CDB149C510EA1BABC5BA05C18 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<PauseMenu>()
inline PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* Component_GetComponentInChildren_TisPauseMenu_t36539DEACE8377BD498A235C80769301799E1985_m1006D5934A242764425928B642A1DA98B564C0C6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564 (String_t* ___url0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetSceneAt_m5444433E1CD78FC2E573330630000B5A73E0FBF4 (int32_t ___index0, const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void MobileDisableAutoSwitchControls::DisableAutoSwitchControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileDisableAutoSwitchControls_DisableAutoSwitchControls_m156A87BFC0F55EC1BD438F032CB959A464A39AE4 (MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.PlayerInput::set_neverAutoSwitchControlSchemes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_set_neverAutoSwitchControlSchemes_mC0702F30BCC29A161B667EF791B9B9A12FC6DF60 (PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UIVirtualButton::OutputButtonStateValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonStateValue_m9052A6A66D9BD3C47C6C5498AD55EB44BBF6BB9F (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, bool ___buttonState0, const RuntimeMethod* method) ;
// System.Void UIVirtualButton::OutputButtonClickEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonClickEvent_m7DEA4C619F5DCCE273371E9D7B7760FC05D2DF32 (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
inline void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, bool, const RuntimeMethod*))UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
inline void UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, const RuntimeMethod*))UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UIVirtualJoystick::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_SetupHandle_m31819BE784870B9E54B3A50CA1956106F7BDB0C6 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Void UIVirtualJoystick::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newPosition0, const RuntimeMethod* method) ;
// System.Void UIVirtualJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnDrag_mB0E6B186E3567D9B4C37860E70DCA0B8DDB746C0 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___localPoint3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualJoystick::ApplySizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ApplySizeDelta_mE401CB7F9B4D1E53DD878FE6D3B34DD98A8BBEDB (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualJoystick::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ClampValuesToMagnitude_m136E1691A4EA6C3D59C18AF78CB3C790CCB8346E (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualJoystick::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ApplyInversionFilter_m92C48D8832AAFB5BCFA8C5E0E279E44E76EAC03E (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UIVirtualJoystick::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OutputPointerEventValue_mB0CA7705B486C5BC44C8AB8D3135B37A19800DB6 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pointerPosition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
inline void UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0 (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::ClampMagnitude(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_ClampMagnitude_m9F4DC26ED98E682A187F4B2AFEAB49CD376DF7CA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, float ___maxLength1, const RuntimeMethod* method) ;
// System.Single UIVirtualJoystick::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualJoystick_InvertValue_mDEBA6DFF3676133434C5152A72CB2BC125D3D507 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
inline void UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932*, const RuntimeMethod*))UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_gshared)(__this, method);
}
// System.Void UIVirtualTouchZone::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetupHandle_m01D23F4128356836F9A12EAE5445227B24E8A894 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UIVirtualTouchZone::SetObjectActiveState(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, bool ___newState1, const RuntimeMethod* method) ;
// System.Void UIVirtualTouchZone::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_UpdateHandleRectPosition_m859E4E9C7C76AA057603B2CAA49168BD0D5ACC9E (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newPosition0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualTouchZone::GetDeltaBetweenPositions(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_GetDeltaBetweenPositions_mD54442DDF2D8B643801BDA01791C97D3658E0B5B (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___firstPosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___secondPosition1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualTouchZone::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_ClampValuesToMagnitude_mA1619A6CBC35D212940A5D0AC1823AAFDA8FCC95 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualTouchZone::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_ApplyInversionFilter_mFE8FF2CCBE01FDAB1BB9FDEC163809B630173823 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// System.Void UIVirtualTouchZone::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OutputPointerEventValue_m53065FA2AD015F665E03E7CAE24703CFE1C4E2AF (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pointerPosition0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UIVirtualTouchZone::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualTouchZone_InvertValue_m81A82AFD20813D467E3F71703E9A5EE11CAE99BA (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void BasicRigidBodyPush::PushRigidBodies(UnityEngine.ControllerColliderHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicRigidBodyPush_PushRigidBodies_m21C4CA75FFF7646BCD91E9A673B18E6182377D13 (BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0* __this, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* ___hit0, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.ControllerColliderHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ControllerColliderHit_get_collider_mA2CF90334AD1231C04452B2D99715A9E289691D6 (ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* __this, const RuntimeMethod* method) ;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_get_isKinematic_mC20906CA5A89983DE06EAC6E3AFC5BC012F90CA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::get_moveDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerColliderHit_get_moveDirection_mC4C6384C18B4DAE3D301D079AE2A30FCC2E78A93 (ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::RotateTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_RotateTowards_m3A0BCD584401D5341E1CB544B37764207258B234 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxRadiansDelta2, float ___maxMagnitudeDelta3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293 (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231*, const RuntimeMethod*))InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_gshared)(__this, method);
}
// System.Void StarterAssets.StarterAssetsInputs::MoveInput(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newMoveDirection0, const RuntimeMethod* method) ;
// System.Void StarterAssets.StarterAssetsInputs::LookInput(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newLookDirection0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputValue::get_isPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputValue_get_isPressed_m83E305196A51E4FDB9277B726ADBE9673D9F7A3F (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.StarterAssetsInputs::JumpInput(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newJumpState0, const RuntimeMethod* method) ;
// System.Void StarterAssets.StarterAssetsInputs::SprintInput(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newSprintState0, const RuntimeMethod* method) ;
// System.Void StarterAssets.StarterAssetsInputs::SetCursorState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_SetCursorState_m7D2F57E935DE40673700B1994EFA6C4BF9573D0E (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newState0, const RuntimeMethod* method) ;
// System.Void ControlFreak2.CFCursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFCursor_set_lockState_m4A83CC86B1A04A0E8A7D41713D823820BB254521 (int32_t ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.PlayerInput::get_currentControlScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerInput_get_currentControlScheme_mA70B5C50BA1A61D2E232F17730BAECD3F690204C (PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9 (String_t* ___tag0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.Animator>(T&)
inline bool Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___component0, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<StarterAssets.StarterAssetsInputs>()
inline StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.InputSystem.PlayerInput>()
inline PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void StarterAssets.ThirdPersonController::AssignAnimationIDs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_AssignAnimationIDs_m3F78712E347AAEB24671FD485878AD4EFB45FA6A (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.ThirdPersonController::JumpAndGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_JumpAndGravity_m871B3C01ED71022CF151700F569540EAC058997F (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.ThirdPersonController::GroundedCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_GroundedCheck_mEC00FD7C667109275F153C9A1E7BDA401D514AEE (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.ThirdPersonController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Move_m6FB6A9AEA1B2354BAE790DE45C79292579802C76 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.ThirdPersonController::CameraRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_CameraRotation_m24BBAE5DB2B55B6DDC5218DD0DB7C53F1EF30751 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CheckSphere_m8642264AC443B505CE92D5DC9E41F75DA0ADAFBF (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___radius1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Boolean StarterAssets.ThirdPersonController::get_IsCurrentDeviceMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThirdPersonController_get_IsCurrentDeviceMouse_m5EBE0107CBD975A6178FCE2840C3D159A13C6D9C (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) ;
// System.Single StarterAssets.ThirdPersonController::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ThirdPersonController_ClampAngle_m7569DBBF5E50A690C57959DE6CCE6A18C32E19A2 (float ___lfAngle0, float ___lfMin1, float ___lfMax2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CharacterController::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_m1176F6353029E4F715A36DBC62B176050A21EBDC_inline (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___motion0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, float ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawSphere_m80D4373C59949363664E571DCE7E9C54337B4942 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, float ___radius1, const RuntimeMethod* method) ;
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 AnimationEvent_get_animatorClipInfo_m0D763FA1A2E3CD81AC08F1F24977859AE25938F3 (AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimatorClipInfo::get_weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorClipInfo_get_weight_m1CC29E2C37B30993EFFD12161059E4AD86EE287D (AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CharacterController::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CharacterController_get_center_mDF0F4D399A63BF5A2F5366CB71CCF4148DB08591 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_mEEF6FE993B8F7A61829F0E9538858711D06945F7 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, float ___volume2, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Select(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Select_mCB6246390E51EF7A03C6DCF0D07D1B05E0FF3091 (ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE* __this, int32_t ___i0, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_m017722BD53BAE32893C2A1B674746E340D4A5B89_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.SceneUtils.ParticleSceneControls::CheckForGuiCollision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSceneControls_CheckForGuiCollision_m960B71319864DFB0B51F02487D8940EE09898479 (ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE* __this, const RuntimeMethod* method) ;
// System.Boolean ControlFreak2.CF2Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CF2Input_GetMouseButtonDown_m8E4B3EBC5A6BD6761D35010B818E4AECF7EE1719 (int32_t ___mouseButton0, const RuntimeMethod* method) ;
// System.Boolean ControlFreak2.CF2Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CF2Input_GetMouseButton_m61BF37FC583D6C4823CB4A8A3965CE2A8E7C5834 (int32_t ___mouseButton0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 ControlFreak2.CF2Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CF2Input_get_mousePosition_m8C1BF888A02A5FF53D3350D33952EE174C6FFD70 (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.Transform>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m38E7C2988B6E5CA8AE1FC34B3318EDD01C0FB899 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityStandardAssets.Effects.ParticleSystemMultiplier>()
inline ParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75* Component_GetComponent_TisParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75_m4AEEED8A204656CCD3DCEDB2FEAC64EC3583F634 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867 (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_m3E9E6359087607E84E0D4D35844D80D9452AD72D (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, int32_t ___count0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___eventSystem0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pressPosition(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pressPosition_m85544FBAB798DABE70067508294A6C4841A95379_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
inline void List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
inline int32_t List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m9F174A6F7D2DBE4E1934892F3438405F379014E3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___methodName0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::get_targetGraphic()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* Selectable_get_targetGraphic_m659A2940226EC644AAFC2D5CCC326ABEE6384388_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_targetGraphic(UnityEngine.UI.Graphic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_targetGraphic_m23DB0DF4E5F2DABD50C662C708B4555162171FB9 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_m4B6A71D10BBD87D55EE8AE2A8C708CE115C60973_inline (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mA20AB2E3DFAE680D742E9A17D969AF8A3E849711 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_m4B87B84265A48389AC3F5E3E8164570C6AECE5C3_inline (float ___current0, float ___target1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m00E482452BCED3FE0F16B4033B2B5323C7E30829 (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MenuSceneLoader::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuSceneLoader_Awake_m59CE267E4C8D98F884E0A49746A43D5326243103 (MenuSceneLoader_tB2C4C717B14D24B7B409BAA1B0E2494629A494B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Go == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_Go_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// m_Go = Instantiate(menuUI);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___menuUI_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		__this->___m_Go_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Go_5), (void*)L_3);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void MenuSceneLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuSceneLoader__ctor_mCE6502BBE1BD8968925AFC82F58798CCFE265260 (MenuSceneLoader_tB2C4C717B14D24B7B409BAA1B0E2494629A494B1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PauseMenu::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Awake_mD17C2664126E61F76112D3C96B5A4684E0D00B66 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MenuToggle = GetComponent <Toggle> ();
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0;
		L_0 = Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE(__this, Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE_RuntimeMethod_var);
		__this->___m_MenuToggle_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MenuToggle_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void PauseMenu::MenuOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_MenuOn_m9030D634E27028B04973E7870665A800CBC60C20 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// m_TimeScaleRef = Time.timeScale;
		float L_0;
		L_0 = Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413(NULL);
		__this->___m_TimeScaleRef_5 = L_0;
		// Time.timeScale = 0f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		// m_VolumeRef = AudioListener.volume;
		float L_1;
		L_1 = AudioListener_get_volume_mCE38EB0C7ACCECCC98E1816DA2F816E771EE4595(NULL);
		__this->___m_VolumeRef_6 = L_1;
		// AudioListener.volume = 0f;
		AudioListener_set_volume_mC13591F71DDD0B3A64E52E475260050E89F64C9A((0.0f), NULL);
		// m_Paused = true;
		__this->___m_Paused_7 = (bool)1;
		// }
		return;
	}
}
// System.Void PauseMenu::MenuOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_MenuOff_m8030826E97D9A80CDB149C510EA1BABC5BA05C18 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = m_TimeScaleRef;
		float L_0 = __this->___m_TimeScaleRef_5;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C(L_0, NULL);
		// AudioListener.volume = m_VolumeRef;
		float L_1 = __this->___m_VolumeRef_6;
		AudioListener_set_volume_mC13591F71DDD0B3A64E52E475260050E89F64C9A(L_1, NULL);
		// m_Paused = false;
		__this->___m_Paused_7 = (bool)0;
		// }
		return;
	}
}
// System.Void PauseMenu::OnMenuStatusChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_OnMenuStatusChange_mCEB82D67AAC49CD9667E4E6F57E0573F40DE5E15 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// if (m_MenuToggle.isOn && !m_Paused)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___m_MenuToggle_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = __this->___m_Paused_7;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		// MenuOn();
		PauseMenu_MenuOn_m9030D634E27028B04973E7870665A800CBC60C20(__this, NULL);
		return;
	}

IL_001c:
	{
		// else if (!m_MenuToggle.isOn && m_Paused)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_3 = __this->___m_MenuToggle_4;
		NullCheck(L_3);
		bool L_4;
		L_4 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		bool L_5 = __this->___m_Paused_7;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// MenuOff();
		PauseMenu_MenuOff_m8030826E97D9A80CDB149C510EA1BABC5BA05C18(__this, NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void PauseMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__ctor_m81B0E020DC5008DA4D414200BAAF7122B430D826 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// private float m_TimeScaleRef = 1f;
		__this->___m_TimeScaleRef_5 = (1.0f);
		// private float m_VolumeRef = 1f;
		__this->___m_VolumeRef_6 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneAndURLLoader::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneAndURLLoader_Awake_m5866D81A687D72DBA9BBF5853919C7FBB9893285 (SceneAndURLLoader_t92F763949B50192DA195986B5F4AF130A055719E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisPauseMenu_t36539DEACE8377BD498A235C80769301799E1985_m1006D5934A242764425928B642A1DA98B564C0C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PauseMenu = GetComponentInChildren <PauseMenu> ();
		PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* L_0;
		L_0 = Component_GetComponentInChildren_TisPauseMenu_t36539DEACE8377BD498A235C80769301799E1985_m1006D5934A242764425928B642A1DA98B564C0C6(__this, Component_GetComponentInChildren_TisPauseMenu_t36539DEACE8377BD498A235C80769301799E1985_m1006D5934A242764425928B642A1DA98B564C0C6_RuntimeMethod_var);
		__this->___m_PauseMenu_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PauseMenu_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void SceneAndURLLoader::SceneLoad(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneAndURLLoader_SceneLoad_m73E130A3BC5EA9A793375A482D665F72C3A6D3B0 (SceneAndURLLoader_t92F763949B50192DA195986B5F4AF130A055719E* __this, String_t* ___sceneName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PauseMenu.MenuOff ();
		PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* L_0 = __this->___m_PauseMenu_4;
		NullCheck(L_0);
		PauseMenu_MenuOff_m8030826E97D9A80CDB149C510EA1BABC5BA05C18(L_0, NULL);
		// SceneManager.LoadScene(sceneName);
		String_t* L_1 = ___sceneName0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_1, NULL);
		// }
		return;
	}
}
// System.Void SceneAndURLLoader::LoadURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneAndURLLoader_LoadURL_m4A45D5E370CD6B9585AE873C96134C3919DE2CB6 (SceneAndURLLoader_t92F763949B50192DA195986B5F4AF130A055719E* __this, String_t* ___url0, const RuntimeMethod* method) 
{
	{
		// Application.OpenURL(url);
		String_t* L_0 = ___url0;
		Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564(L_0, NULL);
		// }
		return;
	}
}
// System.Void SceneAndURLLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneAndURLLoader__ctor_mFAD0FEC646B0633467E3FE62E974B3176347E753 (SceneAndURLLoader_t92F763949B50192DA195986B5F4AF130A055719E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraSwitch::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraSwitch_OnEnable_mCECA93E391A7391B1EF886DDA013217F1D71D3C2 (CameraSwitch_tB9EC45074FB9E0AB46A1D539728DD0C63679058C* __this, const RuntimeMethod* method) 
{
	{
		// text.text = objects[m_CurrentActiveObject].name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_5;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___objects_4;
		int32_t L_2 = __this->___m_CurrentActiveObject_6;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		// }
		return;
	}
}
// System.Void CameraSwitch::NextCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraSwitch_NextCamera_m7BF63EC241B63827337BBC94AA293E51512AD146 (CameraSwitch_tB9EC45074FB9E0AB46A1D539728DD0C63679058C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// int nextactiveobject = m_CurrentActiveObject + 1 >= objects.Length ? 0 : m_CurrentActiveObject + 1;
		int32_t L_0 = __this->___m_CurrentActiveObject_6;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___objects_4;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, 1))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = __this->___m_CurrentActiveObject_6;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_0 = G_B3_0;
		// for (int i = 0; i < objects.Length; i++)
		V_1 = 0;
		goto IL_0037;
	}

IL_0022:
	{
		// objects[i].SetActive(i == nextactiveobject);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___objects_4;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0), NULL);
		// for (int i = 0; i < objects.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		// for (int i = 0; i < objects.Length; i++)
		int32_t L_10 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = __this->___objects_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0022;
		}
	}
	{
		// m_CurrentActiveObject = nextactiveobject;
		int32_t L_12 = V_0;
		__this->___m_CurrentActiveObject_6 = L_12;
		// text.text = objects[m_CurrentActiveObject].name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___text_5;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->___objects_4;
		int32_t L_15 = __this->___m_CurrentActiveObject_6;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_17, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_18);
		// }
		return;
	}
}
// System.Void CameraSwitch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraSwitch__ctor_m353D283057D459AABE2512B589AA33005E29595A (CameraSwitch_tB9EC45074FB9E0AB46A1D539728DD0C63679058C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelReset::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelReset_OnPointerClick_mA2238CC8C7F013863589F2499CD4857B3073AC9C (LevelReset_t9EA6532EFA025B9EFE7BDD0E62FA9B69972B47B7* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetSceneAt(0).name);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetSceneAt_m5444433E1CD78FC2E573330630000B5A73E0FBF4(0, NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_1, NULL);
		// }
		return;
	}
}
// System.Void LevelReset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelReset__ctor_m5F459BC67BF9A94E5A4A6279F1B0E1F312A9B248 (LevelReset_t9EA6532EFA025B9EFE7BDD0E62FA9B69972B47B7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MobileDisableAutoSwitchControls::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileDisableAutoSwitchControls_Start_m5E1CF874A11971B24762BC74EE94AB81CFF45368 (MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA* __this, const RuntimeMethod* method) 
{
	{
		// DisableAutoSwitchControls();
		MobileDisableAutoSwitchControls_DisableAutoSwitchControls_m156A87BFC0F55EC1BD438F032CB959A464A39AE4(__this, NULL);
		// }
		return;
	}
}
// System.Void MobileDisableAutoSwitchControls::DisableAutoSwitchControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileDisableAutoSwitchControls_DisableAutoSwitchControls_m156A87BFC0F55EC1BD438F032CB959A464A39AE4 (MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA* __this, const RuntimeMethod* method) 
{
	{
		// playerInput.neverAutoSwitchControlSchemes = true;
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_0 = __this->___playerInput_4;
		NullCheck(L_0);
		PlayerInput_set_neverAutoSwitchControlSchemes_mC0702F30BCC29A161B667EF791B9B9A12FC6DF60(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MobileDisableAutoSwitchControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileDisableAutoSwitchControls__ctor_mF934985411953E473C075F0C8680F75C118E8FCC (MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIVirtualButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OnPointerDown_m1B73262454FA610913DA71F1C0792FD780787D56 (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OutputButtonStateValue(true);
		UIVirtualButton_OutputButtonStateValue_m9052A6A66D9BD3C47C6C5498AD55EB44BBF6BB9F(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OnPointerUp_mD67F7DFB29033E7C84A2F41C31FA3CFDA1174C8B (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OutputButtonStateValue(false);
		UIVirtualButton_OutputButtonStateValue_m9052A6A66D9BD3C47C6C5498AD55EB44BBF6BB9F(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OnPointerClick_m3FEAAD559F8262DC2C8A8E91C85765E327CDB8FC (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OutputButtonClickEvent();
		UIVirtualButton_OutputButtonClickEvent_m7DEA4C619F5DCCE273371E9D7B7760FC05D2DF32(__this, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OutputButtonStateValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonStateValue_m9052A6A66D9BD3C47C6C5498AD55EB44BBF6BB9F (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, bool ___buttonState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonStateOutputEvent.Invoke(buttonState);
		BoolEvent_t81DF6CDEF90C1D7B2256C9310BCCE9D2D078480A* L_0 = __this->___buttonStateOutputEvent_4;
		bool L_1 = ___buttonState0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_0, L_1, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OutputButtonClickEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonClickEvent_m7DEA4C619F5DCCE273371E9D7B7760FC05D2DF32 (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, const RuntimeMethod* method) 
{
	{
		// buttonClickOutputEvent.Invoke();
		Event_tCD26C285BECBF219F0B786DA841165B26E05F0B8* L_0 = __this->___buttonClickOutputEvent_5;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton__ctor_m2CF3E3351F342BF028B0B89C015137EDF0D1B8D7 (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIVirtualButton/BoolEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolEvent__ctor_m42AA0406D1CB826FFD96A45AE4FFD71224A581D7 (BoolEvent_t81DF6CDEF90C1D7B2256C9310BCCE9D2D078480A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934(__this, UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIVirtualButton/Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_mF10E167E7BE71239919769A3884196FF8581BC95 (Event_tCD26C285BECBF219F0B786DA841165B26E05F0B8* __this, const RuntimeMethod* method) 
{
	{
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIVirtualJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_Start_mD2D5C68628D62647018960CBF87655E0D13D845C (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, const RuntimeMethod* method) 
{
	{
		// SetupHandle();
		UIVirtualJoystick_SetupHandle_m31819BE784870B9E54B3A50CA1956106F7BDB0C6(__this, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_SetupHandle_m31819BE784870B9E54B3A50CA1956106F7BDB0C6 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// UpdateHandleRectPosition(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894(__this, L_2, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnPointerDown_m2CADC0629A70249CC581C3DEF77A2D70558DF2B5 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OnDrag(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		UIVirtualJoystick_OnDrag_mB0E6B186E3567D9B4C37860E70DCA0B8DDB746C0(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnDrag_mB0E6B186E3567D9B4C37860E70DCA0B8DDB746C0 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(containerRect, eventData.position, eventData.pressEventCamera, out Vector2 position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___containerRect_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0(L_0, L_2, L_4, (&V_0), NULL);
		// position = ApplySizeDelta(position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = UIVirtualJoystick_ApplySizeDelta_mE401CB7F9B4D1E53DD878FE6D3B34DD98A8BBEDB(__this, L_6, NULL);
		V_0 = L_7;
		// Vector2 clampedPosition = ClampValuesToMagnitude(position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = UIVirtualJoystick_ClampValuesToMagnitude_m136E1691A4EA6C3D59C18AF78CB3C790CCB8346E(__this, L_8, NULL);
		V_1 = L_9;
		// Vector2 outputPosition = ApplyInversionFilter(position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = UIVirtualJoystick_ApplyInversionFilter_m92C48D8832AAFB5BCFA8C5E0E279E44E76EAC03E(__this, L_10, NULL);
		V_2 = L_11;
		// OutputPointerEventValue(outputPosition * magnitudeMultiplier);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_2;
		float L_13 = __this->___magnitudeMultiplier_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_12, L_13, NULL);
		UIVirtualJoystick_OutputPointerEventValue_mB0CA7705B486C5BC44C8AB8D3135B37A19800DB6(__this, L_14, NULL);
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_15, NULL);
		if (!L_16)
		{
			goto IL_0063;
		}
	}
	{
		// UpdateHandleRectPosition(clampedPosition * joystickRange);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_1;
		float L_18 = __this->___joystickRange_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_17, L_18, NULL);
		UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894(__this, L_19, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnPointerUp_m32B1B96876A1AD9636D7119CF428E8A9441379EA (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OutputPointerEventValue(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		UIVirtualJoystick_OutputPointerEventValue_mB0CA7705B486C5BC44C8AB8D3135B37A19800DB6(__this, L_0, NULL);
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// UpdateHandleRectPosition(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894(__this, L_3, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OutputPointerEventValue_mB0CA7705B486C5BC44C8AB8D3135B37A19800DB6 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pointerPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// joystickOutputEvent.Invoke(pointerPosition);
		Event_tE8BCFAF6D3E261F47341C3DE8E539FF5C42E17C3* L_0 = __this->___joystickOutputEvent_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___pointerPosition0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0(L_0, L_1, UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newPosition0, const RuntimeMethod* method) 
{
	{
		// handleRect.anchoredPosition = newPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___handleRect_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___newPosition0;
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 UIVirtualJoystick::ApplySizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ApplySizeDelta_mE401CB7F9B4D1E53DD878FE6D3B34DD98A8BBEDB (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float x = (position.x/containerRect.sizeDelta.x) * 2.5f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___position0;
		float L_1 = L_0.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___containerRect_4;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_2, NULL);
		float L_4 = L_3.___x_0;
		// float y = (position.y/containerRect.sizeDelta.y) * 2.5f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___position0;
		float L_6 = L_5.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___containerRect_4;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_7, NULL);
		float L_9 = L_8.___y_1;
		V_0 = ((float)il2cpp_codegen_multiply(((float)(L_6/L_9)), (2.5f)));
		// return new Vector2(x, y);
		float L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), ((float)il2cpp_codegen_multiply(((float)(L_1/L_4)), (2.5f))), L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Vector2 UIVirtualJoystick::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ClampValuesToMagnitude_m136E1691A4EA6C3D59C18AF78CB3C790CCB8346E (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	{
		// return Vector2.ClampMagnitude(position, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___position0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_ClampMagnitude_m9F4DC26ED98E682A187F4B2AFEAB49CD376DF7CA_inline(L_0, (1.0f), NULL);
		return L_1;
	}
}
// UnityEngine.Vector2 UIVirtualJoystick::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ApplyInversionFilter_m92C48D8832AAFB5BCFA8C5E0E279E44E76EAC03E (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	{
		// if(invertXOutputValue)
		bool L_0 = __this->___invertXOutputValue_8;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// position.x = InvertValue(position.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___position0;
		float L_2 = L_1.___x_0;
		float L_3;
		L_3 = UIVirtualJoystick_InvertValue_mDEBA6DFF3676133434C5152A72CB2BC125D3D507(__this, L_2, NULL);
		(&___position0)->___x_0 = L_3;
	}

IL_001b:
	{
		// if(invertYOutputValue)
		bool L_4 = __this->___invertYOutputValue_9;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// position.y = InvertValue(position.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___position0;
		float L_6 = L_5.___y_1;
		float L_7;
		L_7 = UIVirtualJoystick_InvertValue_mDEBA6DFF3676133434C5152A72CB2BC125D3D507(__this, L_6, NULL);
		(&___position0)->___y_1 = L_7;
	}

IL_0036:
	{
		// return position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___position0;
		return L_8;
	}
}
// System.Single UIVirtualJoystick::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualJoystick_InvertValue_mDEBA6DFF3676133434C5152A72CB2BC125D3D507 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// return -value;
		float L_0 = ___value0;
		return ((-L_0));
	}
}
// System.Void UIVirtualJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick__ctor_m8526A96A470D77A141CAD1D824FF8DC137B63415 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, const RuntimeMethod* method) 
{
	{
		// public float joystickRange = 50f;
		__this->___joystickRange_6 = (50.0f);
		// public float magnitudeMultiplier = 1f;
		__this->___magnitudeMultiplier_7 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIVirtualJoystick/Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_m89D370961FB9424418084FD7CC1FFF237A4606C5 (Event_tE8BCFAF6D3E261F47341C3DE8E539FF5C42E17C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D(__this, UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIVirtualTouchZone::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_Start_m5178EDEC0B12F59242283DD29F480CFA00D77676 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, const RuntimeMethod* method) 
{
	{
		// SetupHandle();
		UIVirtualTouchZone_SetupHandle_m01D23F4128356836F9A12EAE5445227B24E8A894(__this, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetupHandle_m01D23F4128356836F9A12EAE5445227B24E8A894 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// SetObjectActiveState(handleRect.gameObject, false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___handleRect_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5(__this, L_3, (bool)0, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OnPointerDown_m8FD8081376FC0AEEDDF7F4ADF1B9C6624D358DEE (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(containerRect, eventData.position, eventData.pressEventCamera, out pointerDownPosition);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___containerRect_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___pointerDownPosition_10);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0(L_0, L_2, L_4, L_5, NULL);
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_7, NULL);
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		// SetObjectActiveState(handleRect.gameObject, true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___handleRect_5;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5(__this, L_10, (bool)1, NULL);
		// UpdateHandleRectPosition(pointerDownPosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___pointerDownPosition_10;
		UIVirtualTouchZone_UpdateHandleRectPosition_m859E4E9C7C76AA057603B2CAA49168BD0D5ACC9E(__this, L_11, NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OnDrag_m018815333D4A45EC9288289C3230B446F86F522F (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(containerRect, eventData.position, eventData.pressEventCamera, out currentPointerPosition);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___containerRect_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___currentPointerPosition_11);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0(L_0, L_2, L_4, L_5, NULL);
		// Vector2 positionDelta = GetDeltaBetweenPositions(pointerDownPosition, currentPointerPosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___pointerDownPosition_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = __this->___currentPointerPosition_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = UIVirtualTouchZone_GetDeltaBetweenPositions_mD54442DDF2D8B643801BDA01791C97D3658E0B5B(__this, L_7, L_8, NULL);
		V_0 = L_9;
		// Vector2 clampedPosition = ClampValuesToMagnitude(positionDelta);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = UIVirtualTouchZone_ClampValuesToMagnitude_mA1619A6CBC35D212940A5D0AC1823AAFDA8FCC95(__this, L_10, NULL);
		V_1 = L_11;
		// Vector2 outputPosition = ApplyInversionFilter(clampedPosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = UIVirtualTouchZone_ApplyInversionFilter_mFE8FF2CCBE01FDAB1BB9FDEC163809B630173823(__this, L_12, NULL);
		V_2 = L_13;
		// OutputPointerEventValue(outputPosition * magnitudeMultiplier);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_2;
		float L_15 = __this->___magnitudeMultiplier_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_14, L_15, NULL);
		UIVirtualTouchZone_OutputPointerEventValue_m53065FA2AD015F665E03E7CAE24703CFE1C4E2AF(__this, L_16, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OnPointerUp_m6572F60C16F6D09A07FDE778F69FD710E06315A5 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pointerDownPosition = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___pointerDownPosition_10 = L_0;
		// currentPointerPosition = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___currentPointerPosition_11 = L_1;
		// OutputPointerEventValue(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		UIVirtualTouchZone_OutputPointerEventValue_m53065FA2AD015F665E03E7CAE24703CFE1C4E2AF(__this, L_2, NULL);
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// SetObjectActiveState(handleRect.gameObject, false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___handleRect_5;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5(__this, L_6, (bool)0, NULL);
		// UpdateHandleRectPosition(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		UIVirtualTouchZone_UpdateHandleRectPosition_m859E4E9C7C76AA057603B2CAA49168BD0D5ACC9E(__this, L_7, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OutputPointerEventValue_m53065FA2AD015F665E03E7CAE24703CFE1C4E2AF (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pointerPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// touchZoneOutputEvent.Invoke(pointerPosition);
		Event_t39EC29014C2EF54751D4079DD636172E90DCE53E* L_0 = __this->___touchZoneOutputEvent_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___pointerPosition0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0(L_0, L_1, UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_UpdateHandleRectPosition_m859E4E9C7C76AA057603B2CAA49168BD0D5ACC9E (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newPosition0, const RuntimeMethod* method) 
{
	{
		// handleRect.anchoredPosition = newPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___handleRect_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___newPosition0;
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::SetObjectActiveState(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, bool ___newState1, const RuntimeMethod* method) 
{
	{
		// targetObject.SetActive(newState);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		bool L_1 = ___newState1;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 UIVirtualTouchZone::GetDeltaBetweenPositions(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_GetDeltaBetweenPositions_mD54442DDF2D8B643801BDA01791C97D3658E0B5B (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___firstPosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___secondPosition1, const RuntimeMethod* method) 
{
	{
		// return secondPosition - firstPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___secondPosition1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___firstPosition0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 UIVirtualTouchZone::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_ClampValuesToMagnitude_mA1619A6CBC35D212940A5D0AC1823AAFDA8FCC95 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	{
		// return Vector2.ClampMagnitude(position, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___position0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_ClampMagnitude_m9F4DC26ED98E682A187F4B2AFEAB49CD376DF7CA_inline(L_0, (1.0f), NULL);
		return L_1;
	}
}
// UnityEngine.Vector2 UIVirtualTouchZone::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_ApplyInversionFilter_mFE8FF2CCBE01FDAB1BB9FDEC163809B630173823 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	{
		// if(invertXOutputValue)
		bool L_0 = __this->___invertXOutputValue_8;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// position.x = InvertValue(position.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___position0;
		float L_2 = L_1.___x_0;
		float L_3;
		L_3 = UIVirtualTouchZone_InvertValue_m81A82AFD20813D467E3F71703E9A5EE11CAE99BA(__this, L_2, NULL);
		(&___position0)->___x_0 = L_3;
	}

IL_001b:
	{
		// if(invertYOutputValue)
		bool L_4 = __this->___invertYOutputValue_9;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// position.y = InvertValue(position.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___position0;
		float L_6 = L_5.___y_1;
		float L_7;
		L_7 = UIVirtualTouchZone_InvertValue_m81A82AFD20813D467E3F71703E9A5EE11CAE99BA(__this, L_6, NULL);
		(&___position0)->___y_1 = L_7;
	}

IL_0036:
	{
		// return position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___position0;
		return L_8;
	}
}
// System.Single UIVirtualTouchZone::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualTouchZone_InvertValue_m81A82AFD20813D467E3F71703E9A5EE11CAE99BA (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// return -value;
		float L_0 = ___value0;
		return ((-L_0));
	}
}
// System.Void UIVirtualTouchZone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone__ctor_m3FA22B25B88E7ECBBB54AF2464EFB9A978D76CC6 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, const RuntimeMethod* method) 
{
	{
		// public float magnitudeMultiplier = 1f;
		__this->___magnitudeMultiplier_7 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIVirtualTouchZone/Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_m5EC032D776C29C6281EF446F93420F4DB87B6728 (Event_t39EC29014C2EF54751D4079DD636172E90DCE53E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D(__this, UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BasicRigidBodyPush::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicRigidBodyPush_OnControllerColliderHit_mAB4A1B5340D41961D9592034FE626BC8A8FC379E (BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0* __this, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* ___hit0, const RuntimeMethod* method) 
{
	{
		// if (canPush) PushRigidBodies(hit);
		bool L_0 = __this->___canPush_5;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// if (canPush) PushRigidBodies(hit);
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_1 = ___hit0;
		BasicRigidBodyPush_PushRigidBodies_m21C4CA75FFF7646BCD91E9A673B18E6182377D13(__this, L_1, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void BasicRigidBodyPush::PushRigidBodies(UnityEngine.ControllerColliderHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicRigidBodyPush_PushRigidBodies_m21C4CA75FFF7646BCD91E9A673B18E6182377D13 (BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0* __this, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* ___hit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Rigidbody body = hit.collider.attachedRigidbody;
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_0 = ___hit0;
		NullCheck(L_0);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = ControllerColliderHit_get_collider_mA2CF90334AD1231C04452B2D99715A9E289691D6(L_0, NULL);
		NullCheck(L_1);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD(L_1, NULL);
		V_0 = L_2;
		// if (body == null || body.isKinematic) return;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = Rigidbody_get_isKinematic_mC20906CA5A89983DE06EAC6E3AFC5BC012F90CA1(L_5, NULL);
		if (!L_6)
		{
			goto IL_001e;
		}
	}

IL_001d:
	{
		// if (body == null || body.isKinematic) return;
		return;
	}

IL_001e:
	{
		// var bodyLayerMask = 1 << body.gameObject.layer;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = V_0;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_8, NULL);
		// if ((bodyLayerMask & pushLayers.value) == 0) return;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_10 = (&__this->___pushLayers_4);
		int32_t L_11;
		L_11 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974(L_10, NULL);
		if (((int32_t)(((int32_t)(1<<((int32_t)(L_9&((int32_t)31)))))&L_11)))
		{
			goto IL_003d;
		}
	}
	{
		// if ((bodyLayerMask & pushLayers.value) == 0) return;
		return;
	}

IL_003d:
	{
		// if (hit.moveDirection.y < -0.3f) return;
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_12 = ___hit0;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = ControllerColliderHit_get_moveDirection_mC4C6384C18B4DAE3D301D079AE2A30FCC2E78A93(L_12, NULL);
		float L_14 = L_13.___y_3;
		if ((!(((float)L_14) < ((float)(-0.300000012f)))))
		{
			goto IL_0050;
		}
	}
	{
		// if (hit.moveDirection.y < -0.3f) return;
		return;
	}

IL_0050:
	{
		// Vector3 pushDir = new Vector3(hit.moveDirection.x, 0.0f, hit.moveDirection.z);
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_15 = ___hit0;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = ControllerColliderHit_get_moveDirection_mC4C6384C18B4DAE3D301D079AE2A30FCC2E78A93(L_15, NULL);
		float L_17 = L_16.___x_2;
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_18 = ___hit0;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = ControllerColliderHit_get_moveDirection_mC4C6384C18B4DAE3D301D079AE2A30FCC2E78A93(L_18, NULL);
		float L_20 = L_19.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), L_17, (0.0f), L_20, NULL);
		// body.AddForce(pushDir * strength, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		float L_23 = __this->___strength_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_22, L_23, NULL);
		NullCheck(L_21);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_21, L_24, 1, NULL);
		// }
		return;
	}
}
// System.Void BasicRigidBodyPush::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicRigidBodyPush__ctor_mCD0033473AC08BFF32309E49AE95271C711099A9 (BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0* __this, const RuntimeMethod* method) 
{
	{
		// [Range(0.5f, 5f)] public float strength = 1.1f;
		__this->___strength_6 = (1.10000002f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PropMovementScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropMovementScript_Start_mCF142AB28EDAD3E6C05B58386F78FD3A1885757E (PropMovementScript_t6572CC4FC47275A8F9490B46B71547A55FFA9959* __this, const RuntimeMethod* method) 
{
	{
		// startPosition = gameObject.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		__this->___startPosition_11 = L_2;
		// startRotation = gameObject.transform.localEulerAngles;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_4, NULL);
		__this->___startRotation_12 = L_5;
		// if (TrahsHold < 0.15f)
		float L_6 = __this->___TrahsHold_4;
		if ((!(((float)L_6) < ((float)(0.150000006f)))))
		{
			goto IL_0044;
		}
	}
	{
		// TrahsHold = 0.15f;
		__this->___TrahsHold_4 = (0.150000006f);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void PropMovementScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropMovementScript_Update_m121D743E8562AFEBED9FB857B673BE8DE820C3FD (PropMovementScript_t6572CC4FC47275A8F9490B46B71547A55FFA9959* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (isMoving)
		bool L_0 = __this->___isMoving_5;
		if (!L_0)
		{
			goto IL_00af;
		}
	}
	{
		// Vector3 objPos = Vector3.MoveTowards(gameObject.transform.position, targetPosition, speed * Time.deltaTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___targetPosition_6;
		float L_5 = __this->___speed_7;
		float L_6;
		L_6 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline(L_3, L_4, ((float)il2cpp_codegen_multiply(L_5, L_6)), NULL);
		V_0 = L_7;
		// if ((Mathf.Abs(targetPosition.x - objPos.x) < TrahsHold) &&
		//     (Mathf.Abs(targetPosition.y - objPos.y) < TrahsHold) &&
		//     (Mathf.Abs(targetPosition.z - objPos.z) < TrahsHold))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___targetPosition_6);
		float L_9 = L_8->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = L_10.___x_2;
		float L_12;
		L_12 = fabsf(((float)il2cpp_codegen_subtract(L_9, L_11)));
		float L_13 = __this->___TrahsHold_4;
		if ((!(((float)L_12) < ((float)L_13))))
		{
			goto IL_00a3;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&__this->___targetPosition_6);
		float L_15 = L_14->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		float L_17 = L_16.___y_3;
		float L_18;
		L_18 = fabsf(((float)il2cpp_codegen_subtract(L_15, L_17)));
		float L_19 = __this->___TrahsHold_4;
		if ((!(((float)L_18) < ((float)L_19))))
		{
			goto IL_00a3;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&__this->___targetPosition_6);
		float L_21 = L_20->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		float L_23 = L_22.___z_4;
		float L_24;
		L_24 = fabsf(((float)il2cpp_codegen_subtract(L_21, L_23)));
		float L_25 = __this->___TrahsHold_4;
		if ((!(((float)L_24) < ((float)L_25))))
		{
			goto IL_00a3;
		}
	}
	{
		// transform.position = startPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = __this->___startPosition_11;
		NullCheck(L_26);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_26, L_27, NULL);
		goto IL_00af;
	}

IL_00a3:
	{
		// transform.position = objPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		NullCheck(L_28);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_28, L_29, NULL);
	}

IL_00af:
	{
		// if (isRotating)
		bool L_30 = __this->___isRotating_8;
		if (!L_30)
		{
			goto IL_0162;
		}
	}
	{
		// Vector3 objRotation = Vector3.RotateTowards(gameObject.transform.localEulerAngles, targetRotation, speedRotation * Time.deltaTime, 1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = __this->___targetRotation_9;
		float L_35 = __this->___speedRotation_10;
		float L_36;
		L_36 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_RotateTowards_m3A0BCD584401D5341E1CB544B37764207258B234(L_33, L_34, ((float)il2cpp_codegen_multiply(L_35, L_36)), (1.0f), NULL);
		V_1 = L_37;
		// if ((Mathf.Abs(targetRotation.x - objRotation.x) < TrahsHold) &&
		//    (Mathf.Abs(targetRotation.y - objRotation.y) < TrahsHold) &&
		//    (Mathf.Abs(targetRotation.z - objRotation.z) < TrahsHold))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_38 = (&__this->___targetRotation_9);
		float L_39 = L_38->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_1;
		float L_41 = L_40.___x_2;
		float L_42;
		L_42 = fabsf(((float)il2cpp_codegen_subtract(L_39, L_41)));
		float L_43 = __this->___TrahsHold_4;
		if ((!(((float)L_42) < ((float)L_43))))
		{
			goto IL_0156;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_44 = (&__this->___targetRotation_9);
		float L_45 = L_44->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_1;
		float L_47 = L_46.___y_3;
		float L_48;
		L_48 = fabsf(((float)il2cpp_codegen_subtract(L_45, L_47)));
		float L_49 = __this->___TrahsHold_4;
		if ((!(((float)L_48) < ((float)L_49))))
		{
			goto IL_0156;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_50 = (&__this->___targetRotation_9);
		float L_51 = L_50->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_1;
		float L_53 = L_52.___z_4;
		float L_54;
		L_54 = fabsf(((float)il2cpp_codegen_subtract(L_51, L_53)));
		float L_55 = __this->___TrahsHold_4;
		if ((!(((float)L_54) < ((float)L_55))))
		{
			goto IL_0156;
		}
	}
	{
		// transform.localEulerAngles = startRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = __this->___startRotation_12;
		NullCheck(L_56);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_56, L_57, NULL);
		return;
	}

IL_0156:
	{
		// transform.localEulerAngles = objRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_1;
		NullCheck(L_58);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_58, L_59, NULL);
	}

IL_0162:
	{
		// }
		return;
	}
}
// System.Void PropMovementScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropMovementScript__ctor_mC4288728EB0B232EC2807C691FAEB395FC81A8AC (PropMovementScript_t6572CC4FC47275A8F9490B46B71547A55FFA9959* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraFollow::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_LateUpdate_m9C559F2A33098CED5CB8BD82CCD6FC98AB521D61 (CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (target == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// Vector3 desiredPosition = target.position + offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___target_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___offset_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_3, L_4, NULL);
		V_0 = L_5;
		// Vector3 smoothedPosition = Vector3.Lerp(transform.position, desiredPosition, smoothSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		float L_9 = __this->___smoothSpeed_5;
		float L_10;
		L_10 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_7, L_8, ((float)il2cpp_codegen_multiply(L_9, L_10)), NULL);
		V_1 = L_11;
		// transform.position = smoothedPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_13, NULL);
		// transform.LookAt(target);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___target_4;
		NullCheck(L_14);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void CameraFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow__ctor_m113CC547D419EF599BC487F0F44B06BB2D4EE11B (CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* __this, const RuntimeMethod* method) 
{
	{
		// public float smoothSpeed = 0.125f;   // The smoothness of camera movement
		__this->___smoothSpeed_5 = (0.125f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StarterAssets.StarterAssetsInputs::OnMove(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnMove_m1037EAE12A06BEF9F73CAF4A3127C6A9CF4D6532 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MoveInput(value.Get<Vector2>());
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_0 = ___value0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293(L_0, InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::OnLook(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnLook_m457792363F0A68571BD7A917C44B1A0B1C5D7EC4 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(cursorInputForLook)
		bool L_0 = __this->___cursorInputForLook_10;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// LookInput(value.Get<Vector2>());
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_1 = ___value0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293(L_1, InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE_inline(__this, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::OnJump(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnJump_m077D720656D5B78D423A5D7E0194BA2D9DE089E4 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___value0, const RuntimeMethod* method) 
{
	{
		// JumpInput(value.isPressed);
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_0 = ___value0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InputValue_get_isPressed_m83E305196A51E4FDB9277B726ADBE9673D9F7A3F(L_0, NULL);
		StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::OnSprint(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnSprint_m8FF0D36964527B10A1A14E55A9EE4025C1AFF0EF (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___value0, const RuntimeMethod* method) 
{
	{
		// SprintInput(value.isPressed);
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_0 = ___value0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InputValue_get_isPressed_m83E305196A51E4FDB9277B726ADBE9673D9F7A3F(L_0, NULL);
		StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::MoveInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newMoveDirection0, const RuntimeMethod* method) 
{
	{
		// move = newMoveDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___newMoveDirection0;
		__this->___move_4 = L_0;
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::LookInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newLookDirection0, const RuntimeMethod* method) 
{
	{
		// look = newLookDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___newLookDirection0;
		__this->___look_5 = L_0;
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::JumpInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newJumpState0, const RuntimeMethod* method) 
{
	{
		// jump = newJumpState;
		bool L_0 = ___newJumpState0;
		__this->___jump_6 = L_0;
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::SprintInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newSprintState0, const RuntimeMethod* method) 
{
	{
		// sprint = newSprintState;
		bool L_0 = ___newSprintState0;
		__this->___sprint_7 = L_0;
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnApplicationFocus_m461C49F2AC387B76D98B87A98BA38A0289C34EA9 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___hasFocus0, const RuntimeMethod* method) 
{
	{
		// SetCursorState(cursorLocked);
		bool L_0 = __this->___cursorLocked_9;
		StarterAssetsInputs_SetCursorState_m7D2F57E935DE40673700B1994EFA6C4BF9573D0E(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::SetCursorState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_SetCursorState_m7D2F57E935DE40673700B1994EFA6C4BF9573D0E (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CFCursor_t55D8EC0B1D866D5A5019A7270696A0601C4F8235_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// ControlFreak2.CFCursor.lockState = newState ? CursorLockMode.Locked : CursorLockMode.None;
		bool L_0 = ___newState0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 1;
	}

IL_0007:
	{
		il2cpp_codegen_runtime_class_init_inline(CFCursor_t55D8EC0B1D866D5A5019A7270696A0601C4F8235_il2cpp_TypeInfo_var);
		CFCursor_set_lockState_m4A83CC86B1A04A0E8A7D41713D823820BB254521(G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs__ctor_m1A0CAEE3381A63077E196B7C815859617C9BCDBA (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, const RuntimeMethod* method) 
{
	{
		// public bool cursorLocked = true;
		__this->___cursorLocked_9 = (bool)1;
		// public bool cursorInputForLook = true;
		__this->___cursorInputForLook_10 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StarterAssets.UICanvasControllerInput::VirtualMoveInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualMoveInput_m56E41472A26B3A6B517D63844304F7196FFF449C (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___virtualMoveDirection0, const RuntimeMethod* method) 
{
	{
		// starterAssetsInputs.MoveInput(virtualMoveDirection);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->___starterAssetsInputs_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___virtualMoveDirection0;
		NullCheck(L_0);
		StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::VirtualLookInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualLookInput_m88A9B7AC7F338CFBEC98FBBBD2EC8793C1C8288E (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___virtualLookDirection0, const RuntimeMethod* method) 
{
	{
		// starterAssetsInputs.LookInput(virtualLookDirection);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->___starterAssetsInputs_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___virtualLookDirection0;
		NullCheck(L_0);
		StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::VirtualJumpInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualJumpInput_m45600335B430348707B730FFA2FCB334E8D807FE (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, bool ___virtualJumpState0, const RuntimeMethod* method) 
{
	{
		// starterAssetsInputs.JumpInput(virtualJumpState);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->___starterAssetsInputs_4;
		bool L_1 = ___virtualJumpState0;
		NullCheck(L_0);
		StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::VirtualSprintInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualSprintInput_m80CBF3433D8C053AB55A0D3F01B26070F1799759 (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, bool ___virtualSprintState0, const RuntimeMethod* method) 
{
	{
		// starterAssetsInputs.SprintInput(virtualSprintState);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->___starterAssetsInputs_4;
		bool L_1 = ___virtualSprintState0;
		NullCheck(L_0);
		StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput__ctor_m3B7626E7C92128BC984ABE40C9C250720F352017 (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean StarterAssets.ThirdPersonController::get_IsCurrentDeviceMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThirdPersonController_get_IsCurrentDeviceMouse_m5EBE0107CBD975A6178FCE2840C3D159A13C6D9C (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4700B5BBCBF829BC28448CAB621CD8AEDB030940);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _playerInput.currentControlScheme == "KeyboardMouse";
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_0 = __this->____playerInput_39;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = PlayerInput_get_currentControlScheme_mA70B5C50BA1A61D2E232F17730BAECD3F690204C(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral4700B5BBCBF829BC28448CAB621CD8AEDB030940, NULL);
		return L_2;
	}
}
// System.Void StarterAssets.ThirdPersonController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Awake_mE08F39AEA7E4CE2E15C7828E9C24AC4CE9C487C3 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_mainCamera == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____mainCamera_43;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// _mainCamera = GameObject.FindGameObjectWithTag("MainCamera");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, NULL);
		__this->____mainCamera_43 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mainCamera_43), (void*)L_2);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Start_m99AC2EAB6D2136A754B1B9B2E001732ED198D7E7 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _cinemachineTargetYaw = CinemachineCameraTarget.transform.rotation.eulerAngles.y;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___CinemachineCameraTarget_19;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		float L_4 = L_3.___y_3;
		__this->____cinemachineTargetYaw_24 = L_4;
		// _hasAnimator = TryGetComponent(out _animator);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** L_5 = (&__this->____animator_40);
		bool L_6;
		L_6 = Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7(__this, L_5, Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		__this->____hasAnimator_45 = L_6;
		// _controller = GetComponent<CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_7;
		L_7 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->____controller_41 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____controller_41), (void*)L_7);
		// _input = GetComponent<StarterAssetsInputs>();
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_8;
		L_8 = Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC(__this, Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC_RuntimeMethod_var);
		__this->____input_42 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____input_42), (void*)L_8);
		// _playerInput = GetComponent<PlayerInput>();
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_9;
		L_9 = Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89(__this, Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89_RuntimeMethod_var);
		__this->____playerInput_39 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playerInput_39), (void*)L_9);
		// AssignAnimationIDs();
		ThirdPersonController_AssignAnimationIDs_m3F78712E347AAEB24671FD485878AD4EFB45FA6A(__this, NULL);
		// _jumpTimeoutDelta = JumpTimeout;
		float L_10 = __this->___JumpTimeout_13;
		__this->____jumpTimeoutDelta_32 = L_10;
		// _fallTimeoutDelta = FallTimeout;
		float L_11 = __this->___FallTimeout_14;
		__this->____fallTimeoutDelta_33 = L_11;
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Update_mAFF4B3A14DCC2D6F6C5D318C41DFC61F3EDE43C5 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _hasAnimator = TryGetComponent(out _animator);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** L_0 = (&__this->____animator_40);
		bool L_1;
		L_1 = Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7(__this, L_0, Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		__this->____hasAnimator_45 = L_1;
		// JumpAndGravity();
		ThirdPersonController_JumpAndGravity_m871B3C01ED71022CF151700F569540EAC058997F(__this, NULL);
		// GroundedCheck();
		ThirdPersonController_GroundedCheck_mEC00FD7C667109275F153C9A1E7BDA401D514AEE(__this, NULL);
		// Move();
		ThirdPersonController_Move_m6FB6A9AEA1B2354BAE790DE45C79292579802C76(__this, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_LateUpdate_m02FBD3801F369821F2FEF5ADD8890B3FB9759BC0 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	{
		// CameraRotation();
		ThirdPersonController_CameraRotation_m24BBAE5DB2B55B6DDC5218DD0DB7C53F1EF30751(__this, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::AssignAnimationIDs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_AssignAnimationIDs_m3F78712E347AAEB24671FD485878AD4EFB45FA6A (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B1BBFA44CAA416A6E13B3ADACB0CDB4EFF4AAB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2CFA0DCA9F3732AA69C3B65D12881F7F3CF5FC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animIDSpeed = Animator.StringToHash("Speed");
		int32_t L_0;
		L_0 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, NULL);
		__this->____animIDSpeed_34 = L_0;
		// _animIDGrounded = Animator.StringToHash("Grounded");
		int32_t L_1;
		L_1 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(_stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4, NULL);
		__this->____animIDGrounded_35 = L_1;
		// _animIDJump = Animator.StringToHash("Jump");
		int32_t L_2;
		L_2 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		__this->____animIDJump_36 = L_2;
		// _animIDFreeFall = Animator.StringToHash("FreeFall");
		int32_t L_3;
		L_3 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(_stringLiteral0B1BBFA44CAA416A6E13B3ADACB0CDB4EFF4AAB3, NULL);
		__this->____animIDFreeFall_37 = L_3;
		// _animIDMotionSpeed = Animator.StringToHash("MotionSpeed");
		int32_t L_4;
		L_4 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(_stringLiteralE2CFA0DCA9F3732AA69C3B65D12881F7F3CF5FC0, NULL);
		__this->____animIDMotionSpeed_38 = L_4;
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::GroundedCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_GroundedCheck_mEC00FD7C667109275F153C9A1E7BDA401D514AEE (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 spherePosition = new Vector3(transform.position.x, transform.position.y - GroundedOffset,
		//     transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___y_3;
		float L_6 = __this->___GroundedOffset_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_2, ((float)il2cpp_codegen_subtract(L_5, L_6)), L_9, NULL);
		// Grounded = Physics.CheckSphere(spherePosition, GroundedRadius, GroundLayers,
		//     QueryTriggerInteraction.Ignore);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = __this->___GroundedRadius_17;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_12 = __this->___GroundLayers_18;
		int32_t L_13;
		L_13 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_12, NULL);
		bool L_14;
		L_14 = Physics_CheckSphere_m8642264AC443B505CE92D5DC9E41F75DA0ADAFBF(L_10, L_11, L_13, 1, NULL);
		__this->___Grounded_15 = L_14;
		// if (_hasAnimator)
		bool L_15 = __this->____hasAnimator_45;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		// _animator.SetBool(_animIDGrounded, Grounded);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16 = __this->____animator_40;
		int32_t L_17 = __this->____animIDGrounded_35;
		bool L_18 = __this->___Grounded_15;
		NullCheck(L_16);
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_16, L_17, L_18, NULL);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::CameraRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_CameraRotation_m24BBAE5DB2B55B6DDC5218DD0DB7C53F1EF30751 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B5_0 = 0.0f;
	{
		// if (_input.look.sqrMagnitude >= _threshold && !LockCameraPosition)
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->____input_42;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&L_0->___look_5);
		float L_2;
		L_2 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline(L_1, NULL);
		if ((!(((float)L_2) >= ((float)(0.00999999978f)))))
		{
			goto IL_0072;
		}
	}
	{
		bool L_3 = __this->___LockCameraPosition_23;
		if (L_3)
		{
			goto IL_0072;
		}
	}
	{
		// float deltaTimeMultiplier = IsCurrentDeviceMouse ? 1.0f : Time.deltaTime;
		bool L_4;
		L_4 = ThirdPersonController_get_IsCurrentDeviceMouse_m5EBE0107CBD975A6178FCE2840C3D159A13C6D9C(__this, NULL);
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		G_B5_0 = L_5;
		goto IL_0033;
	}

IL_002e:
	{
		G_B5_0 = (1.0f);
	}

IL_0033:
	{
		V_0 = G_B5_0;
		// _cinemachineTargetYaw += _input.look.x * deltaTimeMultiplier;
		float L_6 = __this->____cinemachineTargetYaw_24;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_7 = __this->____input_42;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&L_7->___look_5);
		float L_9 = L_8->___x_0;
		float L_10 = V_0;
		__this->____cinemachineTargetYaw_24 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		// _cinemachineTargetPitch += _input.look.y * deltaTimeMultiplier;
		float L_11 = __this->____cinemachineTargetPitch_25;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_12 = __this->____input_42;
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&L_12->___look_5);
		float L_14 = L_13->___y_1;
		float L_15 = V_0;
		__this->____cinemachineTargetPitch_25 = ((float)il2cpp_codegen_add(L_11, ((float)il2cpp_codegen_multiply(L_14, L_15))));
	}

IL_0072:
	{
		// _cinemachineTargetYaw = ClampAngle(_cinemachineTargetYaw, float.MinValue, float.MaxValue);
		float L_16 = __this->____cinemachineTargetYaw_24;
		float L_17;
		L_17 = ThirdPersonController_ClampAngle_m7569DBBF5E50A690C57959DE6CCE6A18C32E19A2(L_16, (-(std::numeric_limits<float>::max)()), ((std::numeric_limits<float>::max)()), NULL);
		__this->____cinemachineTargetYaw_24 = L_17;
		// _cinemachineTargetPitch = ClampAngle(_cinemachineTargetPitch, BottomClamp, TopClamp);
		float L_18 = __this->____cinemachineTargetPitch_25;
		float L_19 = __this->___BottomClamp_21;
		float L_20 = __this->___TopClamp_20;
		float L_21;
		L_21 = ThirdPersonController_ClampAngle_m7569DBBF5E50A690C57959DE6CCE6A18C32E19A2(L_18, L_19, L_20, NULL);
		__this->____cinemachineTargetPitch_25 = L_21;
		// CinemachineCameraTarget.transform.rotation = Quaternion.Euler(_cinemachineTargetPitch + CameraAngleOverride,
		//     _cinemachineTargetYaw, 0.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___CinemachineCameraTarget_19;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		float L_24 = __this->____cinemachineTargetPitch_25;
		float L_25 = __this->___CameraAngleOverride_22;
		float L_26 = __this->____cinemachineTargetYaw_24;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(((float)il2cpp_codegen_add(L_24, L_25)), L_26, (0.0f), NULL);
		NullCheck(L_23);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_23, L_27, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Move_m6FB6A9AEA1B2354BAE790DE45C79292579802C76 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B8_0 = 0.0f;
	{
		// float targetSpeed = _input.sprint ? SprintSpeed : MoveSpeed;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->____input_42;
		NullCheck(L_0);
		bool L_1 = L_0->___sprint_7;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		float L_2 = __this->___MoveSpeed_4;
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0015:
	{
		float L_3 = __this->___SprintSpeed_5;
		G_B3_0 = L_3;
	}

IL_001b:
	{
		V_0 = G_B3_0;
		// if (_input.move == Vector2.zero) targetSpeed = 0.0f;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_4 = __this->____input_42;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = L_4->___move_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		bool L_7;
		L_7 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		// if (_input.move == Vector2.zero) targetSpeed = 0.0f;
		V_0 = (0.0f);
	}

IL_0039:
	{
		// float currentHorizontalSpeed = new Vector3(_controller.velocity.x, 0.0f, _controller.velocity.z).magnitude;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_8 = __this->____controller_41;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_8, NULL);
		float L_10 = L_9.___x_2;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_11 = __this->____controller_41;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_11, NULL);
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_10, (0.0f), L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		float L_15;
		L_15 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_6), NULL);
		V_1 = L_15;
		// float speedOffset = 0.1f;
		V_2 = (0.100000001f);
		// float inputMagnitude = _input.analogMovement ? _input.move.magnitude : 1f;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_16 = __this->____input_42;
		NullCheck(L_16);
		bool L_17 = L_16->___analogMovement_8;
		if (L_17)
		{
			goto IL_0087;
		}
	}
	{
		G_B8_0 = (1.0f);
		goto IL_0097;
	}

IL_0087:
	{
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_18 = __this->____input_42;
		NullCheck(L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&L_18->___move_4);
		float L_20;
		L_20 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_19, NULL);
		G_B8_0 = L_20;
	}

IL_0097:
	{
		V_3 = G_B8_0;
		// if (currentHorizontalSpeed < targetSpeed - speedOffset ||
		//     currentHorizontalSpeed > targetSpeed + speedOffset)
		float L_21 = V_1;
		float L_22 = V_0;
		float L_23 = V_2;
		if ((((float)L_21) < ((float)((float)il2cpp_codegen_subtract(L_22, L_23)))))
		{
			goto IL_00a4;
		}
	}
	{
		float L_24 = V_1;
		float L_25 = V_0;
		float L_26 = V_2;
		if ((!(((float)L_24) > ((float)((float)il2cpp_codegen_add(L_25, L_26))))))
		{
			goto IL_00de;
		}
	}

IL_00a4:
	{
		// _speed = Mathf.Lerp(currentHorizontalSpeed, targetSpeed * inputMagnitude,
		//     Time.deltaTime * SpeedChangeRate);
		float L_27 = V_1;
		float L_28 = V_0;
		float L_29 = V_3;
		float L_30;
		L_30 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_31 = __this->___SpeedChangeRate_7;
		float L_32;
		L_32 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_27, ((float)il2cpp_codegen_multiply(L_28, L_29)), ((float)il2cpp_codegen_multiply(L_30, L_31)), NULL);
		__this->____speed_26 = L_32;
		// _speed = Mathf.Round(_speed * 1000f) / 1000f;
		float L_33 = __this->____speed_26;
		float L_34;
		L_34 = bankers_roundf(((float)il2cpp_codegen_multiply(L_33, (1000.0f))));
		__this->____speed_26 = ((float)(L_34/(1000.0f)));
		goto IL_00e5;
	}

IL_00de:
	{
		// _speed = targetSpeed;
		float L_35 = V_0;
		__this->____speed_26 = L_35;
	}

IL_00e5:
	{
		// _animationBlend = Mathf.Lerp(_animationBlend, targetSpeed, Time.deltaTime * SpeedChangeRate);
		float L_36 = __this->____animationBlend_27;
		float L_37 = V_0;
		float L_38;
		L_38 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_39 = __this->___SpeedChangeRate_7;
		float L_40;
		L_40 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_36, L_37, ((float)il2cpp_codegen_multiply(L_38, L_39)), NULL);
		__this->____animationBlend_27 = L_40;
		// if (_animationBlend < 0.01f) _animationBlend = 0f;
		float L_41 = __this->____animationBlend_27;
		if ((!(((float)L_41) < ((float)(0.00999999978f)))))
		{
			goto IL_011b;
		}
	}
	{
		// if (_animationBlend < 0.01f) _animationBlend = 0f;
		__this->____animationBlend_27 = (0.0f);
	}

IL_011b:
	{
		// Vector3 inputDirection = new Vector3(_input.move.x, 0.0f, _input.move.y).normalized;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_42 = __this->____input_42;
		NullCheck(L_42);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_43 = (&L_42->___move_4);
		float L_44 = L_43->___x_0;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_45 = __this->____input_42;
		NullCheck(L_45);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_46 = (&L_45->___move_4);
		float L_47 = L_46->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_48), L_44, (0.0f), L_47, /*hidden argument*/NULL);
		V_6 = L_48;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_6), NULL);
		V_4 = L_49;
		// if (_input.move != Vector2.zero)
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_50 = __this->____input_42;
		NullCheck(L_50);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = L_50->___move_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		L_52 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		bool L_53;
		L_53 = Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline(L_51, L_52, NULL);
		if (!L_53)
		{
			goto IL_01e1;
		}
	}
	{
		// _targetRotation = Mathf.Atan2(inputDirection.x, inputDirection.z) * Mathf.Rad2Deg +
		//                   _mainCamera.transform.eulerAngles.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_4;
		float L_55 = L_54.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = V_4;
		float L_57 = L_56.___z_4;
		float L_58;
		L_58 = atan2f(L_55, L_57);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = __this->____mainCamera_43;
		NullCheck(L_59);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60;
		L_60 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_59, NULL);
		NullCheck(L_60);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_60, NULL);
		float L_62 = L_61.___y_3;
		__this->____targetRotation_28 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_58, (57.2957802f))), L_62));
		// float rotation = Mathf.SmoothDampAngle(transform.eulerAngles.y, _targetRotation, ref _rotationVelocity,
		//     RotationSmoothTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_63);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_63, NULL);
		float L_65 = L_64.___y_3;
		float L_66 = __this->____targetRotation_28;
		float* L_67 = (&__this->____rotationVelocity_29);
		float L_68 = __this->___RotationSmoothTime_6;
		float L_69;
		L_69 = Mathf_SmoothDampAngle_m1176F6353029E4F715A36DBC62B176050A21EBDC_inline(L_65, L_66, L_67, L_68, NULL);
		V_7 = L_69;
		// transform.rotation = Quaternion.Euler(0.0f, rotation, 0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_71 = V_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_72;
		L_72 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), L_71, (0.0f), NULL);
		NullCheck(L_70);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_70, L_72, NULL);
	}

IL_01e1:
	{
		// Vector3 targetDirection = Quaternion.Euler(0.0f, _targetRotation, 0.0f) * Vector3.forward;
		float L_73 = __this->____targetRotation_28;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_74;
		L_74 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), L_73, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_74, L_75, NULL);
		V_5 = L_76;
		// _controller.Move(targetDirection.normalized * (_speed * Time.deltaTime) +
		//                  new Vector3(0.0f, _verticalVelocity, 0.0f) * Time.deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_77 = __this->____controller_41;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		float L_79 = __this->____speed_26;
		float L_80;
		L_80 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_78, ((float)il2cpp_codegen_multiply(L_79, L_80)), NULL);
		float L_82 = __this->____verticalVelocity_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_83), (0.0f), L_82, (0.0f), /*hidden argument*/NULL);
		float L_84;
		L_84 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_83, L_84, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_81, L_85, NULL);
		NullCheck(L_77);
		int32_t L_87;
		L_87 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_77, L_86, NULL);
		// if (_hasAnimator)
		bool L_88 = __this->____hasAnimator_45;
		if (!L_88)
		{
			goto IL_027b;
		}
	}
	{
		// _animator.SetFloat(_animIDSpeed, _animationBlend);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_89 = __this->____animator_40;
		int32_t L_90 = __this->____animIDSpeed_34;
		float L_91 = __this->____animationBlend_27;
		NullCheck(L_89);
		Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5(L_89, L_90, L_91, NULL);
		// _animator.SetFloat(_animIDMotionSpeed, inputMagnitude);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_92 = __this->____animator_40;
		int32_t L_93 = __this->____animIDMotionSpeed_38;
		float L_94 = V_3;
		NullCheck(L_92);
		Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5(L_92, L_93, L_94, NULL);
	}

IL_027b:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::JumpAndGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_JumpAndGravity_m871B3C01ED71022CF151700F569540EAC058997F (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	{
		// if (Grounded)
		bool L_0 = __this->___Grounded_15;
		if (!L_0)
		{
			goto IL_00ce;
		}
	}
	{
		// _fallTimeoutDelta = FallTimeout;
		float L_1 = __this->___FallTimeout_14;
		__this->____fallTimeoutDelta_33 = L_1;
		// if (_hasAnimator)
		bool L_2 = __this->____hasAnimator_45;
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		// _animator.SetBool(_animIDJump, false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->____animator_40;
		int32_t L_4 = __this->____animIDJump_36;
		NullCheck(L_3);
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_3, L_4, (bool)0, NULL);
		// _animator.SetBool(_animIDFreeFall, false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->____animator_40;
		int32_t L_6 = __this->____animIDFreeFall_37;
		NullCheck(L_5);
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_5, L_6, (bool)0, NULL);
	}

IL_0043:
	{
		// if (_verticalVelocity < 0.0f)
		float L_7 = __this->____verticalVelocity_30;
		if ((!(((float)L_7) < ((float)(0.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		// _verticalVelocity = -2f;
		__this->____verticalVelocity_30 = (-2.0f);
	}

IL_005b:
	{
		// if (_input.jump && _jumpTimeoutDelta <= 0.0f)
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_8 = __this->____input_42;
		NullCheck(L_8);
		bool L_9 = L_8->___jump_6;
		if (!L_9)
		{
			goto IL_00ad;
		}
	}
	{
		float L_10 = __this->____jumpTimeoutDelta_32;
		if ((!(((float)L_10) <= ((float)(0.0f)))))
		{
			goto IL_00ad;
		}
	}
	{
		// _verticalVelocity = Mathf.Sqrt(JumpHeight * -2f * Gravity);
		float L_11 = __this->___JumpHeight_11;
		float L_12 = __this->___Gravity_12;
		float L_13;
		L_13 = sqrtf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_11, (-2.0f))), L_12)));
		__this->____verticalVelocity_30 = L_13;
		// if (_hasAnimator)
		bool L_14 = __this->____hasAnimator_45;
		if (!L_14)
		{
			goto IL_00ad;
		}
	}
	{
		// _animator.SetBool(_animIDJump, true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = __this->____animator_40;
		int32_t L_16 = __this->____animIDJump_36;
		NullCheck(L_15);
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_15, L_16, (bool)1, NULL);
	}

IL_00ad:
	{
		// if (_jumpTimeoutDelta >= 0.0f)
		float L_17 = __this->____jumpTimeoutDelta_32;
		if ((!(((float)L_17) >= ((float)(0.0f)))))
		{
			goto IL_0121;
		}
	}
	{
		// _jumpTimeoutDelta -= Time.deltaTime;
		float L_18 = __this->____jumpTimeoutDelta_32;
		float L_19;
		L_19 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____jumpTimeoutDelta_32 = ((float)il2cpp_codegen_subtract(L_18, L_19));
		goto IL_0121;
	}

IL_00ce:
	{
		// _jumpTimeoutDelta = JumpTimeout;
		float L_20 = __this->___JumpTimeout_13;
		__this->____jumpTimeoutDelta_32 = L_20;
		// if (_fallTimeoutDelta >= 0.0f)
		float L_21 = __this->____fallTimeoutDelta_33;
		if ((!(((float)L_21) >= ((float)(0.0f)))))
		{
			goto IL_00fb;
		}
	}
	{
		// _fallTimeoutDelta -= Time.deltaTime;
		float L_22 = __this->____fallTimeoutDelta_33;
		float L_23;
		L_23 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____fallTimeoutDelta_33 = ((float)il2cpp_codegen_subtract(L_22, L_23));
		goto IL_0115;
	}

IL_00fb:
	{
		// if (_hasAnimator)
		bool L_24 = __this->____hasAnimator_45;
		if (!L_24)
		{
			goto IL_0115;
		}
	}
	{
		// _animator.SetBool(_animIDFreeFall, true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_25 = __this->____animator_40;
		int32_t L_26 = __this->____animIDFreeFall_37;
		NullCheck(L_25);
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_25, L_26, (bool)1, NULL);
	}

IL_0115:
	{
		// _input.jump = false;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_27 = __this->____input_42;
		NullCheck(L_27);
		L_27->___jump_6 = (bool)0;
	}

IL_0121:
	{
		// if (_verticalVelocity < _terminalVelocity)
		float L_28 = __this->____verticalVelocity_30;
		float L_29 = __this->____terminalVelocity_31;
		if ((!(((float)L_28) < ((float)L_29))))
		{
			goto IL_0148;
		}
	}
	{
		// _verticalVelocity += Gravity * Time.deltaTime;
		float L_30 = __this->____verticalVelocity_30;
		float L_31 = __this->___Gravity_12;
		float L_32;
		L_32 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____verticalVelocity_30 = ((float)il2cpp_codegen_add(L_30, ((float)il2cpp_codegen_multiply(L_31, L_32))));
	}

IL_0148:
	{
		// }
		return;
	}
}
// System.Single StarterAssets.ThirdPersonController::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ThirdPersonController_ClampAngle_m7569DBBF5E50A690C57959DE6CCE6A18C32E19A2 (float ___lfAngle0, float ___lfMin1, float ___lfMax2, const RuntimeMethod* method) 
{
	{
		// if (lfAngle < -360f) lfAngle += 360f;
		float L_0 = ___lfAngle0;
		if ((!(((float)L_0) < ((float)(-360.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// if (lfAngle < -360f) lfAngle += 360f;
		float L_1 = ___lfAngle0;
		___lfAngle0 = ((float)il2cpp_codegen_add(L_1, (360.0f)));
	}

IL_0011:
	{
		// if (lfAngle > 360f) lfAngle -= 360f;
		float L_2 = ___lfAngle0;
		if ((!(((float)L_2) > ((float)(360.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// if (lfAngle > 360f) lfAngle -= 360f;
		float L_3 = ___lfAngle0;
		___lfAngle0 = ((float)il2cpp_codegen_subtract(L_3, (360.0f)));
	}

IL_0022:
	{
		// return Mathf.Clamp(lfAngle, lfMin, lfMax);
		float L_4 = ___lfAngle0;
		float L_5 = ___lfMin1;
		float L_6 = ___lfMax2;
		float L_7;
		L_7 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void StarterAssets.ThirdPersonController::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_OnDrawGizmosSelected_mCD3D7F711815BC95C166CB8E67F3C5D085C38BA5 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Color transparentGreen = new Color(0.0f, 1.0f, 0.0f, 0.35f);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_0), (0.0f), (1.0f), (0.0f), (0.349999994f), NULL);
		// Color transparentRed = new Color(1.0f, 0.0f, 0.0f, 0.35f);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_1), (1.0f), (0.0f), (0.0f), (0.349999994f), NULL);
		// if (Grounded) Gizmos.color = transparentGreen;
		bool L_0 = __this->___Grounded_15;
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		// if (Grounded) Gizmos.color = transparentGreen;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2(L_1, NULL);
		goto IL_004c;
	}

IL_0046:
	{
		// else Gizmos.color = transparentRed;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = V_1;
		Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2(L_2, NULL);
	}

IL_004c:
	{
		// Gizmos.DrawSphere(
		//     new Vector3(transform.position.x, transform.position.y - GroundedOffset, transform.position.z),
		//     GroundedRadius);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___y_3;
		float L_9 = __this->___GroundedOffset_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_5, ((float)il2cpp_codegen_subtract(L_8, L_9)), L_12, /*hidden argument*/NULL);
		float L_14 = __this->___GroundedRadius_17;
		Gizmos_DrawSphere_m80D4373C59949363664E571DCE7E9C54337B4942(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::OnFootstep(UnityEngine.AnimationEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_OnFootstep_mFE54F581AB0F72FC34208BCB6ABF77311BCC3D02 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* ___animationEvent0, const RuntimeMethod* method) 
{
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if (animationEvent.animatorClipInfo.weight > 0.5f)
		AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* L_0 = ___animationEvent0;
		NullCheck(L_0);
		AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 L_1;
		L_1 = AnimationEvent_get_animatorClipInfo_m0D763FA1A2E3CD81AC08F1F24977859AE25938F3(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = AnimatorClipInfo_get_weight_m1CC29E2C37B30993EFFD12161059E4AD86EE287D((&V_0), NULL);
		if ((!(((float)L_2) > ((float)(0.5f)))))
		{
			goto IL_0056;
		}
	}
	{
		// if (FootstepAudioClips.Length > 0)
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_3 = __this->___FootstepAudioClips_9;
		NullCheck(L_3);
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0056;
		}
	}
	{
		// var index = Random.Range(0, FootstepAudioClips.Length);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_4 = __this->___FootstepAudioClips_9;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		V_1 = L_5;
		// AudioSource.PlayClipAtPoint(FootstepAudioClips[index], transform.TransformPoint(_controller.center), FootstepAudioVolume);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_6 = __this->___FootstepAudioClips_9;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_11 = __this->____controller_41;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = CharacterController_get_center_mDF0F4D399A63BF5A2F5366CB71CCF4148DB08591(L_11, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_10, L_12, NULL);
		float L_14 = __this->___FootstepAudioVolume_10;
		AudioSource_PlayClipAtPoint_mEEF6FE993B8F7A61829F0E9538858711D06945F7(L_9, L_13, L_14, NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::OnLand(UnityEngine.AnimationEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_OnLand_mAF1A04288C4B0ED39ACA52599F18D059F78D41C8 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* ___animationEvent0, const RuntimeMethod* method) 
{
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (animationEvent.animatorClipInfo.weight > 0.5f)
		AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* L_0 = ___animationEvent0;
		NullCheck(L_0);
		AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 L_1;
		L_1 = AnimationEvent_get_animatorClipInfo_m0D763FA1A2E3CD81AC08F1F24977859AE25938F3(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = AnimatorClipInfo_get_weight_m1CC29E2C37B30993EFFD12161059E4AD86EE287D((&V_0), NULL);
		if ((!(((float)L_2) > ((float)(0.5f)))))
		{
			goto IL_003c;
		}
	}
	{
		// AudioSource.PlayClipAtPoint(LandingAudioClip, transform.TransformPoint(_controller.center), FootstepAudioVolume);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = __this->___LandingAudioClip_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_5 = __this->____controller_41;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = CharacterController_get_center_mDF0F4D399A63BF5A2F5366CB71CCF4148DB08591(L_5, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_4, L_6, NULL);
		float L_8 = __this->___FootstepAudioVolume_10;
		AudioSource_PlayClipAtPoint_mEEF6FE993B8F7A61829F0E9538858711D06945F7(L_3, L_7, L_8, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController__ctor_mA2ECE265C51A281DA13F2344E30363399DD64321 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveSpeed = 2.0f;
		__this->___MoveSpeed_4 = (2.0f);
		// public float SprintSpeed = 5.335f;
		__this->___SprintSpeed_5 = (5.33500004f);
		// public float RotationSmoothTime = 0.12f;
		__this->___RotationSmoothTime_6 = (0.119999997f);
		// public float SpeedChangeRate = 10.0f;
		__this->___SpeedChangeRate_7 = (10.0f);
		// [Range(0, 1)] public float FootstepAudioVolume = 0.5f;
		__this->___FootstepAudioVolume_10 = (0.5f);
		// public float JumpHeight = 1.2f;
		__this->___JumpHeight_11 = (1.20000005f);
		// public float Gravity = -15.0f;
		__this->___Gravity_12 = (-15.0f);
		// public float JumpTimeout = 0.50f;
		__this->___JumpTimeout_13 = (0.5f);
		// public float FallTimeout = 0.15f;
		__this->___FallTimeout_14 = (0.150000006f);
		// public bool Grounded = true;
		__this->___Grounded_15 = (bool)1;
		// public float GroundedOffset = -0.14f;
		__this->___GroundedOffset_16 = (-0.140000001f);
		// public float GroundedRadius = 0.28f;
		__this->___GroundedRadius_17 = (0.280000001f);
		// public float TopClamp = 70.0f;
		__this->___TopClamp_20 = (70.0f);
		// public float BottomClamp = -30.0f;
		__this->___BottomClamp_21 = (-30.0f);
		// private float _terminalVelocity = 53.0f;
		__this->____terminalVelocity_31 = (53.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Awake_m7AD1EEC9E00076B93F16886376A22C155BF2AF0C (ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_Next_mF607DF0E31B7407AD6A38D97ED115B351D764D00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_Previous_mCA412358968E80B7918A6A0ACA8B9D69BDBBA081_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Select(s_SelectedIndex);
		int32_t L_0 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_SelectedIndex_18;
		ParticleSceneControls_Select_mCB6246390E51EF7A03C6DCF0D07D1B05E0FF3091(__this, L_0, NULL);
		// previousButton.onClick.AddListener(Previous);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___previousButton_11;
		NullCheck(L_1);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_2;
		L_2 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_1, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)ParticleSceneControls_Previous_mCA412358968E80B7918A6A0ACA8B9D69BDBBA081_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_2, L_3, NULL);
		// nextButton.onClick.AddListener(Next);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___nextButton_12;
		NullCheck(L_4);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_5;
		L_5 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_4, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_6, __this, (intptr_t)((void*)ParticleSceneControls_Next_mF607DF0E31B7407AD6A38D97ED115B351D764D00_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_OnDisable_m6686EE2C55BAAF9C8A2B2CB3757875C2BB3DAE99 (ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_Next_mF607DF0E31B7407AD6A38D97ED115B351D764D00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_Previous_mCA412358968E80B7918A6A0ACA8B9D69BDBBA081_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// previousButton.onClick.RemoveListener (Previous);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___previousButton_11;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)ParticleSceneControls_Previous_mCA412358968E80B7918A6A0ACA8B9D69BDBBA081_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_1, L_2, NULL);
		// nextButton.onClick.RemoveListener (Next);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___nextButton_12;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)ParticleSceneControls_Next_mF607DF0E31B7407AD6A38D97ED115B351D764D00_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Previous()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Previous_mCA412358968E80B7918A6A0ACA8B9D69BDBBA081 (ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_SelectedIndex--;
		int32_t L_0 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_SelectedIndex_18;
		((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_SelectedIndex_18 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if (s_SelectedIndex == -1)
		int32_t L_1 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_SelectedIndex_18;
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		// s_SelectedIndex = demoParticles.items.Length - 1;
		DemoParticleSystemList_t73787946F79EF5D423387622F7C30C9997A68ACC* L_2 = __this->___demoParticles_4;
		NullCheck(L_2);
		DemoParticleSystemU5BU5D_t276B71C43FE5C96B19896B1C959B684286E4A77A* L_3 = L_2->___items_0;
		NullCheck(L_3);
		((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_SelectedIndex_18 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), 1));
	}

IL_0028:
	{
		// Select(s_SelectedIndex);
		int32_t L_4 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_SelectedIndex_18;
		ParticleSceneControls_Select_mCB6246390E51EF7A03C6DCF0D07D1B05E0FF3091(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Next_mF607DF0E31B7407AD6A38D97ED115B351D764D00 (ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_SelectedIndex++;
		int32_t L_0 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_SelectedIndex_18;
		((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_SelectedIndex_18 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (s_SelectedIndex == demoParticles.items.Length)
		int32_t L_1 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_SelectedIndex_18;
		DemoParticleSystemList_t73787946F79EF5D423387622F7C30C9997A68ACC* L_2 = __this->___demoParticles_4;
		NullCheck(L_2);
		DemoParticleSystemU5BU5D_t276B71C43FE5C96B19896B1C959B684286E4A77A* L_3 = L_2->___items_0;
		NullCheck(L_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0026;
		}
	}
	{
		// s_SelectedIndex = 0;
		((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_SelectedIndex_18 = 0;
	}

IL_0026:
	{
		// Select(s_SelectedIndex);
		int32_t L_4 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_SelectedIndex_18;
		ParticleSceneControls_Select_mCB6246390E51EF7A03C6DCF0D07D1B05E0FF3091(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Update_m26C22D90E8DA0BAEBFA2D05AD6D3BD4594AD6433 (ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75_m4AEEED8A204656CCD3DCEDB2FEAC64EC3583F634_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m38E7C2988B6E5CA8AE1FC34B3318EDD01C0FB899_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	{
		// sceneCamera.localPosition = Vector3.SmoothDamp(sceneCamera.localPosition, Vector3.forward*-s_Selected.camOffset,
		//                                            ref m_CamOffsetVelocity, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___sceneCamera_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___sceneCamera_9;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_4 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_4);
		int32_t L_5 = L_4->___camOffset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, ((float)((-L_5))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___m_CamOffsetVelocity_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_SmoothDamp_m017722BD53BAE32893C2A1B674746E340D4A5B89_inline(L_2, L_6, L_7, (1.0f), NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_8, NULL);
		// if (s_Selected.mode == Mode.Activate)
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_9 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_9);
		int32_t L_10 = L_9->___mode_1;
		if (L_10)
		{
			goto IL_0049;
		}
	}
	{
		// return;
		return;
	}

IL_0049:
	{
		// if (CheckForGuiCollision()) return;
		bool L_11;
		L_11 = ParticleSceneControls_CheckForGuiCollision_m960B71319864DFB0B51F02487D8940EE09898479(__this, NULL);
		if (!L_11)
		{
			goto IL_0052;
		}
	}
	{
		// if (CheckForGuiCollision()) return;
		return;
	}

IL_0052:
	{
		// bool oneShotClick = (ControlFreak2.CF2Input.GetMouseButtonDown(0) && s_Selected.mode == Mode.Instantiate);
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = CF2Input_GetMouseButtonDown_m8E4B3EBC5A6BD6761D35010B818E4AECF7EE1719(0, NULL);
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_13 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_13);
		int32_t L_14 = L_13->___mode_1;
		G_B7_0 = ((((int32_t)L_14) == ((int32_t)1))? 1 : 0);
		goto IL_006a;
	}

IL_0069:
	{
		G_B7_0 = 0;
	}

IL_006a:
	{
		// bool repeat = (ControlFreak2.CF2Input.GetMouseButton(0) && s_Selected.mode == Mode.Trail);
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = CF2Input_GetMouseButton_m61BF37FC583D6C4823CB4A8A3965CE2A8E7C5834(0, NULL);
		G_B8_0 = G_B7_0;
		if (!L_15)
		{
			G_B9_0 = G_B7_0;
			goto IL_0081;
		}
	}
	{
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_16 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_16);
		int32_t L_17 = L_16->___mode_1;
		G_B10_0 = ((((int32_t)L_17) == ((int32_t)2))? 1 : 0);
		G_B10_1 = G_B8_0;
		goto IL_0082;
	}

IL_0081:
	{
		G_B10_0 = 0;
		G_B10_1 = G_B9_0;
	}

IL_0082:
	{
		V_0 = (bool)G_B10_0;
		// if (oneShotClick || repeat)
		bool L_18 = V_0;
		if (!((int32_t)(G_B10_1|(int32_t)L_18)))
		{
			goto IL_0241;
		}
	}
	{
		// Ray ray = Camera.main.ScreenPointToRay(ControlFreak2.CF2Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19;
		L_19 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = CF2Input_get_mousePosition_m8C1BF888A02A5FF53D3350D33952EE174C6FFD70(NULL);
		NullCheck(L_19);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_21;
		L_21 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_19, L_20, NULL);
		// if (Physics.Raycast(ray, out hit))
		bool L_22;
		L_22 = Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A(L_21, (&V_1), NULL);
		if (!L_22)
		{
			goto IL_0241;
		}
	}
	{
		// var rot = Quaternion.LookRotation(hit.normal);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_1), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_23, NULL);
		V_2 = L_24;
		// if (s_Selected.align == AlignMode.Up)
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_25 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_25);
		int32_t L_26 = L_25->___align_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_00c5;
		}
	}
	{
		// rot = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		V_2 = L_27;
	}

IL_00c5:
	{
		// var pos = hit.point + hit.normal*spawnOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_1), NULL);
		float L_30 = __this->___spawnOffset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_29, L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_28, L_31, NULL);
		V_3 = L_32;
		// if ((pos - m_LastPos).magnitude > s_Selected.minDist)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = __this->___m_LastPos_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_33, L_34, NULL);
		V_4 = L_35;
		float L_36;
		L_36 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_4), NULL);
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_37 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_37);
		float L_38 = L_37->___minDist_4;
		if ((!(((float)L_36) > ((float)L_38))))
		{
			goto IL_0241;
		}
	}
	{
		// if (s_Selected.mode != Mode.Trail || m_Instance == null)
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_39 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_39);
		int32_t L_40 = L_39->___mode_1;
		if ((!(((uint32_t)L_40) == ((uint32_t)2))))
		{
			goto IL_0126;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = __this->___m_Instance_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_41, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_42)
		{
			goto IL_01ce;
		}
	}

IL_0126:
	{
		// m_Instance = (Transform) Instantiate(s_Selected.transform, pos, rot);
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_43 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = L_43->___transform_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m38E7C2988B6E5CA8AE1FC34B3318EDD01C0FB899(L_44, L_45, L_46, Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m38E7C2988B6E5CA8AE1FC34B3318EDD01C0FB899_RuntimeMethod_var);
		__this->___m_Instance_17 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Instance_17), (void*)L_47);
		// if (m_ParticleMultiplier != null)
		ParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75* L_48 = __this->___m_ParticleMultiplier_15;
		bool L_49;
		L_49 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_48, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_49)
		{
			goto IL_0161;
		}
	}
	{
		// m_Instance.GetComponent<ParticleSystemMultiplier>().multiplier = multiply;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50 = __this->___m_Instance_17;
		NullCheck(L_50);
		ParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75* L_51;
		L_51 = Component_GetComponent_TisParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75_m4AEEED8A204656CCD3DCEDB2FEAC64EC3583F634(L_50, Component_GetComponent_TisParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75_m4AEEED8A204656CCD3DCEDB2FEAC64EC3583F634_RuntimeMethod_var);
		float L_52 = __this->___multiply_6;
		NullCheck(L_51);
		L_51->___multiplier_4 = L_52;
	}

IL_0161:
	{
		// m_CurrentParticleList.Add(m_Instance);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_53 = __this->___m_CurrentParticleList_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54 = __this->___m_Instance_17;
		NullCheck(L_53);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_53, L_54, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		// if (s_Selected.maxCount > 0 && m_CurrentParticleList.Count > s_Selected.maxCount)
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_55 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_55);
		int32_t L_56 = L_55->___maxCount_3;
		if ((((int32_t)L_56) <= ((int32_t)0)))
		{
			goto IL_01e6;
		}
	}
	{
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_57 = __this->___m_CurrentParticleList_16;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_57, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_59 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_59);
		int32_t L_60 = L_59->___maxCount_3;
		if ((((int32_t)L_58) <= ((int32_t)L_60)))
		{
			goto IL_01e6;
		}
	}
	{
		// if (m_CurrentParticleList[0] != null)
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_61 = __this->___m_CurrentParticleList_16;
		NullCheck(L_61);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_61, 0, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_63;
		L_63 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_62, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_63)
		{
			goto IL_01c0;
		}
	}
	{
		// Destroy(m_CurrentParticleList[0].gameObject);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_64 = __this->___m_CurrentParticleList_16;
		NullCheck(L_64);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65;
		L_65 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_64, 0, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		NullCheck(L_65);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66;
		L_66 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_65, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_66, NULL);
	}

IL_01c0:
	{
		// m_CurrentParticleList.RemoveAt(0);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_67 = __this->___m_CurrentParticleList_16;
		NullCheck(L_67);
		List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437(L_67, 0, List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437_RuntimeMethod_var);
		goto IL_01e6;
	}

IL_01ce:
	{
		// m_Instance.position = pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68 = __this->___m_Instance_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_3;
		NullCheck(L_68);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_68, L_69, NULL);
		// m_Instance.rotation = rot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70 = __this->___m_Instance_17;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_71 = V_2;
		NullCheck(L_70);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_70, L_71, NULL);
	}

IL_01e6:
	{
		// if (s_Selected.mode == Mode.Trail)
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_72 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_72);
		int32_t L_73 = L_72->___mode_1;
		if ((!(((uint32_t)L_73) == ((uint32_t)2))))
		{
			goto IL_0228;
		}
	}
	{
		// var emission = m_Instance.transform.GetComponent<ParticleSystem>().emission;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74 = __this->___m_Instance_17;
		NullCheck(L_74);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75;
		L_75 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_74, NULL);
		NullCheck(L_75);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_76;
		L_76 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(L_75, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		NullCheck(L_76);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_77;
		L_77 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_76, NULL);
		V_5 = L_77;
		// emission.enabled = false;
		EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867((&V_5), (bool)0, NULL);
		// m_Instance.transform.GetComponent<ParticleSystem>().Emit(1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78 = __this->___m_Instance_17;
		NullCheck(L_78);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79;
		L_79 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_78, NULL);
		NullCheck(L_79);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_80;
		L_80 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(L_79, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		NullCheck(L_80);
		ParticleSystem_Emit_m3E9E6359087607E84E0D4D35844D80D9452AD72D(L_80, 1, NULL);
	}

IL_0228:
	{
		// m_Instance.parent = hit.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81 = __this->___m_Instance_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82;
		L_82 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		NullCheck(L_81);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_81, L_82, NULL);
		// m_LastPos = pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = V_3;
		__this->___m_LastPos_20 = L_83;
	}

IL_0241:
	{
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.SceneUtils.ParticleSceneControls::CheckForGuiCollision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSceneControls_CheckForGuiCollision_m960B71319864DFB0B51F02487D8940EE09898479 (ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_0 = NULL;
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* V_1 = NULL;
	{
		// PointerEventData eventData = new PointerEventData(eventSystem);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0 = __this->___eventSystem_14;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)il2cpp_codegen_object_new(PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C(L_1, L_0, NULL);
		V_0 = L_1;
		// eventData.pressPosition = ControlFreak2.CF2Input.mousePosition;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = CF2Input_get_mousePosition_m8C1BF888A02A5FF53D3350D33952EE174C6FFD70(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_3, NULL);
		NullCheck(L_2);
		PointerEventData_set_pressPosition_m85544FBAB798DABE70067508294A6C4841A95379_inline(L_2, L_4, NULL);
		// eventData.position = ControlFreak2.CF2Input.mousePosition;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = CF2Input_get_mousePosition_m8C1BF888A02A5FF53D3350D33952EE174C6FFD70(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_6, NULL);
		NullCheck(L_5);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_5, L_7, NULL);
		// List<RaycastResult> list = new List<RaycastResult>();
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_8 = (List_1_t8292C421BBB00D7661DC07462822936152BAB446*)il2cpp_codegen_object_new(List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B(L_8, List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		V_1 = L_8;
		// graphicRaycaster.Raycast(eventData, list);
		GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B* L_9 = __this->___graphicRaycaster_13;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_10 = V_0;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_11 = V_1;
		NullCheck(L_9);
		VirtualActionInvoker2< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*, List_1_t8292C421BBB00D7661DC07462822936152BAB446* >::Invoke(17 /* System.Void UnityEngine.EventSystems.BaseRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>) */, L_9, L_10, L_11);
		// return list.Count > 0;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline(L_12, List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		return (bool)((((int32_t)L_13) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Select(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Select_mCB6246390E51EF7A03C6DCF0D07D1B05E0FF3091 (ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75_m4AEEED8A204656CCD3DCEDB2FEAC64EC3583F634_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DemoParticleSystemU5BU5D_t276B71C43FE5C96B19896B1C959B684286E4A77A* V_0 = NULL;
	int32_t V_1 = 0;
	DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* V_2 = NULL;
	{
		// s_Selected = demoParticles.items[i];
		DemoParticleSystemList_t73787946F79EF5D423387622F7C30C9997A68ACC* L_0 = __this->___demoParticles_4;
		NullCheck(L_0);
		DemoParticleSystemU5BU5D_t276B71C43FE5C96B19896B1C959B684286E4A77A* L_1 = L_0->___items_0;
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21), (void*)L_4);
		// m_Instance = null;
		__this->___m_Instance_17 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Instance_17), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// foreach (var otherEffect in demoParticles.items)
		DemoParticleSystemList_t73787946F79EF5D423387622F7C30C9997A68ACC* L_5 = __this->___demoParticles_4;
		NullCheck(L_5);
		DemoParticleSystemU5BU5D_t276B71C43FE5C96B19896B1C959B684286E4A77A* L_6 = L_5->___items_0;
		V_0 = L_6;
		V_1 = 0;
		goto IL_0052;
	}

IL_0029:
	{
		// foreach (var otherEffect in demoParticles.items)
		DemoParticleSystemU5BU5D_t276B71C43FE5C96B19896B1C959B684286E4A77A* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		// if ((otherEffect != s_Selected) && (otherEffect.mode == Mode.Activate))
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_11 = V_2;
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_12 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		if ((((RuntimeObject*)(DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972*)L_11) == ((RuntimeObject*)(DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972*)L_12)))
		{
			goto IL_004e;
		}
	}
	{
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->___mode_1;
		if (L_14)
		{
			goto IL_004e;
		}
	}
	{
		// otherEffect.transform.gameObject.SetActive(false);
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_15 = V_2;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = L_15->___transform_0;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
	}

IL_004e:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0052:
	{
		// foreach (var otherEffect in demoParticles.items)
		int32_t L_19 = V_1;
		DemoParticleSystemU5BU5D_t276B71C43FE5C96B19896B1C959B684286E4A77A* L_20 = V_0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0029;
		}
	}
	{
		// if (s_Selected.mode == Mode.Activate)
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_21 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_21);
		int32_t L_22 = L_21->___mode_1;
		if (L_22)
		{
			goto IL_0079;
		}
	}
	{
		// s_Selected.transform.gameObject.SetActive(true);
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_23 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = L_23->___transform_0;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_24, NULL);
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)1, NULL);
	}

IL_0079:
	{
		// m_ParticleMultiplier = s_Selected.transform.GetComponent<ParticleSystemMultiplier>();
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_26 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = L_26->___transform_0;
		NullCheck(L_27);
		ParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75* L_28;
		L_28 = Component_GetComponent_TisParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75_m4AEEED8A204656CCD3DCEDB2FEAC64EC3583F634(L_27, Component_GetComponent_TisParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75_m4AEEED8A204656CCD3DCEDB2FEAC64EC3583F634_RuntimeMethod_var);
		__this->___m_ParticleMultiplier_15 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ParticleMultiplier_15), (void*)L_28);
		// multiply = 1;
		__this->___multiply_6 = (1.0f);
		// if (clearOnChange)
		bool L_29 = __this->___clearOnChange_7;
		if (!L_29)
		{
			goto IL_00d3;
		}
	}
	{
		goto IL_00c5;
	}

IL_00a3:
	{
		// Destroy(m_CurrentParticleList[0].gameObject);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_30 = __this->___m_CurrentParticleList_16;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_30, 0, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_32, NULL);
		// m_CurrentParticleList.RemoveAt(0);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_33 = __this->___m_CurrentParticleList_16;
		NullCheck(L_33);
		List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437(L_33, 0, List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437_RuntimeMethod_var);
	}

IL_00c5:
	{
		// while (m_CurrentParticleList.Count > 0)
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_34 = __this->___m_CurrentParticleList_16;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_34, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_35) > ((int32_t)0)))
		{
			goto IL_00a3;
		}
	}

IL_00d3:
	{
		// instructionText.text = s_Selected.instructionText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_36 = __this->___instructionText_10;
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_37 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_37);
		String_t* L_38 = L_37->___instructionText_6;
		NullCheck(L_36);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_36, L_38);
		// titleText.text = s_Selected.transform.name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_39 = __this->___titleText_8;
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_40 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = L_40->___transform_0;
		NullCheck(L_41);
		String_t* L_42;
		L_42 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_41, NULL);
		NullCheck(L_39);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_39, L_42);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls__ctor_m7C49AB25E454BBEC5DC95F1A6FC711726278D9B2 (ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float spawnOffset = 0.5f;
		__this->___spawnOffset_5 = (0.5f);
		// public float multiply = 1;
		__this->___multiply_6 = (1.0f);
		// private List<Transform> m_CurrentParticleList = new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_0, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___m_CurrentParticleList_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentParticleList_16), (void*)L_0);
		// private Vector3 m_CamOffsetVelocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___m_CamOffsetVelocity_19 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoParticleSystem__ctor_m985054002A2E04A2350EDAC74D56656BE7052937 (DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* __this, const RuntimeMethod* method) 
{
	{
		// public int camOffset = 15;
		__this->___camOffset_5 = ((int32_t)15);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoParticleSystemList__ctor_mDA776C0BBB3F11BB10FF7CE3A97B7473BF362215 (DemoParticleSystemList_t73787946F79EF5D423387622F7C30C9997A68ACC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.SceneUtils.PlaceTargetWithMouse::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceTargetWithMouse_Update_m1B82D8022C8E827FE9358A3B0DEBD9C82938F37E (PlaceTargetWithMouse_t30224FA54201F99D173D962314A1F439149ECDC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB4D84F7C62E7D302A9A088AA8E292DF6A477309);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!ControlFreak2.CF2Input.GetMouseButtonDown(0))
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CF2Input_GetMouseButtonDown_m8E4B3EBC5A6BD6761D35010B818E4AECF7EE1719(0, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Ray ray = Camera.main.ScreenPointToRay(ControlFreak2.CF2Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = CF2Input_get_mousePosition_m8C1BF888A02A5FF53D3350D33952EE174C6FFD70(NULL);
		NullCheck(L_1);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_3;
		L_3 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_1, L_2, NULL);
		// if (!Physics.Raycast(ray, out hit))
		bool L_4;
		L_4 = Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A(L_3, (&V_0), NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		// return;
		return;
	}

IL_0022:
	{
		// transform.position = hit.point + hit.normal*surfaceOffset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		float L_8 = __this->___surfaceOffset_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_6, L_9, NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_10, NULL);
		// if (setTargetOn != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___setTargetOn_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// setTargetOn.SendMessage("SetTarget", transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___setTargetOn_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		GameObject_SendMessage_m9F174A6F7D2DBE4E1934892F3438405F379014E3(L_13, _stringLiteralAB4D84F7C62E7D302A9A088AA8E292DF6A477309, L_14, NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.PlaceTargetWithMouse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceTargetWithMouse__ctor_m26771B6F90509C421D601E582C42DABE58117FAA (PlaceTargetWithMouse_t30224FA54201F99D173D962314A1F439149ECDC9* __this, const RuntimeMethod* method) 
{
	{
		// public float surfaceOffset = 1.5f;
		__this->___surfaceOffset_4 = (1.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.SceneUtils.SlowMoButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowMoButton_Start_m8158DB0C8073E178AB571AD22AA6A23D567A3600 (SlowMoButton_t2083E0FE81796D541577A6AE8BC0BCFECAE79AFD* __this, const RuntimeMethod* method) 
{
	{
		// m_SlowMo = false;
		__this->___m_SlowMo_9 = (bool)0;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.SlowMoButton::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowMoButton_OnDestroy_m429AA1769292326B734AB5F9509661C48A1228B0 (SlowMoButton_t2083E0FE81796D541577A6AE8BC0BCFECAE79AFD* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.SlowMoButton::ChangeSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowMoButton_ChangeSpeed_mAD4AE2BEABE358DAAC9A3585CE4B060D345A2863 (SlowMoButton_t2083E0FE81796D541577A6AE8BC0BCFECAE79AFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B3_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B2_0 = NULL;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* G_B4_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B4_1 = NULL;
	float G_B8_0 = 0.0f;
	{
		// m_SlowMo = !m_SlowMo;
		bool L_0 = __this->___m_SlowMo_9;
		__this->___m_SlowMo_9 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// var image = button.targetGraphic as Image;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___button_8;
		NullCheck(L_1);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_2;
		L_2 = Selectable_get_targetGraphic_m659A2940226EC644AAFC2D5CCC326ABEE6384388_inline(L_1, NULL);
		V_0 = ((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)IsInstClass((RuntimeObject*)L_2, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var));
		// if (image != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// image.sprite = m_SlowMo ? SlowSpeedTex : FullSpeedTex;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = V_0;
		bool L_6 = __this->___m_SlowMo_9;
		G_B2_0 = L_5;
		if (L_6)
		{
			G_B3_0 = L_5;
			goto IL_003a;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = __this->___FullSpeedTex_4;
		G_B4_0 = L_7;
		G_B4_1 = G_B2_0;
		goto IL_0040;
	}

IL_003a:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = __this->___SlowSpeedTex_5;
		G_B4_0 = L_8;
		G_B4_1 = G_B3_0;
	}

IL_0040:
	{
		NullCheck(G_B4_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(G_B4_1, G_B4_0, NULL);
	}

IL_0045:
	{
		// button.targetGraphic = image;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___button_8;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = V_0;
		NullCheck(L_9);
		Selectable_set_targetGraphic_m23DB0DF4E5F2DABD50C662C708B4555162171FB9(L_9, L_10, NULL);
		// Time.timeScale = m_SlowMo ? slowSpeed : fullSpeed;
		bool L_11 = __this->___m_SlowMo_9;
		if (L_11)
		{
			goto IL_0061;
		}
	}
	{
		float L_12 = __this->___fullSpeed_6;
		G_B8_0 = L_12;
		goto IL_0067;
	}

IL_0061:
	{
		float L_13 = __this->___slowSpeed_7;
		G_B8_0 = L_13;
	}

IL_0067:
	{
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C(G_B8_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.SlowMoButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowMoButton__ctor_m9889D6F64C350F4BAE500E96007375994AE81056 (SlowMoButton_t2083E0FE81796D541577A6AE8BC0BCFECAE79AFD* __this, const RuntimeMethod* method) 
{
	{
		// public float fullSpeed = 1;
		__this->___fullSpeed_6 = (1.0f);
		// public float slowSpeed = 0.3f;
		__this->___slowSpeed_7 = (0.300000012f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_ClampMagnitude_m9F4DC26ED98E682A187F4B2AFEAB49CD376DF7CA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, float ___maxLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___vector0), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___maxLength1;
		float L_3 = ___maxLength1;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply(L_2, L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		float L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)L_5));
		V_2 = ((float)L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___vector0;
		float L_8 = L_7.___x_0;
		float L_9 = V_2;
		V_3 = ((float)(L_8/L_9));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___vector0;
		float L_11 = L_10.___y_1;
		float L_12 = V_2;
		V_4 = ((float)(L_11/L_12));
		float L_13 = V_3;
		float L_14 = ___maxLength1;
		float L_15 = V_4;
		float L_16 = ___maxLength1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), ((float)il2cpp_codegen_multiply(L_13, L_14)), ((float)il2cpp_codegen_multiply(L_15, L_16)), /*hidden argument*/NULL);
		V_5 = L_17;
		goto IL_0045;
	}

IL_0040:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___vector0;
		V_5 = L_18;
		goto IL_0045;
	}

IL_0045:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_5;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newMoveDirection0, const RuntimeMethod* method) 
{
	{
		// move = newMoveDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___newMoveDirection0;
		__this->___move_4 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newLookDirection0, const RuntimeMethod* method) 
{
	{
		// look = newLookDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___newLookDirection0;
		__this->___look_5 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newJumpState0, const RuntimeMethod* method) 
{
	{
		// jump = newJumpState;
		bool L_0 = ___newJumpState0;
		__this->___jump_6 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newSprintState0, const RuntimeMethod* method) 
{
	{
		// sprint = newSprintState;
		bool L_0 = ___newSprintState0;
		__this->___sprint_7 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_m1176F6353029E4F715A36DBC62B176050A21EBDC_inline (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0;
		L_0 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		float L_1 = ___current0;
		float L_2 = ___target1;
		float* L_3 = ___currentVelocity2;
		float L_4 = ___smoothTime3;
		float L_5 = V_1;
		float L_6 = V_0;
		float L_7;
		L_7 = Mathf_SmoothDampAngle_m4B6A71D10BBD87D55EE8AE2A8C708CE115C60973_inline(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		float L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_m017722BD53BAE32893C2A1B674746E340D4A5B89_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float L_0;
		L_0 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___current0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___target1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___currentVelocity2;
		float L_4 = ___smoothTime3;
		float L_5 = V_1;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_SmoothDamp_mA20AB2E3DFAE680D742E9A17D969AF8A3E849711(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pressPosition_m85544FBAB798DABE70067508294A6C4841A95379_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 pressPosition { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CpressPositionU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CpositionU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* Selectable_get_targetGraphic_m659A2940226EC644AAFC2D5CCC326ABEE6384388_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) 
{
	{
		// public Graphic           targetGraphic     { get { return m_TargetGraphic; } set { if (SetPropertyUtility.SetClass(ref m_TargetGraphic, value))     OnSetProperty(); } }
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = __this->___m_TargetGraphic_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_m4B6A71D10BBD87D55EE8AE2A8C708CE115C60973_inline (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___current0;
		float L_1 = ___current0;
		float L_2 = ___target1;
		float L_3;
		L_3 = Mathf_DeltaAngle_m4B87B84265A48389AC3F5E3E8164570C6AECE5C3_inline(L_1, L_2, NULL);
		___target1 = ((float)il2cpp_codegen_add(L_0, L_3));
		float L_4 = ___current0;
		float L_5 = ___target1;
		float* L_6 = ___currentVelocity2;
		float L_7 = ___smoothTime3;
		float L_8 = ___maxSpeed4;
		float L_9 = ___deltaTime5;
		float L_10;
		L_10 = Mathf_SmoothDamp_m00E482452BCED3FE0F16B4033B2B5323C7E30829(L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		V_0 = L_10;
		goto IL_001c;
	}

IL_001c:
	{
		float L_11 = V_0;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_m4B87B84265A48389AC3F5E3E8164570C6AECE5C3_inline (float ___current0, float ___target1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___target1;
		float L_1 = ___current0;
		float L_2;
		L_2 = Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline(((float)il2cpp_codegen_subtract(L_0, L_1)), (360.0f), NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) > ((float)(180.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_5, (360.0f)));
	}

IL_0023:
	{
		float L_6 = V_0;
		V_2 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___length1;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___length1;
		float L_5 = ___length1;
		float L_6;
		L_6 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
