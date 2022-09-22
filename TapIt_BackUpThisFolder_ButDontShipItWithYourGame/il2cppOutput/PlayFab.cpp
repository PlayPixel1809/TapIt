#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Ionic.Zlib.WorkItem>
struct List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// Ionic.Zlib.WorkItem[]
struct WorkItemU5BU5D_t4840BDDDD8BC2514927C23D8A5F5F6CF19166FCF;
// Ionic.Zlib.DeflateManager/Config[]
struct ConfigU5BU5D_t2FC24C5A411345379CB7AFEA699D06AB27002DF2;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0;
// Ionic.Crc.CRC32
struct CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// Ionic.Zlib.DeflateManager
struct DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B;
// Ionic.Zlib.DeflateStream
struct DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// Ionic.Zlib.GZipStream
struct GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// Ionic.Zlib.InfTree
struct InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE;
// Ionic.Zlib.InflateBlocks
struct InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E;
// Ionic.Zlib.InflateCodes
struct InflateCodes_t2759A3D840DF45440C2D917FC57F100D1969F7D6;
// Ionic.Zlib.InflateManager
struct InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// Ionic.Zlib.ParallelDeflateOutputStream
struct ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49;
// PlayFabSharedSettings
struct PlayFabSharedSettings_tFBCCC0C676FD07F8C8662B0005DFD99542B68F90;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// Ionic.Zlib.StaticTree
struct StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// Ionic.Zlib.WorkItem
struct WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D;
// Ionic.Zlib.ZTree
struct ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46;
// Ionic.Zlib.ZlibBaseStream
struct ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C;
// Ionic.Zlib.ZlibCodec
struct ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0;
// Ionic.Zlib.ZlibException
struct ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1;
// Ionic.Zlib.DeflateManager/CompressFunc
struct CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0;
// Ionic.Zlib.DeflateManager/Config
struct Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* Adler_t0FD1A5CDC49CCF1E8741247D09C4D1C46EEAE2D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigU5BU5D_t2FC24C5A411345379CB7AFEA699D06AB27002DF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlushType_t997394DDD36D88966FBEEA1FEB8E22A193A02849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InflateCodes_t2759A3D840DF45440C2D917FC57F100D1969F7D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____5D34088B4ABB1F3FE88DCF84DD5C145EFD5EA01DF1B05BB8FEAD12305B0979B7_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____5D6878AD6E68B2CCB04A7CD7942BE07C15F947CCA8824203021DD465D90712AD_5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____61358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1_6_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____8AE83CF30C3CEAC5F4B9F025200D65EFAEC851DE0098817DB69F0E547407C095_8_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_11_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____C133E473E5E653C5C4AEDB8BCC1C1A3A44D384FC0B6C0FCF04672B1B325EC01B_13_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_14_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____FC216F5C5AE2947D800794ECD5F752EE8381073C2E5D0D095FDA040F541702F3_17_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0659AF070440111C5138C5C2CF237FE1D199797C;
IL2CPP_EXTERN_C String_t* _stringLiteral06F3358B23D666113A1020E1C9CFEBE16373BE40;
IL2CPP_EXTERN_C String_t* _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40;
IL2CPP_EXTERN_C String_t* _stringLiteral10970F72C2D0D7F199946EF78672994F037BA021;
IL2CPP_EXTERN_C String_t* _stringLiteral11FE1AF2EF5B24C9B42886F7D9C6829BE37BF129;
IL2CPP_EXTERN_C String_t* _stringLiteral13A5361A51002BE0AE3A86C6F54E7ADAC4F2CE94;
IL2CPP_EXTERN_C String_t* _stringLiteral1CA295F21B655270168F1CF97085795F47FFB0E1;
IL2CPP_EXTERN_C String_t* _stringLiteral260306369A04CA189E353A93EBB484ED8F9A9B43;
IL2CPP_EXTERN_C String_t* _stringLiteral30BCB087B41A6F00FEBBA97739609206E052A32F;
IL2CPP_EXTERN_C String_t* _stringLiteral31F5FB1C38A44C5FB3A50E292D89F851681E4A86;
IL2CPP_EXTERN_C String_t* _stringLiteral31FF32DD49EB95324AC3BBB26903BDBBB3D9DE53;
IL2CPP_EXTERN_C String_t* _stringLiteral3301E1AE1BCA5C134551471AB287F2443E658618;
IL2CPP_EXTERN_C String_t* _stringLiteral359C7A1FB5CEBD929D7F11F5D3E96EDE7FF01384;
IL2CPP_EXTERN_C String_t* _stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D;
IL2CPP_EXTERN_C String_t* _stringLiteral4DE4583466E161AC08D14AD37D8B70B8580B3627;
IL2CPP_EXTERN_C String_t* _stringLiteral527C1A81C9577E20EFCD218DE9B39383A8F64CD0;
IL2CPP_EXTERN_C String_t* _stringLiteral540BFF2B585F6DE7F5AA022B07C05975323EFD0E;
IL2CPP_EXTERN_C String_t* _stringLiteral5882879161B7C9D56B5A1120EF8EF366916857FF;
IL2CPP_EXTERN_C String_t* _stringLiteral5A888468814C6717D8F1F53C27076E49BCF685AE;
IL2CPP_EXTERN_C String_t* _stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766;
IL2CPP_EXTERN_C String_t* _stringLiteral61CF8C6E69A5020616A55D8196F59FE4DE0129D6;
IL2CPP_EXTERN_C String_t* _stringLiteral62034F7639F85F62F5742EE798FEB248336A482E;
IL2CPP_EXTERN_C String_t* _stringLiteral6304F4645B5484ACF5D9DF2D847AE616393DC417;
IL2CPP_EXTERN_C String_t* _stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8;
IL2CPP_EXTERN_C String_t* _stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5;
IL2CPP_EXTERN_C String_t* _stringLiteral7897EC9A2D8A7F35E69F42F0A932E1E9320CB2DA;
IL2CPP_EXTERN_C String_t* _stringLiteral796754270F9B2AB25ACA5093B84CF8EAF55BA1AE;
IL2CPP_EXTERN_C String_t* _stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808;
IL2CPP_EXTERN_C String_t* _stringLiteral8474B72B7141899E58C9FAD714BA8DC215DF2844;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8E5A222E4E81315C36B27CEAAC616EBB8410514A;
IL2CPP_EXTERN_C String_t* _stringLiteral90581047810EB87A7277461DDA1C1493B91DAAA4;
IL2CPP_EXTERN_C String_t* _stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16;
IL2CPP_EXTERN_C String_t* _stringLiteral988F3366E12D654A4876B3640459880EFD9315D1;
IL2CPP_EXTERN_C String_t* _stringLiteral9A538D87C765D16B9229A517D7D588C30AF3D5AE;
IL2CPP_EXTERN_C String_t* _stringLiteral9A971A9294400EA492DFEFCF8370FA1EBA838E06;
IL2CPP_EXTERN_C String_t* _stringLiteral9FC4F45EF48BB08BC4D6C5BC2A71B64139E0FEE4;
IL2CPP_EXTERN_C String_t* _stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB;
IL2CPP_EXTERN_C String_t* _stringLiteralB6E4583683A19BA1CBC201CAD5FFABF027A5B94A;
IL2CPP_EXTERN_C String_t* _stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948;
IL2CPP_EXTERN_C String_t* _stringLiteralCC98F8D5063D43F6A1D8B5158D9DE47EAC048113;
IL2CPP_EXTERN_C String_t* _stringLiteralCFBC3A862771D0485E915BD869029175AD24B07C;
IL2CPP_EXTERN_C String_t* _stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E;
IL2CPP_EXTERN_C String_t* _stringLiteralD94DFA59855436FE4E964729609DFFE5BDFF64A0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE8843DC4A33316C1A7FC9E28CF5D334C24196060;
IL2CPP_EXTERN_C String_t* _stringLiteralE960A05B0E3F3B1A832A46162FB0C2332497D8F4;
IL2CPP_EXTERN_C String_t* _stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC07F6BD47DF829ABDBABCE58B748504460B7BB;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateManager_DeflateFast_m64FC609E28A1C50579FA545D8D50335E0FC95450_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateManager_DeflateNone_m8A63FC9E1A2BA1F954C96D549D5CF2E32AC4411D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateManager_DeflateSlow_m596BDD8AAB09E0F85DF4407B7626696214E0A474_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateManager_Deflate_m36847D5F5399A7F119A392DC4492A3E1F77A190D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateManager_Initialize_mBE4ECB11B46A5977FCADA7141978938E428732ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateManager_SetDictionary_mECE59D0ED616E4ABF1A2CF7F67D6431A63405B39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Flush_m7ED3CD39FC51F29FBE96F593CCFDAFB4416D3717_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Read_m1CCDD94E6C5C2791DA2C2EB01984496119DCEF92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Seek_m236C21CE99EFD7C2720DF7E4566EB2AA8F1BB79F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_SetLength_m50D5BCF3B1C377F677B53EE8E13051A7BB943A25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Write_m83599F2E390C155DF76540DF2E080BE52DFE3A92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_CanRead_m8E4A480670AACA7299AFC7078928520A82283560_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_CanWrite_m839DC8FA099EA9DA90504AA157EFD2206441DB23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_Length_m0A1891F9175C8E6286DEBA490B8EB1BA67760E91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_set_BufferSize_m19B3A43370B75E259DDB7014A976387F91FD0361_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_set_FlushMode_m31F94F3B38D9D630F45A59B4629F87AB7084A244_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_set_Position_mF7ACDBFB0B5359E6C67BFF76F828A1C1298B5625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_set_Strategy_m2A5B66CF41F4DF20E3C9FF62E8DB34837B219F1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA5B3AD69860A64ABE5D597ECAA62E7BBCAC1F8EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m35A17EDEA07CBA05840536A676C447B11ACBD8FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m54A3B18A69EA981C5545BE370472587D51C3CF76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Flush_m37F3AEB27192F94E1E4983B2E6B1824EB54CE674_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Read_m7858AA7980FE6A34749A53DA8DCC580543D1B6B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Seek_m9AB46F92968384DE5DF49DA9C40EB4841A1906B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_SetLength_m9F58A88140B5C048D3B5FCC38D541D601518E2BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Write_mDFF0B4C2E56337DEB90169916065CC15C3E232E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_get_CanRead_mF48B7D8FF6CC5100172AC32DBFDD8716DD6963A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_get_CanWrite_m93653AD803705874BD620C120CD75FA0B52D3190_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_get_Length_mDD0B5E33682990CA53F3678A90A8F8C0FD86D2F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_set_BufferSize_mE4375839A6606CE1C12C0039FB896C09A689A26A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_set_Comment_m5C85315792410807392DDBC40D65F7331420D5E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_set_FileName_m590D5197014AB4AD008CC3E3F8E4711827050970_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_set_FlushMode_m1E17ED3168B5EA1C27F68C0F35D0CBE467A463DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_set_Position_m99AB10650C9B4F5ECCECCA02A968BE28908514AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflateManager_Inflate_m36D3D9694FFD3C282E0A6C0CCF3004013DB98AEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflateManager_Initialize_mFD7F0609F2EE88DD02048C41113B1A5BD27AC0CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflateManager_SetDictionary_m6C95E208DB3669056A64B3CA3092193A8A506797_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m753996EE8766DE3C6413FA43A01485148E13D55D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m035CB3A1422D19055CA08EE0754BC694A077206B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE2648001759CD08A36C46E203995A86939771277_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF020E3C2EE9BA95FAD755AD36DE8810062214E44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParallelDeflateOutputStream_Close_mC73ED06B649C6C6355F8C0E66CE5A919A897078A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParallelDeflateOutputStream_Flush_mDB53E9F3AB0AF76D10617805AB0F444EA4F7985E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParallelDeflateOutputStream_Read_m8195796CB10E1A9799C337BF2C228742EEB57C06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParallelDeflateOutputStream_Seek_m10B7BE7661E692AEDB332B125C24DE98A9B735FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParallelDeflateOutputStream_SetLength_m43D0AD5E7FB5447360426369987196AA9A1C3C31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParallelDeflateOutputStream_Write_m7381D2A467A5714A0175BC2085AB385AE65BF59B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParallelDeflateOutputStream__DeflateOne_m0433191E2D84B0AB11AD975B4A1BD7000A4B1B86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParallelDeflateOutputStream__FlushFinish_m4819CA9506CD70F9103C4BF9FD2E3799CE337D44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParallelDeflateOutputStream__Flush_mB6D12776C06FBD0B17C83859014AB7760E1D7485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParallelDeflateOutputStream_get_Length_m75ACA9CD7A8219A8336C534B1D854786C3023649_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParallelDeflateOutputStream_set_BufferSize_m5F3015D12023E615656085F84B64393E34E1440E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParallelDeflateOutputStream_set_MaxBufferPairs_m83A0B75EB21EBC8805C8C2AA0A65A24894234FCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParallelDeflateOutputStream_set_Position_m53EFF0C29A3E710313606353456FEB335DAC1B05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct ConfigU5BU5D_t2FC24C5A411345379CB7AFEA699D06AB27002DF2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC121C7742C94E4368057D0A39FFBCE60E4A2113C 
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

// System.Collections.Generic.List`1<Ionic.Zlib.WorkItem>
struct List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WorkItemU5BU5D_t4840BDDDD8BC2514927C23D8A5F5F6CF19166FCF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WorkItemU5BU5D_t4840BDDDD8BC2514927C23D8A5F5F6CF19166FCF* ___s_emptyArray_5;
};

// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};
struct Il2CppArrayBounds;

// Ionic.Crc.CRC32
struct CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59  : public RuntimeObject
{
	static const Il2CppGuid CLSID;

	// System.UInt32 Ionic.Crc.CRC32::dwPolynomial
	uint32_t ___dwPolynomial_0;
	// System.Int64 Ionic.Crc.CRC32::_TotalBytesRead
	int64_t ____TotalBytesRead_1;
	// System.Boolean Ionic.Crc.CRC32::reverseBits
	bool ___reverseBits_2;
	// System.UInt32[] Ionic.Crc.CRC32::crc32Table
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crc32Table_3;
	// System.UInt32 Ionic.Crc.CRC32::_register
	uint32_t ____register_5;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// Ionic.Zlib.DeflateManager
struct DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B  : public RuntimeObject
{
	// Ionic.Zlib.DeflateManager/CompressFunc Ionic.Zlib.DeflateManager::DeflateFunction
	CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0* ___DeflateFunction_2;
	// Ionic.Zlib.ZlibCodec Ionic.Zlib.DeflateManager::_codec
	ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* ____codec_21;
	// System.Int32 Ionic.Zlib.DeflateManager::status
	int32_t ___status_22;
	// System.Byte[] Ionic.Zlib.DeflateManager::pending
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pending_23;
	// System.Int32 Ionic.Zlib.DeflateManager::nextPending
	int32_t ___nextPending_24;
	// System.Int32 Ionic.Zlib.DeflateManager::pendingCount
	int32_t ___pendingCount_25;
	// System.SByte Ionic.Zlib.DeflateManager::data_type
	int8_t ___data_type_26;
	// System.Int32 Ionic.Zlib.DeflateManager::last_flush
	int32_t ___last_flush_27;
	// System.Int32 Ionic.Zlib.DeflateManager::w_size
	int32_t ___w_size_28;
	// System.Int32 Ionic.Zlib.DeflateManager::w_bits
	int32_t ___w_bits_29;
	// System.Int32 Ionic.Zlib.DeflateManager::w_mask
	int32_t ___w_mask_30;
	// System.Byte[] Ionic.Zlib.DeflateManager::window
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___window_31;
	// System.Int32 Ionic.Zlib.DeflateManager::window_size
	int32_t ___window_size_32;
	// System.Int16[] Ionic.Zlib.DeflateManager::prev
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___prev_33;
	// System.Int16[] Ionic.Zlib.DeflateManager::head
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___head_34;
	// System.Int32 Ionic.Zlib.DeflateManager::ins_h
	int32_t ___ins_h_35;
	// System.Int32 Ionic.Zlib.DeflateManager::hash_size
	int32_t ___hash_size_36;
	// System.Int32 Ionic.Zlib.DeflateManager::hash_bits
	int32_t ___hash_bits_37;
	// System.Int32 Ionic.Zlib.DeflateManager::hash_mask
	int32_t ___hash_mask_38;
	// System.Int32 Ionic.Zlib.DeflateManager::hash_shift
	int32_t ___hash_shift_39;
	// System.Int32 Ionic.Zlib.DeflateManager::block_start
	int32_t ___block_start_40;
	// Ionic.Zlib.DeflateManager/Config Ionic.Zlib.DeflateManager::config
	Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* ___config_41;
	// System.Int32 Ionic.Zlib.DeflateManager::match_length
	int32_t ___match_length_42;
	// System.Int32 Ionic.Zlib.DeflateManager::prev_match
	int32_t ___prev_match_43;
	// System.Int32 Ionic.Zlib.DeflateManager::match_available
	int32_t ___match_available_44;
	// System.Int32 Ionic.Zlib.DeflateManager::strstart
	int32_t ___strstart_45;
	// System.Int32 Ionic.Zlib.DeflateManager::match_start
	int32_t ___match_start_46;
	// System.Int32 Ionic.Zlib.DeflateManager::lookahead
	int32_t ___lookahead_47;
	// System.Int32 Ionic.Zlib.DeflateManager::prev_length
	int32_t ___prev_length_48;
	// Ionic.Zlib.CompressionLevel Ionic.Zlib.DeflateManager::compressionLevel
	int32_t ___compressionLevel_49;
	// Ionic.Zlib.CompressionStrategy Ionic.Zlib.DeflateManager::compressionStrategy
	int32_t ___compressionStrategy_50;
	// System.Int16[] Ionic.Zlib.DeflateManager::dyn_ltree
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___dyn_ltree_51;
	// System.Int16[] Ionic.Zlib.DeflateManager::dyn_dtree
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___dyn_dtree_52;
	// System.Int16[] Ionic.Zlib.DeflateManager::bl_tree
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___bl_tree_53;
	// Ionic.Zlib.ZTree Ionic.Zlib.DeflateManager::treeLiterals
	ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46* ___treeLiterals_54;
	// Ionic.Zlib.ZTree Ionic.Zlib.DeflateManager::treeDistances
	ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46* ___treeDistances_55;
	// Ionic.Zlib.ZTree Ionic.Zlib.DeflateManager::treeBitLengths
	ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46* ___treeBitLengths_56;
	// System.Int16[] Ionic.Zlib.DeflateManager::bl_count
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___bl_count_57;
	// System.Int32[] Ionic.Zlib.DeflateManager::heap
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___heap_58;
	// System.Int32 Ionic.Zlib.DeflateManager::heap_len
	int32_t ___heap_len_59;
	// System.Int32 Ionic.Zlib.DeflateManager::heap_max
	int32_t ___heap_max_60;
	// System.SByte[] Ionic.Zlib.DeflateManager::depth
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___depth_61;
	// System.Int32 Ionic.Zlib.DeflateManager::_lengthOffset
	int32_t ____lengthOffset_62;
	// System.Int32 Ionic.Zlib.DeflateManager::lit_bufsize
	int32_t ___lit_bufsize_63;
	// System.Int32 Ionic.Zlib.DeflateManager::last_lit
	int32_t ___last_lit_64;
	// System.Int32 Ionic.Zlib.DeflateManager::_distanceOffset
	int32_t ____distanceOffset_65;
	// System.Int32 Ionic.Zlib.DeflateManager::opt_len
	int32_t ___opt_len_66;
	// System.Int32 Ionic.Zlib.DeflateManager::static_len
	int32_t ___static_len_67;
	// System.Int32 Ionic.Zlib.DeflateManager::matches
	int32_t ___matches_68;
	// System.Int32 Ionic.Zlib.DeflateManager::last_eob_len
	int32_t ___last_eob_len_69;
	// System.Int16 Ionic.Zlib.DeflateManager::bi_buf
	int16_t ___bi_buf_70;
	// System.Int32 Ionic.Zlib.DeflateManager::bi_valid
	int32_t ___bi_valid_71;
	// System.Boolean Ionic.Zlib.DeflateManager::Rfc1950BytesEmitted
	bool ___Rfc1950BytesEmitted_72;
	// System.Boolean Ionic.Zlib.DeflateManager::_WantRfc1950HeaderBytes
	bool ____WantRfc1950HeaderBytes_73;
};

struct DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields
{
	// System.Int32 Ionic.Zlib.DeflateManager::MEM_LEVEL_MAX
	int32_t ___MEM_LEVEL_MAX_0;
	// System.Int32 Ionic.Zlib.DeflateManager::MEM_LEVEL_DEFAULT
	int32_t ___MEM_LEVEL_DEFAULT_1;
	// System.String[] Ionic.Zlib.DeflateManager::_ErrorMessage
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____ErrorMessage_3;
	// System.Int32 Ionic.Zlib.DeflateManager::PRESET_DICT
	int32_t ___PRESET_DICT_4;
	// System.Int32 Ionic.Zlib.DeflateManager::INIT_STATE
	int32_t ___INIT_STATE_5;
	// System.Int32 Ionic.Zlib.DeflateManager::BUSY_STATE
	int32_t ___BUSY_STATE_6;
	// System.Int32 Ionic.Zlib.DeflateManager::FINISH_STATE
	int32_t ___FINISH_STATE_7;
	// System.Int32 Ionic.Zlib.DeflateManager::Z_DEFLATED
	int32_t ___Z_DEFLATED_8;
	// System.Int32 Ionic.Zlib.DeflateManager::STORED_BLOCK
	int32_t ___STORED_BLOCK_9;
	// System.Int32 Ionic.Zlib.DeflateManager::STATIC_TREES
	int32_t ___STATIC_TREES_10;
	// System.Int32 Ionic.Zlib.DeflateManager::DYN_TREES
	int32_t ___DYN_TREES_11;
	// System.Int32 Ionic.Zlib.DeflateManager::Z_BINARY
	int32_t ___Z_BINARY_12;
	// System.Int32 Ionic.Zlib.DeflateManager::Z_ASCII
	int32_t ___Z_ASCII_13;
	// System.Int32 Ionic.Zlib.DeflateManager::Z_UNKNOWN
	int32_t ___Z_UNKNOWN_14;
	// System.Int32 Ionic.Zlib.DeflateManager::Buf_size
	int32_t ___Buf_size_15;
	// System.Int32 Ionic.Zlib.DeflateManager::MIN_MATCH
	int32_t ___MIN_MATCH_16;
	// System.Int32 Ionic.Zlib.DeflateManager::MAX_MATCH
	int32_t ___MAX_MATCH_17;
	// System.Int32 Ionic.Zlib.DeflateManager::MIN_LOOKAHEAD
	int32_t ___MIN_LOOKAHEAD_18;
	// System.Int32 Ionic.Zlib.DeflateManager::HEAP_SIZE
	int32_t ___HEAP_SIZE_19;
	// System.Int32 Ionic.Zlib.DeflateManager::END_BLOCK
	int32_t ___END_BLOCK_20;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// Ionic.Zlib.InfTree
struct InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE  : public RuntimeObject
{
	// System.Int32[] Ionic.Zlib.InfTree::hn
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hn_19;
	// System.Int32[] Ionic.Zlib.InfTree::v
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___v_20;
	// System.Int32[] Ionic.Zlib.InfTree::c
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___c_21;
	// System.Int32[] Ionic.Zlib.InfTree::r
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___r_22;
	// System.Int32[] Ionic.Zlib.InfTree::u
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___u_23;
	// System.Int32[] Ionic.Zlib.InfTree::x
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x_24;
};

struct InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_StaticFields
{
	// System.Int32[] Ionic.Zlib.InfTree::fixed_tl
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___fixed_tl_12;
	// System.Int32[] Ionic.Zlib.InfTree::fixed_td
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___fixed_td_13;
	// System.Int32[] Ionic.Zlib.InfTree::cplens
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___cplens_14;
	// System.Int32[] Ionic.Zlib.InfTree::cplext
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___cplext_15;
	// System.Int32[] Ionic.Zlib.InfTree::cpdist
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___cpdist_16;
	// System.Int32[] Ionic.Zlib.InfTree::cpdext
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___cpdext_17;
};

// Ionic.Zlib.InflateBlocks
struct InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E  : public RuntimeObject
{
	// Ionic.Zlib.InflateBlocks/InflateBlockMode Ionic.Zlib.InflateBlocks::mode
	int32_t ___mode_2;
	// System.Int32 Ionic.Zlib.InflateBlocks::left
	int32_t ___left_3;
	// System.Int32 Ionic.Zlib.InflateBlocks::table
	int32_t ___table_4;
	// System.Int32 Ionic.Zlib.InflateBlocks::index
	int32_t ___index_5;
	// System.Int32[] Ionic.Zlib.InflateBlocks::blens
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___blens_6;
	// System.Int32[] Ionic.Zlib.InflateBlocks::bb
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bb_7;
	// System.Int32[] Ionic.Zlib.InflateBlocks::tb
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tb_8;
	// Ionic.Zlib.InflateCodes Ionic.Zlib.InflateBlocks::codes
	InflateCodes_t2759A3D840DF45440C2D917FC57F100D1969F7D6* ___codes_9;
	// System.Int32 Ionic.Zlib.InflateBlocks::last
	int32_t ___last_10;
	// Ionic.Zlib.ZlibCodec Ionic.Zlib.InflateBlocks::_codec
	ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* ____codec_11;
	// System.Int32 Ionic.Zlib.InflateBlocks::bitk
	int32_t ___bitk_12;
	// System.Int32 Ionic.Zlib.InflateBlocks::bitb
	int32_t ___bitb_13;
	// System.Int32[] Ionic.Zlib.InflateBlocks::hufts
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hufts_14;
	// System.Byte[] Ionic.Zlib.InflateBlocks::window
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___window_15;
	// System.Int32 Ionic.Zlib.InflateBlocks::end
	int32_t ___end_16;
	// System.Int32 Ionic.Zlib.InflateBlocks::readAt
	int32_t ___readAt_17;
	// System.Int32 Ionic.Zlib.InflateBlocks::writeAt
	int32_t ___writeAt_18;
	// System.Object Ionic.Zlib.InflateBlocks::checkfn
	RuntimeObject* ___checkfn_19;
	// System.UInt32 Ionic.Zlib.InflateBlocks::check
	uint32_t ___check_20;
	// Ionic.Zlib.InfTree Ionic.Zlib.InflateBlocks::inftree
	InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE* ___inftree_21;
};

struct InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E_StaticFields
{
	// System.Int32[] Ionic.Zlib.InflateBlocks::border
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___border_1;
};

// Ionic.Zlib.InflateCodes
struct InflateCodes_t2759A3D840DF45440C2D917FC57F100D1969F7D6  : public RuntimeObject
{
	// System.Int32 Ionic.Zlib.InflateCodes::mode
	int32_t ___mode_10;
	// System.Int32 Ionic.Zlib.InflateCodes::len
	int32_t ___len_11;
	// System.Int32[] Ionic.Zlib.InflateCodes::tree
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tree_12;
	// System.Int32 Ionic.Zlib.InflateCodes::tree_index
	int32_t ___tree_index_13;
	// System.Int32 Ionic.Zlib.InflateCodes::need
	int32_t ___need_14;
	// System.Int32 Ionic.Zlib.InflateCodes::lit
	int32_t ___lit_15;
	// System.Int32 Ionic.Zlib.InflateCodes::bitsToGet
	int32_t ___bitsToGet_16;
	// System.Int32 Ionic.Zlib.InflateCodes::dist
	int32_t ___dist_17;
	// System.Byte Ionic.Zlib.InflateCodes::lbits
	uint8_t ___lbits_18;
	// System.Byte Ionic.Zlib.InflateCodes::dbits
	uint8_t ___dbits_19;
	// System.Int32[] Ionic.Zlib.InflateCodes::ltree
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ltree_20;
	// System.Int32 Ionic.Zlib.InflateCodes::ltree_index
	int32_t ___ltree_index_21;
	// System.Int32[] Ionic.Zlib.InflateCodes::dtree
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___dtree_22;
	// System.Int32 Ionic.Zlib.InflateCodes::dtree_index
	int32_t ___dtree_index_23;
};

// Ionic.Zlib.InflateManager
struct InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398  : public RuntimeObject
{
	// Ionic.Zlib.InflateManager/InflateManagerMode Ionic.Zlib.InflateManager::mode
	int32_t ___mode_2;
	// Ionic.Zlib.ZlibCodec Ionic.Zlib.InflateManager::_codec
	ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* ____codec_3;
	// System.Int32 Ionic.Zlib.InflateManager::method
	int32_t ___method_4;
	// System.UInt32 Ionic.Zlib.InflateManager::computedCheck
	uint32_t ___computedCheck_5;
	// System.UInt32 Ionic.Zlib.InflateManager::expectedCheck
	uint32_t ___expectedCheck_6;
	// System.Int32 Ionic.Zlib.InflateManager::marker
	int32_t ___marker_7;
	// System.Boolean Ionic.Zlib.InflateManager::_handleRfc1950HeaderBytes
	bool ____handleRfc1950HeaderBytes_8;
	// System.Int32 Ionic.Zlib.InflateManager::wbits
	int32_t ___wbits_9;
	// Ionic.Zlib.InflateBlocks Ionic.Zlib.InflateManager::blocks
	InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* ___blocks_10;
};

struct InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398_StaticFields
{
	// System.Byte[] Ionic.Zlib.InflateManager::mark
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mark_11;
};

// Ionic.Zlib.InternalConstants
struct InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06  : public RuntimeObject
{
};

struct InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_StaticFields
{
	// System.Int32 Ionic.Zlib.InternalConstants::MAX_BITS
	int32_t ___MAX_BITS_0;
	// System.Int32 Ionic.Zlib.InternalConstants::BL_CODES
	int32_t ___BL_CODES_1;
	// System.Int32 Ionic.Zlib.InternalConstants::D_CODES
	int32_t ___D_CODES_2;
	// System.Int32 Ionic.Zlib.InternalConstants::LITERALS
	int32_t ___LITERALS_3;
	// System.Int32 Ionic.Zlib.InternalConstants::LENGTH_CODES
	int32_t ___LENGTH_CODES_4;
	// System.Int32 Ionic.Zlib.InternalConstants::L_CODES
	int32_t ___L_CODES_5;
	// System.Int32 Ionic.Zlib.InternalConstants::MAX_BL_BITS
	int32_t ___MAX_BL_BITS_6;
	// System.Int32 Ionic.Zlib.InternalConstants::REP_3_6
	int32_t ___REP_3_6_7;
	// System.Int32 Ionic.Zlib.InternalConstants::REPZ_3_10
	int32_t ___REPZ_3_10_8;
	// System.Int32 Ionic.Zlib.InternalConstants::REPZ_11_138
	int32_t ___REPZ_11_138_9;
};

// Ionic.Zlib.InternalInflateConstants
struct InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC  : public RuntimeObject
{
};

struct InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_StaticFields
{
	// System.Int32[] Ionic.Zlib.InternalInflateConstants::InflateMask
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___InflateMask_0;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Ionic.Zlib.StaticTree
struct StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948  : public RuntimeObject
{
	// System.Int16[] Ionic.Zlib.StaticTree::treeCodes
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___treeCodes_5;
	// System.Int32[] Ionic.Zlib.StaticTree::extraBits
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___extraBits_6;
	// System.Int32 Ionic.Zlib.StaticTree::extraBase
	int32_t ___extraBase_7;
	// System.Int32 Ionic.Zlib.StaticTree::elems
	int32_t ___elems_8;
	// System.Int32 Ionic.Zlib.StaticTree::maxLength
	int32_t ___maxLength_9;
};

struct StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948_StaticFields
{
	// System.Int16[] Ionic.Zlib.StaticTree::lengthAndLiteralsTreeCodes
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___lengthAndLiteralsTreeCodes_0;
	// System.Int16[] Ionic.Zlib.StaticTree::distTreeCodes
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___distTreeCodes_1;
	// Ionic.Zlib.StaticTree Ionic.Zlib.StaticTree::Literals
	StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948* ___Literals_2;
	// Ionic.Zlib.StaticTree Ionic.Zlib.StaticTree::Distances
	StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948* ___Distances_3;
	// Ionic.Zlib.StaticTree Ionic.Zlib.StaticTree::BitLengths
	StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948* ___BitLengths_4;
};

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

// Ionic.Zlib.WorkItem
struct WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D  : public RuntimeObject
{
	// System.Byte[] Ionic.Zlib.WorkItem::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_0;
	// System.Byte[] Ionic.Zlib.WorkItem::compressed
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressed_1;
	// System.Int32 Ionic.Zlib.WorkItem::crc
	int32_t ___crc_2;
	// System.Int32 Ionic.Zlib.WorkItem::index
	int32_t ___index_3;
	// System.Int32 Ionic.Zlib.WorkItem::ordinal
	int32_t ___ordinal_4;
	// System.Int32 Ionic.Zlib.WorkItem::inputBytesAvailable
	int32_t ___inputBytesAvailable_5;
	// System.Int32 Ionic.Zlib.WorkItem::compressedBytesAvailable
	int32_t ___compressedBytesAvailable_6;
	// Ionic.Zlib.ZlibCodec Ionic.Zlib.WorkItem::compressor
	ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* ___compressor_7;
};

// Ionic.Zlib.ZTree
struct ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46  : public RuntimeObject
{
	// System.Int16[] Ionic.Zlib.ZTree::dyn_tree
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___dyn_tree_10;
	// System.Int32 Ionic.Zlib.ZTree::max_code
	int32_t ___max_code_11;
	// Ionic.Zlib.StaticTree Ionic.Zlib.ZTree::staticTree
	StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948* ___staticTree_12;
};

struct ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_StaticFields
{
	// System.Int32 Ionic.Zlib.ZTree::HEAP_SIZE
	int32_t ___HEAP_SIZE_0;
	// System.Int32[] Ionic.Zlib.ZTree::ExtraLengthBits
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ExtraLengthBits_1;
	// System.Int32[] Ionic.Zlib.ZTree::ExtraDistanceBits
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ExtraDistanceBits_2;
	// System.Int32[] Ionic.Zlib.ZTree::extra_blbits
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___extra_blbits_3;
	// System.SByte[] Ionic.Zlib.ZTree::bl_order
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___bl_order_4;
	// System.SByte[] Ionic.Zlib.ZTree::_dist_code
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ____dist_code_6;
	// System.SByte[] Ionic.Zlib.ZTree::LengthCode
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___LengthCode_7;
	// System.Int32[] Ionic.Zlib.ZTree::LengthBase
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___LengthBase_8;
	// System.Int32[] Ionic.Zlib.ZTree::DistanceBase
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___DistanceBase_9;
};

// Ionic.Zlib.ZlibCodec
struct ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0  : public RuntimeObject
{
	static const Il2CppGuid CLSID;

	// System.Byte[] Ionic.Zlib.ZlibCodec::InputBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___InputBuffer_0;
	// System.Int32 Ionic.Zlib.ZlibCodec::NextIn
	int32_t ___NextIn_1;
	// System.Int32 Ionic.Zlib.ZlibCodec::AvailableBytesIn
	int32_t ___AvailableBytesIn_2;
	// System.Int64 Ionic.Zlib.ZlibCodec::TotalBytesIn
	int64_t ___TotalBytesIn_3;
	// System.Byte[] Ionic.Zlib.ZlibCodec::OutputBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___OutputBuffer_4;
	// System.Int32 Ionic.Zlib.ZlibCodec::NextOut
	int32_t ___NextOut_5;
	// System.Int32 Ionic.Zlib.ZlibCodec::AvailableBytesOut
	int32_t ___AvailableBytesOut_6;
	// System.Int64 Ionic.Zlib.ZlibCodec::TotalBytesOut
	int64_t ___TotalBytesOut_7;
	// System.String Ionic.Zlib.ZlibCodec::Message
	String_t* ___Message_8;
	// Ionic.Zlib.DeflateManager Ionic.Zlib.ZlibCodec::dstate
	DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* ___dstate_9;
	// Ionic.Zlib.InflateManager Ionic.Zlib.ZlibCodec::istate
	InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* ___istate_10;
	// System.UInt32 Ionic.Zlib.ZlibCodec::_Adler32
	uint32_t ____Adler32_11;
	// Ionic.Zlib.CompressionLevel Ionic.Zlib.ZlibCodec::CompressLevel
	int32_t ___CompressLevel_12;
	// System.Int32 Ionic.Zlib.ZlibCodec::WindowBits
	int32_t ___WindowBits_13;
	// Ionic.Zlib.CompressionStrategy Ionic.Zlib.ZlibCodec::Strategy
	int32_t ___Strategy_14;
};

// Ionic.Zlib.DeflateManager/Config
struct Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8  : public RuntimeObject
{
	// System.Int32 Ionic.Zlib.DeflateManager/Config::GoodLength
	int32_t ___GoodLength_0;
	// System.Int32 Ionic.Zlib.DeflateManager/Config::MaxLazy
	int32_t ___MaxLazy_1;
	// System.Int32 Ionic.Zlib.DeflateManager/Config::NiceLength
	int32_t ___NiceLength_2;
	// System.Int32 Ionic.Zlib.DeflateManager/Config::MaxChainLength
	int32_t ___MaxChainLength_3;
	// Ionic.Zlib.DeflateFlavor Ionic.Zlib.DeflateManager/Config::Flavor
	int32_t ___Flavor_4;
};

struct Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_StaticFields
{
	// Ionic.Zlib.DeflateManager/Config[] Ionic.Zlib.DeflateManager/Config::Table
	ConfigU5BU5D_t2FC24C5A411345379CB7AFEA699D06AB27002DF2* ___Table_5;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Ionic.Zlib.WorkItem>
struct Enumerator_t958BE15B8412AD7D54A4DCF60E7D35E0146F1C1A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* ____current_3;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// System.Nullable`1<System.DateTime>
struct Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value_1;
};

// Ionic.Zlib.DeflateStream
struct DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// Ionic.Zlib.ZlibBaseStream Ionic.Zlib.DeflateStream::_baseStream
	ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* ____baseStream_5;
	// System.IO.Stream Ionic.Zlib.DeflateStream::_innerStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____innerStream_6;
	// System.Boolean Ionic.Zlib.DeflateStream::_disposed
	bool ____disposed_7;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_14;
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

// Ionic.Zlib.ParallelDeflateOutputStream
struct ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Collections.Generic.List`1<Ionic.Zlib.WorkItem> Ionic.Zlib.ParallelDeflateOutputStream::_pool
	List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B* ____pool_7;
	// System.Boolean Ionic.Zlib.ParallelDeflateOutputStream::_leaveOpen
	bool ____leaveOpen_8;
	// System.Boolean Ionic.Zlib.ParallelDeflateOutputStream::emitting
	bool ___emitting_9;
	// System.IO.Stream Ionic.Zlib.ParallelDeflateOutputStream::_outStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____outStream_10;
	// System.Int32 Ionic.Zlib.ParallelDeflateOutputStream::_maxBufferPairs
	int32_t ____maxBufferPairs_11;
	// System.Int32 Ionic.Zlib.ParallelDeflateOutputStream::_bufferSize
	int32_t ____bufferSize_12;
	// System.Threading.AutoResetEvent Ionic.Zlib.ParallelDeflateOutputStream::_newlyCompressedBlob
	AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* ____newlyCompressedBlob_13;
	// System.Object Ionic.Zlib.ParallelDeflateOutputStream::_outputLock
	RuntimeObject* ____outputLock_14;
	// System.Boolean Ionic.Zlib.ParallelDeflateOutputStream::_isClosed
	bool ____isClosed_15;
	// System.Boolean Ionic.Zlib.ParallelDeflateOutputStream::_firstWriteDone
	bool ____firstWriteDone_16;
	// System.Int32 Ionic.Zlib.ParallelDeflateOutputStream::_currentlyFilling
	int32_t ____currentlyFilling_17;
	// System.Int32 Ionic.Zlib.ParallelDeflateOutputStream::_lastFilled
	int32_t ____lastFilled_18;
	// System.Int32 Ionic.Zlib.ParallelDeflateOutputStream::_lastWritten
	int32_t ____lastWritten_19;
	// System.Int32 Ionic.Zlib.ParallelDeflateOutputStream::_latestCompressed
	int32_t ____latestCompressed_20;
	// System.Int32 Ionic.Zlib.ParallelDeflateOutputStream::_Crc32
	int32_t ____Crc32_21;
	// Ionic.Crc.CRC32 Ionic.Zlib.ParallelDeflateOutputStream::_runningCrc
	CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59* ____runningCrc_22;
	// System.Object Ionic.Zlib.ParallelDeflateOutputStream::_latestLock
	RuntimeObject* ____latestLock_23;
	// System.Collections.Generic.Queue`1<System.Int32> Ionic.Zlib.ParallelDeflateOutputStream::_toWrite
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ____toWrite_24;
	// System.Collections.Generic.Queue`1<System.Int32> Ionic.Zlib.ParallelDeflateOutputStream::_toFill
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ____toFill_25;
	// System.Int64 Ionic.Zlib.ParallelDeflateOutputStream::_totalBytesProcessed
	int64_t ____totalBytesProcessed_26;
	// Ionic.Zlib.CompressionLevel Ionic.Zlib.ParallelDeflateOutputStream::_compressLevel
	int32_t ____compressLevel_27;
	// System.Exception modreq(System.Runtime.CompilerServices.IsVolatile) Ionic.Zlib.ParallelDeflateOutputStream::_pendingException
	Exception_t* ____pendingException_28;
	// System.Boolean Ionic.Zlib.ParallelDeflateOutputStream::_handlingException
	bool ____handlingException_29;
	// System.Object Ionic.Zlib.ParallelDeflateOutputStream::_eLock
	RuntimeObject* ____eLock_30;
	// Ionic.Zlib.ParallelDeflateOutputStream/TraceBits Ionic.Zlib.ParallelDeflateOutputStream::_DesiredTrace
	uint32_t ____DesiredTrace_31;
	// Ionic.Zlib.CompressionStrategy Ionic.Zlib.ParallelDeflateOutputStream::<Strategy>k__BackingField
	int32_t ___U3CStrategyU3Ek__BackingField_32;
};

struct ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49_StaticFields
{
	// System.Int32 Ionic.Zlib.ParallelDeflateOutputStream::IO_BUFFER_SIZE_DEFAULT
	int32_t ___IO_BUFFER_SIZE_DEFAULT_5;
	// System.Int32 Ionic.Zlib.ParallelDeflateOutputStream::BufferPairsPerCore
	int32_t ___BufferPairsPerCore_6;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};

struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// Ionic.Zlib.ZlibBaseStream
struct ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// Ionic.Zlib.ZlibCodec Ionic.Zlib.ZlibBaseStream::_z
	ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* ____z_5;
	// Ionic.Zlib.ZlibBaseStream/StreamMode Ionic.Zlib.ZlibBaseStream::_streamMode
	int32_t ____streamMode_6;
	// Ionic.Zlib.FlushType Ionic.Zlib.ZlibBaseStream::_flushMode
	int32_t ____flushMode_7;
	// Ionic.Zlib.ZlibStreamFlavor Ionic.Zlib.ZlibBaseStream::_flavor
	int32_t ____flavor_8;
	// Ionic.Zlib.CompressionMode Ionic.Zlib.ZlibBaseStream::_compressionMode
	int32_t ____compressionMode_9;
	// Ionic.Zlib.CompressionLevel Ionic.Zlib.ZlibBaseStream::_level
	int32_t ____level_10;
	// System.Boolean Ionic.Zlib.ZlibBaseStream::_leaveOpen
	bool ____leaveOpen_11;
	// System.Byte[] Ionic.Zlib.ZlibBaseStream::_workingBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____workingBuffer_12;
	// System.Int32 Ionic.Zlib.ZlibBaseStream::_bufferSize
	int32_t ____bufferSize_13;
	// System.Byte[] Ionic.Zlib.ZlibBaseStream::_buf1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buf1_14;
	// System.IO.Stream Ionic.Zlib.ZlibBaseStream::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_15;
	// Ionic.Zlib.CompressionStrategy Ionic.Zlib.ZlibBaseStream::Strategy
	int32_t ___Strategy_16;
	// Ionic.Crc.CRC32 Ionic.Zlib.ZlibBaseStream::crc
	CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59* ___crc_17;
	// System.String Ionic.Zlib.ZlibBaseStream::_GzipFileName
	String_t* ____GzipFileName_18;
	// System.String Ionic.Zlib.ZlibBaseStream::_GzipComment
	String_t* ____GzipComment_19;
	// System.DateTime Ionic.Zlib.ZlibBaseStream::_GzipMtime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____GzipMtime_20;
	// System.Int32 Ionic.Zlib.ZlibBaseStream::_gzipHeaderByteCount
	int32_t ____gzipHeaderByteCount_21;
	// System.Boolean Ionic.Zlib.ZlibBaseStream::nomoreinput
	bool ___nomoreinput_22;
};

// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
{
};

// Ionic.Zlib.GZipStream
struct GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Nullable`1<System.DateTime> Ionic.Zlib.GZipStream::LastModified
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___LastModified_5;
	// System.Int32 Ionic.Zlib.GZipStream::_headerByteCount
	int32_t ____headerByteCount_6;
	// Ionic.Zlib.ZlibBaseStream Ionic.Zlib.GZipStream::_baseStream
	ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* ____baseStream_7;
	// System.Boolean Ionic.Zlib.GZipStream::_disposed
	bool ____disposed_8;
	// System.Boolean Ionic.Zlib.GZipStream::_firstReadDone
	bool ____firstReadDone_9;
	// System.String Ionic.Zlib.GZipStream::_FileName
	String_t* ____FileName_10;
	// System.String Ionic.Zlib.GZipStream::_Comment
	String_t* ____Comment_11;
	// System.Int32 Ionic.Zlib.GZipStream::_Crc32
	int32_t ____Crc32_12;
};

struct GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_StaticFields
{
	// System.DateTime Ionic.Zlib.GZipStream::_unixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____unixEpoch_13;
	// System.Text.Encoding Ionic.Zlib.GZipStream::iso8859dash1
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___iso8859dash1_14;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Ionic.Zlib.ZlibException
struct ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1  : public Exception_t
{
	static const Il2CppGuid CLSID;

};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.Threading.AutoResetEvent
struct AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0  : public EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// PlayFabSharedSettings
struct PlayFabSharedSettings_tFBCCC0C676FD07F8C8662B0005DFD99542B68F90  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String PlayFabSharedSettings::TitleId
	String_t* ___TitleId_4;
	// System.String PlayFabSharedSettings::VerticalName
	String_t* ___VerticalName_5;
	// System.String PlayFabSharedSettings::ProductionEnvironmentUrl
	String_t* ___ProductionEnvironmentUrl_6;
	// PlayFab.WebRequestType PlayFabSharedSettings::RequestType
	int32_t ___RequestType_7;
	// System.String PlayFabSharedSettings::AdvertisingIdType
	String_t* ___AdvertisingIdType_8;
	// System.String PlayFabSharedSettings::AdvertisingIdValue
	String_t* ___AdvertisingIdValue_9;
	// System.Boolean PlayFabSharedSettings::DisableAdvertising
	bool ___DisableAdvertising_10;
	// System.Boolean PlayFabSharedSettings::DisableDeviceInfo
	bool ___DisableDeviceInfo_11;
	// System.Boolean PlayFabSharedSettings::DisableFocusTimeCollection
	bool ___DisableFocusTimeCollection_12;
	// System.Int32 PlayFabSharedSettings::RequestTimeout
	int32_t ___RequestTimeout_13;
	// System.Boolean PlayFabSharedSettings::RequestKeepAlive
	bool ___RequestKeepAlive_14;
	// System.Boolean PlayFabSharedSettings::CompressApiData
	bool ___CompressApiData_15;
	// PlayFab.PlayFabLogLevel PlayFabSharedSettings::LogLevel
	int32_t ___LogLevel_16;
	// System.String PlayFabSharedSettings::LoggerHost
	String_t* ___LoggerHost_17;
	// System.Int32 PlayFabSharedSettings::LoggerPort
	int32_t ___LoggerPort_18;
	// System.Boolean PlayFabSharedSettings::EnableRealTimeLogging
	bool ___EnableRealTimeLogging_19;
	// System.Int32 PlayFabSharedSettings::LogCapLimit
	int32_t ___LogCapLimit_20;
};

// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3  : public MulticastDelegate_t
{
};

// Ionic.Zlib.DeflateManager/CompressFunc
struct CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0  : public MulticastDelegate_t
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Ionic.Zlib.DeflateManager/Config[]
struct ConfigU5BU5D_t2FC24C5A411345379CB7AFEA699D06AB27002DF2  : public RuntimeArray
{
	ALIGN_FIELD (8) Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* m_Items[1];

	inline Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E  : public RuntimeArray
{
	ALIGN_FIELD (8) Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* m_Items[1];

	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
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


// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_gshared_inline (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_gshared (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.DateTime>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_gshared (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_gshared_inline (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Int32>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.ZTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZTree__ctor_m04A275658A18040582092BAD5C34F1C9AA20D896 (ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// Ionic.Zlib.DeflateManager/Config Ionic.Zlib.DeflateManager/Config::Lookup(Ionic.Zlib.CompressionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* Config_Lookup_m9F57580134B3438DA12448A331B6360C71FFA2D4 (int32_t ___level0, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateManager::SetDeflater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_SetDeflater_m926E71507A538185110EF127636FA9BB680C8D92 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateManager::_InitializeBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeBlocks_m1B335949723E7650E3C11DFF7535B3A6698C1312 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) ;
// System.Boolean Ionic.Zlib.DeflateManager::_IsSmaller(System.Int16[],System.Int32,System.Int32,System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateManager__IsSmaller_mF599436A976DAA137AE1F1E90542A741F18B6587 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___n1, int32_t ___m2, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___depth3, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateManager::scan_tree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_scan_tree_m1E63A02223FE53E86D2F9707A7C5D14AA7CDBABA (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___max_code1, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.ZTree::build_tree(Ionic.Zlib.DeflateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZTree_build_tree_m3AA568727AC98E65635DC8DC3696ED37BB4C060F (ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46* __this, DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* ___s0, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateManager::send_bits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_bits_mB5A76E7FE93FD0ED74BBF888F72476D075B04BEA (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, int32_t ___value0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateManager::send_tree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_tree_m779085F562EBF132EADDCA5A521A1731F38C106E (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___max_code1, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateManager::send_code(System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_code_m651AE49FFC82B547E6ABF3544E98C2517F119521 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, int32_t ___c0, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree1, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateManager::bi_flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_bi_flush_mA9ECC4D31E29C04F2317E4F40B60EE3A423F1D98 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) ;
// System.Int32 Ionic.Zlib.ZTree::DistanceCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZTree_DistanceCode_m669E1475745989D9B1AEE208336F04DC1D096D68 (int32_t ___dist0, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateManager::bi_windup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_bi_windup_m7230E2A4FFF72161B495A7390F96772C45C811AA (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateManager::put_bytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_put_bytes_m205F852B4904D2EA243E6E9CD8F2D2B0D5968951 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, int32_t ___start1, int32_t ___len2, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateManager::_tr_flush_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_flush_block_mDCB3AD7C5FA517E36F40F9D6F3AB2ED6D09F0CFC (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.ZlibCodec::flush_pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibCodec_flush_pending_mDBADBEFC685082C99C0E91AC60CBDDFD6D393B5B (ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* __this, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateManager::_fillWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__fillWindow_m610A77094C5727574DE00D64318422269BCC5A86 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateManager::flush_block_only(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_flush_block_only_m993A048372B744519A8F7B72B3D011FC52920E81 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, bool ___eof0, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateManager::copy_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_copy_block_mC6102518D1267B42F469C5AA18621942226C108C (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, int32_t ___buf0, int32_t ___len1, bool ___header2, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateManager::set_data_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_set_data_type_m30E4F73E5FD41613AF0F921B8411C35768ED209F (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) ;
// System.Int32 Ionic.Zlib.DeflateManager::build_bl_tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_build_bl_tree_mFF7ABA7CEAE332C59331DC90F3138B246C510927 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateManager::_tr_stored_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_stored_block_m103A4090CF2E1060C43F7B926AED9CA2F509FE39 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateManager::send_compressed_block(System.Int16[],System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_compressed_block_mABD57CD411D1323FBA8CB5676D2945229C5D30CC (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___ltree0, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___dtree1, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateManager::send_all_trees(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_all_trees_m893A6C4B1A3F408104BA83DD1DDD2413FE9089C0 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, int32_t ___lcodes0, int32_t ___dcodes1, int32_t ___blcodes2, const RuntimeMethod* method) ;
// System.Int32 Ionic.Zlib.ZlibCodec::read_buf(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_read_buf_mA1C18E8E226E95E8F0C952CC995D1B7302A08D54 (ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, int32_t ___start1, int32_t ___size2, const RuntimeMethod* method) ;
// System.Int32 Ionic.Zlib.DeflateManager::longest_match(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_longest_match_mE2FAA94A68F82CAC43D3B917D5D4BF74DBA74643 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, int32_t ___cur_match0, const RuntimeMethod* method) ;
// System.Boolean Ionic.Zlib.DeflateManager::_tr_tally(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateManager__tr_tally_m0521293760BD22142473D940DDA1BA0D1A61FCAF (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, int32_t ___dist0, int32_t ___lc1, const RuntimeMethod* method) ;
// System.Int32 Ionic.Zlib.DeflateManager::Initialize(Ionic.Zlib.ZlibCodec,Ionic.Zlib.CompressionLevel,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Initialize_mE6C108ACF6DF876C98943E43CE7607423B8E7730 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* ___codec0, int32_t ___level1, int32_t ___bits2, const RuntimeMethod* method) ;
// System.Int32 Ionic.Zlib.DeflateManager::Initialize(Ionic.Zlib.ZlibCodec,Ionic.Zlib.CompressionLevel,System.Int32,System.Int32,Ionic.Zlib.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Initialize_mBE4ECB11B46A5977FCADA7141978938E428732ED (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* ___codec0, int32_t ___level1, int32_t ___windowBits2, int32_t ___memLevel3, int32_t ___strategy4, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.ZlibException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibException__ctor_m64D791E8513A445C3D6E672332E2EC5DD6EE76E4 (ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1* __this, String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_Reset_mEDD48C9A2AF41BC13666BC25E1F5F34E894C04BE (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) ;
// System.Boolean Ionic.Zlib.DeflateManager::get_WantRfc1950HeaderBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeflateManager_get_WantRfc1950HeaderBytes_m75F40211D40B3305737878C796ABF362D3B4A1B1_inline (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) ;
// System.UInt32 Ionic.Zlib.Adler::Adler32(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Adler_Adler32_m9695EEA6DCAA53D00A6F830833B21FAEDE1C0E39 (uint32_t ___adler0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf1, int32_t ___index2, int32_t ___len3, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateManager::_InitializeTreeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeTreeData_mEB8966492523035DD3744EAB80C9A615EC981D7A (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateManager::_InitializeLazyMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeLazyMatch_mD8BCCC360DC5B1B788E55B81F3DEB1207114143E (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateManager/CompressFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressFunc__ctor_mD34A5FF9383EB8C9FF667C354A52712B647698DA (CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 Ionic.Zlib.ZlibCodec::Deflate(Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_Deflate_m119870C4DAC47865D53B39EA397367EDCD9F72AE (ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* __this, int32_t ___flush0, const RuntimeMethod* method) ;
// Ionic.Zlib.BlockState Ionic.Zlib.DeflateManager/CompressFunc::Invoke(Ionic.Zlib.FlushType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompressFunc_Invoke_m2F705D391F2B3B99EFA994DABBE061FB9FD56747_inline (CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0* __this, int32_t ___flush0, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateManager::_tr_align()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_align_m8A8C106EAC3DE6F972481C2B9E0B149BE90CC521 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateManager/Config::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Ionic.Zlib.DeflateFlavor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config__ctor_m59AC73EBB8635CC7D5CA94DAA68ABD971F865A58 (Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* __this, int32_t ___goodLength0, int32_t ___maxLazy1, int32_t ___niceLength2, int32_t ___maxChainLength3, int32_t ___flavor4, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode,Ionic.Zlib.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_mCA9C5FE3A80F93E9761399F38CD6F35EFA0FEB18 (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, int32_t ___level2, bool ___leaveOpen3, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.ZlibBaseStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode,Ionic.Zlib.CompressionLevel,Ionic.Zlib.ZlibStreamFlavor,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream__ctor_m926C81FB1752D5F72BEC497DABFBDF524FDEB9BD (ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___compressionMode1, int32_t ___level2, int32_t ___flavor3, bool ___leaveOpen4, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___objectName0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode,Ionic.Zlib.CompressionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_mBA94CDF33B2A8730C88CD968C795D94F9EF6B133 (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, int32_t ___level2, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.ZlibBaseStream::CompressString(System.String,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream_CompressString_mB559C98BBC5393E1AC56745D519E16C3BF806E12 (String_t* ___s0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___compressor1, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.ZlibBaseStream::CompressBuffer(System.Byte[],System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream_CompressBuffer_mB2D9C3C265B44CC77D27A58910CFD02805DC11CE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___compressor1, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.DeflateStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_mFEA868B00EA35DE2FEA67052B5152FE966CD1BF1 (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.String Ionic.Zlib.ZlibBaseStream::UncompressString(System.Byte[],System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZlibBaseStream_UncompressString_m16DB78C4359617D4CA18C974AC4D5D29E68C7F9F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressed0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___decompressor1, const RuntimeMethod* method) ;
// System.Byte[] Ionic.Zlib.ZlibBaseStream::UncompressBuffer(System.Byte[],System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ZlibBaseStream_UncompressBuffer_m2C10229AF2D45D62694FDC060F6457A5D7598855 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressed0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___decompressor1, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_mEBC73E0C8D8C56214D1DA4BA8409C5B5F00457A5 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.GZipStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode,Ionic.Zlib.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_m661BF6E4F7336945F343FA3EE3A025E19FEDC449 (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, int32_t ___level2, bool ___leaveOpen3, const RuntimeMethod* method) ;
// System.Int32 Ionic.Zlib.ZlibBaseStream::get_Crc32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibBaseStream_get_Crc32_mD3DAFC4A89F5FCF614B801B78409B7871FD40E47 (ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* __this, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.GZipStream::set_FileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_set_FileName_m590D5197014AB4AD008CC3E3F8E4711827050970 (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.GZipStream::set_Comment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_set_Comment_m5C85315792410807392DDBC40D65F7331420D5E4 (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Ionic.Zlib.ZlibBaseStream::get__wantCompress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZlibBaseStream_get__wantCompress_mEAAD77712C5DDA963246FC820DA5002D38710743 (ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* __this, const RuntimeMethod* method) ;
// System.Int32 Ionic.Zlib.GZipStream::EmitHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_EmitHeader_m50993A5FAA1EF0316693012FE1D7EA1A095E430B (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// System.String Ionic.Zlib.GZipStream::get_Comment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GZipStream_get_Comment_m854751A0B57F628205B127CA73BE5CD5F9D41D9B_inline (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, const RuntimeMethod* method) ;
// System.String Ionic.Zlib.GZipStream::get_FileName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GZipStream_get_FileName_m7E2FD03B41897EE52074E71085F676DDFD42A7BD_inline (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
inline bool Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_inline (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC*, const RuntimeMethod*))Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_gshared_inline)(__this, method);
}
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0 (const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
inline void Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, const RuntimeMethod*))Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<System.DateTime>::get_Value()
inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991 (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method)
{
	return ((  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D (*) (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC*, const RuntimeMethod*))Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_gshared)(__this, method);
}
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.GZipStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode,Ionic.Zlib.CompressionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_m1314CA02AE3B840949484828C4D58A6BE24BBECC (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, int32_t ___level2, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.GZipStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_mE228217444EB9CAF2B1A8A40CA0CA0AA455E5B14 (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mD89390EF215242275A4E8F78C2C3E8BC3EF6F3C3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___kind6, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_GetEncoding_mBF5A2BA804B4917644BBEC5A4230D0854236D8FE (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.InflateCodes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateCodes__ctor_mBD475BE915886D11D4BCA58CEA81698299D65E50 (InflateCodes_t2759A3D840DF45440C2D917FC57F100D1969F7D6* __this, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.InfTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree__ctor_m23D7BB79D78967033812470BF4A675A8FB273780 (InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE* __this, const RuntimeMethod* method) ;
// System.UInt32 Ionic.Zlib.InflateBlocks::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InflateBlocks_Reset_m8BF6F7A81688AA1977F0089C2200DB9BC2E3A988 (InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* __this, const RuntimeMethod* method) ;
// System.Int32 Ionic.Zlib.InflateBlocks::Flush(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0 (InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* __this, int32_t ___r0, const RuntimeMethod* method) ;
// System.Int32 Ionic.Zlib.InfTree::inflate_trees_fixed(System.Int32[],System.Int32[],System.Int32[][],System.Int32[][],Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_fixed_m5C3AAC1112CEC346BB6051BAFB3F74DF8A7C3F34 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bl0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bd1, Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___tl2, Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___td3, ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* ___z4, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.InflateCodes::Init(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateCodes_Init_mD66ED3F1182B685327EC5A9EB8CB2B3161DE15E5 (InflateCodes_t2759A3D840DF45440C2D917FC57F100D1969F7D6* __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___td4, int32_t ___td_index5, const RuntimeMethod* method) ;
// System.Int32 Ionic.Zlib.InfTree::inflate_trees_bits(System.Int32[],System.Int32[],System.Int32[],System.Int32[],Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_bits_m96F1A3DEB9B9122E97529A1ED65DADC009B47412 (InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___c0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bb1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tb2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hp3, ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* ___z4, const RuntimeMethod* method) ;
// System.Int32 Ionic.Zlib.InfTree::inflate_trees_dynamic(System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_dynamic_m014FA1DD7C75E54F675E6B689D7238489F1582EE (InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE* __this, int32_t ___nl0, int32_t ___nd1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___c2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bl3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bd4, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tl5, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___td6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hp7, ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* ___z8, const RuntimeMethod* method) ;
// System.Int32 Ionic.Zlib.InflateCodes::Process(Ionic.Zlib.InflateBlocks,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateCodes_Process_m7F92FF26812C32DB48F09366141943548DBB762C (InflateCodes_t2759A3D840DF45440C2D917FC57F100D1969F7D6* __this, InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* ___blocks0, int32_t ___r1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Int32 Ionic.Zlib.InflateCodes::InflateFast(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,Ionic.Zlib.InflateBlocks,Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateCodes_InflateFast_m9C7C03641DD6428D054E55124267BE4C06FC3C6F (InflateCodes_t2759A3D840DF45440C2D917FC57F100D1969F7D6* __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___td4, int32_t ___td_index5, InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* ___s6, ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* ___z7, const RuntimeMethod* method) ;
// System.Boolean Ionic.Zlib.InflateManager::get_HandleRfc1950HeaderBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InflateManager_get_HandleRfc1950HeaderBytes_mA528D034844C015D09B38CAABA4D3F44EE24B288_inline (InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* __this, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.InflateBlocks::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateBlocks_Free_m320ED5CDEBC7841177560DD05467595B3D3601B9 (InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* __this, const RuntimeMethod* method) ;
// System.Int32 Ionic.Zlib.InflateManager::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_End_mDA4E43AA004A60EDCE9AC86E468F8799C28EC70C (InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* __this, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.InflateBlocks::.ctor(Ionic.Zlib.ZlibCodec,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateBlocks__ctor_mD40ABB6B19C3AE06EA756866856449A44F6F12AA (InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* __this, ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* ___codec0, RuntimeObject* ___checkfn1, int32_t ___w2, const RuntimeMethod* method) ;
// System.Int32 Ionic.Zlib.InflateManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_Reset_m15007DE1228F2DC299705BB31B0B64E43BD72640 (InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* __this, const RuntimeMethod* method) ;
// System.Int32 Ionic.Zlib.InflateBlocks::Process(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateBlocks_Process_mCCBBC67F46F15D0CBFD57C6F2C486E7C6734E768 (InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* __this, int32_t ___r0, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.InflateBlocks::SetDictionary(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateBlocks_SetDictionary_mC2D309C03A4AA8F3597EB6EDAFFF11885EC5374D (InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___d0, int32_t ___start1, int32_t ___n2, const RuntimeMethod* method) ;
// System.Int32 Ionic.Zlib.InflateBlocks::SyncPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateBlocks_SyncPoint_mDAF7364D181CCB931E90DC4FD685BE199E44927E (InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* __this, const RuntimeMethod* method) ;
// System.Int32 Ionic.Zlib.SharedUtils::URShift(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SharedUtils_URShift_mBE2BD8E27A3D7F84DA11CEAFB66829009D115EE9 (int32_t ___number0, int32_t ___bits1, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.InfTree::initWorkArea(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree_initWorkArea_mB15CE0CB1213EA95DAB5CBB202DA79F21F6EF6C0 (InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE* __this, int32_t ___vsize0, const RuntimeMethod* method) ;
// System.Int32 Ionic.Zlib.InfTree::huft_build(System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_huft_build_m05C4C1490F8507633B517C0524635B8BB563BE63 (InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___b0, int32_t ___bindex1, int32_t ___n2, int32_t ___s3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___d4, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___e5, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___t6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m7, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hp8, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hn9, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___v10, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.ZlibCodec::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibCodec__ctor_mB1C7954D9FDAEA29B445D6E17434A101519F216D (ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* __this, const RuntimeMethod* method) ;
// System.Int32 Ionic.Zlib.ZlibCodec::InitializeDeflate(Ionic.Zlib.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeDeflate_m0F92D20347FA4706324623CFDBC2CD7993CBC89B (ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* __this, int32_t ___level0, bool ___wantRfc1950Header1, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionLevel,Ionic.Zlib.CompressionStrategy,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__ctor_m692AFDB363AC49AE6BDA12670285C88DAEC861A4 (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___level1, int32_t ___strategy2, bool ___leaveOpen3, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::set_Strategy(Ionic.Zlib.CompressionStrategy)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_set_Strategy_m500A0FB016BD5F4769796B7242E36603AAEA624D_inline (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::set_MaxBufferPairs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_set_MaxBufferPairs_m83A0B75EB21EBC8805C8C2AA0A65A24894234FCE (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor()
inline void Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Ionic.Zlib.WorkItem>::.ctor()
inline void List_1__ctor_mE2648001759CD08A36C46E203995A86939771277 (List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 System.Environment::get_ProcessorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_ProcessorCount_m247F6A8B0FD7F58EC777E7D393CC382C82446418 (const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// Ionic.Zlib.CompressionStrategy Ionic.Zlib.ParallelDeflateOutputStream::get_Strategy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ParallelDeflateOutputStream_get_Strategy_m6458E048264FD65467D3F39F28B0D015FD09AF8F_inline (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.WorkItem::.ctor(System.Int32,Ionic.Zlib.CompressionLevel,Ionic.Zlib.CompressionStrategy,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkItem__ctor_mEBD4525D084243858465FAFD76B8ABB95EDF6DA5 (WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* __this, int32_t ___size0, int32_t ___compressLevel1, int32_t ___strategy2, int32_t ___ix3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ionic.Zlib.WorkItem>::Add(T)
inline void List_1_Add_m753996EE8766DE3C6413FA43A01485148E13D55D_inline (List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B* __this, WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B*, WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Enqueue(T)
inline void Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, int32_t, const RuntimeMethod*))Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_gshared)(__this, ___item0, method);
}
// System.Void System.Threading.AutoResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoResetEvent__ctor_mB7C8CD30C5BE11A2C8DB79B27593CF0C5FE82ADE (AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* __this, bool ___initialState0, const RuntimeMethod* method) ;
// System.Void Ionic.Crc.CRC32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32__ctor_m34C589BA2DA750522A47C7293127B85402673352 (CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59* __this, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::_InitializePoolOfWorkItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__InitializePoolOfWorkItems_m9BB70756B0E4D6C1FE1F74A48E30FF74ECD7C10B (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::EmitPendingBuffers(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_EmitPendingBuffers_m2CF742C32DFC6939D32DB7BA776428BD15976E5C (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, bool ___doAll0, bool ___mustWait1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Int32>::get_Count()
inline int32_t Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<System.Int32>::Dequeue()
inline int32_t Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<Ionic.Zlib.WorkItem>::get_Item(System.Int32)
inline WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* List_1_get_Item_mF020E3C2EE9BA95FAD755AD36DE8810062214E44 (List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* (*) (List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_m8E941E4D8C281AAEE450CDEEFE5CA4B8F77ABDD1 (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___callBack0, RuntimeObject* ___state1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int32 Ionic.Zlib.ZlibCodec::EndDeflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_EndDeflate_mC39498579CB18A0A141CCC5A64D812C0543DB7F8 (ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* __this, const RuntimeMethod* method) ;
// System.Int32 Ionic.Crc.CRC32::get_Crc32Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRC32_get_Crc32Result_m041D8245E883D11274D3698C9C3386B316D133A8 (CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59* __this, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::_DeflateOne(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__DeflateOne_m0433191E2D84B0AB11AD975B4A1BD7000A4B1B86 (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, RuntimeObject* ___wi0, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::_FlushFinish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__FlushFinish_m4819CA9506CD70F9103C4BF9FD2E3799CE337D44 (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::_Flush(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__Flush_mB6D12776C06FBD0B17C83859014AB7760E1D7485 (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, bool ___lastInput0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Clear()
inline void Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Ionic.Zlib.WorkItem>::GetEnumerator()
inline Enumerator_t958BE15B8412AD7D54A4DCF60E7D35E0146F1C1A List_1_GetEnumerator_m035CB3A1422D19055CA08EE0754BC694A077206B (List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t958BE15B8412AD7D54A4DCF60E7D35E0146F1C1A (*) (List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Ionic.Zlib.WorkItem>::Dispose()
inline void Enumerator_Dispose_mA5B3AD69860A64ABE5D597ECAA62E7BBCAC1F8EF (Enumerator_t958BE15B8412AD7D54A4DCF60E7D35E0146F1C1A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t958BE15B8412AD7D54A4DCF60E7D35E0146F1C1A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Ionic.Zlib.WorkItem>::get_Current()
inline WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* Enumerator_get_Current_m54A3B18A69EA981C5545BE370472587D51C3CF76_inline (Enumerator_t958BE15B8412AD7D54A4DCF60E7D35E0146F1C1A* __this, const RuntimeMethod* method)
{
	return ((  WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* (*) (Enumerator_t958BE15B8412AD7D54A4DCF60E7D35E0146F1C1A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Ionic.Zlib.WorkItem>::MoveNext()
inline bool Enumerator_MoveNext_m35A17EDEA07CBA05840536A676C447B11ACBD8FC (Enumerator_t958BE15B8412AD7D54A4DCF60E7D35E0146F1C1A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t958BE15B8412AD7D54A4DCF60E7D35E0146F1C1A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Threading.Monitor::TryEnter(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_TryEnter_mBDCC9F84B7EB106272C05016117D1D26BB3BCD2C (RuntimeObject* ___obj0, int32_t ___millisecondsTimeout1, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void Ionic.Crc.CRC32::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32_Combine_m0B5B1C064BB633491CDF26A4398A68E2AA090E2D (CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59* __this, int32_t ___crc0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void Ionic.Crc.CRC32::SlurpBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32_SlurpBlock_mD8F9A2F2CE446F15EC8CBD3F0E8DC11E0180B618 (CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___block0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Boolean Ionic.Zlib.ParallelDeflateOutputStream::DeflateOneSegment(Ionic.Zlib.WorkItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParallelDeflateOutputStream_DeflateOneSegment_m441204B046F0336CDBEE4D1B3C5251451D540BD5 (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* ___workitem0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, const RuntimeMethod* method) ;
// System.Void Ionic.Zlib.ZlibCodec::ResetDeflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibCodec_ResetDeflate_m46547FA4FF8B4D06CD4271AFC32DBCB351492005 (ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* __this, const RuntimeMethod* method) ;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB (const RuntimeMethod* method) ;
// System.Void System.Console::Write(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_Write_m00E51F9C43F639E1D95D8D0569883A2AA02898D9 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.Console::WriteLine(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_mBCCE2C2A3FD35C53FA731B7B4713C1A2082C6257 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___arg1, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
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
// System.Void PlayFabSharedSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabSharedSettings__ctor_mF56B77FFD4693D4261A7FEF313C239FD766A7737 (PlayFabSharedSettings_tFBCCC0C676FD07F8C8662B0005DFD99542B68F90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string ProductionEnvironmentUrl = "";
		__this->___ProductionEnvironmentUrl_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ProductionEnvironmentUrl_6), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public int RequestTimeout = 2000;
		__this->___RequestTimeout_13 = ((int32_t)2000);
		// public bool RequestKeepAlive = true;
		__this->___RequestKeepAlive_14 = (bool)1;
		// public bool CompressApiData = true;
		__this->___CompressApiData_15 = (bool)1;
		// public PlayFabLogLevel LogLevel = PlayFabLogLevel.Warning | PlayFabLogLevel.Error;
		__this->___LogLevel_16 = ((int32_t)12);
		// public string LoggerHost = "";
		__this->___LoggerHost_17 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LoggerHost_17), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public int LogCapLimit = 30;
		__this->___LogCapLimit_20 = ((int32_t)30);
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
// System.Void Ionic.Zlib.DeflateManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__ctor_m4F711BF8A4C87A219DD9E77BA93FFD1432CFC537 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ZTree treeLiterals = new ZTree();  // desc for literal tree
		ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46* L_0 = (ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46*)il2cpp_codegen_object_new(ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ZTree__ctor_m04A275658A18040582092BAD5C34F1C9AA20D896(L_0, NULL);
		__this->___treeLiterals_54 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___treeLiterals_54), (void*)L_0);
		// internal ZTree treeDistances = new ZTree();  // desc for distance tree
		ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46* L_1 = (ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46*)il2cpp_codegen_object_new(ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ZTree__ctor_m04A275658A18040582092BAD5C34F1C9AA20D896(L_1, NULL);
		__this->___treeDistances_55 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___treeDistances_55), (void*)L_1);
		// internal ZTree treeBitLengths = new ZTree(); // desc for bit length tree
		ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46* L_2 = (ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46*)il2cpp_codegen_object_new(ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ZTree__ctor_m04A275658A18040582092BAD5C34F1C9AA20D896(L_2, NULL);
		__this->___treeBitLengths_56 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___treeBitLengths_56), (void*)L_2);
		// internal short[] bl_count = new short[InternalConstants.MAX_BITS + 1];
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		int32_t L_3 = ((InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var))->___MAX_BITS_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_3, 1)));
		__this->___bl_count_57 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bl_count_57), (void*)L_4);
		// internal int[] heap = new int[2 * InternalConstants.L_CODES + 1];
		int32_t L_5 = ((InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var))->___L_CODES_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_5)), 1)));
		__this->___heap_58 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___heap_58), (void*)L_6);
		// internal sbyte[] depth = new sbyte[2 * InternalConstants.L_CODES + 1];
		int32_t L_7 = ((InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var))->___L_CODES_5;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_8 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_7)), 1)));
		__this->___depth_61 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depth_61), (void*)L_8);
		// private bool _WantRfc1950HeaderBytes = true;
		__this->____WantRfc1950HeaderBytes_73 = (bool)1;
		// internal DeflateManager()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// dyn_ltree = new short[HEAP_SIZE * 2];
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_9 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___HEAP_SIZE_19;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_10 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_9, 2)));
		__this->___dyn_ltree_51 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dyn_ltree_51), (void*)L_10);
		// dyn_dtree = new short[(2 * InternalConstants.D_CODES + 1) * 2]; // distance tree
		int32_t L_11 = ((InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var))->___D_CODES_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_12 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_11)), 1)), 2)));
		__this->___dyn_dtree_52 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dyn_dtree_52), (void*)L_12);
		// bl_tree = new short[(2 * InternalConstants.BL_CODES + 1) * 2]; // Huffman tree for bit lengths
		int32_t L_13 = ((InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var))->___BL_CODES_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_14 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_13)), 1)), 2)));
		__this->___bl_tree_53 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bl_tree_53), (void*)L_14);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.DeflateManager::_InitializeLazyMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeLazyMatch_mD8BCCC360DC5B1B788E55B81F3DEB1207114143E (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// window_size = 2 * w_size;
		int32_t L_0 = __this->___w_size_28;
		__this->___window_size_32 = ((int32_t)il2cpp_codegen_multiply(2, L_0));
		// Array.Clear(head, 0, hash_size);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = __this->___head_34;
		int32_t L_2 = __this->___hash_size_36;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_1, 0, L_2, NULL);
		// config = Config.Lookup(compressionLevel);
		int32_t L_3 = __this->___compressionLevel_49;
		il2cpp_codegen_runtime_class_init_inline(Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_il2cpp_TypeInfo_var);
		Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* L_4;
		L_4 = Config_Lookup_m9F57580134B3438DA12448A331B6360C71FFA2D4(L_3, NULL);
		__this->___config_41 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___config_41), (void*)L_4);
		// SetDeflater();
		DeflateManager_SetDeflater_m926E71507A538185110EF127636FA9BB680C8D92(__this, NULL);
		// strstart = 0;
		__this->___strstart_45 = 0;
		// block_start = 0;
		__this->___block_start_40 = 0;
		// lookahead = 0;
		__this->___lookahead_47 = 0;
		// match_length = prev_length = MIN_MATCH - 1;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_5 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		V_0 = L_6;
		__this->___prev_length_48 = L_6;
		int32_t L_7 = V_0;
		__this->___match_length_42 = L_7;
		// match_available = 0;
		__this->___match_available_44 = 0;
		// ins_h = 0;
		__this->___ins_h_35 = 0;
		// }
		return;
	}
}
// System.Void Ionic.Zlib.DeflateManager::_InitializeTreeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeTreeData_mEB8966492523035DD3744EAB80C9A615EC981D7A (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// treeLiterals.dyn_tree = dyn_ltree;
		ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46* L_0 = __this->___treeLiterals_54;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = __this->___dyn_ltree_51;
		NullCheck(L_0);
		L_0->___dyn_tree_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___dyn_tree_10), (void*)L_1);
		// treeLiterals.staticTree = StaticTree.Literals;
		ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46* L_2 = __this->___treeLiterals_54;
		il2cpp_codegen_runtime_class_init_inline(StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948_il2cpp_TypeInfo_var);
		StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948* L_3 = ((StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948_il2cpp_TypeInfo_var))->___Literals_2;
		NullCheck(L_2);
		L_2->___staticTree_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___staticTree_12), (void*)L_3);
		// treeDistances.dyn_tree = dyn_dtree;
		ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46* L_4 = __this->___treeDistances_55;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = __this->___dyn_dtree_52;
		NullCheck(L_4);
		L_4->___dyn_tree_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___dyn_tree_10), (void*)L_5);
		// treeDistances.staticTree = StaticTree.Distances;
		ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46* L_6 = __this->___treeDistances_55;
		StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948* L_7 = ((StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948_il2cpp_TypeInfo_var))->___Distances_3;
		NullCheck(L_6);
		L_6->___staticTree_12 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___staticTree_12), (void*)L_7);
		// treeBitLengths.dyn_tree = bl_tree;
		ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46* L_8 = __this->___treeBitLengths_56;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_9 = __this->___bl_tree_53;
		NullCheck(L_8);
		L_8->___dyn_tree_10 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___dyn_tree_10), (void*)L_9);
		// treeBitLengths.staticTree = StaticTree.BitLengths;
		ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46* L_10 = __this->___treeBitLengths_56;
		StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948* L_11 = ((StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948_il2cpp_TypeInfo_var))->___BitLengths_4;
		NullCheck(L_10);
		L_10->___staticTree_12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___staticTree_12), (void*)L_11);
		// bi_buf = 0;
		__this->___bi_buf_70 = (int16_t)0;
		// bi_valid = 0;
		__this->___bi_valid_71 = 0;
		// last_eob_len = 8; // enough lookahead for inflate
		__this->___last_eob_len_69 = 8;
		// _InitializeBlocks();
		DeflateManager__InitializeBlocks_m1B335949723E7650E3C11DFF7535B3A6698C1312(__this, NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.DeflateManager::_InitializeBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeBlocks_m1B335949723E7650E3C11DFF7535B3A6698C1312 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// for (int i = 0; i < InternalConstants.L_CODES; i++)
		V_0 = 0;
		goto IL_0013;
	}

IL_0004:
	{
		// dyn_ltree[i * 2] = 0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = __this->___dyn_ltree_51;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_1, 2))), (int16_t)0);
		// for (int i = 0; i < InternalConstants.L_CODES; i++)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0013:
	{
		// for (int i = 0; i < InternalConstants.L_CODES; i++)
		int32_t L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		int32_t L_4 = ((InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var))->___L_CODES_5;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < InternalConstants.D_CODES; i++)
		V_1 = 0;
		goto IL_002e;
	}

IL_001f:
	{
		// dyn_dtree[i * 2] = 0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = __this->___dyn_dtree_52;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_6, 2))), (int16_t)0);
		// for (int i = 0; i < InternalConstants.D_CODES; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002e:
	{
		// for (int i = 0; i < InternalConstants.D_CODES; i++)
		int32_t L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		int32_t L_9 = ((InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var))->___D_CODES_2;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_001f;
		}
	}
	{
		// for (int i = 0; i < InternalConstants.BL_CODES; i++)
		V_2 = 0;
		goto IL_0049;
	}

IL_003a:
	{
		// bl_tree[i * 2] = 0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_10 = __this->___bl_tree_53;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_11, 2))), (int16_t)0);
		// for (int i = 0; i < InternalConstants.BL_CODES; i++)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0049:
	{
		// for (int i = 0; i < InternalConstants.BL_CODES; i++)
		int32_t L_13 = V_2;
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		int32_t L_14 = ((InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var))->___BL_CODES_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003a;
		}
	}
	{
		// dyn_ltree[END_BLOCK * 2] = 1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_15 = __this->___dyn_ltree_51;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_16 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___END_BLOCK_20;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_16, 2))), (int16_t)1);
		// opt_len = static_len = 0;
		int32_t L_17 = 0;
		V_3 = L_17;
		__this->___static_len_67 = L_17;
		int32_t L_18 = V_3;
		__this->___opt_len_66 = L_18;
		// last_lit = matches = 0;
		int32_t L_19 = 0;
		V_3 = L_19;
		__this->___matches_68 = L_19;
		int32_t L_20 = V_3;
		__this->___last_lit_64 = L_20;
		// }
		return;
	}
}
// System.Void Ionic.Zlib.DeflateManager::pqdownheap(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_pqdownheap_m08F99343D21874B0865FE10EF366AE28445AB126 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___k1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int v = heap[k];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___heap_58;
		int32_t L_1 = ___k1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// int j = k << 1; // left son of k
		int32_t L_4 = ___k1;
		V_1 = ((int32_t)(L_4<<1));
		goto IL_006a;
	}

IL_000f:
	{
		// if (j < heap_len && _IsSmaller(tree, heap[j + 1], heap[j], depth))
		int32_t L_5 = V_1;
		int32_t L_6 = __this->___heap_len_59;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_003c;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ___tree0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___heap_58;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___heap_58;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_16 = __this->___depth_61;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = DeflateManager__IsSmaller_mF599436A976DAA137AE1F1E90542A741F18B6587(L_7, L_11, L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_003c;
		}
	}
	{
		// j++;
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_003c:
	{
		// if (_IsSmaller(tree, v, heap[j], depth))
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_19 = ___tree0;
		int32_t L_20 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->___heap_58;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_25 = __this->___depth_61;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = DeflateManager__IsSmaller_mF599436A976DAA137AE1F1E90542A741F18B6587(L_19, L_20, L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_0073;
		}
	}
	{
		// heap[k] = heap[j]; k = j;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->___heap_58;
		int32_t L_28 = ___k1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->___heap_58;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		int32_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)L_32);
		// heap[k] = heap[j]; k = j;
		int32_t L_33 = V_1;
		___k1 = L_33;
		// j <<= 1;
		int32_t L_34 = V_1;
		V_1 = ((int32_t)(L_34<<1));
	}

IL_006a:
	{
		// while (j <= heap_len)
		int32_t L_35 = V_1;
		int32_t L_36 = __this->___heap_len_59;
		if ((((int32_t)L_35) <= ((int32_t)L_36)))
		{
			goto IL_000f;
		}
	}

IL_0073:
	{
		// heap[k] = v;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = __this->___heap_58;
		int32_t L_38 = ___k1;
		int32_t L_39 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)L_39);
		// }
		return;
	}
}
// System.Boolean Ionic.Zlib.DeflateManager::_IsSmaller(System.Int16[],System.Int32,System.Int32,System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateManager__IsSmaller_mF599436A976DAA137AE1F1E90542A741F18B6587 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___n1, int32_t ___m2, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___depth3, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	int16_t V_1 = 0;
	{
		// short tn2 = tree[n * 2];
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___tree0;
		int32_t L_1 = ___n1;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_multiply(L_1, 2));
		int16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// short tm2 = tree[m * 2];
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = ___tree0;
		int32_t L_5 = ___m2;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		int16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		// return (tn2 < tm2 || (tn2 == tm2 && depth[n] <= depth[m]));
		int16_t L_8 = V_0;
		int16_t L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0022;
		}
	}
	{
		int16_t L_10 = V_0;
		int16_t L_11 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0020;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_12 = ___depth3;
		int32_t L_13 = ___n1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_16 = ___depth3;
		int32_t L_17 = ___m2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		return (bool)((((int32_t)((((int32_t)L_15) > ((int32_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		return (bool)0;
	}

IL_0022:
	{
		return (bool)1;
	}
}
// System.Void Ionic.Zlib.DeflateManager::scan_tree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_scan_tree_m1E63A02223FE53E86D2F9707A7C5D14AA7CDBABA (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___max_code1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// int prevlen = -1; // last emitted length
		V_1 = (-1);
		// int nextlen = (int)tree[0 * 2 + 1]; // length of next code
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___tree0;
		NullCheck(L_0);
		int32_t L_1 = 1;
		int16_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_3 = L_2;
		// int count = 0; // repeat count of the current code
		V_4 = 0;
		// int max_count = 7; // max repeat count
		V_5 = 7;
		// int min_count = 4; // min repeat count
		V_6 = 4;
		// if (nextlen == 0)
		int32_t L_3 = V_3;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		// max_count = 138; min_count = 3;
		V_5 = ((int32_t)138);
		// max_count = 138; min_count = 3;
		V_6 = 3;
	}

IL_001c:
	{
		// tree[(max_code + 1) * 2 + 1] = (short)0x7fff; // guard //??
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = ___tree0;
		int32_t L_5 = ___max_code1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_5, 1)), 2)), 1))), (int16_t)((int32_t)32767));
		// for (n = 0; n <= max_code; n++)
		V_0 = 0;
		goto IL_0106;
	}

IL_0031:
	{
		// curlen = nextlen; nextlen = (int)tree[(n + 1) * 2 + 1];
		int32_t L_6 = V_3;
		V_2 = L_6;
		// curlen = nextlen; nextlen = (int)tree[(n + 1) * 2 + 1];
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ___tree0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_8, 1)), 2)), 1));
		int16_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		// if (++count < max_count && curlen == nextlen)
		int32_t L_11 = V_4;
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		V_4 = L_12;
		int32_t L_13 = V_5;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_0102;
		}
	}

IL_004f:
	{
		// else if (count < min_count)
		int32_t L_16 = V_4;
		int32_t L_17 = V_6;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_006f;
		}
	}
	{
		// bl_tree[curlen * 2] = (short)(bl_tree[curlen * 2] + count);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_18 = __this->___bl_tree_53;
		int32_t L_19 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_20 = __this->___bl_tree_53;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_multiply(L_21, 2));
		int16_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = V_4;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_19, 2))), (int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, L_24))));
		goto IL_00dc;
	}

IL_006f:
	{
		// else if (curlen != 0)
		int32_t L_25 = V_2;
		if (!L_25)
		{
			goto IL_00a4;
		}
	}
	{
		// if (curlen != prevlen)
		int32_t L_26 = V_2;
		int32_t L_27 = V_1;
		if ((((int32_t)L_26) == ((int32_t)L_27)))
		{
			goto IL_008a;
		}
	}
	{
		// bl_tree[curlen * 2]++;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_28 = __this->___bl_tree_53;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		int16_t* L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_29, 2)))));
		int32_t L_31 = *((int16_t*)L_30);
		*((int16_t*)L_30) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_31, 1)));
	}

IL_008a:
	{
		// bl_tree[InternalConstants.REP_3_6 * 2]++;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_32 = __this->___bl_tree_53;
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		int32_t L_33 = ((InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var))->___REP_3_6_7;
		NullCheck(L_32);
		int16_t* L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_33, 2)))));
		int32_t L_35 = *((int16_t*)L_34);
		*((int16_t*)L_34) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_35, 1)));
		goto IL_00dc;
	}

IL_00a4:
	{
		// else if (count <= 10)
		int32_t L_36 = V_4;
		if ((((int32_t)L_36) > ((int32_t)((int32_t)10))))
		{
			goto IL_00c4;
		}
	}
	{
		// bl_tree[InternalConstants.REPZ_3_10 * 2]++;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_37 = __this->___bl_tree_53;
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		int32_t L_38 = ((InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var))->___REPZ_3_10_8;
		NullCheck(L_37);
		int16_t* L_39 = ((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_38, 2)))));
		int32_t L_40 = *((int16_t*)L_39);
		*((int16_t*)L_39) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_40, 1)));
		goto IL_00dc;
	}

IL_00c4:
	{
		// bl_tree[InternalConstants.REPZ_11_138 * 2]++;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_41 = __this->___bl_tree_53;
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		int32_t L_42 = ((InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var))->___REPZ_11_138_9;
		NullCheck(L_41);
		int16_t* L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_42, 2)))));
		int32_t L_44 = *((int16_t*)L_43);
		*((int16_t*)L_43) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_44, 1)));
	}

IL_00dc:
	{
		// count = 0; prevlen = curlen;
		V_4 = 0;
		// count = 0; prevlen = curlen;
		int32_t L_45 = V_2;
		V_1 = L_45;
		// if (nextlen == 0)
		int32_t L_46 = V_3;
		if (L_46)
		{
			goto IL_00f0;
		}
	}
	{
		// max_count = 138; min_count = 3;
		V_5 = ((int32_t)138);
		// max_count = 138; min_count = 3;
		V_6 = 3;
		goto IL_0102;
	}

IL_00f0:
	{
		// else if (curlen == nextlen)
		int32_t L_47 = V_2;
		int32_t L_48 = V_3;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_00fc;
		}
	}
	{
		// max_count = 6; min_count = 3;
		V_5 = 6;
		// max_count = 6; min_count = 3;
		V_6 = 3;
		goto IL_0102;
	}

IL_00fc:
	{
		// max_count = 7; min_count = 4;
		V_5 = 7;
		// max_count = 7; min_count = 4;
		V_6 = 4;
	}

IL_0102:
	{
		// for (n = 0; n <= max_code; n++)
		int32_t L_49 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0106:
	{
		// for (n = 0; n <= max_code; n++)
		int32_t L_50 = V_0;
		int32_t L_51 = ___max_code1;
		if ((((int32_t)L_50) <= ((int32_t)L_51)))
		{
			goto IL_0031;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 Ionic.Zlib.DeflateManager::build_bl_tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_build_bl_tree_mFF7ABA7CEAE332C59331DC90F3138B246C510927 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// scan_tree(dyn_ltree, treeLiterals.max_code);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = __this->___dyn_ltree_51;
		ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46* L_1 = __this->___treeLiterals_54;
		NullCheck(L_1);
		int32_t L_2 = L_1->___max_code_11;
		DeflateManager_scan_tree_m1E63A02223FE53E86D2F9707A7C5D14AA7CDBABA(__this, L_0, L_2, NULL);
		// scan_tree(dyn_dtree, treeDistances.max_code);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = __this->___dyn_dtree_52;
		ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46* L_4 = __this->___treeDistances_55;
		NullCheck(L_4);
		int32_t L_5 = L_4->___max_code_11;
		DeflateManager_scan_tree_m1E63A02223FE53E86D2F9707A7C5D14AA7CDBABA(__this, L_3, L_5, NULL);
		// treeBitLengths.build_tree(this);
		ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46* L_6 = __this->___treeBitLengths_56;
		NullCheck(L_6);
		ZTree_build_tree_m3AA568727AC98E65635DC8DC3696ED37BB4C060F(L_6, __this, NULL);
		// for (max_blindex = InternalConstants.BL_CODES - 1; max_blindex >= 3; max_blindex--)
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		int32_t L_7 = ((InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var))->___BL_CODES_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_005c;
	}

IL_0044:
	{
		// if (bl_tree[ZTree.bl_order[max_blindex] * 2 + 1] != 0)
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_8 = __this->___bl_tree_53;
		il2cpp_codegen_runtime_class_init_inline(ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_9 = ((ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_StaticFields*)il2cpp_codegen_static_fields_for(ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var))->___bl_order_4;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_12, 2)), 1));
		int16_t L_14 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if (L_14)
		{
			goto IL_0060;
		}
	}
	{
		// for (max_blindex = InternalConstants.BL_CODES - 1; max_blindex >= 3; max_blindex--)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_005c:
	{
		// for (max_blindex = InternalConstants.BL_CODES - 1; max_blindex >= 3; max_blindex--)
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) >= ((int32_t)3)))
		{
			goto IL_0044;
		}
	}

IL_0060:
	{
		// opt_len += 3 * (max_blindex + 1) + 5 + 5 + 4;
		int32_t L_17 = __this->___opt_len_66;
		int32_t L_18 = V_0;
		__this->___opt_len_66 = ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(3, ((int32_t)il2cpp_codegen_add(L_18, 1)))), 5)), 5)), 4))));
		// return max_blindex;
		int32_t L_19 = V_0;
		return L_19;
	}
}
// System.Void Ionic.Zlib.DeflateManager::send_all_trees(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_all_trees_m893A6C4B1A3F408104BA83DD1DDD2413FE9089C0 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, int32_t ___lcodes0, int32_t ___dcodes1, int32_t ___blcodes2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// send_bits(lcodes - 257, 5); // not +255 as stated in appnote.txt
		int32_t L_0 = ___lcodes0;
		DeflateManager_send_bits_mB5A76E7FE93FD0ED74BBF888F72476D075B04BEA(__this, ((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)257))), 5, NULL);
		// send_bits(dcodes - 1, 5);
		int32_t L_1 = ___dcodes1;
		DeflateManager_send_bits_mB5A76E7FE93FD0ED74BBF888F72476D075B04BEA(__this, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), 5, NULL);
		// send_bits(blcodes - 4, 4); // not -3 as stated in appnote.txt
		int32_t L_2 = ___blcodes2;
		DeflateManager_send_bits_mB5A76E7FE93FD0ED74BBF888F72476D075B04BEA(__this, ((int32_t)il2cpp_codegen_subtract(L_2, 4)), 4, NULL);
		// for (rank = 0; rank < blcodes; rank++)
		V_0 = 0;
		goto IL_0043;
	}

IL_0026:
	{
		// send_bits(bl_tree[ZTree.bl_order[rank] * 2 + 1], 3);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = __this->___bl_tree_53;
		il2cpp_codegen_runtime_class_init_inline(ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4 = ((ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_StaticFields*)il2cpp_codegen_static_fields_for(ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var))->___bl_order_4;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, 2)), 1));
		int16_t L_9 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		DeflateManager_send_bits_mB5A76E7FE93FD0ED74BBF888F72476D075B04BEA(__this, L_9, 3, NULL);
		// for (rank = 0; rank < blcodes; rank++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0043:
	{
		// for (rank = 0; rank < blcodes; rank++)
		int32_t L_11 = V_0;
		int32_t L_12 = ___blcodes2;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0026;
		}
	}
	{
		// send_tree(dyn_ltree, lcodes - 1); // literal tree
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_13 = __this->___dyn_ltree_51;
		int32_t L_14 = ___lcodes0;
		DeflateManager_send_tree_m779085F562EBF132EADDCA5A521A1731F38C106E(__this, L_13, ((int32_t)il2cpp_codegen_subtract(L_14, 1)), NULL);
		// send_tree(dyn_dtree, dcodes - 1); // distance tree
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_15 = __this->___dyn_dtree_52;
		int32_t L_16 = ___dcodes1;
		DeflateManager_send_tree_m779085F562EBF132EADDCA5A521A1731F38C106E(__this, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.DeflateManager::send_tree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_tree_m779085F562EBF132EADDCA5A521A1731F38C106E (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___max_code1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// int prevlen   = -1;              // last emitted length
		V_1 = (-1);
		// int nextlen   = tree[0 * 2 + 1]; // length of next code
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___tree0;
		NullCheck(L_0);
		int32_t L_1 = 1;
		int16_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_3 = L_2;
		// int count     = 0;               // repeat count of the current code
		V_4 = 0;
		// int max_count = 7;               // max repeat count
		V_5 = 7;
		// int min_count = 4;               // min repeat count
		V_6 = 4;
		// if (nextlen == 0)
		int32_t L_3 = V_3;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		// max_count = 138; min_count = 3;
		V_5 = ((int32_t)138);
		// max_count = 138; min_count = 3;
		V_6 = 3;
	}

IL_001c:
	{
		// for (n = 0; n <= max_code; n++)
		V_0 = 0;
		goto IL_0102;
	}

IL_0023:
	{
		// curlen = nextlen; nextlen = tree[(n + 1) * 2 + 1];
		int32_t L_4 = V_3;
		V_2 = L_4;
		// curlen = nextlen; nextlen = tree[(n + 1) * 2 + 1];
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = ___tree0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_6, 1)), 2)), 1));
		int16_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// if (++count < max_count && curlen == nextlen)
		int32_t L_9 = V_4;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		V_4 = L_10;
		int32_t L_11 = V_5;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13 = V_3;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_00fe;
		}
	}

IL_0041:
	{
		// else if (count < min_count)
		int32_t L_14 = V_4;
		int32_t L_15 = V_6;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_005f;
		}
	}

IL_0047:
	{
		// send_code(curlen, bl_tree);
		int32_t L_16 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_17 = __this->___bl_tree_53;
		DeflateManager_send_code_m651AE49FFC82B547E6ABF3544E98C2517F119521(__this, L_16, L_17, NULL);
		// while (--count != 0);
		int32_t L_18 = V_4;
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		V_4 = L_19;
		if (L_19)
		{
			goto IL_0047;
		}
	}
	{
		goto IL_00d8;
	}

IL_005f:
	{
		// else if (curlen != 0)
		int32_t L_20 = V_2;
		if (!L_20)
		{
			goto IL_0097;
		}
	}
	{
		// if (curlen != prevlen)
		int32_t L_21 = V_2;
		int32_t L_22 = V_1;
		if ((((int32_t)L_21) == ((int32_t)L_22)))
		{
			goto IL_0079;
		}
	}
	{
		// send_code(curlen, bl_tree); count--;
		int32_t L_23 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_24 = __this->___bl_tree_53;
		DeflateManager_send_code_m651AE49FFC82B547E6ABF3544E98C2517F119521(__this, L_23, L_24, NULL);
		// send_code(curlen, bl_tree); count--;
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
	}

IL_0079:
	{
		// send_code(InternalConstants.REP_3_6, bl_tree);
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		int32_t L_26 = ((InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var))->___REP_3_6_7;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_27 = __this->___bl_tree_53;
		DeflateManager_send_code_m651AE49FFC82B547E6ABF3544E98C2517F119521(__this, L_26, L_27, NULL);
		// send_bits(count - 3, 2);
		int32_t L_28 = V_4;
		DeflateManager_send_bits_mB5A76E7FE93FD0ED74BBF888F72476D075B04BEA(__this, ((int32_t)il2cpp_codegen_subtract(L_28, 3)), 2, NULL);
		goto IL_00d8;
	}

IL_0097:
	{
		// else if (count <= 10)
		int32_t L_29 = V_4;
		if ((((int32_t)L_29) > ((int32_t)((int32_t)10))))
		{
			goto IL_00bb;
		}
	}
	{
		// send_code(InternalConstants.REPZ_3_10, bl_tree);
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		int32_t L_30 = ((InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var))->___REPZ_3_10_8;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_31 = __this->___bl_tree_53;
		DeflateManager_send_code_m651AE49FFC82B547E6ABF3544E98C2517F119521(__this, L_30, L_31, NULL);
		// send_bits(count - 3, 3);
		int32_t L_32 = V_4;
		DeflateManager_send_bits_mB5A76E7FE93FD0ED74BBF888F72476D075B04BEA(__this, ((int32_t)il2cpp_codegen_subtract(L_32, 3)), 3, NULL);
		goto IL_00d8;
	}

IL_00bb:
	{
		// send_code(InternalConstants.REPZ_11_138, bl_tree);
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		int32_t L_33 = ((InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var))->___REPZ_11_138_9;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_34 = __this->___bl_tree_53;
		DeflateManager_send_code_m651AE49FFC82B547E6ABF3544E98C2517F119521(__this, L_33, L_34, NULL);
		// send_bits(count - 11, 7);
		int32_t L_35 = V_4;
		DeflateManager_send_bits_mB5A76E7FE93FD0ED74BBF888F72476D075B04BEA(__this, ((int32_t)il2cpp_codegen_subtract(L_35, ((int32_t)11))), 7, NULL);
	}

IL_00d8:
	{
		// count = 0; prevlen = curlen;
		V_4 = 0;
		// count = 0; prevlen = curlen;
		int32_t L_36 = V_2;
		V_1 = L_36;
		// if (nextlen == 0)
		int32_t L_37 = V_3;
		if (L_37)
		{
			goto IL_00ec;
		}
	}
	{
		// max_count = 138; min_count = 3;
		V_5 = ((int32_t)138);
		// max_count = 138; min_count = 3;
		V_6 = 3;
		goto IL_00fe;
	}

IL_00ec:
	{
		// else if (curlen == nextlen)
		int32_t L_38 = V_2;
		int32_t L_39 = V_3;
		if ((!(((uint32_t)L_38) == ((uint32_t)L_39))))
		{
			goto IL_00f8;
		}
	}
	{
		// max_count = 6; min_count = 3;
		V_5 = 6;
		// max_count = 6; min_count = 3;
		V_6 = 3;
		goto IL_00fe;
	}

IL_00f8:
	{
		// max_count = 7; min_count = 4;
		V_5 = 7;
		// max_count = 7; min_count = 4;
		V_6 = 4;
	}

IL_00fe:
	{
		// for (n = 0; n <= max_code; n++)
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0102:
	{
		// for (n = 0; n <= max_code; n++)
		int32_t L_41 = V_0;
		int32_t L_42 = ___max_code1;
		if ((((int32_t)L_41) <= ((int32_t)L_42)))
		{
			goto IL_0023;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Ionic.Zlib.DeflateManager::put_bytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_put_bytes_m205F852B4904D2EA243E6E9CD8F2D2B0D5968951 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, int32_t ___start1, int32_t ___len2, const RuntimeMethod* method) 
{
	{
		// Array.Copy(p, start, pending, pendingCount, len);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___p0;
		int32_t L_1 = ___start1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___pending_23;
		int32_t L_3 = __this->___pendingCount_25;
		int32_t L_4 = ___len2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_0, L_1, (RuntimeArray*)L_2, L_3, L_4, NULL);
		// pendingCount += len;
		int32_t L_5 = __this->___pendingCount_25;
		int32_t L_6 = ___len2;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		// }
		return;
	}
}
// System.Void Ionic.Zlib.DeflateManager::send_code(System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_code_m651AE49FFC82B547E6ABF3544E98C2517F119521 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, int32_t ___c0, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int c2 = c * 2;
		int32_t L_0 = ___c0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, 2));
		// send_bits((tree[c2] & 0xffff), (tree[c2 + 1] & 0xffff));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = ___tree1;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int16_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = ___tree1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int16_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		DeflateManager_send_bits_mB5A76E7FE93FD0ED74BBF888F72476D075B04BEA(__this, ((int32_t)((int32_t)L_4&((int32_t)65535))), ((int32_t)((int32_t)L_8&((int32_t)65535))), NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.DeflateManager::send_bits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_bits_mB5A76E7FE93FD0ED74BBF888F72476D075B04BEA (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, int32_t ___value0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int len = length;
		int32_t L_0 = ___length1;
		V_0 = L_0;
		// if (bi_valid > (int)Buf_size - len)
		int32_t L_1 = __this->___bi_valid_71;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_2 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___Buf_size_15;
		int32_t L_3 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3)))))
		{
			goto IL_00a1;
		}
	}
	{
		// bi_buf |= (short)((value << bi_valid) & 0xffff);
		int16_t L_4 = __this->___bi_buf_70;
		int32_t L_5 = ___value0;
		int32_t L_6 = __this->___bi_valid_71;
		__this->___bi_buf_70 = ((int16_t)((int32_t)((int32_t)L_4|(int32_t)((int16_t)((int32_t)(((int32_t)(L_5<<((int32_t)(L_6&((int32_t)31)))))&((int32_t)65535)))))));
		// pending[pendingCount++] = (byte)bi_buf;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___pending_23;
		int32_t L_8 = __this->___pendingCount_25;
		V_1 = L_8;
		int32_t L_9 = V_1;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_1;
		int16_t L_11 = __this->___bi_buf_70;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint8_t)((int32_t)(uint8_t)L_11));
		// pending[pendingCount++] = (byte)(bi_buf >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___pending_23;
		int32_t L_13 = __this->___pendingCount_25;
		V_1 = L_13;
		int32_t L_14 = V_1;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_1;
		int16_t L_16 = __this->___bi_buf_70;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_16>>8))));
		// bi_buf = (short)((uint)value >> (Buf_size - bi_valid));
		int32_t L_17 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_18 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___Buf_size_15;
		int32_t L_19 = __this->___bi_valid_71;
		__this->___bi_buf_70 = ((int16_t)((int32_t)((uint32_t)L_17>>((int32_t)(((int32_t)il2cpp_codegen_subtract(L_18, L_19))&((int32_t)31))))));
		// bi_valid += len - Buf_size;
		int32_t L_20 = __this->___bi_valid_71;
		int32_t L_21 = V_0;
		int32_t L_22 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___Buf_size_15;
		__this->___bi_valid_71 = ((int32_t)il2cpp_codegen_add(L_20, ((int32_t)il2cpp_codegen_subtract(L_21, L_22))));
		return;
	}

IL_00a1:
	{
		// bi_buf |= (short)((value << bi_valid) & 0xffff);
		int16_t L_23 = __this->___bi_buf_70;
		int32_t L_24 = ___value0;
		int32_t L_25 = __this->___bi_valid_71;
		__this->___bi_buf_70 = ((int16_t)((int32_t)((int32_t)L_23|(int32_t)((int16_t)((int32_t)(((int32_t)(L_24<<((int32_t)(L_25&((int32_t)31)))))&((int32_t)65535)))))));
		// bi_valid += len;
		int32_t L_26 = __this->___bi_valid_71;
		int32_t L_27 = V_0;
		__this->___bi_valid_71 = ((int32_t)il2cpp_codegen_add(L_26, L_27));
		// }
		return;
	}
}
// System.Void Ionic.Zlib.DeflateManager::_tr_align()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_align_m8A8C106EAC3DE6F972481C2B9E0B149BE90CC521 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// send_bits(STATIC_TREES << 1, 3);
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_0 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___STATIC_TREES_10;
		DeflateManager_send_bits_mB5A76E7FE93FD0ED74BBF888F72476D075B04BEA(__this, ((int32_t)(L_0<<1)), 3, NULL);
		// send_code(END_BLOCK, StaticTree.lengthAndLiteralsTreeCodes);
		int32_t L_1 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___END_BLOCK_20;
		il2cpp_codegen_runtime_class_init_inline(StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = ((StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948_il2cpp_TypeInfo_var))->___lengthAndLiteralsTreeCodes_0;
		DeflateManager_send_code_m651AE49FFC82B547E6ABF3544E98C2517F119521(__this, L_1, L_2, NULL);
		// bi_flush();
		DeflateManager_bi_flush_mA9ECC4D31E29C04F2317E4F40B60EE3A423F1D98(__this, NULL);
		// if (1 + last_eob_len + 10 - bi_valid < 9)
		int32_t L_3 = __this->___last_eob_len_69;
		int32_t L_4 = __this->___bi_valid_71;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(1, L_3)), ((int32_t)10))), L_4))) >= ((int32_t)((int32_t)9))))
		{
			goto IL_005e;
		}
	}
	{
		// send_bits(STATIC_TREES << 1, 3);
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_5 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___STATIC_TREES_10;
		DeflateManager_send_bits_mB5A76E7FE93FD0ED74BBF888F72476D075B04BEA(__this, ((int32_t)(L_5<<1)), 3, NULL);
		// send_code(END_BLOCK, StaticTree.lengthAndLiteralsTreeCodes);
		int32_t L_6 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___END_BLOCK_20;
		il2cpp_codegen_runtime_class_init_inline(StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ((StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948_il2cpp_TypeInfo_var))->___lengthAndLiteralsTreeCodes_0;
		DeflateManager_send_code_m651AE49FFC82B547E6ABF3544E98C2517F119521(__this, L_6, L_7, NULL);
		// bi_flush();
		DeflateManager_bi_flush_mA9ECC4D31E29C04F2317E4F40B60EE3A423F1D98(__this, NULL);
	}

IL_005e:
	{
		// last_eob_len = 7;
		__this->___last_eob_len_69 = 7;
		// }
		return;
	}
}
// System.Boolean Ionic.Zlib.DeflateManager::_tr_tally(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateManager__tr_tally_m0521293760BD22142473D940DDA1BA0D1A61FCAF (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, int32_t ___dist0, int32_t ___lc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// pending[_distanceOffset + last_lit * 2] = unchecked((byte) ( (uint)dist >> 8 ) );
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___pending_23;
		int32_t L_1 = __this->____distanceOffset_65;
		int32_t L_2 = __this->___last_lit_64;
		int32_t L_3 = ___dist0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_multiply(L_2, 2))))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_3>>8))));
		// pending[_distanceOffset + last_lit * 2 + 1] = unchecked((byte)dist);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___pending_23;
		int32_t L_5 = __this->____distanceOffset_65;
		int32_t L_6 = __this->___last_lit_64;
		int32_t L_7 = ___dist0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_5, ((int32_t)il2cpp_codegen_multiply(L_6, 2)))), 1))), (uint8_t)((int32_t)(uint8_t)L_7));
		// pending[_lengthOffset + last_lit] = unchecked((byte)lc);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___pending_23;
		int32_t L_9 = __this->____lengthOffset_62;
		int32_t L_10 = __this->___last_lit_64;
		int32_t L_11 = ___lc1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_9, L_10))), (uint8_t)((int32_t)(uint8_t)L_11));
		// last_lit++;
		int32_t L_12 = __this->___last_lit_64;
		__this->___last_lit_64 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		// if (dist == 0)
		int32_t L_13 = ___dist0;
		if (L_13)
		{
			goto IL_0071;
		}
	}
	{
		// dyn_ltree[lc * 2]++;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_14 = __this->___dyn_ltree_51;
		int32_t L_15 = ___lc1;
		NullCheck(L_14);
		int16_t* L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_15, 2)))));
		int32_t L_17 = *((int16_t*)L_16);
		*((int16_t*)L_16) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_17, 1)));
		goto IL_00bf;
	}

IL_0071:
	{
		// matches++;
		int32_t L_18 = __this->___matches_68;
		__this->___matches_68 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		// dist--; // dist = match distance - 1
		int32_t L_19 = ___dist0;
		___dist0 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		// dyn_ltree[(ZTree.LengthCode[lc] + InternalConstants.LITERALS + 1) * 2]++;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_20 = __this->___dyn_ltree_51;
		il2cpp_codegen_runtime_class_init_inline(ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_21 = ((ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_StaticFields*)il2cpp_codegen_static_fields_for(ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var))->___LengthCode_7;
		int32_t L_22 = ___lc1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int8_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		int32_t L_25 = ((InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var))->___LITERALS_3;
		NullCheck(L_20);
		int16_t* L_26 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_24, L_25)), 1)), 2)))));
		int32_t L_27 = *((int16_t*)L_26);
		*((int16_t*)L_26) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_27, 1)));
		// dyn_dtree[ZTree.DistanceCode(dist) * 2]++;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_28 = __this->___dyn_dtree_52;
		int32_t L_29 = ___dist0;
		int32_t L_30;
		L_30 = ZTree_DistanceCode_m669E1475745989D9B1AEE208336F04DC1D096D68(L_29, NULL);
		NullCheck(L_28);
		int16_t* L_31 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_30, 2)))));
		int32_t L_32 = *((int16_t*)L_31);
		*((int16_t*)L_31) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_32, 1)));
	}

IL_00bf:
	{
		// if ((last_lit & 0x1fff) == 0 && (int)compressionLevel > 2)
		int32_t L_33 = __this->___last_lit_64;
		if (((int32_t)(L_33&((int32_t)8191))))
		{
			goto IL_0135;
		}
	}
	{
		int32_t L_34 = __this->___compressionLevel_49;
		if ((((int32_t)L_34) <= ((int32_t)2)))
		{
			goto IL_0135;
		}
	}
	{
		// int out_length = last_lit << 3;
		int32_t L_35 = __this->___last_lit_64;
		V_0 = ((int32_t)(L_35<<3));
		// int in_length = strstart - block_start;
		int32_t L_36 = __this->___strstart_45;
		int32_t L_37 = __this->___block_start_40;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
		// for (dcode = 0; dcode < InternalConstants.D_CODES; dcode++)
		V_2 = 0;
		goto IL_0111;
	}

IL_00f1:
	{
		// out_length = (int)(out_length + (int)dyn_dtree[dcode * 2] * (5L + ZTree.ExtraDistanceBits[dcode]));
		int32_t L_38 = V_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_39 = __this->___dyn_dtree_52;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_multiply(L_40, 2));
		int16_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		il2cpp_codegen_runtime_class_init_inline(ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = ((ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_StaticFields*)il2cpp_codegen_static_fields_for(ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var))->___ExtraDistanceBits_2;
		int32_t L_44 = V_2;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		int32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)L_38), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_42), ((int64_t)il2cpp_codegen_add(((int64_t)5), ((int64_t)L_46))))))));
		// for (dcode = 0; dcode < InternalConstants.D_CODES; dcode++)
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0111:
	{
		// for (dcode = 0; dcode < InternalConstants.D_CODES; dcode++)
		int32_t L_48 = V_2;
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		int32_t L_49 = ((InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var))->___D_CODES_2;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_00f1;
		}
	}
	{
		// out_length >>= 3;
		int32_t L_50 = V_0;
		V_0 = ((int32_t)(L_50>>3));
		// if ((matches < (last_lit / 2)) && out_length < in_length / 2)
		int32_t L_51 = __this->___matches_68;
		int32_t L_52 = __this->___last_lit_64;
		if ((((int32_t)L_51) >= ((int32_t)((int32_t)(L_52/2)))))
		{
			goto IL_0135;
		}
	}
	{
		int32_t L_53 = V_0;
		int32_t L_54 = V_1;
		if ((((int32_t)L_53) >= ((int32_t)((int32_t)(L_54/2)))))
		{
			goto IL_0135;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0135:
	{
		// return (last_lit == lit_bufsize - 1) || (last_lit == lit_bufsize);
		int32_t L_55 = __this->___last_lit_64;
		int32_t L_56 = __this->___lit_bufsize_63;
		if ((((int32_t)L_55) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_56, 1)))))
		{
			goto IL_0154;
		}
	}
	{
		int32_t L_57 = __this->___last_lit_64;
		int32_t L_58 = __this->___lit_bufsize_63;
		return (bool)((((int32_t)L_57) == ((int32_t)L_58))? 1 : 0);
	}

IL_0154:
	{
		return (bool)1;
	}
}
// System.Void Ionic.Zlib.DeflateManager::send_compressed_block(System.Int16[],System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_compressed_block_mABD57CD411D1323FBA8CB5676D2945229C5D30CC (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___ltree0, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___dtree1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// int lx = 0;   // running index in l_buf
		V_2 = 0;
		// if (last_lit != 0)
		int32_t L_0 = __this->___last_lit_64;
		if (!L_0)
		{
			goto IL_00db;
		}
	}

IL_000d:
	{
		// int ix = _distanceOffset + lx * 2;
		int32_t L_1 = __this->____distanceOffset_65;
		int32_t L_2 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_multiply(L_2, 2))));
		// distance = ((pending[ix] << 8) & 0xff00) |
		//     (pending[ix + 1] & 0xff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___pending_23;
		int32_t L_4 = V_5;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___pending_23;
		int32_t L_8 = V_5;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_6<<8))&((int32_t)65280)))|((int32_t)((int32_t)L_10&((int32_t)255)))));
		// lc = (pending[_lengthOffset + lx]) & 0xff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___pending_23;
		int32_t L_12 = __this->____lengthOffset_62;
		int32_t L_13 = V_2;
		NullCheck(L_11);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_12, L_13));
		uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = ((int32_t)((int32_t)L_15&((int32_t)255)));
		// lx++;
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		// if (distance == 0)
		int32_t L_17 = V_0;
		if (L_17)
		{
			goto IL_0064;
		}
	}
	{
		// send_code(lc, ltree); // send a literal byte
		int32_t L_18 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_19 = ___ltree0;
		DeflateManager_send_code_m651AE49FFC82B547E6ABF3544E98C2517F119521(__this, L_18, L_19, NULL);
		goto IL_00cf;
	}

IL_0064:
	{
		// code = ZTree.LengthCode[lc];
		il2cpp_codegen_runtime_class_init_inline(ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_20 = ((ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_StaticFields*)il2cpp_codegen_static_fields_for(ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var))->___LengthCode_7;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		int8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_3 = L_23;
		// send_code(code + InternalConstants.LITERALS + 1, ltree);
		int32_t L_24 = V_3;
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		int32_t L_25 = ((InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var))->___LITERALS_3;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_26 = ___ltree0;
		DeflateManager_send_code_m651AE49FFC82B547E6ABF3544E98C2517F119521(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_24, L_25)), 1)), L_26, NULL);
		// extra = ZTree.ExtraLengthBits[code];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = ((ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_StaticFields*)il2cpp_codegen_static_fields_for(ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var))->___ExtraLengthBits_1;
		int32_t L_28 = V_3;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		int32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_4 = L_30;
		// if (extra != 0)
		int32_t L_31 = V_4;
		if (!L_31)
		{
			goto IL_009c;
		}
	}
	{
		// lc -= ZTree.LengthBase[code];
		int32_t L_32 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = ((ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_StaticFields*)il2cpp_codegen_static_fields_for(ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var))->___LengthBase_8;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_32, L_36));
		// send_bits(lc, extra);
		int32_t L_37 = V_1;
		int32_t L_38 = V_4;
		DeflateManager_send_bits_mB5A76E7FE93FD0ED74BBF888F72476D075B04BEA(__this, L_37, L_38, NULL);
	}

IL_009c:
	{
		// distance--; // dist is now the match distance - 1
		int32_t L_39 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
		// code = ZTree.DistanceCode(distance);
		int32_t L_40 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var);
		int32_t L_41;
		L_41 = ZTree_DistanceCode_m669E1475745989D9B1AEE208336F04DC1D096D68(L_40, NULL);
		V_3 = L_41;
		// send_code(code, dtree);
		int32_t L_42 = V_3;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_43 = ___dtree1;
		DeflateManager_send_code_m651AE49FFC82B547E6ABF3544E98C2517F119521(__this, L_42, L_43, NULL);
		// extra = ZTree.ExtraDistanceBits[code];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = ((ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_StaticFields*)il2cpp_codegen_static_fields_for(ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var))->___ExtraDistanceBits_2;
		int32_t L_45 = V_3;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		int32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_4 = L_47;
		// if (extra != 0)
		int32_t L_48 = V_4;
		if (!L_48)
		{
			goto IL_00cf;
		}
	}
	{
		// distance -= ZTree.DistanceBase[code];
		int32_t L_49 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = ((ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_StaticFields*)il2cpp_codegen_static_fields_for(ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46_il2cpp_TypeInfo_var))->___DistanceBase_9;
		int32_t L_51 = V_3;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		int32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_49, L_53));
		// send_bits(distance, extra);
		int32_t L_54 = V_0;
		int32_t L_55 = V_4;
		DeflateManager_send_bits_mB5A76E7FE93FD0ED74BBF888F72476D075B04BEA(__this, L_54, L_55, NULL);
	}

IL_00cf:
	{
		// while (lx < last_lit);
		int32_t L_56 = V_2;
		int32_t L_57 = __this->___last_lit_64;
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_000d;
		}
	}

IL_00db:
	{
		// send_code(END_BLOCK, ltree);
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_58 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___END_BLOCK_20;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_59 = ___ltree0;
		DeflateManager_send_code_m651AE49FFC82B547E6ABF3544E98C2517F119521(__this, L_58, L_59, NULL);
		// last_eob_len = ltree[END_BLOCK * 2 + 1];
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_60 = ___ltree0;
		int32_t L_61 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___END_BLOCK_20;
		NullCheck(L_60);
		int32_t L_62 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_61, 2)), 1));
		int16_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		__this->___last_eob_len_69 = L_63;
		// }
		return;
	}
}
// System.Void Ionic.Zlib.DeflateManager::set_data_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_set_data_type_m30E4F73E5FD41613AF0F921B8411C35768ED209F (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* G_B11_0 = NULL;
	DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* G_B12_1 = NULL;
	{
		// int n = 0;
		V_0 = 0;
		// int ascii_freq = 0;
		V_1 = 0;
		// int bin_freq = 0;
		V_2 = 0;
		goto IL_0019;
	}

IL_0008:
	{
		// bin_freq += dyn_ltree[n * 2]; n++;
		int32_t L_0 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = __this->___dyn_ltree_51;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_multiply(L_2, 2));
		int16_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((int32_t)il2cpp_codegen_add(L_0, (int32_t)L_4));
		// bin_freq += dyn_ltree[n * 2]; n++;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0019:
	{
		// while (n < 7)
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)7)))
		{
			goto IL_0008;
		}
	}
	{
		goto IL_0030;
	}

IL_001f:
	{
		// ascii_freq += dyn_ltree[n * 2]; n++;
		int32_t L_7 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_8 = __this->___dyn_ltree_51;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_multiply(L_9, 2));
		int16_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, (int32_t)L_11));
		// ascii_freq += dyn_ltree[n * 2]; n++;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0030:
	{
		// while (n < 128)
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)128))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_004b;
	}

IL_003a:
	{
		// bin_freq += dyn_ltree[n * 2]; n++;
		int32_t L_14 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_15 = __this->___dyn_ltree_51;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_multiply(L_16, 2));
		int16_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, (int32_t)L_18));
		// bin_freq += dyn_ltree[n * 2]; n++;
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_004b:
	{
		// while (n < InternalConstants.LITERALS)
		int32_t L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		int32_t L_21 = ((InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var))->___LITERALS_3;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003a;
		}
	}
	{
		// data_type = (sbyte)(bin_freq > (ascii_freq >> 2) ? Z_BINARY : Z_ASCII);
		int32_t L_22 = V_2;
		int32_t L_23 = V_1;
		G_B10_0 = __this;
		if ((((int32_t)L_22) > ((int32_t)((int32_t)(L_23>>2)))))
		{
			G_B11_0 = __this;
			goto IL_0061;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_24 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___Z_ASCII_13;
		G_B12_0 = L_24;
		G_B12_1 = G_B10_0;
		goto IL_0066;
	}

IL_0061:
	{
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_25 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___Z_BINARY_12;
		G_B12_0 = L_25;
		G_B12_1 = G_B11_0;
	}

IL_0066:
	{
		NullCheck(G_B12_1);
		G_B12_1->___data_type_26 = ((int8_t)G_B12_0);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.DeflateManager::bi_flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_bi_flush_mA9ECC4D31E29C04F2317E4F40B60EE3A423F1D98 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (bi_valid == 16)
		int32_t L_0 = __this->___bi_valid_71;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0059;
		}
	}
	{
		// pending[pendingCount++] = (byte)bi_buf;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___pending_23;
		int32_t L_2 = __this->___pendingCount_25;
		V_0 = L_2;
		int32_t L_3 = V_0;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = V_0;
		int16_t L_5 = __this->___bi_buf_70;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((int32_t)(uint8_t)L_5));
		// pending[pendingCount++] = (byte)(bi_buf >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___pending_23;
		int32_t L_7 = __this->___pendingCount_25;
		V_0 = L_7;
		int32_t L_8 = V_0;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_0;
		int16_t L_10 = __this->___bi_buf_70;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_10>>8))));
		// bi_buf = 0;
		__this->___bi_buf_70 = (int16_t)0;
		// bi_valid = 0;
		__this->___bi_valid_71 = 0;
		return;
	}

IL_0059:
	{
		// else if (bi_valid >= 8)
		int32_t L_11 = __this->___bi_valid_71;
		if ((((int32_t)L_11) < ((int32_t)8)))
		{
			goto IL_009e;
		}
	}
	{
		// pending[pendingCount++] = (byte)bi_buf;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___pending_23;
		int32_t L_13 = __this->___pendingCount_25;
		V_0 = L_13;
		int32_t L_14 = V_0;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_0;
		int16_t L_16 = __this->___bi_buf_70;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)((int32_t)(uint8_t)L_16));
		// bi_buf >>= 8;
		int16_t L_17 = __this->___bi_buf_70;
		__this->___bi_buf_70 = ((int16_t)((int32_t)((int32_t)L_17>>8)));
		// bi_valid -= 8;
		int32_t L_18 = __this->___bi_valid_71;
		__this->___bi_valid_71 = ((int32_t)il2cpp_codegen_subtract(L_18, 8));
	}

IL_009e:
	{
		// }
		return;
	}
}
// System.Void Ionic.Zlib.DeflateManager::bi_windup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_bi_windup_m7230E2A4FFF72161B495A7390F96772C45C811AA (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (bi_valid > 8)
		int32_t L_0 = __this->___bi_valid_71;
		if ((((int32_t)L_0) <= ((int32_t)8)))
		{
			goto IL_004b;
		}
	}
	{
		// pending[pendingCount++] = (byte)bi_buf;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___pending_23;
		int32_t L_2 = __this->___pendingCount_25;
		V_0 = L_2;
		int32_t L_3 = V_0;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = V_0;
		int16_t L_5 = __this->___bi_buf_70;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((int32_t)(uint8_t)L_5));
		// pending[pendingCount++] = (byte)(bi_buf >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___pending_23;
		int32_t L_7 = __this->___pendingCount_25;
		V_0 = L_7;
		int32_t L_8 = V_0;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_0;
		int16_t L_10 = __this->___bi_buf_70;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_10>>8))));
		goto IL_0073;
	}

IL_004b:
	{
		// else if (bi_valid > 0)
		int32_t L_11 = __this->___bi_valid_71;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		// pending[pendingCount++] = (byte)bi_buf;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___pending_23;
		int32_t L_13 = __this->___pendingCount_25;
		V_0 = L_13;
		int32_t L_14 = V_0;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_0;
		int16_t L_16 = __this->___bi_buf_70;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)((int32_t)(uint8_t)L_16));
	}

IL_0073:
	{
		// bi_buf = 0;
		__this->___bi_buf_70 = (int16_t)0;
		// bi_valid = 0;
		__this->___bi_valid_71 = 0;
		// }
		return;
	}
}
// System.Void Ionic.Zlib.DeflateManager::copy_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_copy_block_mC6102518D1267B42F469C5AA18621942226C108C (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, int32_t ___buf0, int32_t ___len1, bool ___header2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// bi_windup(); // align on byte boundary
		DeflateManager_bi_windup_m7230E2A4FFF72161B495A7390F96772C45C811AA(__this, NULL);
		// last_eob_len = 8; // enough lookahead for inflate
		__this->___last_eob_len_69 = 8;
		// if (header)
		bool L_0 = ___header2;
		if (!L_0)
		{
			goto IL_007e;
		}
	}
	{
		// pending[pendingCount++] = (byte)len;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___pending_23;
		int32_t L_2 = __this->___pendingCount_25;
		V_0 = L_2;
		int32_t L_3 = V_0;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = V_0;
		int32_t L_5 = ___len1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((int32_t)(uint8_t)L_5));
		// pending[pendingCount++] = (byte)(len >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___pending_23;
		int32_t L_7 = __this->___pendingCount_25;
		V_0 = L_7;
		int32_t L_8 = V_0;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_0;
		int32_t L_10 = ___len1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_10>>8))));
		// pending[pendingCount++] = (byte)~len;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___pending_23;
		int32_t L_12 = __this->___pendingCount_25;
		V_0 = L_12;
		int32_t L_13 = V_0;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		int32_t L_14 = V_0;
		int32_t L_15 = ___len1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)((int32_t)(uint8_t)((~L_15))));
		// pending[pendingCount++] = (byte)(~len >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___pending_23;
		int32_t L_17 = __this->___pendingCount_25;
		V_0 = L_17;
		int32_t L_18 = V_0;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_0;
		int32_t L_20 = ___len1;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (uint8_t)((int32_t)(uint8_t)((int32_t)(((~L_20))>>8))));
	}

IL_007e:
	{
		// put_bytes(window, buf, len);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___window_31;
		int32_t L_22 = ___buf0;
		int32_t L_23 = ___len1;
		DeflateManager_put_bytes_m205F852B4904D2EA243E6E9CD8F2D2B0D5968951(__this, L_21, L_22, L_23, NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.DeflateManager::flush_block_only(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_flush_block_only_m993A048372B744519A8F7B72B3D011FC52920E81 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, bool ___eof0, const RuntimeMethod* method) 
{
	DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* G_B2_0 = NULL;
	DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* G_B3_1 = NULL;
	{
		// _tr_flush_block(block_start >= 0 ? block_start : -1, strstart - block_start, eof);
		int32_t L_0 = __this->___block_start_40;
		G_B1_0 = __this;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B1_0;
		goto IL_0013;
	}

IL_000d:
	{
		int32_t L_1 = __this->___block_start_40;
		G_B3_0 = L_1;
		G_B3_1 = G_B2_0;
	}

IL_0013:
	{
		int32_t L_2 = __this->___strstart_45;
		int32_t L_3 = __this->___block_start_40;
		bool L_4 = ___eof0;
		NullCheck(G_B3_1);
		DeflateManager__tr_flush_block_mDCB3AD7C5FA517E36F40F9D6F3AB2ED6D09F0CFC(G_B3_1, G_B3_0, ((int32_t)il2cpp_codegen_subtract(L_2, L_3)), L_4, NULL);
		// block_start = strstart;
		int32_t L_5 = __this->___strstart_45;
		__this->___block_start_40 = L_5;
		// _codec.flush_pending();
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_6 = __this->____codec_21;
		NullCheck(L_6);
		ZlibCodec_flush_pending_mDBADBEFC685082C99C0E91AC60CBDDFD6D393B5B(L_6, NULL);
		// }
		return;
	}
}
// Ionic.Zlib.BlockState Ionic.Zlib.DeflateManager::DeflateNone(Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_DeflateNone_m8A63FC9E1A2BA1F954C96D549D5CF2E32AC4411D (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, int32_t ___flush0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int max_block_size = 0xffff;
		V_0 = ((int32_t)65535);
		// if (max_block_size > pending.Length - 5)
		int32_t L_0 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___pending_23;
		NullCheck(L_1);
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 5)))))
		{
			goto IL_001e;
		}
	}
	{
		// max_block_size = pending.Length - 5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___pending_23;
		NullCheck(L_2);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 5));
	}

IL_001e:
	{
		// if (lookahead <= 1)
		int32_t L_3 = __this->___lookahead_47;
		if ((((int32_t)L_3) > ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		// _fillWindow();
		DeflateManager__fillWindow_m610A77094C5727574DE00D64318422269BCC5A86(__this, NULL);
		// if (lookahead == 0 && flush == FlushType.None)
		int32_t L_4 = __this->___lookahead_47;
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_5 = ___flush0;
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		// return BlockState.NeedMore;
		return (int32_t)(0);
	}

IL_003a:
	{
		// if (lookahead == 0)
		int32_t L_6 = __this->___lookahead_47;
		if (!L_6)
		{
			goto IL_00db;
		}
	}

IL_0045:
	{
		// strstart += lookahead;
		int32_t L_7 = __this->___strstart_45;
		int32_t L_8 = __this->___lookahead_47;
		__this->___strstart_45 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		// lookahead = 0;
		__this->___lookahead_47 = 0;
		// max_start = block_start + max_block_size;
		int32_t L_9 = __this->___block_start_40;
		int32_t L_10 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		// if (strstart == 0 || strstart >= max_start)
		int32_t L_11 = __this->___strstart_45;
		if (!L_11)
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_12 = __this->___strstart_45;
		int32_t L_13 = V_1;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_00a4;
		}
	}

IL_0079:
	{
		// lookahead = (int)(strstart - max_start);
		int32_t L_14 = __this->___strstart_45;
		int32_t L_15 = V_1;
		__this->___lookahead_47 = ((int32_t)il2cpp_codegen_subtract(L_14, L_15));
		// strstart = (int)max_start;
		int32_t L_16 = V_1;
		__this->___strstart_45 = L_16;
		// flush_block_only(false);
		DeflateManager_flush_block_only_m993A048372B744519A8F7B72B3D011FC52920E81(__this, (bool)0, NULL);
		// if (_codec.AvailableBytesOut == 0)
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_17 = __this->____codec_21;
		NullCheck(L_17);
		int32_t L_18 = L_17->___AvailableBytesOut_6;
		if (L_18)
		{
			goto IL_00a4;
		}
	}
	{
		// return BlockState.NeedMore;
		return (int32_t)(0);
	}

IL_00a4:
	{
		// if (strstart - block_start >= w_size - MIN_LOOKAHEAD)
		int32_t L_19 = __this->___strstart_45;
		int32_t L_20 = __this->___block_start_40;
		int32_t L_21 = __this->___w_size_28;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_22 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_19, L_20))) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, L_22)))))
		{
			goto IL_001e;
		}
	}
	{
		// flush_block_only(false);
		DeflateManager_flush_block_only_m993A048372B744519A8F7B72B3D011FC52920E81(__this, (bool)0, NULL);
		// if (_codec.AvailableBytesOut == 0)
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_23 = __this->____codec_21;
		NullCheck(L_23);
		int32_t L_24 = L_23->___AvailableBytesOut_6;
		if (L_24)
		{
			goto IL_001e;
		}
	}
	{
		// return BlockState.NeedMore;
		return (int32_t)(0);
	}

IL_00db:
	{
		// flush_block_only(flush == FlushType.Finish);
		int32_t L_25 = ___flush0;
		DeflateManager_flush_block_only_m993A048372B744519A8F7B72B3D011FC52920E81(__this, (bool)((((int32_t)L_25) == ((int32_t)4))? 1 : 0), NULL);
		// if (_codec.AvailableBytesOut == 0)
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_26 = __this->____codec_21;
		NullCheck(L_26);
		int32_t L_27 = L_26->___AvailableBytesOut_6;
		if (L_27)
		{
			goto IL_00fa;
		}
	}
	{
		// return (flush == FlushType.Finish) ? BlockState.FinishStarted : BlockState.NeedMore;
		int32_t L_28 = ___flush0;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		return (int32_t)(0);
	}

IL_00f8:
	{
		return (int32_t)(2);
	}

IL_00fa:
	{
		// return flush == FlushType.Finish ? BlockState.FinishDone : BlockState.BlockDone;
		int32_t L_29 = ___flush0;
		if ((((int32_t)L_29) == ((int32_t)4)))
		{
			goto IL_0100;
		}
	}
	{
		return (int32_t)(1);
	}

IL_0100:
	{
		return (int32_t)(3);
	}
}
// System.Void Ionic.Zlib.DeflateManager::_tr_stored_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_stored_block_m103A4090CF2E1060C43F7B926AED9CA2F509FE39 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* G_B3_2 = NULL;
	{
		// send_bits((STORED_BLOCK << 1) + (eof ? 1 : 0), 3); // send block type
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_0 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___STORED_BLOCK_9;
		bool L_1 = ___eof2;
		G_B1_0 = ((int32_t)(L_0<<1));
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = ((int32_t)(L_0<<1));
			G_B2_1 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_000f:
	{
		NullCheck(G_B3_2);
		DeflateManager_send_bits_mB5A76E7FE93FD0ED74BBF888F72476D075B04BEA(G_B3_2, ((int32_t)il2cpp_codegen_add(G_B3_1, G_B3_0)), 3, NULL);
		// copy_block(buf, stored_len, true); // with header
		int32_t L_2 = ___buf0;
		int32_t L_3 = ___stored_len1;
		DeflateManager_copy_block_mC6102518D1267B42F469C5AA18621942226C108C(__this, L_2, L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.DeflateManager::_tr_flush_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_flush_block_mDCB3AD7C5FA517E36F40F9D6F3AB2ED6D09F0CFC (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B12_0 = 0;
	DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* G_B12_1 = NULL;
	int32_t G_B11_0 = 0;
	DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* G_B11_1 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* G_B13_2 = NULL;
	int32_t G_B16_0 = 0;
	DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* G_B16_1 = NULL;
	int32_t G_B15_0 = 0;
	DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* G_B15_1 = NULL;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* G_B17_2 = NULL;
	{
		// int max_blindex = 0; // index of last bit length code of non zero freq
		V_2 = 0;
		// if (compressionLevel > 0)
		int32_t L_0 = __this->___compressionLevel_49;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		// if (data_type == Z_UNKNOWN)
		int8_t L_1 = __this->___data_type_26;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_2 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___Z_UNKNOWN_14;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		// set_data_type();
		DeflateManager_set_data_type_m30E4F73E5FD41613AF0F921B8411C35768ED209F(__this, NULL);
	}

IL_001e:
	{
		// treeLiterals.build_tree(this);
		ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46* L_3 = __this->___treeLiterals_54;
		NullCheck(L_3);
		ZTree_build_tree_m3AA568727AC98E65635DC8DC3696ED37BB4C060F(L_3, __this, NULL);
		// treeDistances.build_tree(this);
		ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46* L_4 = __this->___treeDistances_55;
		NullCheck(L_4);
		ZTree_build_tree_m3AA568727AC98E65635DC8DC3696ED37BB4C060F(L_4, __this, NULL);
		// max_blindex = build_bl_tree();
		int32_t L_5;
		L_5 = DeflateManager_build_bl_tree_mFF7ABA7CEAE332C59331DC90F3138B246C510927(__this, NULL);
		V_2 = L_5;
		// opt_lenb = (opt_len + 3 + 7) >> 3;
		int32_t L_6 = __this->___opt_len_66;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_6, 3)), 7))>>3));
		// static_lenb = (static_len + 3 + 7) >> 3;
		int32_t L_7 = __this->___static_len_67;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_7, 3)), 7))>>3));
		// if (static_lenb <= opt_lenb)
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) > ((int32_t)L_9)))
		{
			goto IL_0065;
		}
	}
	{
		// opt_lenb = static_lenb;
		int32_t L_10 = V_1;
		V_0 = L_10;
		goto IL_0065;
	}

IL_005f:
	{
		// opt_lenb = static_lenb = stored_len + 5; // force a stored block
		int32_t L_11 = ___stored_len1;
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, 5));
		V_1 = L_12;
		V_0 = L_12;
	}

IL_0065:
	{
		// if (stored_len + 4 <= opt_lenb && buf != -1)
		int32_t L_13 = ___stored_len1;
		int32_t L_14 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_13, 4))) > ((int32_t)L_14)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_15 = ___buf0;
		if ((((int32_t)L_15) == ((int32_t)(-1))))
		{
			goto IL_007a;
		}
	}
	{
		// _tr_stored_block(buf, stored_len, eof);
		int32_t L_16 = ___buf0;
		int32_t L_17 = ___stored_len1;
		bool L_18 = ___eof2;
		DeflateManager__tr_stored_block_m103A4090CF2E1060C43F7B926AED9CA2F509FE39(__this, L_16, L_17, L_18, NULL);
		goto IL_00f1;
	}

IL_007a:
	{
		// else if (static_lenb == opt_lenb)
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_00a6;
		}
	}
	{
		// send_bits((STATIC_TREES << 1) + (eof ? 1 : 0), 3);
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_21 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___STATIC_TREES_10;
		bool L_22 = ___eof2;
		G_B11_0 = ((int32_t)(L_21<<1));
		G_B11_1 = __this;
		if (L_22)
		{
			G_B12_0 = ((int32_t)(L_21<<1));
			G_B12_1 = __this;
			goto IL_008c;
		}
	}
	{
		G_B13_0 = 0;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_008d;
	}

IL_008c:
	{
		G_B13_0 = 1;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_008d:
	{
		NullCheck(G_B13_2);
		DeflateManager_send_bits_mB5A76E7FE93FD0ED74BBF888F72476D075B04BEA(G_B13_2, ((int32_t)il2cpp_codegen_add(G_B13_1, G_B13_0)), 3, NULL);
		// send_compressed_block(StaticTree.lengthAndLiteralsTreeCodes, StaticTree.distTreeCodes);
		il2cpp_codegen_runtime_class_init_inline(StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_23 = ((StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948_il2cpp_TypeInfo_var))->___lengthAndLiteralsTreeCodes_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_24 = ((StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t3ABCBEDA85F4C86B9A340DFC333B364D3CDFC948_il2cpp_TypeInfo_var))->___distTreeCodes_1;
		DeflateManager_send_compressed_block_mABD57CD411D1323FBA8CB5676D2945229C5D30CC(__this, L_23, L_24, NULL);
		goto IL_00f1;
	}

IL_00a6:
	{
		// send_bits((DYN_TREES << 1) + (eof ? 1 : 0), 3);
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_25 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___DYN_TREES_11;
		bool L_26 = ___eof2;
		G_B15_0 = ((int32_t)(L_25<<1));
		G_B15_1 = __this;
		if (L_26)
		{
			G_B16_0 = ((int32_t)(L_25<<1));
			G_B16_1 = __this;
			goto IL_00b4;
		}
	}
	{
		G_B17_0 = 0;
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B17_0 = 1;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
	}

IL_00b5:
	{
		NullCheck(G_B17_2);
		DeflateManager_send_bits_mB5A76E7FE93FD0ED74BBF888F72476D075B04BEA(G_B17_2, ((int32_t)il2cpp_codegen_add(G_B17_1, G_B17_0)), 3, NULL);
		// send_all_trees(treeLiterals.max_code + 1, treeDistances.max_code + 1, max_blindex + 1);
		ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46* L_27 = __this->___treeLiterals_54;
		NullCheck(L_27);
		int32_t L_28 = L_27->___max_code_11;
		ZTree_t3EB3A81F4315D24C9A694D5DFA364A9C175C4E46* L_29 = __this->___treeDistances_55;
		NullCheck(L_29);
		int32_t L_30 = L_29->___max_code_11;
		int32_t L_31 = V_2;
		DeflateManager_send_all_trees_m893A6C4B1A3F408104BA83DD1DDD2413FE9089C0(__this, ((int32_t)il2cpp_codegen_add(L_28, 1)), ((int32_t)il2cpp_codegen_add(L_30, 1)), ((int32_t)il2cpp_codegen_add(L_31, 1)), NULL);
		// send_compressed_block(dyn_ltree, dyn_dtree);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_32 = __this->___dyn_ltree_51;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_33 = __this->___dyn_dtree_52;
		DeflateManager_send_compressed_block_mABD57CD411D1323FBA8CB5676D2945229C5D30CC(__this, L_32, L_33, NULL);
	}

IL_00f1:
	{
		// _InitializeBlocks();
		DeflateManager__InitializeBlocks_m1B335949723E7650E3C11DFF7535B3A6698C1312(__this, NULL);
		// if (eof)
		bool L_34 = ___eof2;
		if (!L_34)
		{
			goto IL_0100;
		}
	}
	{
		// bi_windup();
		DeflateManager_bi_windup_m7230E2A4FFF72161B495A7390F96772C45C811AA(__this, NULL);
	}

IL_0100:
	{
		// }
		return;
	}
}
// System.Void Ionic.Zlib.DeflateManager::_fillWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__fillWindow_m610A77094C5727574DE00D64318422269BCC5A86 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B10_0 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B10_1 = NULL;
	int32_t G_B9_0 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B9_1 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B11_2 = NULL;
	int32_t G_B15_0 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B15_1 = NULL;
	int32_t G_B14_0 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B14_1 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B16_2 = NULL;

IL_0000:
	{
		// more = (window_size - lookahead - strstart);
		int32_t L_0 = __this->___window_size_32;
		int32_t L_1 = __this->___lookahead_47;
		int32_t L_2 = __this->___strstart_45;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), L_2));
		// if (more == 0 && strstart == 0 && lookahead == 0)
		int32_t L_3 = V_3;
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_4 = __this->___strstart_45;
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = __this->___lookahead_47;
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		// more = w_size;
		int32_t L_6 = __this->___w_size_28;
		V_3 = L_6;
		goto IL_013f;
	}

IL_0034:
	{
		// else if (more == -1)
		int32_t L_7 = V_3;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0041;
		}
	}
	{
		// more--;
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_013f;
	}

IL_0041:
	{
		// else if (strstart >= w_size + w_size - MIN_LOOKAHEAD)
		int32_t L_9 = __this->___strstart_45;
		int32_t L_10 = __this->___w_size_28;
		int32_t L_11 = __this->___w_size_28;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_12 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_10, L_11)), L_12)))))
		{
			goto IL_013f;
		}
	}
	{
		// Array.Copy(window, w_size, window, 0, w_size);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___window_31;
		int32_t L_14 = __this->___w_size_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___window_31;
		int32_t L_16 = __this->___w_size_28;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_13, L_14, (RuntimeArray*)L_15, 0, L_16, NULL);
		// match_start -= w_size;
		int32_t L_17 = __this->___match_start_46;
		int32_t L_18 = __this->___w_size_28;
		__this->___match_start_46 = ((int32_t)il2cpp_codegen_subtract(L_17, L_18));
		// strstart -= w_size; // we now have strstart >= MAX_DIST
		int32_t L_19 = __this->___strstart_45;
		int32_t L_20 = __this->___w_size_28;
		__this->___strstart_45 = ((int32_t)il2cpp_codegen_subtract(L_19, L_20));
		// block_start -= w_size;
		int32_t L_21 = __this->___block_start_40;
		int32_t L_22 = __this->___w_size_28;
		__this->___block_start_40 = ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
		// n = hash_size;
		int32_t L_23 = __this->___hash_size_36;
		V_0 = L_23;
		// p = n;
		int32_t L_24 = V_0;
		V_2 = L_24;
	}

IL_00bf:
	{
		// m = (head[--p] & 0xffff);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_25 = __this->___head_34;
		int32_t L_26 = V_2;
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		V_2 = L_27;
		NullCheck(L_25);
		int32_t L_28 = L_27;
		int16_t L_29 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_1 = ((int32_t)((int32_t)L_29&((int32_t)65535)));
		// head[p] = (short)((m >= w_size) ? (m - w_size) : 0);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_30 = __this->___head_34;
		int32_t L_31 = V_2;
		int32_t L_32 = V_1;
		int32_t L_33 = __this->___w_size_28;
		G_B9_0 = L_31;
		G_B9_1 = L_30;
		if ((((int32_t)L_32) >= ((int32_t)L_33)))
		{
			G_B10_0 = L_31;
			G_B10_1 = L_30;
			goto IL_00e5;
		}
	}
	{
		G_B11_0 = 0;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		goto IL_00ed;
	}

IL_00e5:
	{
		int32_t L_34 = V_1;
		int32_t L_35 = __this->___w_size_28;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
	}

IL_00ed:
	{
		NullCheck(G_B11_2);
		(G_B11_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B11_1), (int16_t)((int16_t)G_B11_0));
		// while (--n != 0);
		int32_t L_36 = V_0;
		int32_t L_37 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		V_0 = L_37;
		if (L_37)
		{
			goto IL_00bf;
		}
	}
	{
		// n = w_size;
		int32_t L_38 = __this->___w_size_28;
		V_0 = L_38;
		// p = n;
		int32_t L_39 = V_0;
		V_2 = L_39;
	}

IL_00ff:
	{
		// m = (prev[--p] & 0xffff);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_40 = __this->___prev_33;
		int32_t L_41 = V_2;
		int32_t L_42 = ((int32_t)il2cpp_codegen_subtract(L_41, 1));
		V_2 = L_42;
		NullCheck(L_40);
		int32_t L_43 = L_42;
		int16_t L_44 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_1 = ((int32_t)((int32_t)L_44&((int32_t)65535)));
		// prev[p] = (short)((m >= w_size) ? (m - w_size) : 0);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_45 = __this->___prev_33;
		int32_t L_46 = V_2;
		int32_t L_47 = V_1;
		int32_t L_48 = __this->___w_size_28;
		G_B14_0 = L_46;
		G_B14_1 = L_45;
		if ((((int32_t)L_47) >= ((int32_t)L_48)))
		{
			G_B15_0 = L_46;
			G_B15_1 = L_45;
			goto IL_0125;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		goto IL_012d;
	}

IL_0125:
	{
		int32_t L_49 = V_1;
		int32_t L_50 = __this->___w_size_28;
		G_B16_0 = ((int32_t)il2cpp_codegen_subtract(L_49, L_50));
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
	}

IL_012d:
	{
		NullCheck(G_B16_2);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (int16_t)((int16_t)G_B16_0));
		// while (--n != 0);
		int32_t L_51 = V_0;
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract(L_51, 1));
		V_0 = L_52;
		if (L_52)
		{
			goto IL_00ff;
		}
	}
	{
		// more += w_size;
		int32_t L_53 = V_3;
		int32_t L_54 = __this->___w_size_28;
		V_3 = ((int32_t)il2cpp_codegen_add(L_53, L_54));
	}

IL_013f:
	{
		// if (_codec.AvailableBytesIn == 0)
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_55 = __this->____codec_21;
		NullCheck(L_55);
		int32_t L_56 = L_55->___AvailableBytesIn_2;
		if (L_56)
		{
			goto IL_014d;
		}
	}
	{
		// return;
		return;
	}

IL_014d:
	{
		// n = _codec.read_buf(window, strstart + lookahead, more);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_57 = __this->____codec_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = __this->___window_31;
		int32_t L_59 = __this->___strstart_45;
		int32_t L_60 = __this->___lookahead_47;
		int32_t L_61 = V_3;
		NullCheck(L_57);
		int32_t L_62;
		L_62 = ZlibCodec_read_buf_mA1C18E8E226E95E8F0C952CC995D1B7302A08D54(L_57, L_58, ((int32_t)il2cpp_codegen_add(L_59, L_60)), L_61, NULL);
		V_0 = L_62;
		// lookahead += n;
		int32_t L_63 = __this->___lookahead_47;
		int32_t L_64 = V_0;
		__this->___lookahead_47 = ((int32_t)il2cpp_codegen_add(L_63, L_64));
		// if (lookahead >= MIN_MATCH)
		int32_t L_65 = __this->___lookahead_47;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_66 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		if ((((int32_t)L_65) < ((int32_t)L_66)))
		{
			goto IL_01d4;
		}
	}
	{
		// ins_h = window[strstart] & 0xff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = __this->___window_31;
		int32_t L_68 = __this->___strstart_45;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		uint8_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		__this->___ins_h_35 = ((int32_t)((int32_t)L_70&((int32_t)255)));
		// ins_h = (((ins_h) << hash_shift) ^ (window[strstart + 1] & 0xff)) & hash_mask;
		int32_t L_71 = __this->___ins_h_35;
		int32_t L_72 = __this->___hash_shift_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = __this->___window_31;
		int32_t L_74 = __this->___strstart_45;
		NullCheck(L_73);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		uint8_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		int32_t L_77 = __this->___hash_mask_38;
		__this->___ins_h_35 = ((int32_t)(((int32_t)(((int32_t)(L_71<<((int32_t)(L_72&((int32_t)31)))))^((int32_t)((int32_t)L_76&((int32_t)255)))))&L_77));
	}

IL_01d4:
	{
		// while (lookahead < MIN_LOOKAHEAD && _codec.AvailableBytesIn != 0);
		int32_t L_78 = __this->___lookahead_47;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_79 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		if ((((int32_t)L_78) >= ((int32_t)L_79)))
		{
			goto IL_01f1;
		}
	}
	{
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_80 = __this->____codec_21;
		NullCheck(L_80);
		int32_t L_81 = L_80->___AvailableBytesIn_2;
		if (L_81)
		{
			goto IL_0000;
		}
	}

IL_01f1:
	{
		// }
		return;
	}
}
// Ionic.Zlib.BlockState Ionic.Zlib.DeflateManager::DeflateFast(Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_DeflateFast_m64FC609E28A1C50579FA545D8D50335E0FC95450 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, int32_t ___flush0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// int hash_head = 0; // head of the hash chain
		V_0 = 0;
	}

IL_0002:
	{
		// if (lookahead < MIN_LOOKAHEAD)
		int32_t L_0 = __this->___lookahead_47;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_1 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		// _fillWindow();
		DeflateManager__fillWindow_m610A77094C5727574DE00D64318422269BCC5A86(__this, NULL);
		// if (lookahead < MIN_LOOKAHEAD && flush == FlushType.None)
		int32_t L_2 = __this->___lookahead_47;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_3 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = ___flush0;
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		// return BlockState.NeedMore;
		return (int32_t)(0);
	}

IL_0027:
	{
		// if (lookahead == 0)
		int32_t L_5 = __this->___lookahead_47;
		if (!L_5)
		{
			goto IL_02e8;
		}
	}

IL_0032:
	{
		// if (lookahead >= MIN_MATCH)
		int32_t L_6 = __this->___lookahead_47;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_7 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_00c4;
		}
	}
	{
		// ins_h = (((ins_h) << hash_shift) ^ (window[(strstart) + (MIN_MATCH - 1)] & 0xff)) & hash_mask;
		int32_t L_8 = __this->___ins_h_35;
		int32_t L_9 = __this->___hash_shift_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___window_31;
		int32_t L_11 = __this->___strstart_45;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_12 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)il2cpp_codegen_subtract(L_12, 1))));
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = __this->___hash_mask_38;
		__this->___ins_h_35 = ((int32_t)(((int32_t)(((int32_t)(L_8<<((int32_t)(L_9&((int32_t)31)))))^((int32_t)((int32_t)L_14&((int32_t)255)))))&L_15));
		// hash_head = (head[ins_h] & 0xffff);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_16 = __this->___head_34;
		int32_t L_17 = __this->___ins_h_35;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int16_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_0 = ((int32_t)((int32_t)L_19&((int32_t)65535)));
		// prev[strstart & w_mask] = head[ins_h];
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_20 = __this->___prev_33;
		int32_t L_21 = __this->___strstart_45;
		int32_t L_22 = __this->___w_mask_30;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_23 = __this->___head_34;
		int32_t L_24 = __this->___ins_h_35;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int16_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_21&L_22))), (int16_t)L_26);
		// head[ins_h] = unchecked((short)strstart);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_27 = __this->___head_34;
		int32_t L_28 = __this->___ins_h_35;
		int32_t L_29 = __this->___strstart_45;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int16_t)((int16_t)L_29));
	}

IL_00c4:
	{
		// if (hash_head != 0L && ((strstart - hash_head) & 0xffff) <= w_size - MIN_LOOKAHEAD)
		int32_t L_30 = V_0;
		if (!((int64_t)L_30))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_31 = __this->___strstart_45;
		int32_t L_32 = V_0;
		int32_t L_33 = __this->___w_size_28;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_34 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		if ((((int32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(L_31, L_32))&((int32_t)65535)))) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_33, L_34)))))
		{
			goto IL_00fa;
		}
	}
	{
		// if (compressionStrategy != CompressionStrategy.HuffmanOnly)
		int32_t L_35 = __this->___compressionStrategy_50;
		if ((((int32_t)L_35) == ((int32_t)2)))
		{
			goto IL_00fa;
		}
	}
	{
		// match_length = longest_match(hash_head);
		int32_t L_36 = V_0;
		int32_t L_37;
		L_37 = DeflateManager_longest_match_mE2FAA94A68F82CAC43D3B917D5D4BF74DBA74643(__this, L_36, NULL);
		__this->___match_length_42 = L_37;
	}

IL_00fa:
	{
		// if (match_length >= MIN_MATCH)
		int32_t L_38 = __this->___match_length_42;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_39 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0292;
		}
	}
	{
		// bflush = _tr_tally(strstart - match_start, match_length - MIN_MATCH);
		int32_t L_40 = __this->___strstart_45;
		int32_t L_41 = __this->___match_start_46;
		int32_t L_42 = __this->___match_length_42;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_43 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		bool L_44;
		L_44 = DeflateManager__tr_tally_m0521293760BD22142473D940DDA1BA0D1A61FCAF(__this, ((int32_t)il2cpp_codegen_subtract(L_40, L_41)), ((int32_t)il2cpp_codegen_subtract(L_42, L_43)), NULL);
		V_1 = L_44;
		// lookahead -= match_length;
		int32_t L_45 = __this->___lookahead_47;
		int32_t L_46 = __this->___match_length_42;
		__this->___lookahead_47 = ((int32_t)il2cpp_codegen_subtract(L_45, L_46));
		// if (match_length <= config.MaxLazy && lookahead >= MIN_MATCH)
		int32_t L_47 = __this->___match_length_42;
		Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* L_48 = __this->___config_41;
		NullCheck(L_48);
		int32_t L_49 = L_48->___MaxLazy_1;
		if ((((int32_t)L_47) > ((int32_t)L_49)))
		{
			goto IL_022a;
		}
	}
	{
		int32_t L_50 = __this->___lookahead_47;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_51 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_022a;
		}
	}
	{
		// match_length--; // string at strstart already in hash table
		int32_t L_52 = __this->___match_length_42;
		__this->___match_length_42 = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
	}

IL_0171:
	{
		// strstart++;
		int32_t L_53 = __this->___strstart_45;
		__this->___strstart_45 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		// ins_h = ((ins_h << hash_shift) ^ (window[(strstart) + (MIN_MATCH - 1)] & 0xff)) & hash_mask;
		int32_t L_54 = __this->___ins_h_35;
		int32_t L_55 = __this->___hash_shift_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = __this->___window_31;
		int32_t L_57 = __this->___strstart_45;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_58 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		NullCheck(L_56);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(L_57, ((int32_t)il2cpp_codegen_subtract(L_58, 1))));
		uint8_t L_60 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		int32_t L_61 = __this->___hash_mask_38;
		__this->___ins_h_35 = ((int32_t)(((int32_t)(((int32_t)(L_54<<((int32_t)(L_55&((int32_t)31)))))^((int32_t)((int32_t)L_60&((int32_t)255)))))&L_61));
		// hash_head = (head[ins_h] & 0xffff);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_62 = __this->___head_34;
		int32_t L_63 = __this->___ins_h_35;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		int16_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_0 = ((int32_t)((int32_t)L_65&((int32_t)65535)));
		// prev[strstart & w_mask] = head[ins_h];
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_66 = __this->___prev_33;
		int32_t L_67 = __this->___strstart_45;
		int32_t L_68 = __this->___w_mask_30;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_69 = __this->___head_34;
		int32_t L_70 = __this->___ins_h_35;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		int16_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_67&L_68))), (int16_t)L_72);
		// head[ins_h] = unchecked((short)strstart);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_73 = __this->___head_34;
		int32_t L_74 = __this->___ins_h_35;
		int32_t L_75 = __this->___strstart_45;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(L_74), (int16_t)((int16_t)L_75));
		// while (--match_length != 0);
		int32_t L_76 = __this->___match_length_42;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_76, 1));
		int32_t L_77 = V_2;
		__this->___match_length_42 = L_77;
		int32_t L_78 = V_2;
		if (L_78)
		{
			goto IL_0171;
		}
	}
	{
		// strstart++;
		int32_t L_79 = __this->___strstart_45;
		__this->___strstart_45 = ((int32_t)il2cpp_codegen_add(L_79, 1));
		goto IL_02c9;
	}

IL_022a:
	{
		// strstart += match_length;
		int32_t L_80 = __this->___strstart_45;
		int32_t L_81 = __this->___match_length_42;
		__this->___strstart_45 = ((int32_t)il2cpp_codegen_add(L_80, L_81));
		// match_length = 0;
		__this->___match_length_42 = 0;
		// ins_h = window[strstart] & 0xff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = __this->___window_31;
		int32_t L_83 = __this->___strstart_45;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		uint8_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		__this->___ins_h_35 = ((int32_t)((int32_t)L_85&((int32_t)255)));
		// ins_h = (((ins_h) << hash_shift) ^ (window[strstart + 1] & 0xff)) & hash_mask;
		int32_t L_86 = __this->___ins_h_35;
		int32_t L_87 = __this->___hash_shift_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = __this->___window_31;
		int32_t L_89 = __this->___strstart_45;
		NullCheck(L_88);
		int32_t L_90 = ((int32_t)il2cpp_codegen_add(L_89, 1));
		uint8_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		int32_t L_92 = __this->___hash_mask_38;
		__this->___ins_h_35 = ((int32_t)(((int32_t)(((int32_t)(L_86<<((int32_t)(L_87&((int32_t)31)))))^((int32_t)((int32_t)L_91&((int32_t)255)))))&L_92));
		goto IL_02c9;
	}

IL_0292:
	{
		// bflush = _tr_tally(0, window[strstart] & 0xff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = __this->___window_31;
		int32_t L_94 = __this->___strstart_45;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		uint8_t L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		bool L_97;
		L_97 = DeflateManager__tr_tally_m0521293760BD22142473D940DDA1BA0D1A61FCAF(__this, 0, ((int32_t)((int32_t)L_96&((int32_t)255))), NULL);
		V_1 = L_97;
		// lookahead--;
		int32_t L_98 = __this->___lookahead_47;
		__this->___lookahead_47 = ((int32_t)il2cpp_codegen_subtract(L_98, 1));
		// strstart++;
		int32_t L_99 = __this->___strstart_45;
		__this->___strstart_45 = ((int32_t)il2cpp_codegen_add(L_99, 1));
	}

IL_02c9:
	{
		// if (bflush)
		bool L_100 = V_1;
		if (!L_100)
		{
			goto IL_0002;
		}
	}
	{
		// flush_block_only(false);
		DeflateManager_flush_block_only_m993A048372B744519A8F7B72B3D011FC52920E81(__this, (bool)0, NULL);
		// if (_codec.AvailableBytesOut == 0)
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_101 = __this->____codec_21;
		NullCheck(L_101);
		int32_t L_102 = L_101->___AvailableBytesOut_6;
		if (L_102)
		{
			goto IL_0002;
		}
	}
	{
		// return BlockState.NeedMore;
		return (int32_t)(0);
	}

IL_02e8:
	{
		// flush_block_only(flush == FlushType.Finish);
		int32_t L_103 = ___flush0;
		DeflateManager_flush_block_only_m993A048372B744519A8F7B72B3D011FC52920E81(__this, (bool)((((int32_t)L_103) == ((int32_t)4))? 1 : 0), NULL);
		// if (_codec.AvailableBytesOut == 0)
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_104 = __this->____codec_21;
		NullCheck(L_104);
		int32_t L_105 = L_104->___AvailableBytesOut_6;
		if (L_105)
		{
			goto IL_0307;
		}
	}
	{
		// if (flush == FlushType.Finish)
		int32_t L_106 = ___flush0;
		if ((!(((uint32_t)L_106) == ((uint32_t)4))))
		{
			goto IL_0305;
		}
	}
	{
		// return BlockState.FinishStarted;
		return (int32_t)(2);
	}

IL_0305:
	{
		// return BlockState.NeedMore;
		return (int32_t)(0);
	}

IL_0307:
	{
		// return flush == FlushType.Finish ? BlockState.FinishDone : BlockState.BlockDone;
		int32_t L_107 = ___flush0;
		if ((((int32_t)L_107) == ((int32_t)4)))
		{
			goto IL_030d;
		}
	}
	{
		return (int32_t)(1);
	}

IL_030d:
	{
		return (int32_t)(3);
	}
}
// Ionic.Zlib.BlockState Ionic.Zlib.DeflateManager::DeflateSlow(Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_DeflateSlow_m596BDD8AAB09E0F85DF4407B7626696214E0A474 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, int32_t ___flush0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int hash_head = 0; // head of hash chain
		V_0 = 0;
	}

IL_0002:
	{
		// if (lookahead < MIN_LOOKAHEAD)
		int32_t L_0 = __this->___lookahead_47;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_1 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		// _fillWindow();
		DeflateManager__fillWindow_m610A77094C5727574DE00D64318422269BCC5A86(__this, NULL);
		// if (lookahead < MIN_LOOKAHEAD && flush == FlushType.None)
		int32_t L_2 = __this->___lookahead_47;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_3 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = ___flush0;
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		// return BlockState.NeedMore;
		return (int32_t)(0);
	}

IL_0027:
	{
		// if (lookahead == 0)
		int32_t L_5 = __this->___lookahead_47;
		if (!L_5)
		{
			goto IL_0363;
		}
	}

IL_0032:
	{
		// if (lookahead >= MIN_MATCH)
		int32_t L_6 = __this->___lookahead_47;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_7 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_00c4;
		}
	}
	{
		// ins_h = (((ins_h) << hash_shift) ^ (window[(strstart) + (MIN_MATCH - 1)] & 0xff)) & hash_mask;
		int32_t L_8 = __this->___ins_h_35;
		int32_t L_9 = __this->___hash_shift_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___window_31;
		int32_t L_11 = __this->___strstart_45;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_12 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)il2cpp_codegen_subtract(L_12, 1))));
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = __this->___hash_mask_38;
		__this->___ins_h_35 = ((int32_t)(((int32_t)(((int32_t)(L_8<<((int32_t)(L_9&((int32_t)31)))))^((int32_t)((int32_t)L_14&((int32_t)255)))))&L_15));
		// hash_head = (head[ins_h] & 0xffff);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_16 = __this->___head_34;
		int32_t L_17 = __this->___ins_h_35;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int16_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_0 = ((int32_t)((int32_t)L_19&((int32_t)65535)));
		// prev[strstart & w_mask] = head[ins_h];
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_20 = __this->___prev_33;
		int32_t L_21 = __this->___strstart_45;
		int32_t L_22 = __this->___w_mask_30;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_23 = __this->___head_34;
		int32_t L_24 = __this->___ins_h_35;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int16_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_21&L_22))), (int16_t)L_26);
		// head[ins_h] = unchecked((short)strstart);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_27 = __this->___head_34;
		int32_t L_28 = __this->___ins_h_35;
		int32_t L_29 = __this->___strstart_45;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int16_t)((int16_t)L_29));
	}

IL_00c4:
	{
		// prev_length = match_length;
		int32_t L_30 = __this->___match_length_42;
		__this->___prev_length_48 = L_30;
		// prev_match = match_start;
		int32_t L_31 = __this->___match_start_46;
		__this->___prev_match_43 = L_31;
		// match_length = MIN_MATCH - 1;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_32 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		__this->___match_length_42 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
		// if (hash_head != 0 && prev_length < config.MaxLazy &&
		//     ((strstart - hash_head) & 0xffff) <= w_size - MIN_LOOKAHEAD)
		int32_t L_33 = V_0;
		if (!L_33)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_34 = __this->___prev_length_48;
		Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* L_35 = __this->___config_41;
		NullCheck(L_35);
		int32_t L_36 = L_35->___MaxLazy_1;
		if ((((int32_t)L_34) >= ((int32_t)L_36)))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_37 = __this->___strstart_45;
		int32_t L_38 = V_0;
		int32_t L_39 = __this->___w_size_28;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_40 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		if ((((int32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(L_37, L_38))&((int32_t)65535)))) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_39, L_40)))))
		{
			goto IL_0174;
		}
	}
	{
		// if (compressionStrategy != CompressionStrategy.HuffmanOnly)
		int32_t L_41 = __this->___compressionStrategy_50;
		if ((((int32_t)L_41) == ((int32_t)2)))
		{
			goto IL_0134;
		}
	}
	{
		// match_length = longest_match(hash_head);
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = DeflateManager_longest_match_mE2FAA94A68F82CAC43D3B917D5D4BF74DBA74643(__this, L_42, NULL);
		__this->___match_length_42 = L_43;
	}

IL_0134:
	{
		// if (match_length <= 5 && (compressionStrategy == CompressionStrategy.Filtered ||
		//                           (match_length == MIN_MATCH && strstart - match_start > 4096)))
		int32_t L_44 = __this->___match_length_42;
		if ((((int32_t)L_44) > ((int32_t)5)))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_45 = __this->___compressionStrategy_50;
		if ((((int32_t)L_45) == ((int32_t)1)))
		{
			goto IL_0167;
		}
	}
	{
		int32_t L_46 = __this->___match_length_42;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_47 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		if ((!(((uint32_t)L_46) == ((uint32_t)L_47))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_48 = __this->___strstart_45;
		int32_t L_49 = __this->___match_start_46;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_48, L_49))) <= ((int32_t)((int32_t)4096))))
		{
			goto IL_0174;
		}
	}

IL_0167:
	{
		// match_length = MIN_MATCH - 1;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_50 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		__this->___match_length_42 = ((int32_t)il2cpp_codegen_subtract(L_50, 1));
	}

IL_0174:
	{
		// if (prev_length >= MIN_MATCH && match_length <= prev_length)
		int32_t L_51 = __this->___prev_length_48;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_52 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_02de;
		}
	}
	{
		int32_t L_53 = __this->___match_length_42;
		int32_t L_54 = __this->___prev_length_48;
		if ((((int32_t)L_53) > ((int32_t)L_54)))
		{
			goto IL_02de;
		}
	}
	{
		// int max_insert = strstart + lookahead - MIN_MATCH;
		int32_t L_55 = __this->___strstart_45;
		int32_t L_56 = __this->___lookahead_47;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_57 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_55, L_56)), L_57));
		// bflush = _tr_tally(strstart - 1 - prev_match, prev_length - MIN_MATCH);
		int32_t L_58 = __this->___strstart_45;
		int32_t L_59 = __this->___prev_match_43;
		int32_t L_60 = __this->___prev_length_48;
		int32_t L_61 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		bool L_62;
		L_62 = DeflateManager__tr_tally_m0521293760BD22142473D940DDA1BA0D1A61FCAF(__this, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_58, 1)), L_59)), ((int32_t)il2cpp_codegen_subtract(L_60, L_61)), NULL);
		V_1 = L_62;
		// lookahead -= (prev_length - 1);
		int32_t L_63 = __this->___lookahead_47;
		int32_t L_64 = __this->___prev_length_48;
		__this->___lookahead_47 = ((int32_t)il2cpp_codegen_subtract(L_63, ((int32_t)il2cpp_codegen_subtract(L_64, 1))));
		// prev_length -= 2;
		int32_t L_65 = __this->___prev_length_48;
		__this->___prev_length_48 = ((int32_t)il2cpp_codegen_subtract(L_65, 2));
	}

IL_01ee:
	{
		// if (++strstart <= max_insert)
		int32_t L_66 = __this->___strstart_45;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		int32_t L_67 = V_3;
		__this->___strstart_45 = L_67;
		int32_t L_68 = V_3;
		int32_t L_69 = V_2;
		if ((((int32_t)L_68) > ((int32_t)L_69)))
		{
			goto IL_0287;
		}
	}
	{
		// ins_h = (((ins_h) << hash_shift) ^ (window[(strstart) + (MIN_MATCH - 1)] & 0xff)) & hash_mask;
		int32_t L_70 = __this->___ins_h_35;
		int32_t L_71 = __this->___hash_shift_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = __this->___window_31;
		int32_t L_73 = __this->___strstart_45;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_74 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		NullCheck(L_72);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add(L_73, ((int32_t)il2cpp_codegen_subtract(L_74, 1))));
		uint8_t L_76 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		int32_t L_77 = __this->___hash_mask_38;
		__this->___ins_h_35 = ((int32_t)(((int32_t)(((int32_t)(L_70<<((int32_t)(L_71&((int32_t)31)))))^((int32_t)((int32_t)L_76&((int32_t)255)))))&L_77));
		// hash_head = (head[ins_h] & 0xffff);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_78 = __this->___head_34;
		int32_t L_79 = __this->___ins_h_35;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		int16_t L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		V_0 = ((int32_t)((int32_t)L_81&((int32_t)65535)));
		// prev[strstart & w_mask] = head[ins_h];
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_82 = __this->___prev_33;
		int32_t L_83 = __this->___strstart_45;
		int32_t L_84 = __this->___w_mask_30;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_85 = __this->___head_34;
		int32_t L_86 = __this->___ins_h_35;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		int16_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_83&L_84))), (int16_t)L_88);
		// head[ins_h] = unchecked((short)strstart);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_89 = __this->___head_34;
		int32_t L_90 = __this->___ins_h_35;
		int32_t L_91 = __this->___strstart_45;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(L_90), (int16_t)((int16_t)L_91));
	}

IL_0287:
	{
		// while (--prev_length != 0);
		int32_t L_92 = __this->___prev_length_48;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_92, 1));
		int32_t L_93 = V_3;
		__this->___prev_length_48 = L_93;
		int32_t L_94 = V_3;
		if (L_94)
		{
			goto IL_01ee;
		}
	}
	{
		// match_available = 0;
		__this->___match_available_44 = 0;
		// match_length = MIN_MATCH - 1;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_95 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		__this->___match_length_42 = ((int32_t)il2cpp_codegen_subtract(L_95, 1));
		// strstart++;
		int32_t L_96 = __this->___strstart_45;
		__this->___strstart_45 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		// if (bflush)
		bool L_97 = V_1;
		if (!L_97)
		{
			goto IL_0002;
		}
	}
	{
		// flush_block_only(false);
		DeflateManager_flush_block_only_m993A048372B744519A8F7B72B3D011FC52920E81(__this, (bool)0, NULL);
		// if (_codec.AvailableBytesOut == 0)
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_98 = __this->____codec_21;
		NullCheck(L_98);
		int32_t L_99 = L_98->___AvailableBytesOut_6;
		if (L_99)
		{
			goto IL_0002;
		}
	}
	{
		// return BlockState.NeedMore;
		return (int32_t)(0);
	}

IL_02de:
	{
		// else if (match_available != 0)
		int32_t L_100 = __this->___match_available_44;
		if (!L_100)
		{
			goto IL_033b;
		}
	}
	{
		// bflush = _tr_tally(0, window[strstart - 1] & 0xff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_101 = __this->___window_31;
		int32_t L_102 = __this->___strstart_45;
		NullCheck(L_101);
		int32_t L_103 = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		uint8_t L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		bool L_105;
		L_105 = DeflateManager__tr_tally_m0521293760BD22142473D940DDA1BA0D1A61FCAF(__this, 0, ((int32_t)((int32_t)L_104&((int32_t)255))), NULL);
		V_1 = L_105;
		// if (bflush)
		bool L_106 = V_1;
		if (!L_106)
		{
			goto IL_030d;
		}
	}
	{
		// flush_block_only(false);
		DeflateManager_flush_block_only_m993A048372B744519A8F7B72B3D011FC52920E81(__this, (bool)0, NULL);
	}

IL_030d:
	{
		// strstart++;
		int32_t L_107 = __this->___strstart_45;
		__this->___strstart_45 = ((int32_t)il2cpp_codegen_add(L_107, 1));
		// lookahead--;
		int32_t L_108 = __this->___lookahead_47;
		__this->___lookahead_47 = ((int32_t)il2cpp_codegen_subtract(L_108, 1));
		// if (_codec.AvailableBytesOut == 0)
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_109 = __this->____codec_21;
		NullCheck(L_109);
		int32_t L_110 = L_109->___AvailableBytesOut_6;
		if (L_110)
		{
			goto IL_0002;
		}
	}
	{
		// return BlockState.NeedMore;
		return (int32_t)(0);
	}

IL_033b:
	{
		// match_available = 1;
		__this->___match_available_44 = 1;
		// strstart++;
		int32_t L_111 = __this->___strstart_45;
		__this->___strstart_45 = ((int32_t)il2cpp_codegen_add(L_111, 1));
		// lookahead--;
		int32_t L_112 = __this->___lookahead_47;
		__this->___lookahead_47 = ((int32_t)il2cpp_codegen_subtract(L_112, 1));
		// while (true)
		goto IL_0002;
	}

IL_0363:
	{
		// if (match_available != 0)
		int32_t L_113 = __this->___match_available_44;
		if (!L_113)
		{
			goto IL_038f;
		}
	}
	{
		// bflush = _tr_tally(0, window[strstart - 1] & 0xff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_114 = __this->___window_31;
		int32_t L_115 = __this->___strstart_45;
		NullCheck(L_114);
		int32_t L_116 = ((int32_t)il2cpp_codegen_subtract(L_115, 1));
		uint8_t L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		bool L_118;
		L_118 = DeflateManager__tr_tally_m0521293760BD22142473D940DDA1BA0D1A61FCAF(__this, 0, ((int32_t)((int32_t)L_117&((int32_t)255))), NULL);
		V_1 = L_118;
		// match_available = 0;
		__this->___match_available_44 = 0;
	}

IL_038f:
	{
		// flush_block_only(flush == FlushType.Finish);
		int32_t L_119 = ___flush0;
		DeflateManager_flush_block_only_m993A048372B744519A8F7B72B3D011FC52920E81(__this, (bool)((((int32_t)L_119) == ((int32_t)4))? 1 : 0), NULL);
		// if (_codec.AvailableBytesOut == 0)
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_120 = __this->____codec_21;
		NullCheck(L_120);
		int32_t L_121 = L_120->___AvailableBytesOut_6;
		if (L_121)
		{
			goto IL_03ae;
		}
	}
	{
		// if (flush == FlushType.Finish)
		int32_t L_122 = ___flush0;
		if ((!(((uint32_t)L_122) == ((uint32_t)4))))
		{
			goto IL_03ac;
		}
	}
	{
		// return BlockState.FinishStarted;
		return (int32_t)(2);
	}

IL_03ac:
	{
		// return BlockState.NeedMore;
		return (int32_t)(0);
	}

IL_03ae:
	{
		// return flush == FlushType.Finish ? BlockState.FinishDone : BlockState.BlockDone;
		int32_t L_123 = ___flush0;
		if ((((int32_t)L_123) == ((int32_t)4)))
		{
			goto IL_03b4;
		}
	}
	{
		return (int32_t)(1);
	}

IL_03b4:
	{
		return (int32_t)(3);
	}
}
// System.Int32 Ionic.Zlib.DeflateManager::longest_match(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_longest_match_mE2FAA94A68F82CAC43D3B917D5D4BF74DBA74643 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, int32_t ___cur_match0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint8_t V_9 = 0x0;
	uint8_t V_10 = 0x0;
	int32_t G_B3_0 = 0;
	{
		// int chain_length = config.MaxChainLength; // max hash chain length
		Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* L_0 = __this->___config_41;
		NullCheck(L_0);
		int32_t L_1 = L_0->___MaxChainLength_3;
		V_0 = L_1;
		// int scan         = strstart;              // current string
		int32_t L_2 = __this->___strstart_45;
		V_1 = L_2;
		// int best_len     = prev_length;           // best match length so far
		int32_t L_3 = __this->___prev_length_48;
		V_4 = L_3;
		// int limit        = strstart > (w_size - MIN_LOOKAHEAD) ? strstart - (w_size - MIN_LOOKAHEAD) : 0;
		int32_t L_4 = __this->___strstart_45;
		int32_t L_5 = __this->___w_size_28;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_6 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6)))))
		{
			goto IL_0032;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0045;
	}

IL_0032:
	{
		int32_t L_7 = __this->___strstart_45;
		int32_t L_8 = __this->___w_size_28;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_9 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)il2cpp_codegen_subtract(L_8, L_9))));
	}

IL_0045:
	{
		V_5 = G_B3_0;
		// int niceLength = config.NiceLength;
		Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* L_10 = __this->___config_41;
		NullCheck(L_10);
		int32_t L_11 = L_10->___NiceLength_2;
		V_6 = L_11;
		// int wmask = w_mask;
		int32_t L_12 = __this->___w_mask_30;
		V_7 = L_12;
		// int strend = strstart + MAX_MATCH;
		int32_t L_13 = __this->___strstart_45;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_14 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MAX_MATCH_17;
		V_8 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		// byte scan_end1 = window[scan + best_len - 1];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___window_31;
		int32_t L_16 = V_1;
		int32_t L_17 = V_4;
		NullCheck(L_15);
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_16, L_17)), 1));
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_9 = L_19;
		// byte scan_end = window[scan + best_len];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___window_31;
		int32_t L_21 = V_1;
		int32_t L_22 = V_4;
		NullCheck(L_20);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_21, L_22));
		uint8_t L_24 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_10 = L_24;
		// if (prev_length >= config.GoodLength)
		int32_t L_25 = __this->___prev_length_48;
		Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* L_26 = __this->___config_41;
		NullCheck(L_26);
		int32_t L_27 = L_26->___GoodLength_0;
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_009d;
		}
	}
	{
		// chain_length >>= 2;
		int32_t L_28 = V_0;
		V_0 = ((int32_t)(L_28>>2));
	}

IL_009d:
	{
		// if (niceLength > lookahead)
		int32_t L_29 = V_6;
		int32_t L_30 = __this->___lookahead_47;
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00af;
		}
	}
	{
		// niceLength = lookahead;
		int32_t L_31 = __this->___lookahead_47;
		V_6 = L_31;
	}

IL_00af:
	{
		// match = cur_match;
		int32_t L_32 = ___cur_match0;
		V_2 = L_32;
		// if (window[match + best_len] != scan_end ||
		//     window[match + best_len - 1] != scan_end1 ||
		//     window[match] != window[scan] ||
		//     window[++match] != window[scan + 1])
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___window_31;
		int32_t L_34 = V_2;
		int32_t L_35 = V_4;
		NullCheck(L_33);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		uint8_t L_37 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		uint8_t L_38 = V_10;
		if ((!(((uint32_t)L_37) == ((uint32_t)L_38))))
		{
			goto IL_0234;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = __this->___window_31;
		int32_t L_40 = V_2;
		int32_t L_41 = V_4;
		NullCheck(L_39);
		int32_t L_42 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_40, L_41)), 1));
		uint8_t L_43 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		uint8_t L_44 = V_9;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0234;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = __this->___window_31;
		int32_t L_46 = V_2;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		uint8_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = __this->___window_31;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		uint8_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		if ((!(((uint32_t)L_48) == ((uint32_t)L_52))))
		{
			goto IL_0234;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = __this->___window_31;
		int32_t L_54 = V_2;
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		V_2 = L_55;
		NullCheck(L_53);
		int32_t L_56 = L_55;
		uint8_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = __this->___window_31;
		int32_t L_59 = V_1;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		uint8_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		if ((!(((uint32_t)L_57) == ((uint32_t)L_61))))
		{
			goto IL_0234;
		}
	}
	{
		// scan += 2; match++;
		int32_t L_62 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_62, 2));
		// scan += 2; match++;
		int32_t L_63 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_010f:
	{
		// while (window[++scan] == window[++match] &&
		//        window[++scan] == window[++match] &&
		//        window[++scan] == window[++match] &&
		//        window[++scan] == window[++match] &&
		//        window[++scan] == window[++match] &&
		//        window[++scan] == window[++match] &&
		//        window[++scan] == window[++match] &&
		//        window[++scan] == window[++match] && scan < strend);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = __this->___window_31;
		int32_t L_65 = V_1;
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		V_1 = L_66;
		NullCheck(L_64);
		int32_t L_67 = L_66;
		uint8_t L_68 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = __this->___window_31;
		int32_t L_70 = V_2;
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		V_2 = L_71;
		NullCheck(L_69);
		int32_t L_72 = L_71;
		uint8_t L_73 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		if ((!(((uint32_t)L_68) == ((uint32_t)L_73))))
		{
			goto IL_01f0;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = __this->___window_31;
		int32_t L_75 = V_1;
		int32_t L_76 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		V_1 = L_76;
		NullCheck(L_74);
		int32_t L_77 = L_76;
		uint8_t L_78 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = __this->___window_31;
		int32_t L_80 = V_2;
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, 1));
		V_2 = L_81;
		NullCheck(L_79);
		int32_t L_82 = L_81;
		uint8_t L_83 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		if ((!(((uint32_t)L_78) == ((uint32_t)L_83))))
		{
			goto IL_01f0;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = __this->___window_31;
		int32_t L_85 = V_1;
		int32_t L_86 = ((int32_t)il2cpp_codegen_add(L_85, 1));
		V_1 = L_86;
		NullCheck(L_84);
		int32_t L_87 = L_86;
		uint8_t L_88 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = __this->___window_31;
		int32_t L_90 = V_2;
		int32_t L_91 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		V_2 = L_91;
		NullCheck(L_89);
		int32_t L_92 = L_91;
		uint8_t L_93 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		if ((!(((uint32_t)L_88) == ((uint32_t)L_93))))
		{
			goto IL_01f0;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = __this->___window_31;
		int32_t L_95 = V_1;
		int32_t L_96 = ((int32_t)il2cpp_codegen_add(L_95, 1));
		V_1 = L_96;
		NullCheck(L_94);
		int32_t L_97 = L_96;
		uint8_t L_98 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = __this->___window_31;
		int32_t L_100 = V_2;
		int32_t L_101 = ((int32_t)il2cpp_codegen_add(L_100, 1));
		V_2 = L_101;
		NullCheck(L_99);
		int32_t L_102 = L_101;
		uint8_t L_103 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		if ((!(((uint32_t)L_98) == ((uint32_t)L_103))))
		{
			goto IL_01f0;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = __this->___window_31;
		int32_t L_105 = V_1;
		int32_t L_106 = ((int32_t)il2cpp_codegen_add(L_105, 1));
		V_1 = L_106;
		NullCheck(L_104);
		int32_t L_107 = L_106;
		uint8_t L_108 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_109 = __this->___window_31;
		int32_t L_110 = V_2;
		int32_t L_111 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		V_2 = L_111;
		NullCheck(L_109);
		int32_t L_112 = L_111;
		uint8_t L_113 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		if ((!(((uint32_t)L_108) == ((uint32_t)L_113))))
		{
			goto IL_01f0;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_114 = __this->___window_31;
		int32_t L_115 = V_1;
		int32_t L_116 = ((int32_t)il2cpp_codegen_add(L_115, 1));
		V_1 = L_116;
		NullCheck(L_114);
		int32_t L_117 = L_116;
		uint8_t L_118 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_119 = __this->___window_31;
		int32_t L_120 = V_2;
		int32_t L_121 = ((int32_t)il2cpp_codegen_add(L_120, 1));
		V_2 = L_121;
		NullCheck(L_119);
		int32_t L_122 = L_121;
		uint8_t L_123 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		if ((!(((uint32_t)L_118) == ((uint32_t)L_123))))
		{
			goto IL_01f0;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_124 = __this->___window_31;
		int32_t L_125 = V_1;
		int32_t L_126 = ((int32_t)il2cpp_codegen_add(L_125, 1));
		V_1 = L_126;
		NullCheck(L_124);
		int32_t L_127 = L_126;
		uint8_t L_128 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_129 = __this->___window_31;
		int32_t L_130 = V_2;
		int32_t L_131 = ((int32_t)il2cpp_codegen_add(L_130, 1));
		V_2 = L_131;
		NullCheck(L_129);
		int32_t L_132 = L_131;
		uint8_t L_133 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		if ((!(((uint32_t)L_128) == ((uint32_t)L_133))))
		{
			goto IL_01f0;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_134 = __this->___window_31;
		int32_t L_135 = V_1;
		int32_t L_136 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		V_1 = L_136;
		NullCheck(L_134);
		int32_t L_137 = L_136;
		uint8_t L_138 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_139 = __this->___window_31;
		int32_t L_140 = V_2;
		int32_t L_141 = ((int32_t)il2cpp_codegen_add(L_140, 1));
		V_2 = L_141;
		NullCheck(L_139);
		int32_t L_142 = L_141;
		uint8_t L_143 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		if ((!(((uint32_t)L_138) == ((uint32_t)L_143))))
		{
			goto IL_01f0;
		}
	}
	{
		int32_t L_144 = V_1;
		int32_t L_145 = V_8;
		if ((((int32_t)L_144) < ((int32_t)L_145)))
		{
			goto IL_010f;
		}
	}

IL_01f0:
	{
		// len = MAX_MATCH - (int)(strend - scan);
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_146 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MAX_MATCH_17;
		int32_t L_147 = V_8;
		int32_t L_148 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_146, ((int32_t)il2cpp_codegen_subtract(L_147, L_148))));
		// scan = strend - MAX_MATCH;
		int32_t L_149 = V_8;
		int32_t L_150 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MAX_MATCH_17;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_149, L_150));
		// if (len > best_len)
		int32_t L_151 = V_3;
		int32_t L_152 = V_4;
		if ((((int32_t)L_151) <= ((int32_t)L_152)))
		{
			goto IL_0234;
		}
	}
	{
		// match_start = cur_match;
		int32_t L_153 = ___cur_match0;
		__this->___match_start_46 = L_153;
		// best_len = len;
		int32_t L_154 = V_3;
		V_4 = L_154;
		// if (len >= niceLength)
		int32_t L_155 = V_3;
		int32_t L_156 = V_6;
		if ((((int32_t)L_155) >= ((int32_t)L_156)))
		{
			goto IL_0256;
		}
	}
	{
		// scan_end1 = window[scan + best_len - 1];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_157 = __this->___window_31;
		int32_t L_158 = V_1;
		int32_t L_159 = V_4;
		NullCheck(L_157);
		int32_t L_160 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_158, L_159)), 1));
		uint8_t L_161 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		V_9 = L_161;
		// scan_end = window[scan + best_len];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_162 = __this->___window_31;
		int32_t L_163 = V_1;
		int32_t L_164 = V_4;
		NullCheck(L_162);
		int32_t L_165 = ((int32_t)il2cpp_codegen_add(L_163, L_164));
		uint8_t L_166 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		V_10 = L_166;
	}

IL_0234:
	{
		// while ((cur_match = (prev[cur_match & wmask] & 0xffff)) > limit && --chain_length != 0);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_167 = __this->___prev_33;
		int32_t L_168 = ___cur_match0;
		int32_t L_169 = V_7;
		NullCheck(L_167);
		int32_t L_170 = ((int32_t)(L_168&L_169));
		int16_t L_171 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		int32_t L_172 = ((int32_t)((int32_t)L_171&((int32_t)65535)));
		___cur_match0 = L_172;
		int32_t L_173 = V_5;
		if ((((int32_t)L_172) <= ((int32_t)L_173)))
		{
			goto IL_0256;
		}
	}
	{
		int32_t L_174 = V_0;
		int32_t L_175 = ((int32_t)il2cpp_codegen_subtract(L_174, 1));
		V_0 = L_175;
		if (L_175)
		{
			goto IL_00af;
		}
	}

IL_0256:
	{
		// if (best_len <= lookahead)
		int32_t L_176 = V_4;
		int32_t L_177 = __this->___lookahead_47;
		if ((((int32_t)L_176) > ((int32_t)L_177)))
		{
			goto IL_0263;
		}
	}
	{
		// return best_len;
		int32_t L_178 = V_4;
		return L_178;
	}

IL_0263:
	{
		// return lookahead;
		int32_t L_179 = __this->___lookahead_47;
		return L_179;
	}
}
// System.Boolean Ionic.Zlib.DeflateManager::get_WantRfc1950HeaderBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateManager_get_WantRfc1950HeaderBytes_m75F40211D40B3305737878C796ABF362D3B4A1B1 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) 
{
	{
		// get { return _WantRfc1950HeaderBytes; }
		bool L_0 = __this->____WantRfc1950HeaderBytes_73;
		return L_0;
	}
}
// System.Void Ionic.Zlib.DeflateManager::set_WantRfc1950HeaderBytes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_set_WantRfc1950HeaderBytes_m9060045EA2EB472A693C1DDA19ADA7466CB8B0EA (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { _WantRfc1950HeaderBytes = value; }
		bool L_0 = ___value0;
		__this->____WantRfc1950HeaderBytes_73 = L_0;
		// set { _WantRfc1950HeaderBytes = value; }
		return;
	}
}
// System.Int32 Ionic.Zlib.DeflateManager::Initialize(Ionic.Zlib.ZlibCodec,Ionic.Zlib.CompressionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Initialize_m77D0B7A11DA55A9C651C79A5892E19CDD9CE5018 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* ___codec0, int32_t ___level1, const RuntimeMethod* method) 
{
	{
		// return Initialize(codec, level, ZlibConstants.WindowBitsMax);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_0 = ___codec0;
		int32_t L_1 = ___level1;
		int32_t L_2;
		L_2 = DeflateManager_Initialize_mE6C108ACF6DF876C98943E43CE7607423B8E7730(__this, L_0, L_1, ((int32_t)15), NULL);
		return L_2;
	}
}
// System.Int32 Ionic.Zlib.DeflateManager::Initialize(Ionic.Zlib.ZlibCodec,Ionic.Zlib.CompressionLevel,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Initialize_mE6C108ACF6DF876C98943E43CE7607423B8E7730 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* ___codec0, int32_t ___level1, int32_t ___bits2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Initialize(codec, level, bits, MEM_LEVEL_DEFAULT, CompressionStrategy.Default);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_0 = ___codec0;
		int32_t L_1 = ___level1;
		int32_t L_2 = ___bits2;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_3 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MEM_LEVEL_DEFAULT_1;
		int32_t L_4;
		L_4 = DeflateManager_Initialize_mBE4ECB11B46A5977FCADA7141978938E428732ED(__this, L_0, L_1, L_2, L_3, 0, NULL);
		return L_4;
	}
}
// System.Int32 Ionic.Zlib.DeflateManager::Initialize(Ionic.Zlib.ZlibCodec,Ionic.Zlib.CompressionLevel,System.Int32,Ionic.Zlib.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Initialize_m146611CD32C867063A3C595B9D3380298D5C880D (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* ___codec0, int32_t ___level1, int32_t ___bits2, int32_t ___compressionStrategy3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Initialize(codec, level, bits, MEM_LEVEL_DEFAULT, compressionStrategy);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_0 = ___codec0;
		int32_t L_1 = ___level1;
		int32_t L_2 = ___bits2;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_3 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MEM_LEVEL_DEFAULT_1;
		int32_t L_4 = ___compressionStrategy3;
		int32_t L_5;
		L_5 = DeflateManager_Initialize_mBE4ECB11B46A5977FCADA7141978938E428732ED(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Int32 Ionic.Zlib.DeflateManager::Initialize(Ionic.Zlib.ZlibCodec,Ionic.Zlib.CompressionLevel,System.Int32,System.Int32,Ionic.Zlib.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Initialize_mBE4ECB11B46A5977FCADA7141978938E428732ED (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* ___codec0, int32_t ___level1, int32_t ___windowBits2, int32_t ___memLevel3, int32_t ___strategy4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _codec = codec;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_0 = ___codec0;
		__this->____codec_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____codec_21), (void*)L_0);
		// _codec.Message = null;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_1 = __this->____codec_21;
		NullCheck(L_1);
		L_1->___Message_8 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Message_8), (void*)(String_t*)NULL);
		// if (windowBits < 9 || windowBits > 15)
		int32_t L_2 = ___windowBits2;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)9))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___windowBits2;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)15))))
		{
			goto IL_0028;
		}
	}

IL_001d:
	{
		// throw new ZlibException("windowBits must be in the range 9..15.");
		ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1* L_4 = (ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ZlibException__ctor_m64D791E8513A445C3D6E672332E2EC5DD6EE76E4(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral540BFF2B585F6DE7F5AA022B07C05975323EFD0E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_Initialize_mBE4ECB11B46A5977FCADA7141978938E428732ED_RuntimeMethod_var)));
	}

IL_0028:
	{
		// if (memLevel < 1 || memLevel > MEM_LEVEL_MAX)
		int32_t L_5 = ___memLevel3;
		if ((((int32_t)L_5) < ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_6 = ___memLevel3;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_7 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MEM_LEVEL_MAX_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0050;
		}
	}

IL_0036:
	{
		// throw new ZlibException(String.Format("memLevel must be in the range 1.. {0}", MEM_LEVEL_MAX));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var)));
		int32_t L_8 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))))->___MEM_LEVEL_MAX_0;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral796754270F9B2AB25ACA5093B84CF8EAF55BA1AE)), L_10, NULL);
		ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1* L_12 = (ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ZlibException__ctor_m64D791E8513A445C3D6E672332E2EC5DD6EE76E4(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_Initialize_mBE4ECB11B46A5977FCADA7141978938E428732ED_RuntimeMethod_var)));
	}

IL_0050:
	{
		// _codec.dstate = this;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_13 = __this->____codec_21;
		NullCheck(L_13);
		L_13->___dstate_9 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___dstate_9), (void*)__this);
		// w_bits = windowBits;
		int32_t L_14 = ___windowBits2;
		__this->___w_bits_29 = L_14;
		// w_size = 1 << w_bits;
		int32_t L_15 = __this->___w_bits_29;
		__this->___w_size_28 = ((int32_t)(1<<((int32_t)(L_15&((int32_t)31)))));
		// w_mask = w_size - 1;
		int32_t L_16 = __this->___w_size_28;
		__this->___w_mask_30 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		// hash_bits = memLevel + 7;
		int32_t L_17 = ___memLevel3;
		__this->___hash_bits_37 = ((int32_t)il2cpp_codegen_add(L_17, 7));
		// hash_size = 1 << hash_bits;
		int32_t L_18 = __this->___hash_bits_37;
		__this->___hash_size_36 = ((int32_t)(1<<((int32_t)(L_18&((int32_t)31)))));
		// hash_mask = hash_size - 1;
		int32_t L_19 = __this->___hash_size_36;
		__this->___hash_mask_38 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		// hash_shift = ((hash_bits + MIN_MATCH - 1) / MIN_MATCH);
		int32_t L_20 = __this->___hash_bits_37;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_21 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		int32_t L_22 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		__this->___hash_shift_39 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_20, L_21)), 1))/L_22));
		// window = new byte[w_size * 2];
		int32_t L_23 = __this->___w_size_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_23, 2)));
		__this->___window_31 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___window_31), (void*)L_24);
		// prev = new short[w_size];
		int32_t L_25 = __this->___w_size_28;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_26 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)L_25);
		__this->___prev_33 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prev_33), (void*)L_26);
		// head = new short[hash_size];
		int32_t L_27 = __this->___hash_size_36;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_28 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)L_27);
		__this->___head_34 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___head_34), (void*)L_28);
		// lit_bufsize = 1 << (memLevel + 6);
		int32_t L_29 = ___memLevel3;
		__this->___lit_bufsize_63 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_add(L_29, 6))&((int32_t)31)))));
		// pending = new byte[lit_bufsize * 4];
		int32_t L_30 = __this->___lit_bufsize_63;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_30, 4)));
		__this->___pending_23 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pending_23), (void*)L_31);
		// _distanceOffset = lit_bufsize;
		int32_t L_32 = __this->___lit_bufsize_63;
		__this->____distanceOffset_65 = L_32;
		// _lengthOffset = (1 + 2) * lit_bufsize;
		int32_t L_33 = __this->___lit_bufsize_63;
		__this->____lengthOffset_62 = ((int32_t)il2cpp_codegen_multiply(3, L_33));
		// this.compressionLevel = level;
		int32_t L_34 = ___level1;
		__this->___compressionLevel_49 = L_34;
		// this.compressionStrategy = strategy;
		int32_t L_35 = ___strategy4;
		__this->___compressionStrategy_50 = L_35;
		// Reset();
		DeflateManager_Reset_mEDD48C9A2AF41BC13666BC25E1F5F34E894C04BE(__this, NULL);
		// return ZlibConstants.Z_OK;
		return 0;
	}
}
// System.Void Ionic.Zlib.DeflateManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_Reset_mEDD48C9A2AF41BC13666BC25E1F5F34E894C04BE (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler_t0FD1A5CDC49CCF1E8741247D09C4D1C46EEAE2D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* G_B2_0 = NULL;
	DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* G_B3_1 = NULL;
	{
		// _codec.TotalBytesIn = _codec.TotalBytesOut = 0;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_0 = __this->____codec_21;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_1 = __this->____codec_21;
		int64_t L_2 = ((int64_t)0);
		V_0 = L_2;
		NullCheck(L_1);
		L_1->___TotalBytesOut_7 = L_2;
		int64_t L_3 = V_0;
		NullCheck(L_0);
		L_0->___TotalBytesIn_3 = L_3;
		// _codec.Message = null;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_4 = __this->____codec_21;
		NullCheck(L_4);
		L_4->___Message_8 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___Message_8), (void*)(String_t*)NULL);
		// pendingCount = 0;
		__this->___pendingCount_25 = 0;
		// nextPending = 0;
		__this->___nextPending_24 = 0;
		// Rfc1950BytesEmitted = false;
		__this->___Rfc1950BytesEmitted_72 = (bool)0;
		// status = (WantRfc1950HeaderBytes) ? INIT_STATE : BUSY_STATE;
		bool L_5;
		L_5 = DeflateManager_get_WantRfc1950HeaderBytes_m75F40211D40B3305737878C796ABF362D3B4A1B1_inline(__this, NULL);
		G_B1_0 = __this;
		if (L_5)
		{
			G_B2_0 = __this;
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_6 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___BUSY_STATE_6;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0051;
	}

IL_004c:
	{
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_7 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___INIT_STATE_5;
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0051:
	{
		NullCheck(G_B3_1);
		G_B3_1->___status_22 = G_B3_0;
		// _codec._Adler32 = Adler.Adler32(0, null, 0, 0);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_8 = __this->____codec_21;
		il2cpp_codegen_runtime_class_init_inline(Adler_t0FD1A5CDC49CCF1E8741247D09C4D1C46EEAE2D2_il2cpp_TypeInfo_var);
		uint32_t L_9;
		L_9 = Adler_Adler32_m9695EEA6DCAA53D00A6F830833B21FAEDE1C0E39(0, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, 0, 0, NULL);
		NullCheck(L_8);
		L_8->____Adler32_11 = L_9;
		// last_flush = (int)FlushType.None;
		__this->___last_flush_27 = 0;
		// _InitializeTreeData();
		DeflateManager__InitializeTreeData_mEB8966492523035DD3744EAB80C9A615EC981D7A(__this, NULL);
		// _InitializeLazyMatch();
		DeflateManager__InitializeLazyMatch_mD8BCCC360DC5B1B788E55B81F3DEB1207114143E(__this, NULL);
		// }
		return;
	}
}
// System.Int32 Ionic.Zlib.DeflateManager::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_End_m038920C1881C0966FE41B2ACF58DD022C7E3E754 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (status != INIT_STATE && status != BUSY_STATE && status != FINISH_STATE)
		int32_t L_0 = __this->___status_22;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_1 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___INIT_STATE_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_2 = __this->___status_22;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_3 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___BUSY_STATE_6;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = __this->___status_22;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_5 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___FINISH_STATE_7;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		// return ZlibConstants.Z_STREAM_ERROR;
		return ((int32_t)-2);
	}

IL_002a:
	{
		// pending = null;
		__this->___pending_23 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pending_23), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		// head = null;
		__this->___head_34 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___head_34), (void*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)NULL);
		// prev = null;
		__this->___prev_33 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prev_33), (void*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)NULL);
		// window = null;
		__this->___window_31 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___window_31), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		// return status == BUSY_STATE ? ZlibConstants.Z_DATA_ERROR : ZlibConstants.Z_OK;
		int32_t L_6 = __this->___status_22;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_7 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___BUSY_STATE_6;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0055;
		}
	}
	{
		return 0;
	}

IL_0055:
	{
		return ((int32_t)-3);
	}
}
// System.Void Ionic.Zlib.DeflateManager::SetDeflater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_SetDeflater_m926E71507A538185110EF127636FA9BB680C8D92 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_DeflateFast_m64FC609E28A1C50579FA545D8D50335E0FC95450_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_DeflateNone_m8A63FC9E1A2BA1F954C96D549D5CF2E32AC4411D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_DeflateSlow_m596BDD8AAB09E0F85DF4407B7626696214E0A474_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (config.Flavor)
		Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* L_0 = __this->___config_41;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Flavor_4;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_0045;
			}
		}
	}
	{
		return;
	}

IL_001f:
	{
		// DeflateFunction = DeflateNone;
		CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0* L_3 = (CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0*)il2cpp_codegen_object_new(CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CompressFunc__ctor_mD34A5FF9383EB8C9FF667C354A52712B647698DA(L_3, __this, (intptr_t)((void*)DeflateManager_DeflateNone_m8A63FC9E1A2BA1F954C96D549D5CF2E32AC4411D_RuntimeMethod_var), NULL);
		__this->___DeflateFunction_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DeflateFunction_2), (void*)L_3);
		// break;
		return;
	}

IL_0032:
	{
		// DeflateFunction = DeflateFast;
		CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0* L_4 = (CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0*)il2cpp_codegen_object_new(CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		CompressFunc__ctor_mD34A5FF9383EB8C9FF667C354A52712B647698DA(L_4, __this, (intptr_t)((void*)DeflateManager_DeflateFast_m64FC609E28A1C50579FA545D8D50335E0FC95450_RuntimeMethod_var), NULL);
		__this->___DeflateFunction_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DeflateFunction_2), (void*)L_4);
		// break;
		return;
	}

IL_0045:
	{
		// DeflateFunction = DeflateSlow;
		CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0* L_5 = (CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0*)il2cpp_codegen_object_new(CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		CompressFunc__ctor_mD34A5FF9383EB8C9FF667C354A52712B647698DA(L_5, __this, (intptr_t)((void*)DeflateManager_DeflateSlow_m596BDD8AAB09E0F85DF4407B7626696214E0A474_RuntimeMethod_var), NULL);
		__this->___DeflateFunction_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DeflateFunction_2), (void*)L_5);
		// }
		return;
	}
}
// System.Int32 Ionic.Zlib.DeflateManager::SetParams(Ionic.Zlib.CompressionLevel,Ionic.Zlib.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_SetParams_mB7D1CF17DB750E55B7C39C84942B0A2DE0CA80CA (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, int32_t ___level0, int32_t ___strategy1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* V_1 = NULL;
	{
		// int result = ZlibConstants.Z_OK;
		V_0 = 0;
		// if (compressionLevel != level)
		int32_t L_0 = __this->___compressionLevel_49;
		int32_t L_1 = ___level0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0053;
		}
	}
	{
		// Config newConfig = Config.Lookup(level);
		int32_t L_2 = ___level0;
		il2cpp_codegen_runtime_class_init_inline(Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_il2cpp_TypeInfo_var);
		Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* L_3;
		L_3 = Config_Lookup_m9F57580134B3438DA12448A331B6360C71FFA2D4(L_2, NULL);
		V_1 = L_3;
		// if (newConfig.Flavor != config.Flavor && _codec.TotalBytesIn != 0)
		Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Flavor_4;
		Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* L_6 = __this->___config_41;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Flavor_4;
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_003f;
		}
	}
	{
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_8 = __this->____codec_21;
		NullCheck(L_8);
		int64_t L_9 = L_8->___TotalBytesIn_3;
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		// result = _codec.Deflate(FlushType.Partial);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_10 = __this->____codec_21;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = ZlibCodec_Deflate_m119870C4DAC47865D53B39EA397367EDCD9F72AE(L_10, 1, NULL);
		V_0 = L_11;
	}

IL_003f:
	{
		// compressionLevel = level;
		int32_t L_12 = ___level0;
		__this->___compressionLevel_49 = L_12;
		// config = newConfig;
		Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* L_13 = V_1;
		__this->___config_41 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___config_41), (void*)L_13);
		// SetDeflater();
		DeflateManager_SetDeflater_m926E71507A538185110EF127636FA9BB680C8D92(__this, NULL);
	}

IL_0053:
	{
		// compressionStrategy = strategy;
		int32_t L_14 = ___strategy1;
		__this->___compressionStrategy_50 = L_14;
		// return result;
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Int32 Ionic.Zlib.DeflateManager::SetDictionary(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_SetDictionary_mECE59D0ED616E4ABF1A2CF7F67D6431A63405B39 (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dictionary0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler_t0FD1A5CDC49CCF1E8741247D09C4D1C46EEAE2D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int length = dictionary.Length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___dictionary0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		// int index = 0;
		V_1 = 0;
		// if (dictionary == null || status != INIT_STATE)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___dictionary0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = __this->___status_22;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_3 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___INIT_STATE_5;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0021;
		}
	}

IL_0016:
	{
		// throw new ZlibException("Stream error.");
		ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1* L_4 = (ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ZlibException__ctor_m64D791E8513A445C3D6E672332E2EC5DD6EE76E4(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD94DFA59855436FE4E964729609DFFE5BDFF64A0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_SetDictionary_mECE59D0ED616E4ABF1A2CF7F67D6431A63405B39_RuntimeMethod_var)));
	}

IL_0021:
	{
		// _codec._Adler32 = Adler.Adler32(_codec._Adler32, dictionary, 0, dictionary.Length);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_5 = __this->____codec_21;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_6 = __this->____codec_21;
		NullCheck(L_6);
		uint32_t L_7 = L_6->____Adler32_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___dictionary0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___dictionary0;
		NullCheck(L_9);
		il2cpp_codegen_runtime_class_init_inline(Adler_t0FD1A5CDC49CCF1E8741247D09C4D1C46EEAE2D2_il2cpp_TypeInfo_var);
		uint32_t L_10;
		L_10 = Adler_Adler32_m9695EEA6DCAA53D00A6F830833B21FAEDE1C0E39(L_7, L_8, 0, ((int32_t)(((RuntimeArray*)L_9)->max_length)), NULL);
		NullCheck(L_5);
		L_5->____Adler32_11 = L_10;
		// if (length < MIN_MATCH)
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_12 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_004b;
		}
	}
	{
		// return ZlibConstants.Z_OK;
		return 0;
	}

IL_004b:
	{
		// if (length > w_size - MIN_LOOKAHEAD)
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___w_size_28;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_15 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_14, L_15)))))
		{
			goto IL_006d;
		}
	}
	{
		// length = w_size - MIN_LOOKAHEAD;
		int32_t L_16 = __this->___w_size_28;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_17 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_16, L_17));
		// index = dictionary.Length - length; // use the tail of the dictionary
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___dictionary0;
		NullCheck(L_18);
		int32_t L_19 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_18)->max_length)), L_19));
	}

IL_006d:
	{
		// Array.Copy(dictionary, index, window, 0, length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___dictionary0;
		int32_t L_21 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___window_31;
		int32_t L_23 = V_0;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_20, L_21, (RuntimeArray*)L_22, 0, L_23, NULL);
		// strstart = length;
		int32_t L_24 = V_0;
		__this->___strstart_45 = L_24;
		// block_start = length;
		int32_t L_25 = V_0;
		__this->___block_start_40 = L_25;
		// ins_h = window[0] & 0xff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___window_31;
		NullCheck(L_26);
		int32_t L_27 = 0;
		uint8_t L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		__this->___ins_h_35 = ((int32_t)((int32_t)L_28&((int32_t)255)));
		// ins_h = (((ins_h) << hash_shift) ^ (window[1] & 0xff)) & hash_mask;
		int32_t L_29 = __this->___ins_h_35;
		int32_t L_30 = __this->___hash_shift_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = __this->___window_31;
		NullCheck(L_31);
		int32_t L_32 = 1;
		uint8_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		int32_t L_34 = __this->___hash_mask_38;
		__this->___ins_h_35 = ((int32_t)(((int32_t)(((int32_t)(L_29<<((int32_t)(L_30&((int32_t)31)))))^((int32_t)((int32_t)L_33&((int32_t)255)))))&L_34));
		// for (int n = 0; n <= length - MIN_MATCH; n++)
		V_2 = 0;
		goto IL_0131;
	}

IL_00ce:
	{
		// ins_h = (((ins_h) << hash_shift) ^ (window[(n) + (MIN_MATCH - 1)] & 0xff)) & hash_mask;
		int32_t L_35 = __this->___ins_h_35;
		int32_t L_36 = __this->___hash_shift_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = __this->___window_31;
		int32_t L_38 = V_2;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_39 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		NullCheck(L_37);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_38, ((int32_t)il2cpp_codegen_subtract(L_39, 1))));
		uint8_t L_41 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		int32_t L_42 = __this->___hash_mask_38;
		__this->___ins_h_35 = ((int32_t)(((int32_t)(((int32_t)(L_35<<((int32_t)(L_36&((int32_t)31)))))^((int32_t)((int32_t)L_41&((int32_t)255)))))&L_42));
		// prev[n & w_mask] = head[ins_h];
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_43 = __this->___prev_33;
		int32_t L_44 = V_2;
		int32_t L_45 = __this->___w_mask_30;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_46 = __this->___head_34;
		int32_t L_47 = __this->___ins_h_35;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		int16_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_44&L_45))), (int16_t)L_49);
		// head[ins_h] = (short)n;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_50 = __this->___head_34;
		int32_t L_51 = __this->___ins_h_35;
		int32_t L_52 = V_2;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (int16_t)((int16_t)L_52));
		// for (int n = 0; n <= length - MIN_MATCH; n++)
		int32_t L_53 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_0131:
	{
		// for (int n = 0; n <= length - MIN_MATCH; n++)
		int32_t L_54 = V_2;
		int32_t L_55 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_56 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		if ((((int32_t)L_54) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_55, L_56)))))
		{
			goto IL_00ce;
		}
	}
	{
		// return ZlibConstants.Z_OK;
		return 0;
	}
}
// System.Int32 Ionic.Zlib.DeflateManager::Deflate(Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Deflate_m36847D5F5399A7F119A392DC4492A3E1F77A190D (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, int32_t ___flush0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler_t0FD1A5CDC49CCF1E8741247D09C4D1C46EEAE2D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// if (_codec.OutputBuffer == null ||
		//     (_codec.InputBuffer == null && _codec.AvailableBytesIn != 0) ||
		//     (status == FINISH_STATE && flush != FlushType.Finish))
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_0 = __this->____codec_21;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0->___OutputBuffer_4;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_2 = __this->____codec_21;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2->___InputBuffer_0;
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_4 = __this->____codec_21;
		NullCheck(L_4);
		int32_t L_5 = L_4->___AvailableBytesIn_2;
		if (L_5)
		{
			goto IL_0038;
		}
	}

IL_0027:
	{
		int32_t L_6 = __this->___status_22;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_7 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___FINISH_STATE_7;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_8 = ___flush0;
		if ((((int32_t)L_8) == ((int32_t)4)))
		{
			goto IL_0065;
		}
	}

IL_0038:
	{
		// _codec.Message = _ErrorMessage[ZlibConstants.Z_NEED_DICT - (ZlibConstants.Z_STREAM_ERROR)];
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_9 = __this->____codec_21;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))))->____ErrorMessage_3;
		NullCheck(L_10);
		int32_t L_11 = 4;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_9);
		L_9->___Message_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___Message_8), (void*)L_12);
		// throw new ZlibException(String.Format("Something is fishy. [{0}]", _codec.Message));
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_13 = __this->____codec_21;
		NullCheck(L_13);
		String_t* L_14 = L_13->___Message_8;
		String_t* L_15;
		L_15 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4DE4583466E161AC08D14AD37D8B70B8580B3627)), L_14, NULL);
		ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1* L_16 = (ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		ZlibException__ctor_m64D791E8513A445C3D6E672332E2EC5DD6EE76E4(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_Deflate_m36847D5F5399A7F119A392DC4492A3E1F77A190D_RuntimeMethod_var)));
	}

IL_0065:
	{
		// if (_codec.AvailableBytesOut == 0)
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_17 = __this->____codec_21;
		NullCheck(L_17);
		int32_t L_18 = L_17->___AvailableBytesOut_6;
		if (L_18)
		{
			goto IL_008f;
		}
	}
	{
		// _codec.Message = _ErrorMessage[ZlibConstants.Z_NEED_DICT - (ZlibConstants.Z_BUF_ERROR)];
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_19 = __this->____codec_21;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))))->____ErrorMessage_3;
		NullCheck(L_20);
		int32_t L_21 = 7;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_19);
		L_19->___Message_8 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___Message_8), (void*)L_22);
		// throw new ZlibException("OutputBuffer is full (AvailableBytesOut == 0)");
		ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1* L_23 = (ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1_il2cpp_TypeInfo_var)));
		NullCheck(L_23);
		ZlibException__ctor_m64D791E8513A445C3D6E672332E2EC5DD6EE76E4(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB6E4583683A19BA1CBC201CAD5FFABF027A5B94A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_Deflate_m36847D5F5399A7F119A392DC4492A3E1F77A190D_RuntimeMethod_var)));
	}

IL_008f:
	{
		// old_flush = last_flush;
		int32_t L_24 = __this->___last_flush_27;
		V_0 = L_24;
		// last_flush = (int)flush;
		int32_t L_25 = ___flush0;
		__this->___last_flush_27 = L_25;
		// if (status == INIT_STATE)
		int32_t L_26 = __this->___status_22;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_27 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___INIT_STATE_5;
		if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
		{
			goto IL_0207;
		}
	}
	{
		// int header = (Z_DEFLATED + ((w_bits - 8) << 4)) << 8;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_28 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___Z_DEFLATED_8;
		int32_t L_29 = __this->___w_bits_29;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_28, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_29, 8))<<4))))<<8));
		// int level_flags = (((int)compressionLevel - 1) & 0xff) >> 1;
		int32_t L_30 = __this->___compressionLevel_49;
		V_2 = ((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_30, 1))&((int32_t)255)))>>1));
		// if (level_flags > 3)
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) <= ((int32_t)3)))
		{
			goto IL_00d7;
		}
	}
	{
		// level_flags = 3;
		V_2 = 3;
	}

IL_00d7:
	{
		// header |= (level_flags << 6);
		int32_t L_32 = V_1;
		int32_t L_33 = V_2;
		V_1 = ((int32_t)(L_32|((int32_t)(L_33<<6))));
		// if (strstart != 0)
		int32_t L_34 = __this->___strstart_45;
		if (!L_34)
		{
			goto IL_00ed;
		}
	}
	{
		// header |= PRESET_DICT;
		int32_t L_35 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_36 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___PRESET_DICT_4;
		V_1 = ((int32_t)(L_35|L_36));
	}

IL_00ed:
	{
		// header += 31 - (header % 31);
		int32_t L_37 = V_1;
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, ((int32_t)il2cpp_codegen_subtract(((int32_t)31), ((int32_t)(L_38%((int32_t)31)))))));
		// status = BUSY_STATE;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_39 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___BUSY_STATE_6;
		__this->___status_22 = L_39;
		// pending[pendingCount++] = (byte)(header >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = __this->___pending_23;
		int32_t L_41 = __this->___pendingCount_25;
		V_3 = L_41;
		int32_t L_42 = V_3;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = V_3;
		int32_t L_44 = V_1;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_44>>8))));
		// pending[pendingCount++] = (byte)header;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = __this->___pending_23;
		int32_t L_46 = __this->___pendingCount_25;
		V_3 = L_46;
		int32_t L_47 = V_3;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_48 = V_3;
		int32_t L_49 = V_1;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (uint8_t)((int32_t)(uint8_t)L_49));
		// if (strstart != 0)
		int32_t L_50 = __this->___strstart_45;
		if (!L_50)
		{
			goto IL_01f3;
		}
	}
	{
		// pending[pendingCount++] = (byte)((_codec._Adler32 & 0xFF000000) >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = __this->___pending_23;
		int32_t L_52 = __this->___pendingCount_25;
		V_3 = L_52;
		int32_t L_53 = V_3;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		int32_t L_54 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_55 = __this->____codec_21;
		NullCheck(L_55);
		uint32_t L_56 = L_55->____Adler32_11;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_56&((int32_t)-16777216)))>>((int32_t)24)))));
		// pending[pendingCount++] = (byte)((_codec._Adler32 & 0x00FF0000) >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = __this->___pending_23;
		int32_t L_58 = __this->___pendingCount_25;
		V_3 = L_58;
		int32_t L_59 = V_3;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		int32_t L_60 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_61 = __this->____codec_21;
		NullCheck(L_61);
		uint32_t L_62 = L_61->____Adler32_11;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_62&((int32_t)16711680)))>>((int32_t)16)))));
		// pending[pendingCount++] = (byte)((_codec._Adler32 & 0x0000FF00) >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = __this->___pending_23;
		int32_t L_64 = __this->___pendingCount_25;
		V_3 = L_64;
		int32_t L_65 = V_3;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		int32_t L_66 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_67 = __this->____codec_21;
		NullCheck(L_67);
		uint32_t L_68 = L_67->____Adler32_11;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_66), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_68&((int32_t)65280)))>>8))));
		// pending[pendingCount++] = (byte)(_codec._Adler32 & 0x000000FF);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = __this->___pending_23;
		int32_t L_70 = __this->___pendingCount_25;
		V_3 = L_70;
		int32_t L_71 = V_3;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		int32_t L_72 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_73 = __this->____codec_21;
		NullCheck(L_73);
		uint32_t L_74 = L_73->____Adler32_11;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_74&((int32_t)255)))));
	}

IL_01f3:
	{
		// _codec._Adler32 = Adler.Adler32(0, null, 0, 0);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_75 = __this->____codec_21;
		il2cpp_codegen_runtime_class_init_inline(Adler_t0FD1A5CDC49CCF1E8741247D09C4D1C46EEAE2D2_il2cpp_TypeInfo_var);
		uint32_t L_76;
		L_76 = Adler_Adler32_m9695EEA6DCAA53D00A6F830833B21FAEDE1C0E39(0, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, 0, 0, NULL);
		NullCheck(L_75);
		L_75->____Adler32_11 = L_76;
	}

IL_0207:
	{
		// if (pendingCount != 0)
		int32_t L_77 = __this->___pendingCount_25;
		if (!L_77)
		{
			goto IL_0230;
		}
	}
	{
		// _codec.flush_pending();
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_78 = __this->____codec_21;
		NullCheck(L_78);
		ZlibCodec_flush_pending_mDBADBEFC685082C99C0E91AC60CBDDFD6D393B5B(L_78, NULL);
		// if (_codec.AvailableBytesOut == 0)
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_79 = __this->____codec_21;
		NullCheck(L_79);
		int32_t L_80 = L_79->___AvailableBytesOut_6;
		if (L_80)
		{
			goto IL_0247;
		}
	}
	{
		// last_flush = -1;
		__this->___last_flush_27 = (-1);
		// return ZlibConstants.Z_OK;
		return 0;
	}

IL_0230:
	{
		// else if (_codec.AvailableBytesIn == 0 &&
		//          (int)flush <= old_flush &&
		//          flush != FlushType.Finish)
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_81 = __this->____codec_21;
		NullCheck(L_81);
		int32_t L_82 = L_81->___AvailableBytesIn_2;
		if (L_82)
		{
			goto IL_0247;
		}
	}
	{
		int32_t L_83 = ___flush0;
		int32_t L_84 = V_0;
		if ((((int32_t)L_83) > ((int32_t)L_84)))
		{
			goto IL_0247;
		}
	}
	{
		int32_t L_85 = ___flush0;
		if ((((int32_t)L_85) == ((int32_t)4)))
		{
			goto IL_0247;
		}
	}
	{
		// return ZlibConstants.Z_OK;
		return 0;
	}

IL_0247:
	{
		// if (status == FINISH_STATE && _codec.AvailableBytesIn != 0)
		int32_t L_86 = __this->___status_22;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_87 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___FINISH_STATE_7;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_027e;
		}
	}
	{
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_88 = __this->____codec_21;
		NullCheck(L_88);
		int32_t L_89 = L_88->___AvailableBytesIn_2;
		if (!L_89)
		{
			goto IL_027e;
		}
	}
	{
		// _codec.Message = _ErrorMessage[ZlibConstants.Z_NEED_DICT - (ZlibConstants.Z_BUF_ERROR)];
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_90 = __this->____codec_21;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_91 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))))->____ErrorMessage_3;
		NullCheck(L_91);
		int32_t L_92 = 7;
		String_t* L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_90);
		L_90->___Message_8 = L_93;
		Il2CppCodeGenWriteBarrier((void**)(&L_90->___Message_8), (void*)L_93);
		// throw new ZlibException("status == FINISH_STATE && _codec.AvailableBytesIn != 0");
		ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1* L_94 = (ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1_il2cpp_TypeInfo_var)));
		NullCheck(L_94);
		ZlibException__ctor_m64D791E8513A445C3D6E672332E2EC5DD6EE76E4(L_94, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5882879161B7C9D56B5A1120EF8EF366916857FF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_94, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_Deflate_m36847D5F5399A7F119A392DC4492A3E1F77A190D_RuntimeMethod_var)));
	}

IL_027e:
	{
		// if (_codec.AvailableBytesIn != 0 || lookahead != 0 || (flush != FlushType.None && status != FINISH_STATE))
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_95 = __this->____codec_21;
		NullCheck(L_95);
		int32_t L_96 = L_95->___AvailableBytesIn_2;
		if (L_96)
		{
			goto IL_02a9;
		}
	}
	{
		int32_t L_97 = __this->___lookahead_47;
		if (L_97)
		{
			goto IL_02a9;
		}
	}
	{
		int32_t L_98 = ___flush0;
		if (!L_98)
		{
			goto IL_0349;
		}
	}
	{
		int32_t L_99 = __this->___status_22;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_100 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___FINISH_STATE_7;
		if ((((int32_t)L_99) == ((int32_t)L_100)))
		{
			goto IL_0349;
		}
	}

IL_02a9:
	{
		// BlockState bstate = DeflateFunction(flush);
		CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0* L_101 = __this->___DeflateFunction_2;
		int32_t L_102 = ___flush0;
		NullCheck(L_101);
		int32_t L_103;
		L_103 = CompressFunc_Invoke_m2F705D391F2B3B99EFA994DABBE061FB9FD56747_inline(L_101, L_102, NULL);
		V_4 = L_103;
		// if (bstate == BlockState.FinishStarted || bstate == BlockState.FinishDone)
		int32_t L_104 = V_4;
		if ((((int32_t)L_104) == ((int32_t)2)))
		{
			goto IL_02c1;
		}
	}
	{
		int32_t L_105 = V_4;
		if ((!(((uint32_t)L_105) == ((uint32_t)3))))
		{
			goto IL_02cc;
		}
	}

IL_02c1:
	{
		// status = FINISH_STATE;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		int32_t L_106 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___FINISH_STATE_7;
		__this->___status_22 = L_106;
	}

IL_02cc:
	{
		// if (bstate == BlockState.NeedMore || bstate == BlockState.FinishStarted)
		int32_t L_107 = V_4;
		if (!L_107)
		{
			goto IL_02d5;
		}
	}
	{
		int32_t L_108 = V_4;
		if ((!(((uint32_t)L_108) == ((uint32_t)2))))
		{
			goto IL_02eb;
		}
	}

IL_02d5:
	{
		// if (_codec.AvailableBytesOut == 0)
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_109 = __this->____codec_21;
		NullCheck(L_109);
		int32_t L_110 = L_109->___AvailableBytesOut_6;
		if (L_110)
		{
			goto IL_02e9;
		}
	}
	{
		// last_flush = -1; // avoid BUF_ERROR next call, see above
		__this->___last_flush_27 = (-1);
	}

IL_02e9:
	{
		// return ZlibConstants.Z_OK;
		return 0;
	}

IL_02eb:
	{
		// if (bstate == BlockState.BlockDone)
		int32_t L_111 = V_4;
		if ((!(((uint32_t)L_111) == ((uint32_t)1))))
		{
			goto IL_0349;
		}
	}
	{
		// if (flush == FlushType.Partial)
		int32_t L_112 = ___flush0;
		if ((!(((uint32_t)L_112) == ((uint32_t)1))))
		{
			goto IL_02fc;
		}
	}
	{
		// _tr_align();
		DeflateManager__tr_align_m8A8C106EAC3DE6F972481C2B9E0B149BE90CC521(__this, NULL);
		goto IL_0328;
	}

IL_02fc:
	{
		// _tr_stored_block(0, 0, false);
		DeflateManager__tr_stored_block_m103A4090CF2E1060C43F7B926AED9CA2F509FE39(__this, 0, 0, (bool)0, NULL);
		// if (flush == FlushType.Full)
		int32_t L_113 = ___flush0;
		if ((!(((uint32_t)L_113) == ((uint32_t)3))))
		{
			goto IL_0328;
		}
	}
	{
		// for (int i = 0; i < hash_size; i++)
		V_5 = 0;
		goto IL_031e;
	}

IL_030e:
	{
		// head[i] = 0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_114 = __this->___head_34;
		int32_t L_115 = V_5;
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(L_115), (int16_t)0);
		// for (int i = 0; i < hash_size; i++)
		int32_t L_116 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_116, 1));
	}

IL_031e:
	{
		// for (int i = 0; i < hash_size; i++)
		int32_t L_117 = V_5;
		int32_t L_118 = __this->___hash_size_36;
		if ((((int32_t)L_117) < ((int32_t)L_118)))
		{
			goto IL_030e;
		}
	}

IL_0328:
	{
		// _codec.flush_pending();
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_119 = __this->____codec_21;
		NullCheck(L_119);
		ZlibCodec_flush_pending_mDBADBEFC685082C99C0E91AC60CBDDFD6D393B5B(L_119, NULL);
		// if (_codec.AvailableBytesOut == 0)
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_120 = __this->____codec_21;
		NullCheck(L_120);
		int32_t L_121 = L_120->___AvailableBytesOut_6;
		if (L_121)
		{
			goto IL_0349;
		}
	}
	{
		// last_flush = -1; // avoid BUF_ERROR at next call, see above
		__this->___last_flush_27 = (-1);
		// return ZlibConstants.Z_OK;
		return 0;
	}

IL_0349:
	{
		// if (flush != FlushType.Finish)
		int32_t L_122 = ___flush0;
		if ((((int32_t)L_122) == ((int32_t)4)))
		{
			goto IL_034f;
		}
	}
	{
		// return ZlibConstants.Z_OK;
		return 0;
	}

IL_034f:
	{
		// if (!WantRfc1950HeaderBytes || Rfc1950BytesEmitted)
		bool L_123;
		L_123 = DeflateManager_get_WantRfc1950HeaderBytes_m75F40211D40B3305737878C796ABF362D3B4A1B1_inline(__this, NULL);
		if (!L_123)
		{
			goto IL_035f;
		}
	}
	{
		bool L_124 = __this->___Rfc1950BytesEmitted_72;
		if (!L_124)
		{
			goto IL_0361;
		}
	}

IL_035f:
	{
		// return ZlibConstants.Z_STREAM_END;
		return 1;
	}

IL_0361:
	{
		// pending[pendingCount++] = (byte)((_codec._Adler32 & 0xFF000000) >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_125 = __this->___pending_23;
		int32_t L_126 = __this->___pendingCount_25;
		V_3 = L_126;
		int32_t L_127 = V_3;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_127, 1));
		int32_t L_128 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_129 = __this->____codec_21;
		NullCheck(L_129);
		uint32_t L_130 = L_129->____Adler32_11;
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(L_128), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_130&((int32_t)-16777216)))>>((int32_t)24)))));
		// pending[pendingCount++] = (byte)((_codec._Adler32 & 0x00FF0000) >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_131 = __this->___pending_23;
		int32_t L_132 = __this->___pendingCount_25;
		V_3 = L_132;
		int32_t L_133 = V_3;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_133, 1));
		int32_t L_134 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_135 = __this->____codec_21;
		NullCheck(L_135);
		uint32_t L_136 = L_135->____Adler32_11;
		NullCheck(L_131);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(L_134), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_136&((int32_t)16711680)))>>((int32_t)16)))));
		// pending[pendingCount++] = (byte)((_codec._Adler32 & 0x0000FF00) >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_137 = __this->___pending_23;
		int32_t L_138 = __this->___pendingCount_25;
		V_3 = L_138;
		int32_t L_139 = V_3;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_139, 1));
		int32_t L_140 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_141 = __this->____codec_21;
		NullCheck(L_141);
		uint32_t L_142 = L_141->____Adler32_11;
		NullCheck(L_137);
		(L_137)->SetAt(static_cast<il2cpp_array_size_t>(L_140), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_142&((int32_t)65280)))>>8))));
		// pending[pendingCount++] = (byte)(_codec._Adler32 & 0x000000FF);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_143 = __this->___pending_23;
		int32_t L_144 = __this->___pendingCount_25;
		V_3 = L_144;
		int32_t L_145 = V_3;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_145, 1));
		int32_t L_146 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_147 = __this->____codec_21;
		NullCheck(L_147);
		uint32_t L_148 = L_147->____Adler32_11;
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(L_146), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_148&((int32_t)255)))));
		// _codec.flush_pending();
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_149 = __this->____codec_21;
		NullCheck(L_149);
		ZlibCodec_flush_pending_mDBADBEFC685082C99C0E91AC60CBDDFD6D393B5B(L_149, NULL);
		// Rfc1950BytesEmitted = true; // write the trailer only once!
		__this->___Rfc1950BytesEmitted_72 = (bool)1;
		// return pendingCount != 0 ? ZlibConstants.Z_OK : ZlibConstants.Z_STREAM_END;
		int32_t L_150 = __this->___pendingCount_25;
		if (L_150)
		{
			goto IL_042d;
		}
	}
	{
		return 1;
	}

IL_042d:
	{
		return 0;
	}
}
// System.Void Ionic.Zlib.DeflateManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__cctor_m79B091DB6A2ACF5778CDDE0899B7357D3DE5FE86 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10970F72C2D0D7F199946EF78672994F037BA021);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int MEM_LEVEL_MAX = 9;
		((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MEM_LEVEL_MAX_0 = ((int32_t)9);
		// private static readonly int MEM_LEVEL_DEFAULT = 8;
		((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MEM_LEVEL_DEFAULT_1 = 8;
		// private static readonly System.String[] _ErrorMessage = new System.String[]
		// {
		//     "need dictionary",
		//     "stream end",
		//     "",
		//     "file error",
		//     "stream error",
		//     "data error",
		//     "insufficient memory",
		//     "buffer error",
		//     "incompatible version",
		//     ""
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral10970F72C2D0D7F199946EF78672994F037BA021);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral10970F72C2D0D7F199946EF78672994F037BA021);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->____ErrorMessage_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->____ErrorMessage_3), (void*)L_10);
		// private static readonly int PRESET_DICT = 0x20;
		((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___PRESET_DICT_4 = ((int32_t)32);
		// private static readonly int INIT_STATE = 42;
		((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___INIT_STATE_5 = ((int32_t)42);
		// private static readonly int BUSY_STATE = 113;
		((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___BUSY_STATE_6 = ((int32_t)113);
		// private static readonly int FINISH_STATE = 666;
		((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___FINISH_STATE_7 = ((int32_t)666);
		// private static readonly int Z_DEFLATED = 8;
		((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___Z_DEFLATED_8 = 8;
		// private static readonly int STORED_BLOCK = 0;
		((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___STORED_BLOCK_9 = 0;
		// private static readonly int STATIC_TREES = 1;
		((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___STATIC_TREES_10 = 1;
		// private static readonly int DYN_TREES = 2;
		((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___DYN_TREES_11 = 2;
		// private static readonly int Z_BINARY = 0;
		((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___Z_BINARY_12 = 0;
		// private static readonly int Z_ASCII = 1;
		((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___Z_ASCII_13 = 1;
		// private static readonly int Z_UNKNOWN = 2;
		((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___Z_UNKNOWN_14 = 2;
		// private static readonly int Buf_size = 8 * 2;
		((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___Buf_size_15 = ((int32_t)16);
		// private static readonly int MIN_MATCH = 3;
		((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16 = 3;
		// private static readonly int MAX_MATCH = 258;
		((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MAX_MATCH_17 = ((int32_t)258);
		// private static readonly int MIN_LOOKAHEAD = (MAX_MATCH + MIN_MATCH + 1);
		int32_t L_11 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MAX_MATCH_17;
		int32_t L_12 = ((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_11, L_12)), 1));
		// private static readonly int HEAP_SIZE = (2 * InternalConstants.L_CODES + 1);
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var);
		int32_t L_13 = ((InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t6B28F7F1223D143879DE1314423836BA2DF88C06_il2cpp_TypeInfo_var))->___L_CODES_5;
		((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___HEAP_SIZE_19 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_13)), 1));
		// private static readonly int END_BLOCK = 256;
		((DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B_il2cpp_TypeInfo_var))->___END_BLOCK_20 = ((int32_t)256);
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
int32_t CompressFunc_Invoke_m2F705D391F2B3B99EFA994DABBE061FB9FD56747_Multicast(CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0* __this, int32_t ___flush0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0* currentDelegate = reinterpret_cast<CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___flush0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t CompressFunc_Invoke_m2F705D391F2B3B99EFA994DABBE061FB9FD56747_Open(CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0* __this, int32_t ___flush0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___flush0, method);
}
int32_t CompressFunc_Invoke_m2F705D391F2B3B99EFA994DABBE061FB9FD56747_OpenStaticInvoker(CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0* __this, int32_t ___flush0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___flush0);
}
int32_t CompressFunc_Invoke_m2F705D391F2B3B99EFA994DABBE061FB9FD56747_ClosedStaticInvoker(CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0* __this, int32_t ___flush0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___flush0);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0 (CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0* __this, int32_t ___flush0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___flush0);

	return returnValue;
}
// System.Void Ionic.Zlib.DeflateManager/CompressFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressFunc__ctor_mD34A5FF9383EB8C9FF667C354A52712B647698DA (CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CompressFunc_Invoke_m2F705D391F2B3B99EFA994DABBE061FB9FD56747_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CompressFunc_Invoke_m2F705D391F2B3B99EFA994DABBE061FB9FD56747_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CompressFunc_Invoke_m2F705D391F2B3B99EFA994DABBE061FB9FD56747_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&CompressFunc_Invoke_m2F705D391F2B3B99EFA994DABBE061FB9FD56747_Multicast;
}
// Ionic.Zlib.BlockState Ionic.Zlib.DeflateManager/CompressFunc::Invoke(Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompressFunc_Invoke_m2F705D391F2B3B99EFA994DABBE061FB9FD56747 (CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0* __this, int32_t ___flush0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___flush0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Ionic.Zlib.DeflateManager/CompressFunc::BeginInvoke(Ionic.Zlib.FlushType,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompressFunc_BeginInvoke_mAE25D594FC0B6DBCD72688D7F09E55AD11D93DEA (CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0* __this, int32_t ___flush0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlushType_t997394DDD36D88966FBEEA1FEB8E22A193A02849_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(FlushType_t997394DDD36D88966FBEEA1FEB8E22A193A02849_il2cpp_TypeInfo_var, &___flush0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// Ionic.Zlib.BlockState Ionic.Zlib.DeflateManager/CompressFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompressFunc_EndInvoke_m15C1E991591DA38A34F4846D1C4216E8B44CE9F3 (CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ionic.Zlib.DeflateManager/Config::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Ionic.Zlib.DeflateFlavor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config__ctor_m59AC73EBB8635CC7D5CA94DAA68ABD971F865A58 (Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* __this, int32_t ___goodLength0, int32_t ___maxLazy1, int32_t ___niceLength2, int32_t ___maxChainLength3, int32_t ___flavor4, const RuntimeMethod* method) 
{
	{
		// private Config(int goodLength, int maxLazy, int niceLength, int maxChainLength, DeflateFlavor flavor)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.GoodLength = goodLength;
		int32_t L_0 = ___goodLength0;
		__this->___GoodLength_0 = L_0;
		// this.MaxLazy = maxLazy;
		int32_t L_1 = ___maxLazy1;
		__this->___MaxLazy_1 = L_1;
		// this.NiceLength = niceLength;
		int32_t L_2 = ___niceLength2;
		__this->___NiceLength_2 = L_2;
		// this.MaxChainLength = maxChainLength;
		int32_t L_3 = ___maxChainLength3;
		__this->___MaxChainLength_3 = L_3;
		// this.Flavor = flavor;
		int32_t L_4 = ___flavor4;
		__this->___Flavor_4 = L_4;
		// }
		return;
	}
}
// Ionic.Zlib.DeflateManager/Config Ionic.Zlib.DeflateManager/Config::Lookup(Ionic.Zlib.CompressionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* Config_Lookup_m9F57580134B3438DA12448A331B6360C71FFA2D4 (int32_t ___level0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Table[(int)level];
		il2cpp_codegen_runtime_class_init_inline(Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_il2cpp_TypeInfo_var);
		ConfigU5BU5D_t2FC24C5A411345379CB7AFEA699D06AB27002DF2* L_0 = ((Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_StaticFields*)il2cpp_codegen_static_fields_for(Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_il2cpp_TypeInfo_var))->___Table_5;
		int32_t L_1 = ___level0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void Ionic.Zlib.DeflateManager/Config::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config__cctor_m8334892FB523C84A8AF1F572ED541A3B2CF18C61 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigU5BU5D_t2FC24C5A411345379CB7AFEA699D06AB27002DF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Table = new Config[] {
		//     new Config(0, 0, 0, 0, DeflateFlavor.Store),
		//     new Config(4, 4, 8, 4, DeflateFlavor.Fast),
		//     new Config(4, 5, 16, 8, DeflateFlavor.Fast),
		//     new Config(4, 6, 32, 32, DeflateFlavor.Fast),
		// 
		//     new Config(4, 4, 16, 16, DeflateFlavor.Slow),
		//     new Config(8, 16, 32, 32, DeflateFlavor.Slow),
		//     new Config(8, 16, 128, 128, DeflateFlavor.Slow),
		//     new Config(8, 32, 128, 256, DeflateFlavor.Slow),
		//     new Config(32, 128, 258, 1024, DeflateFlavor.Slow),
		//     new Config(32, 258, 258, 4096, DeflateFlavor.Slow),
		// };
		ConfigU5BU5D_t2FC24C5A411345379CB7AFEA699D06AB27002DF2* L_0 = (ConfigU5BU5D_t2FC24C5A411345379CB7AFEA699D06AB27002DF2*)(ConfigU5BU5D_t2FC24C5A411345379CB7AFEA699D06AB27002DF2*)SZArrayNew(ConfigU5BU5D_t2FC24C5A411345379CB7AFEA699D06AB27002DF2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ConfigU5BU5D_t2FC24C5A411345379CB7AFEA699D06AB27002DF2* L_1 = L_0;
		Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* L_2 = (Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8*)il2cpp_codegen_object_new(Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Config__ctor_m59AC73EBB8635CC7D5CA94DAA68ABD971F865A58(L_2, 0, 0, 0, 0, 0, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8*)L_2);
		ConfigU5BU5D_t2FC24C5A411345379CB7AFEA699D06AB27002DF2* L_3 = L_1;
		Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* L_4 = (Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8*)il2cpp_codegen_object_new(Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Config__ctor_m59AC73EBB8635CC7D5CA94DAA68ABD971F865A58(L_4, 4, 4, 8, 4, 1, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8*)L_4);
		ConfigU5BU5D_t2FC24C5A411345379CB7AFEA699D06AB27002DF2* L_5 = L_3;
		Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* L_6 = (Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8*)il2cpp_codegen_object_new(Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Config__ctor_m59AC73EBB8635CC7D5CA94DAA68ABD971F865A58(L_6, 4, 5, ((int32_t)16), 8, 1, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8*)L_6);
		ConfigU5BU5D_t2FC24C5A411345379CB7AFEA699D06AB27002DF2* L_7 = L_5;
		Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* L_8 = (Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8*)il2cpp_codegen_object_new(Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Config__ctor_m59AC73EBB8635CC7D5CA94DAA68ABD971F865A58(L_8, 4, 6, ((int32_t)32), ((int32_t)32), 1, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8*)L_8);
		ConfigU5BU5D_t2FC24C5A411345379CB7AFEA699D06AB27002DF2* L_9 = L_7;
		Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* L_10 = (Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8*)il2cpp_codegen_object_new(Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Config__ctor_m59AC73EBB8635CC7D5CA94DAA68ABD971F865A58(L_10, 4, 4, ((int32_t)16), ((int32_t)16), 2, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8*)L_10);
		ConfigU5BU5D_t2FC24C5A411345379CB7AFEA699D06AB27002DF2* L_11 = L_9;
		Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* L_12 = (Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8*)il2cpp_codegen_object_new(Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Config__ctor_m59AC73EBB8635CC7D5CA94DAA68ABD971F865A58(L_12, 8, ((int32_t)16), ((int32_t)32), ((int32_t)32), 2, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8*)L_12);
		ConfigU5BU5D_t2FC24C5A411345379CB7AFEA699D06AB27002DF2* L_13 = L_11;
		Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* L_14 = (Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8*)il2cpp_codegen_object_new(Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Config__ctor_m59AC73EBB8635CC7D5CA94DAA68ABD971F865A58(L_14, 8, ((int32_t)16), ((int32_t)128), ((int32_t)128), 2, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8*)L_14);
		ConfigU5BU5D_t2FC24C5A411345379CB7AFEA699D06AB27002DF2* L_15 = L_13;
		Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* L_16 = (Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8*)il2cpp_codegen_object_new(Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Config__ctor_m59AC73EBB8635CC7D5CA94DAA68ABD971F865A58(L_16, 8, ((int32_t)32), ((int32_t)128), ((int32_t)256), 2, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8*)L_16);
		ConfigU5BU5D_t2FC24C5A411345379CB7AFEA699D06AB27002DF2* L_17 = L_15;
		Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* L_18 = (Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8*)il2cpp_codegen_object_new(Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Config__ctor_m59AC73EBB8635CC7D5CA94DAA68ABD971F865A58(L_18, ((int32_t)32), ((int32_t)128), ((int32_t)258), ((int32_t)1024), 2, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8*)L_18);
		ConfigU5BU5D_t2FC24C5A411345379CB7AFEA699D06AB27002DF2* L_19 = L_17;
		Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8* L_20 = (Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8*)il2cpp_codegen_object_new(Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Config__ctor_m59AC73EBB8635CC7D5CA94DAA68ABD971F865A58(L_20, ((int32_t)32), ((int32_t)258), ((int32_t)258), ((int32_t)4096), 2, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8*)L_20);
		((Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_StaticFields*)il2cpp_codegen_static_fields_for(Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_il2cpp_TypeInfo_var))->___Table_5 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_StaticFields*)il2cpp_codegen_static_fields_for(Config_tD09B8B674376B3791E25EAA0FB4339798B5BB9A8_il2cpp_TypeInfo_var))->___Table_5), (void*)L_19);
		// }
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
// System.Void Ionic.Zlib.DeflateStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_mFEA868B00EA35DE2FEA67052B5152FE966CD1BF1 (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, const RuntimeMethod* method) 
{
	{
		// : this(stream, mode, CompressionLevel.Default, false)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		DeflateStream__ctor_mCA9C5FE3A80F93E9761399F38CD6F35EFA0FEB18(__this, L_0, L_1, 6, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.DeflateStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode,Ionic.Zlib.CompressionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_mBA94CDF33B2A8730C88CD968C795D94F9EF6B133 (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, int32_t ___level2, const RuntimeMethod* method) 
{
	{
		// : this(stream, mode, level, false)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		int32_t L_2 = ___level2;
		DeflateStream__ctor_mCA9C5FE3A80F93E9761399F38CD6F35EFA0FEB18(__this, L_0, L_1, L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.DeflateStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m304ECEF0C8A236D5FDAC6EDDC68A64052BC6D163 (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method) 
{
	{
		// : this(stream, mode, CompressionLevel.Default, leaveOpen)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		bool L_2 = ___leaveOpen2;
		DeflateStream__ctor_mCA9C5FE3A80F93E9761399F38CD6F35EFA0FEB18(__this, L_0, L_1, 6, L_2, NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.DeflateStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode,Ionic.Zlib.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_mCA9C5FE3A80F93E9761399F38CD6F35EFA0FEB18 (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, int32_t ___level2, bool ___leaveOpen3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DeflateStream(System.IO.Stream stream, CompressionMode mode, CompressionLevel level, bool leaveOpen)
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		// _innerStream = stream;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		__this->____innerStream_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerStream_6), (void*)L_0);
		// _baseStream = new ZlibBaseStream(stream, mode, level, ZlibStreamFlavor.DEFLATE, leaveOpen);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream0;
		int32_t L_2 = ___mode1;
		int32_t L_3 = ___level2;
		bool L_4 = ___leaveOpen3;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_5 = (ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C*)il2cpp_codegen_object_new(ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ZlibBaseStream__ctor_m926C81FB1752D5F72BEC497DABFBDF524FDEB9BD(L_5, L_1, L_2, L_3, ((int32_t)1951), L_4, NULL);
		__this->____baseStream_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____baseStream_5), (void*)L_5);
		// }
		return;
	}
}
// Ionic.Zlib.FlushType Ionic.Zlib.DeflateStream::get_FlushMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_get_FlushMode_m08A8609CF7C14EF76C268A8634E288E6B3D4EDA2 (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, const RuntimeMethod* method) 
{
	{
		// get { return (this._baseStream._flushMode); }
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_0 = __this->____baseStream_5;
		NullCheck(L_0);
		int32_t L_1 = L_0->____flushMode_7;
		return L_1;
	}
}
// System.Void Ionic.Zlib.DeflateStream::set_FlushMode(Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_set_FlushMode_m31F94F3B38D9D630F45A59B4629F87AB7084A244 (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// if (_disposed) throw new ObjectDisposedException("DeflateStream");
		bool L_0 = __this->____disposed_7;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("DeflateStream");
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_FlushMode_m31F94F3B38D9D630F45A59B4629F87AB7084A244_RuntimeMethod_var)));
	}

IL_0013:
	{
		// this._baseStream._flushMode = value;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_2 = __this->____baseStream_5;
		int32_t L_3 = ___value0;
		NullCheck(L_2);
		L_2->____flushMode_7 = L_3;
		// }
		return;
	}
}
// System.Int32 Ionic.Zlib.DeflateStream::get_BufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_get_BufferSize_m5E6A281D0CADBF22F25AE5949BD13B7BED11BDE1 (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, const RuntimeMethod* method) 
{
	{
		// return this._baseStream._bufferSize;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_0 = __this->____baseStream_5;
		NullCheck(L_0);
		int32_t L_1 = L_0->____bufferSize_13;
		return L_1;
	}
}
// System.Void Ionic.Zlib.DeflateStream::set_BufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_set_BufferSize_m19B3A43370B75E259DDB7014A976387F91FD0361 (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// if (_disposed) throw new ObjectDisposedException("DeflateStream");
		bool L_0 = __this->____disposed_7;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("DeflateStream");
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_BufferSize_m19B3A43370B75E259DDB7014A976387F91FD0361_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (this._baseStream._workingBuffer != null)
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_2 = __this->____baseStream_5;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2->____workingBuffer_12;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// throw new ZlibException("The working buffer is already set.");
		ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1* L_4 = (ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ZlibException__ctor_m64D791E8513A445C3D6E672332E2EC5DD6EE76E4(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9A538D87C765D16B9229A517D7D588C30AF3D5AE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_BufferSize_m19B3A43370B75E259DDB7014A976387F91FD0361_RuntimeMethod_var)));
	}

IL_002b:
	{
		// if (value < ZlibConstants.WorkingBufferSizeMin)
		int32_t L_5 = ___value0;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)1024))))
		{
			goto IL_0053;
		}
	}
	{
		// throw new ZlibException(String.Format("Don't be silly. {0} bytes?? Use a bigger buffer, at least {1}.", value, ZlibConstants.WorkingBufferSizeMin));
		int32_t L_6 = ___value0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_7);
		int32_t L_9 = ((int32_t)1024);
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3301E1AE1BCA5C134551471AB287F2443E658618)), L_8, L_10, NULL);
		ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1* L_12 = (ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ZlibException__ctor_m64D791E8513A445C3D6E672332E2EC5DD6EE76E4(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_BufferSize_m19B3A43370B75E259DDB7014A976387F91FD0361_RuntimeMethod_var)));
	}

IL_0053:
	{
		// this._baseStream._bufferSize = value;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_13 = __this->____baseStream_5;
		int32_t L_14 = ___value0;
		NullCheck(L_13);
		L_13->____bufferSize_13 = L_14;
		// }
		return;
	}
}
// Ionic.Zlib.CompressionStrategy Ionic.Zlib.DeflateStream::get_Strategy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_get_Strategy_m5D7DB14B1964CCD914172C9F368937CA88AC8C8D (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, const RuntimeMethod* method) 
{
	{
		// return this._baseStream.Strategy;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_0 = __this->____baseStream_5;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Strategy_16;
		return L_1;
	}
}
// System.Void Ionic.Zlib.DeflateStream::set_Strategy(Ionic.Zlib.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_set_Strategy_m2A5B66CF41F4DF20E3C9FF62E8DB34837B219F1B (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// if (_disposed) throw new ObjectDisposedException("DeflateStream");
		bool L_0 = __this->____disposed_7;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("DeflateStream");
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_Strategy_m2A5B66CF41F4DF20E3C9FF62E8DB34837B219F1B_RuntimeMethod_var)));
	}

IL_0013:
	{
		// this._baseStream.Strategy = value;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_2 = __this->____baseStream_5;
		int32_t L_3 = ___value0;
		NullCheck(L_2);
		L_2->___Strategy_16 = L_3;
		// }
		return;
	}
}
// System.Int64 Ionic.Zlib.DeflateStream::get_TotalIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_TotalIn_m21D1469AC41C3A62EAC3BF96C49907FED824BD78 (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, const RuntimeMethod* method) 
{
	{
		// return this._baseStream._z.TotalBytesIn;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_0 = __this->____baseStream_5;
		NullCheck(L_0);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_1 = L_0->____z_5;
		NullCheck(L_1);
		int64_t L_2 = L_1->___TotalBytesIn_3;
		return L_2;
	}
}
// System.Int64 Ionic.Zlib.DeflateStream::get_TotalOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_TotalOut_m37EAB206068C86630EC2392BA62CBE2297BA6416 (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, const RuntimeMethod* method) 
{
	{
		// return this._baseStream._z.TotalBytesOut;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_0 = __this->____baseStream_5;
		NullCheck(L_0);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_1 = L_0->____z_5;
		NullCheck(L_1);
		int64_t L_2 = L_1->___TotalBytesOut_7;
		return L_2;
	}
}
// System.Void Ionic.Zlib.DeflateStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Dispose_m65D49D0024504B7D102EFB6D2E77F1991EAE23FD (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{// begin finally (depth: 1)
				// base.Dispose(disposing);
				bool L_0 = ___disposing0;
				Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_0, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (!_disposed)
				bool L_1 = __this->____disposed_7;
				if (L_1)
				{
					goto IL_0025_1;
				}
			}
			{
				// if (disposing && (this._baseStream != null))
				bool L_2 = ___disposing0;
				if (!L_2)
				{
					goto IL_001e_1;
				}
			}
			{
				ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_3 = __this->____baseStream_5;
				if (!L_3)
				{
					goto IL_001e_1;
				}
			}
			{
				// this._baseStream.Close();
				ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_4 = __this->____baseStream_5;
				NullCheck(L_4);
				VirtualActionInvoker0::Invoke(18 /* System.Void System.IO.Stream::Close() */, L_4);
			}

IL_001e_1:
			{
				// _disposed = true;
				__this->____disposed_7 = (bool)1;
			}

IL_0025_1:
			{
				// }
				goto IL_002f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Boolean Ionic.Zlib.DeflateStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanRead_m8E4A480670AACA7299AFC7078928520A82283560 (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, const RuntimeMethod* method) 
{
	{
		// if (_disposed) throw new ObjectDisposedException("DeflateStream");
		bool L_0 = __this->____disposed_7;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("DeflateStream");
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_CanRead_m8E4A480670AACA7299AFC7078928520A82283560_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _baseStream._stream.CanRead;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_2 = __this->____baseStream_5;
		NullCheck(L_2);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = L_2->____stream_15;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_3);
		return L_4;
	}
}
// System.Boolean Ionic.Zlib.DeflateStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanSeek_m11BD799EC12EEA25FD7D8C2084C9BAAD325E3D5A (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, const RuntimeMethod* method) 
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Boolean Ionic.Zlib.DeflateStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanWrite_m839DC8FA099EA9DA90504AA157EFD2206441DB23 (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, const RuntimeMethod* method) 
{
	{
		// if (_disposed) throw new ObjectDisposedException("DeflateStream");
		bool L_0 = __this->____disposed_7;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("DeflateStream");
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_CanWrite_m839DC8FA099EA9DA90504AA157EFD2206441DB23_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _baseStream._stream.CanWrite;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_2 = __this->____baseStream_5;
		NullCheck(L_2);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = L_2->____stream_15;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_3);
		return L_4;
	}
}
// System.Void Ionic.Zlib.DeflateStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Flush_m7ED3CD39FC51F29FBE96F593CCFDAFB4416D3717 (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, const RuntimeMethod* method) 
{
	{
		// if (_disposed) throw new ObjectDisposedException("DeflateStream");
		bool L_0 = __this->____disposed_7;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("DeflateStream");
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Flush_m7ED3CD39FC51F29FBE96F593CCFDAFB4416D3717_RuntimeMethod_var)));
	}

IL_0013:
	{
		// _baseStream.Flush();
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_2 = __this->____baseStream_5;
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(20 /* System.Void System.IO.Stream::Flush() */, L_2);
		// }
		return;
	}
}
// System.Int64 Ionic.Zlib.DeflateStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Length_m0A1891F9175C8E6286DEBA490B8EB1BA67760E91 (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, const RuntimeMethod* method) 
{
	{
		// get { throw new NotImplementedException(); }
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_Length_m0A1891F9175C8E6286DEBA490B8EB1BA67760E91_RuntimeMethod_var)));
	}
}
// System.Int64 Ionic.Zlib.DeflateStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Position_mAF1E4AC4EBA7F89310F53F442228A01C25A54E0A (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, const RuntimeMethod* method) 
{
	{
		// if (this._baseStream._streamMode == Ionic.Zlib.ZlibBaseStream.StreamMode.Writer)
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_0 = __this->____baseStream_5;
		NullCheck(L_0);
		int32_t L_1 = L_0->____streamMode_6;
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// return this._baseStream._z.TotalBytesOut;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_2 = __this->____baseStream_5;
		NullCheck(L_2);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_3 = L_2->____z_5;
		NullCheck(L_3);
		int64_t L_4 = L_3->___TotalBytesOut_7;
		return L_4;
	}

IL_001e:
	{
		// if (this._baseStream._streamMode == Ionic.Zlib.ZlibBaseStream.StreamMode.Reader)
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_5 = __this->____baseStream_5;
		NullCheck(L_5);
		int32_t L_6 = L_5->____streamMode_6;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_003d;
		}
	}
	{
		// return this._baseStream._z.TotalBytesIn;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_7 = __this->____baseStream_5;
		NullCheck(L_7);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_8 = L_7->____z_5;
		NullCheck(L_8);
		int64_t L_9 = L_8->___TotalBytesIn_3;
		return L_9;
	}

IL_003d:
	{
		// return 0;
		return ((int64_t)0);
	}
}
// System.Void Ionic.Zlib.DeflateStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_set_Position_mF7ACDBFB0B5359E6C67BFF76F828A1C1298B5625 (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { throw new NotImplementedException(); }
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_Position_mF7ACDBFB0B5359E6C67BFF76F828A1C1298B5625_RuntimeMethod_var)));
	}
}
// System.Int32 Ionic.Zlib.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_Read_m1CCDD94E6C5C2791DA2C2EB01984496119DCEF92 (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		// if (_disposed) throw new ObjectDisposedException("DeflateStream");
		bool L_0 = __this->____disposed_7;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("DeflateStream");
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m1CCDD94E6C5C2791DA2C2EB01984496119DCEF92_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _baseStream.Read(buffer, offset, count);
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_2 = __this->____baseStream_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		int32_t L_6;
		L_6 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(32 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Int64 Ionic.Zlib.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_Seek_m236C21CE99EFD7C2720DF7E4566EB2AA8F1BB79F (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Seek_m236C21CE99EFD7C2720DF7E4566EB2AA8F1BB79F_RuntimeMethod_var)));
	}
}
// System.Void Ionic.Zlib.DeflateStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_SetLength_m50D5BCF3B1C377F677B53EE8E13051A7BB943A25 (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_SetLength_m50D5BCF3B1C377F677B53EE8E13051A7BB943A25_RuntimeMethod_var)));
	}
}
// System.Void Ionic.Zlib.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Write_m83599F2E390C155DF76540DF2E080BE52DFE3A92 (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		// if (_disposed) throw new ObjectDisposedException("DeflateStream");
		bool L_0 = __this->____disposed_7;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("DeflateStream");
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_m83599F2E390C155DF76540DF2E080BE52DFE3A92_RuntimeMethod_var)));
	}

IL_0013:
	{
		// _baseStream.Write(buffer, offset, count);
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_2 = __this->____baseStream_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
		// }
		return;
	}
}
// System.Byte[] Ionic.Zlib.DeflateStream::CompressString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DeflateStream_CompressString_m9EBEA5540CD2F4528C02FC37298B4A1471279053 (String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		// using (var ms = new System.IO.MemoryStream())
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0020:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0029;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0029:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// System.IO.Stream compressor =
			//     new DeflateStream(ms, CompressionMode.Compress, CompressionLevel.BestCompression);
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
			DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* L_4 = (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB*)il2cpp_codegen_object_new(DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			DeflateStream__ctor_mBA94CDF33B2A8730C88CD968C795D94F9EF6B133(L_4, L_3, 0, ((int32_t)9), NULL);
			V_1 = L_4;
			// ZlibBaseStream.CompressString(s, compressor);
			String_t* L_5 = ___s0;
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = V_1;
			ZlibBaseStream_CompressString_mB559C98BBC5393E1AC56745D519E16C3BF806E12(L_5, L_6, NULL);
			// return ms.ToArray();
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_7 = V_0;
			NullCheck(L_7);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
			L_8 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(41 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_7);
			V_2 = L_8;
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		return L_9;
	}
}
// System.Byte[] Ionic.Zlib.DeflateStream::CompressBuffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DeflateStream_CompressBuffer_m6B3A8812916CE2C01688D7FE896F460AF6A540B9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		// using (var ms = new System.IO.MemoryStream())
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0020:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0029;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0029:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// System.IO.Stream compressor =
			//     new DeflateStream( ms, CompressionMode.Compress, CompressionLevel.BestCompression );
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
			DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* L_4 = (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB*)il2cpp_codegen_object_new(DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			DeflateStream__ctor_mBA94CDF33B2A8730C88CD968C795D94F9EF6B133(L_4, L_3, 0, ((int32_t)9), NULL);
			V_1 = L_4;
			// ZlibBaseStream.CompressBuffer(b, compressor);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___b0;
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = V_1;
			ZlibBaseStream_CompressBuffer_mB2D9C3C265B44CC77D27A58910CFD02805DC11CE(L_5, L_6, NULL);
			// return ms.ToArray();
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_7 = V_0;
			NullCheck(L_7);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
			L_8 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(41 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_7);
			V_2 = L_8;
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		return L_9;
	}
}
// System.String Ionic.Zlib.DeflateStream::UncompressString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeflateStream_UncompressString_mB38725EF25FA750F106FDE3C5ACC3A3B38DC3837 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// using (var input = new System.IO.MemoryStream(compressed))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___compressed0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0019:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0022;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// System.IO.Stream decompressor =
			//     new DeflateStream(input, CompressionMode.Decompress);
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_0;
			DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* L_5 = (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB*)il2cpp_codegen_object_new(DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			DeflateStream__ctor_mFEA868B00EA35DE2FEA67052B5152FE966CD1BF1(L_5, L_4, 1, NULL);
			V_1 = L_5;
			// return ZlibBaseStream.UncompressString(compressed, decompressor);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___compressed0;
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = V_1;
			String_t* L_8;
			L_8 = ZlibBaseStream_UncompressString_m16DB78C4359617D4CA18C974AC4D5D29E68C7F9F(L_6, L_7, NULL);
			V_2 = L_8;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		String_t* L_9 = V_2;
		return L_9;
	}
}
// System.Byte[] Ionic.Zlib.DeflateStream::UncompressBuffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DeflateStream_UncompressBuffer_mDEB7ADA1510F5332A889D6D547222BA453969035 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		// using (var input = new System.IO.MemoryStream(compressed))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___compressed0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0019:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0022;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// System.IO.Stream decompressor =
			//     new DeflateStream( input, CompressionMode.Decompress );
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_0;
			DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB* L_5 = (DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB*)il2cpp_codegen_object_new(DeflateStream_t7645AB6245FA139FF80593C7B07324255D38A8CB_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			DeflateStream__ctor_mFEA868B00EA35DE2FEA67052B5152FE966CD1BF1(L_5, L_4, 1, NULL);
			V_1 = L_5;
			// return ZlibBaseStream.UncompressBuffer(compressed, decompressor);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___compressed0;
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
			L_8 = ZlibBaseStream_UncompressBuffer_m2C10229AF2D45D62694FDC060F6457A5D7598855(L_6, L_7, NULL);
			V_2 = L_8;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		return L_9;
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
// System.String Ionic.Zlib.GZipStream::get_Comment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GZipStream_get_Comment_m854751A0B57F628205B127CA73BE5CD5F9D41D9B (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, const RuntimeMethod* method) 
{
	{
		// return _Comment;
		String_t* L_0 = __this->____Comment_11;
		return L_0;
	}
}
// System.Void Ionic.Zlib.GZipStream::set_Comment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_set_Comment_m5C85315792410807392DDBC40D65F7331420D5E4 (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// if (_disposed) throw new ObjectDisposedException("GZipStream");
		bool L_0 = __this->____disposed_8;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("GZipStream");
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_set_Comment_m5C85315792410807392DDBC40D65F7331420D5E4_RuntimeMethod_var)));
	}

IL_0013:
	{
		// _Comment = value;
		String_t* L_2 = ___value0;
		__this->____Comment_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Comment_11), (void*)L_2);
		// }
		return;
	}
}
// System.String Ionic.Zlib.GZipStream::get_FileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GZipStream_get_FileName_m7E2FD03B41897EE52074E71085F676DDFD42A7BD (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, const RuntimeMethod* method) 
{
	{
		// get { return _FileName; }
		String_t* L_0 = __this->____FileName_10;
		return L_0;
	}
}
// System.Void Ionic.Zlib.GZipStream::set_FileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_set_FileName_m590D5197014AB4AD008CC3E3F8E4711827050970 (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_disposed) throw new ObjectDisposedException("GZipStream");
		bool L_0 = __this->____disposed_8;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("GZipStream");
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_set_FileName_m590D5197014AB4AD008CC3E3F8E4711827050970_RuntimeMethod_var)));
	}

IL_0013:
	{
		// _FileName = value;
		String_t* L_2 = ___value0;
		__this->____FileName_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____FileName_10), (void*)L_2);
		// if (_FileName == null) return;
		String_t* L_3 = __this->____FileName_10;
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		// if (_FileName == null) return;
		return;
	}

IL_0023:
	{
		// if (_FileName.IndexOf("/") != -1)
		String_t* L_4 = __this->____FileName_10;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_4, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, NULL);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0051;
		}
	}
	{
		// _FileName = _FileName.Replace("/", "\\");
		String_t* L_6 = __this->____FileName_10;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_6, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, NULL);
		__this->____FileName_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____FileName_10), (void*)L_7);
	}

IL_0051:
	{
		// if (_FileName.EndsWith("\\"))
		String_t* L_8 = __this->____FileName_10;
		NullCheck(L_8);
		bool L_9;
		L_9 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_8, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, NULL);
		if (!L_9)
		{
			goto IL_006e;
		}
	}
	{
		// throw new Exception("Illegal filename");
		Exception_t* L_10 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9FC4F45EF48BB08BC4D6C5BC2A71B64139E0FEE4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_set_FileName_m590D5197014AB4AD008CC3E3F8E4711827050970_RuntimeMethod_var)));
	}

IL_006e:
	{
		// if (_FileName.IndexOf("\\") != -1)
		String_t* L_11 = __this->____FileName_10;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_11, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, NULL);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0092;
		}
	}
	{
		// _FileName = Path.GetFileName(_FileName);
		String_t* L_13 = __this->____FileName_10;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = Path_GetFileName_mEBC73E0C8D8C56214D1DA4BA8409C5B5F00457A5(L_13, NULL);
		__this->____FileName_10 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____FileName_10), (void*)L_14);
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Int32 Ionic.Zlib.GZipStream::get_Crc32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_get_Crc32_m8734DD43BB777F88BFF2563C884543768E963D68 (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, const RuntimeMethod* method) 
{
	{
		// public int Crc32 { get { return _Crc32; } }
		int32_t L_0 = __this->____Crc32_12;
		return L_0;
	}
}
// System.Void Ionic.Zlib.GZipStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_mE228217444EB9CAF2B1A8A40CA0CA0AA455E5B14 (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, const RuntimeMethod* method) 
{
	{
		// : this(stream, mode, CompressionLevel.Default, false)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		GZipStream__ctor_m661BF6E4F7336945F343FA3EE3A025E19FEDC449(__this, L_0, L_1, 6, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.GZipStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode,Ionic.Zlib.CompressionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_m1314CA02AE3B840949484828C4D58A6BE24BBECC (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, int32_t ___level2, const RuntimeMethod* method) 
{
	{
		// : this(stream, mode, level, false)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		int32_t L_2 = ___level2;
		GZipStream__ctor_m661BF6E4F7336945F343FA3EE3A025E19FEDC449(__this, L_0, L_1, L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.GZipStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_m0B2EE4E73A4B7FA1DEC10E056DD4492AE2FF4381 (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method) 
{
	{
		// : this(stream, mode, CompressionLevel.Default, leaveOpen)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		bool L_2 = ___leaveOpen2;
		GZipStream__ctor_m661BF6E4F7336945F343FA3EE3A025E19FEDC449(__this, L_0, L_1, 6, L_2, NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.GZipStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode,Ionic.Zlib.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_m661BF6E4F7336945F343FA3EE3A025E19FEDC449 (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, int32_t ___level2, bool ___leaveOpen3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GZipStream(Stream stream, CompressionMode mode, CompressionLevel level, bool leaveOpen)
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		// _baseStream = new ZlibBaseStream(stream, mode, level, ZlibStreamFlavor.GZIP, leaveOpen);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		int32_t L_2 = ___level2;
		bool L_3 = ___leaveOpen3;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_4 = (ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C*)il2cpp_codegen_object_new(ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ZlibBaseStream__ctor_m926C81FB1752D5F72BEC497DABFBDF524FDEB9BD(L_4, L_0, L_1, L_2, ((int32_t)1952), L_3, NULL);
		__this->____baseStream_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____baseStream_7), (void*)L_4);
		// }
		return;
	}
}
// Ionic.Zlib.FlushType Ionic.Zlib.GZipStream::get_FlushMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_get_FlushMode_mC8230DE2204D9F4C83F8AC0364B247381AEB83D3 (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, const RuntimeMethod* method) 
{
	{
		// get { return (this._baseStream._flushMode); }
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_0 = __this->____baseStream_7;
		NullCheck(L_0);
		int32_t L_1 = L_0->____flushMode_7;
		return L_1;
	}
}
// System.Void Ionic.Zlib.GZipStream::set_FlushMode(Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_set_FlushMode_m1E17ED3168B5EA1C27F68C0F35D0CBE467A463DE (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// if (_disposed) throw new ObjectDisposedException("GZipStream");
		bool L_0 = __this->____disposed_8;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("GZipStream");
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_set_FlushMode_m1E17ED3168B5EA1C27F68C0F35D0CBE467A463DE_RuntimeMethod_var)));
	}

IL_0013:
	{
		// this._baseStream._flushMode = value;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_2 = __this->____baseStream_7;
		int32_t L_3 = ___value0;
		NullCheck(L_2);
		L_2->____flushMode_7 = L_3;
		// }
		return;
	}
}
// System.Int32 Ionic.Zlib.GZipStream::get_BufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_get_BufferSize_mCCAC7E78E2388E3A49030B9AC8A340FE0BA8D4ED (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, const RuntimeMethod* method) 
{
	{
		// return this._baseStream._bufferSize;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_0 = __this->____baseStream_7;
		NullCheck(L_0);
		int32_t L_1 = L_0->____bufferSize_13;
		return L_1;
	}
}
// System.Void Ionic.Zlib.GZipStream::set_BufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_set_BufferSize_mE4375839A6606CE1C12C0039FB896C09A689A26A (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// if (_disposed) throw new ObjectDisposedException("GZipStream");
		bool L_0 = __this->____disposed_8;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("GZipStream");
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_set_BufferSize_mE4375839A6606CE1C12C0039FB896C09A689A26A_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (this._baseStream._workingBuffer != null)
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_2 = __this->____baseStream_7;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2->____workingBuffer_12;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// throw new ZlibException("The working buffer is already set.");
		ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1* L_4 = (ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ZlibException__ctor_m64D791E8513A445C3D6E672332E2EC5DD6EE76E4(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9A538D87C765D16B9229A517D7D588C30AF3D5AE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_set_BufferSize_mE4375839A6606CE1C12C0039FB896C09A689A26A_RuntimeMethod_var)));
	}

IL_002b:
	{
		// if (value < ZlibConstants.WorkingBufferSizeMin)
		int32_t L_5 = ___value0;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)1024))))
		{
			goto IL_0053;
		}
	}
	{
		// throw new ZlibException(String.Format("Don't be silly. {0} bytes?? Use a bigger buffer, at least {1}.", value, ZlibConstants.WorkingBufferSizeMin));
		int32_t L_6 = ___value0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_7);
		int32_t L_9 = ((int32_t)1024);
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3301E1AE1BCA5C134551471AB287F2443E658618)), L_8, L_10, NULL);
		ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1* L_12 = (ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ZlibException__ctor_m64D791E8513A445C3D6E672332E2EC5DD6EE76E4(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_set_BufferSize_mE4375839A6606CE1C12C0039FB896C09A689A26A_RuntimeMethod_var)));
	}

IL_0053:
	{
		// this._baseStream._bufferSize = value;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_13 = __this->____baseStream_7;
		int32_t L_14 = ___value0;
		NullCheck(L_13);
		L_13->____bufferSize_13 = L_14;
		// }
		return;
	}
}
// System.Int64 Ionic.Zlib.GZipStream::get_TotalIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_get_TotalIn_m5D9A72085A36EB66D692B04672B7BB581434B206 (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, const RuntimeMethod* method) 
{
	{
		// return this._baseStream._z.TotalBytesIn;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_0 = __this->____baseStream_7;
		NullCheck(L_0);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_1 = L_0->____z_5;
		NullCheck(L_1);
		int64_t L_2 = L_1->___TotalBytesIn_3;
		return L_2;
	}
}
// System.Int64 Ionic.Zlib.GZipStream::get_TotalOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_get_TotalOut_m49502457EF4F805AB1F32B3D0C5231BE5D8DB5CD (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, const RuntimeMethod* method) 
{
	{
		// return this._baseStream._z.TotalBytesOut;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_0 = __this->____baseStream_7;
		NullCheck(L_0);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_1 = L_0->____z_5;
		NullCheck(L_1);
		int64_t L_2 = L_1->___TotalBytesOut_7;
		return L_2;
	}
}
// System.Void Ionic.Zlib.GZipStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Dispose_mF35C20EB4DC9EAAF4C5D0FF174CC9BB3BDB25817 (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				// base.Dispose(disposing);
				bool L_0 = ___disposing0;
				Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_0, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (!_disposed)
				bool L_1 = __this->____disposed_8;
				if (L_1)
				{
					goto IL_0036_1;
				}
			}
			{
				// if (disposing && (this._baseStream != null))
				bool L_2 = ___disposing0;
				if (!L_2)
				{
					goto IL_002f_1;
				}
			}
			{
				ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_3 = __this->____baseStream_7;
				if (!L_3)
				{
					goto IL_002f_1;
				}
			}
			{
				// this._baseStream.Close();
				ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_4 = __this->____baseStream_7;
				NullCheck(L_4);
				VirtualActionInvoker0::Invoke(18 /* System.Void System.IO.Stream::Close() */, L_4);
				// this._Crc32 = _baseStream.Crc32;
				ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_5 = __this->____baseStream_7;
				NullCheck(L_5);
				int32_t L_6;
				L_6 = ZlibBaseStream_get_Crc32_mD3DAFC4A89F5FCF614B801B78409B7871FD40E47(L_5, NULL);
				__this->____Crc32_12 = L_6;
			}

IL_002f_1:
			{
				// _disposed = true;
				__this->____disposed_8 = (bool)1;
			}

IL_0036_1:
			{
				// }
				goto IL_0040;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Boolean Ionic.Zlib.GZipStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanRead_mF48B7D8FF6CC5100172AC32DBFDD8716DD6963A2 (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, const RuntimeMethod* method) 
{
	{
		// if (_disposed) throw new ObjectDisposedException("GZipStream");
		bool L_0 = __this->____disposed_8;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("GZipStream");
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_get_CanRead_mF48B7D8FF6CC5100172AC32DBFDD8716DD6963A2_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _baseStream._stream.CanRead;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_2 = __this->____baseStream_7;
		NullCheck(L_2);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = L_2->____stream_15;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_3);
		return L_4;
	}
}
// System.Boolean Ionic.Zlib.GZipStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanSeek_mE9C168A3922F9591AE2C52555A83CC8F4A61DFB0 (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, const RuntimeMethod* method) 
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Boolean Ionic.Zlib.GZipStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanWrite_m93653AD803705874BD620C120CD75FA0B52D3190 (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, const RuntimeMethod* method) 
{
	{
		// if (_disposed) throw new ObjectDisposedException("GZipStream");
		bool L_0 = __this->____disposed_8;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("GZipStream");
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_get_CanWrite_m93653AD803705874BD620C120CD75FA0B52D3190_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _baseStream._stream.CanWrite;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_2 = __this->____baseStream_7;
		NullCheck(L_2);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = L_2->____stream_15;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_3);
		return L_4;
	}
}
// System.Void Ionic.Zlib.GZipStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Flush_m37F3AEB27192F94E1E4983B2E6B1824EB54CE674 (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, const RuntimeMethod* method) 
{
	{
		// if (_disposed) throw new ObjectDisposedException("GZipStream");
		bool L_0 = __this->____disposed_8;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("GZipStream");
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Flush_m37F3AEB27192F94E1E4983B2E6B1824EB54CE674_RuntimeMethod_var)));
	}

IL_0013:
	{
		// _baseStream.Flush();
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_2 = __this->____baseStream_7;
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(20 /* System.Void System.IO.Stream::Flush() */, L_2);
		// }
		return;
	}
}
// System.Int64 Ionic.Zlib.GZipStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_get_Length_mDD0B5E33682990CA53F3678A90A8F8C0FD86D2F6 (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, const RuntimeMethod* method) 
{
	{
		// get { throw new NotImplementedException(); }
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_get_Length_mDD0B5E33682990CA53F3678A90A8F8C0FD86D2F6_RuntimeMethod_var)));
	}
}
// System.Int64 Ionic.Zlib.GZipStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_get_Position_m348B568DB50C92784184EFCCF4D712B1635BC610 (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, const RuntimeMethod* method) 
{
	{
		// if (this._baseStream._streamMode == Ionic.Zlib.ZlibBaseStream.StreamMode.Writer)
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_0 = __this->____baseStream_7;
		NullCheck(L_0);
		int32_t L_1 = L_0->____streamMode_6;
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		// return this._baseStream._z.TotalBytesOut + _headerByteCount;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_2 = __this->____baseStream_7;
		NullCheck(L_2);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_3 = L_2->____z_5;
		NullCheck(L_3);
		int64_t L_4 = L_3->___TotalBytesOut_7;
		int32_t L_5 = __this->____headerByteCount_6;
		return ((int64_t)il2cpp_codegen_add(L_4, ((int64_t)L_5)));
	}

IL_0026:
	{
		// if (this._baseStream._streamMode == Ionic.Zlib.ZlibBaseStream.StreamMode.Reader)
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_6 = __this->____baseStream_7;
		NullCheck(L_6);
		int32_t L_7 = L_6->____streamMode_6;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0052;
		}
	}
	{
		// return this._baseStream._z.TotalBytesIn + this._baseStream._gzipHeaderByteCount;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_8 = __this->____baseStream_7;
		NullCheck(L_8);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_9 = L_8->____z_5;
		NullCheck(L_9);
		int64_t L_10 = L_9->___TotalBytesIn_3;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_11 = __this->____baseStream_7;
		NullCheck(L_11);
		int32_t L_12 = L_11->____gzipHeaderByteCount_21;
		return ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)L_12)));
	}

IL_0052:
	{
		// return 0;
		return ((int64_t)0);
	}
}
// System.Void Ionic.Zlib.GZipStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_set_Position_m99AB10650C9B4F5ECCECCA02A968BE28908514AD (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { throw new NotImplementedException(); }
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_set_Position_m99AB10650C9B4F5ECCECCA02A968BE28908514AD_RuntimeMethod_var)));
	}
}
// System.Int32 Ionic.Zlib.GZipStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_Read_m7858AA7980FE6A34749A53DA8DCC580543D1B6B2 (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// if (_disposed) throw new ObjectDisposedException("GZipStream");
		bool L_0 = __this->____disposed_8;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("GZipStream");
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Read_m7858AA7980FE6A34749A53DA8DCC580543D1B6B2_RuntimeMethod_var)));
	}

IL_0013:
	{
		// int n = _baseStream.Read(buffer, offset, count);
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_2 = __this->____baseStream_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		int32_t L_6;
		L_6 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(32 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
		// if (!_firstReadDone)
		bool L_7 = __this->____firstReadDone_9;
		G_B3_0 = L_6;
		if (L_7)
		{
			G_B4_0 = L_6;
			goto IL_0052;
		}
	}
	{
		// _firstReadDone = true;
		__this->____firstReadDone_9 = (bool)1;
		// FileName = _baseStream._GzipFileName;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_8 = __this->____baseStream_7;
		NullCheck(L_8);
		String_t* L_9 = L_8->____GzipFileName_18;
		GZipStream_set_FileName_m590D5197014AB4AD008CC3E3F8E4711827050970(__this, L_9, NULL);
		// Comment = _baseStream._GzipComment;
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_10 = __this->____baseStream_7;
		NullCheck(L_10);
		String_t* L_11 = L_10->____GzipComment_19;
		GZipStream_set_Comment_m5C85315792410807392DDBC40D65F7331420D5E4(__this, L_11, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0052:
	{
		// return n;
		return G_B4_0;
	}
}
// System.Int64 Ionic.Zlib.GZipStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_Seek_m9AB46F92968384DE5DF49DA9C40EB4841A1906B1 (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Seek_m9AB46F92968384DE5DF49DA9C40EB4841A1906B1_RuntimeMethod_var)));
	}
}
// System.Void Ionic.Zlib.GZipStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_SetLength_m9F58A88140B5C048D3B5FCC38D541D601518E2BC (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_SetLength_m9F58A88140B5C048D3B5FCC38D541D601518E2BC_RuntimeMethod_var)));
	}
}
// System.Void Ionic.Zlib.GZipStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Write_mDFF0B4C2E56337DEB90169916065CC15C3E232E5 (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		// if (_disposed) throw new ObjectDisposedException("GZipStream");
		bool L_0 = __this->____disposed_8;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("GZipStream");
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Write_mDFF0B4C2E56337DEB90169916065CC15C3E232E5_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (_baseStream._streamMode == Ionic.Zlib.ZlibBaseStream.StreamMode.Undefined)
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_2 = __this->____baseStream_7;
		NullCheck(L_2);
		int32_t L_3 = L_2->____streamMode_6;
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0042;
		}
	}
	{
		// if (_baseStream._wantCompress)
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_4 = __this->____baseStream_7;
		NullCheck(L_4);
		bool L_5;
		L_5 = ZlibBaseStream_get__wantCompress_mEAAD77712C5DDA963246FC820DA5002D38710743(L_4, NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		// _headerByteCount = EmitHeader();
		int32_t L_6;
		L_6 = GZipStream_EmitHeader_m50993A5FAA1EF0316693012FE1D7EA1A095E430B(__this, NULL);
		__this->____headerByteCount_6 = L_6;
		goto IL_0042;
	}

IL_003c:
	{
		// throw new InvalidOperationException();
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Write_mDFF0B4C2E56337DEB90169916065CC15C3E232E5_RuntimeMethod_var)));
	}

IL_0042:
	{
		// _baseStream.Write(buffer, offset, count);
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_8 = __this->____baseStream_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___buffer0;
		int32_t L_10 = ___offset1;
		int32_t L_11 = ___count2;
		NullCheck(L_8);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, L_10, L_11);
		// }
		return;
	}
}
// System.Int32 Ionic.Zlib.GZipStream::EmitHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_EmitHeader_m50993A5FAA1EF0316693012FE1D7EA1A095E430B (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	uint8_t V_6 = 0x0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_7;
	memset((&V_7), 0, sizeof(V_7));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B6_0 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// byte[] commentBytes = (Comment == null) ? null : iso8859dash1.GetBytes(Comment);
		String_t* L_0;
		L_0 = GZipStream_get_Comment_m854751A0B57F628205B127CA73BE5CD5F9D41D9B_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = ((GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_il2cpp_TypeInfo_var))->___iso8859dash1_14;
		String_t* L_2;
		L_2 = GZipStream_get_Comment_m854751A0B57F628205B127CA73BE5CD5F9D41D9B_inline(__this, NULL);
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, L_2);
		G_B3_0 = L_3;
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(NULL));
	}

IL_001b:
	{
		V_0 = G_B3_0;
		// byte[] filenameBytes = (FileName == null) ? null : iso8859dash1.GetBytes(FileName);
		String_t* L_4;
		L_4 = GZipStream_get_FileName_m7E2FD03B41897EE52074E71085F676DDFD42A7BD_inline(__this, NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5 = ((GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_il2cpp_TypeInfo_var))->___iso8859dash1_14;
		String_t* L_6;
		L_6 = GZipStream_get_FileName_m7E2FD03B41897EE52074E71085F676DDFD42A7BD_inline(__this, NULL);
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
		G_B6_0 = L_7;
		goto IL_0037;
	}

IL_0036:
	{
		G_B6_0 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(NULL));
	}

IL_0037:
	{
		V_1 = G_B6_0;
		// int cbLength = (Comment == null) ? 0 : commentBytes.Length + 1;
		String_t* L_8;
		L_8 = GZipStream_get_Comment_m854751A0B57F628205B127CA73BE5CD5F9D41D9B_inline(__this, NULL);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		G_B9_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_9)->max_length)), 1));
		goto IL_0048;
	}

IL_0047:
	{
		G_B9_0 = 0;
	}

IL_0048:
	{
		V_2 = G_B9_0;
		// int fnLength = (FileName == null) ? 0 : filenameBytes.Length + 1;
		String_t* L_10;
		L_10 = GZipStream_get_FileName_m7E2FD03B41897EE52074E71085F676DDFD42A7BD_inline(__this, NULL);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		NullCheck(L_11);
		G_B12_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_11)->max_length)), 1));
		goto IL_0059;
	}

IL_0058:
	{
		G_B12_0 = 0;
	}

IL_0059:
	{
		V_3 = G_B12_0;
		// int bufferLength = 10 + cbLength + fnLength;
		int32_t L_12 = V_2;
		int32_t L_13 = V_3;
		// byte[] header = new byte[bufferLength];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)10), L_12)), L_13)));
		V_4 = L_14;
		// int i = 0;
		V_5 = 0;
		// header[i++] = 0x1F;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_4;
		int32_t L_16 = V_5;
		int32_t L_17 = L_16;
		V_5 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)31));
		// header[i++] = 0x8B;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_4;
		int32_t L_19 = V_5;
		int32_t L_20 = L_19;
		V_5 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (uint8_t)((int32_t)139));
		// header[i++] = 8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_4;
		int32_t L_22 = V_5;
		int32_t L_23 = L_22;
		V_5 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint8_t)8);
		// byte flag = 0;
		V_6 = (uint8_t)0;
		// if (Comment != null)
		String_t* L_24;
		L_24 = GZipStream_get_Comment_m854751A0B57F628205B127CA73BE5CD5F9D41D9B_inline(__this, NULL);
		if (!L_24)
		{
			goto IL_00a3;
		}
	}
	{
		// flag ^= 0x10;
		uint8_t L_25 = V_6;
		V_6 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_25^((int32_t)16))));
	}

IL_00a3:
	{
		// if (FileName != null)
		String_t* L_26;
		L_26 = GZipStream_get_FileName_m7E2FD03B41897EE52074E71085F676DDFD42A7BD_inline(__this, NULL);
		if (!L_26)
		{
			goto IL_00b2;
		}
	}
	{
		// flag ^= 0x8;
		uint8_t L_27 = V_6;
		V_6 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_27^8)));
	}

IL_00b2:
	{
		// header[i++] = flag;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_4;
		int32_t L_29 = V_5;
		int32_t L_30 = L_29;
		V_5 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		uint8_t L_31 = V_6;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (uint8_t)L_31);
		// if (!LastModified.HasValue) LastModified = DateTime.Now;
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* L_32 = (&__this->___LastModified_5);
		bool L_33;
		L_33 = Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_inline(L_32, Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
		if (L_33)
		{
			goto IL_00db;
		}
	}
	{
		// if (!LastModified.HasValue) LastModified = DateTime.Now;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_34;
		L_34 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_35;
		memset((&L_35), 0, sizeof(L_35));
		Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF((&L_35), L_34, /*hidden argument*/Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var);
		__this->___LastModified_5 = L_35;
	}

IL_00db:
	{
		// System.TimeSpan delta = LastModified.Value - _unixEpoch;
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* L_36 = (&__this->___LastModified_5);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_37;
		L_37 = Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991(L_36, Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_38 = ((GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_il2cpp_TypeInfo_var))->____unixEpoch_13;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_39;
		L_39 = DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387(L_37, L_38, NULL);
		V_7 = L_39;
		// Int32 timet = (Int32)delta.TotalSeconds;
		double L_40;
		L_40 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_7), NULL);
		// Array.Copy(BitConverter.GetBytes(timet), 0, header, i, 4);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41;
		L_41 = BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4(il2cpp_codegen_cast_double_to_int<int32_t>(L_40), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_4;
		int32_t L_43 = V_5;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_41, 0, (RuntimeArray*)L_42, L_43, 4, NULL);
		// i += 4;
		int32_t L_44 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_44, 4));
		// header[i++] = 0;    // this field is totally useless
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_4;
		int32_t L_46 = V_5;
		int32_t L_47 = L_46;
		V_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (uint8_t)0);
		// header[i++] = 0xFF; // 0xFF == unspecified
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_4;
		int32_t L_49 = V_5;
		int32_t L_50 = L_49;
		V_5 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_50), (uint8_t)((int32_t)255));
		// if (fnLength != 0)
		int32_t L_51 = V_3;
		if (!L_51)
		{
			goto IL_014e;
		}
	}
	{
		// Array.Copy(filenameBytes, 0, header, i, fnLength - 1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = V_4;
		int32_t L_54 = V_5;
		int32_t L_55 = V_3;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_52, 0, (RuntimeArray*)L_53, L_54, ((int32_t)il2cpp_codegen_subtract(L_55, 1)), NULL);
		// i += fnLength - 1;
		int32_t L_56 = V_5;
		int32_t L_57 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_add(L_56, ((int32_t)il2cpp_codegen_subtract(L_57, 1))));
		// header[i++] = 0; // terminate
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = V_4;
		int32_t L_59 = V_5;
		int32_t L_60 = L_59;
		V_5 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (uint8_t)0);
	}

IL_014e:
	{
		// if (cbLength != 0)
		int32_t L_61 = V_2;
		if (!L_61)
		{
			goto IL_0172;
		}
	}
	{
		// Array.Copy(commentBytes, 0, header, i, cbLength - 1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = V_4;
		int32_t L_64 = V_5;
		int32_t L_65 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_62, 0, (RuntimeArray*)L_63, L_64, ((int32_t)il2cpp_codegen_subtract(L_65, 1)), NULL);
		// i += cbLength - 1;
		int32_t L_66 = V_5;
		int32_t L_67 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_add(L_66, ((int32_t)il2cpp_codegen_subtract(L_67, 1))));
		// header[i++] = 0; // terminate
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_4;
		int32_t L_69 = V_5;
		int32_t L_70 = L_69;
		V_5 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(L_70), (uint8_t)0);
	}

IL_0172:
	{
		// _baseStream._stream.Write(header, 0, header.Length);
		ZlibBaseStream_t5BF0A888034E8A9BDFD68A5C81F006B2D18EAA7C* L_71 = __this->____baseStream_7;
		NullCheck(L_71);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_72 = L_71->____stream_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = V_4;
		NullCheck(L_74);
		NullCheck(L_72);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_72, L_73, 0, ((int32_t)(((RuntimeArray*)L_74)->max_length)));
		// return header.Length; // bytes written
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = V_4;
		NullCheck(L_75);
		return ((int32_t)(((RuntimeArray*)L_75)->max_length));
	}
}
// System.Byte[] Ionic.Zlib.GZipStream::CompressString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GZipStream_CompressString_mC9ECA0B2062A6D09015A6E53AE19501407056886 (String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		// using (var ms = new MemoryStream())
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0020:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0029;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0029:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// System.IO.Stream compressor =
			//     new GZipStream(ms, CompressionMode.Compress, CompressionLevel.BestCompression);
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
			GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* L_4 = (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0*)il2cpp_codegen_object_new(GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			GZipStream__ctor_m1314CA02AE3B840949484828C4D58A6BE24BBECC(L_4, L_3, 0, ((int32_t)9), NULL);
			V_1 = L_4;
			// ZlibBaseStream.CompressString(s, compressor);
			String_t* L_5 = ___s0;
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = V_1;
			ZlibBaseStream_CompressString_mB559C98BBC5393E1AC56745D519E16C3BF806E12(L_5, L_6, NULL);
			// return ms.ToArray();
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_7 = V_0;
			NullCheck(L_7);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
			L_8 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(41 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_7);
			V_2 = L_8;
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		return L_9;
	}
}
// System.Byte[] Ionic.Zlib.GZipStream::CompressBuffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GZipStream_CompressBuffer_m75E7C8024B1953986C7C2D33E12FC61F5D194F5A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		// using (var ms = new MemoryStream())
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0020:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0029;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0029:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// System.IO.Stream compressor =
			//     new GZipStream( ms, CompressionMode.Compress, CompressionLevel.BestCompression );
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
			GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* L_4 = (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0*)il2cpp_codegen_object_new(GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			GZipStream__ctor_m1314CA02AE3B840949484828C4D58A6BE24BBECC(L_4, L_3, 0, ((int32_t)9), NULL);
			V_1 = L_4;
			// ZlibBaseStream.CompressBuffer(b, compressor);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___b0;
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = V_1;
			ZlibBaseStream_CompressBuffer_mB2D9C3C265B44CC77D27A58910CFD02805DC11CE(L_5, L_6, NULL);
			// return ms.ToArray();
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_7 = V_0;
			NullCheck(L_7);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
			L_8 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(41 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_7);
			V_2 = L_8;
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		return L_9;
	}
}
// System.String Ionic.Zlib.GZipStream::UncompressString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GZipStream_UncompressString_m252E58BB6360A0E935A9B7E5641FCA2D5FE16BC4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// using (var input = new MemoryStream(compressed))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___compressed0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0019:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0022;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Stream decompressor = new GZipStream(input, CompressionMode.Decompress);
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_0;
			GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* L_5 = (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0*)il2cpp_codegen_object_new(GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			GZipStream__ctor_mE228217444EB9CAF2B1A8A40CA0CA0AA455E5B14(L_5, L_4, 1, NULL);
			V_1 = L_5;
			// return ZlibBaseStream.UncompressString(compressed, decompressor);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___compressed0;
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = V_1;
			String_t* L_8;
			L_8 = ZlibBaseStream_UncompressString_m16DB78C4359617D4CA18C974AC4D5D29E68C7F9F(L_6, L_7, NULL);
			V_2 = L_8;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		String_t* L_9 = V_2;
		return L_9;
	}
}
// System.Byte[] Ionic.Zlib.GZipStream::UncompressBuffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GZipStream_UncompressBuffer_mE24722E357AD5A0F324A3552E881CF4AD08EC5CD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		// using (var input = new System.IO.MemoryStream(compressed))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___compressed0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0019:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0022;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// System.IO.Stream decompressor =
			//     new GZipStream( input, CompressionMode.Decompress );
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_0;
			GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* L_5 = (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0*)il2cpp_codegen_object_new(GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			GZipStream__ctor_mE228217444EB9CAF2B1A8A40CA0CA0AA455E5B14(L_5, L_4, 1, NULL);
			V_1 = L_5;
			// return ZlibBaseStream.UncompressBuffer(compressed, decompressor);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___compressed0;
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
			L_8 = ZlibBaseStream_UncompressBuffer_m2C10229AF2D45D62694FDC060F6457A5D7598855(L_6, L_7, NULL);
			V_2 = L_8;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		return L_9;
	}
}
// System.Void Ionic.Zlib.GZipStream::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__cctor_m826BA9BB7ECD89F23A48438BC87C3CCCDF12C3C6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC07F6BD47DF829ABDBABCE58B748504460B7BB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly System.DateTime _unixEpoch = new System.DateTime(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_mD89390EF215242275A4E8F78C2C3E8BC3EF6F3C3((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 1, /*hidden argument*/NULL);
		((GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_il2cpp_TypeInfo_var))->____unixEpoch_13 = L_0;
		// internal static readonly System.Text.Encoding iso8859dash1 = System.Text.Encoding.GetEncoding("iso-8859-1");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_GetEncoding_mBF5A2BA804B4917644BBEC5A4230D0854236D8FE(_stringLiteralFBC07F6BD47DF829ABDBABCE58B748504460B7BB, NULL);
		((GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_il2cpp_TypeInfo_var))->___iso8859dash1_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0_il2cpp_TypeInfo_var))->___iso8859dash1_14), (void*)L_1);
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
// System.Void Ionic.Zlib.InflateBlocks::.ctor(Ionic.Zlib.ZlibCodec,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateBlocks__ctor_mD40ABB6B19C3AE06EA756866856449A44F6F12AA (InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* __this, ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* ___codec0, RuntimeObject* ___checkfn1, int32_t ___w2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InflateCodes_t2759A3D840DF45440C2D917FC57F100D1969F7D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal int[] bb = new int[1];                   // bit length tree depth
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___bb_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bb_7), (void*)L_0);
		// internal int[] tb = new int[1];                   // bit length decoding tree
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___tb_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tb_8), (void*)L_1);
		// internal InflateCodes codes = new InflateCodes(); // if CODES, current state
		InflateCodes_t2759A3D840DF45440C2D917FC57F100D1969F7D6* L_2 = (InflateCodes_t2759A3D840DF45440C2D917FC57F100D1969F7D6*)il2cpp_codegen_object_new(InflateCodes_t2759A3D840DF45440C2D917FC57F100D1969F7D6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InflateCodes__ctor_mBD475BE915886D11D4BCA58CEA81698299D65E50(L_2, NULL);
		__this->___codes_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___codes_9), (void*)L_2);
		// internal InfTree inftree = new InfTree();
		InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE* L_3 = (InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE*)il2cpp_codegen_object_new(InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		InfTree__ctor_m23D7BB79D78967033812470BF4A675A8FB273780(L_3, NULL);
		__this->___inftree_21 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inftree_21), (void*)L_3);
		// internal InflateBlocks(ZlibCodec codec, System.Object checkfn, int w)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _codec = codec;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_4 = ___codec0;
		__this->____codec_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____codec_11), (void*)L_4);
		// hufts = new int[MANY * 3];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4320));
		__this->___hufts_14 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hufts_14), (void*)L_5);
		// window = new byte[w];
		int32_t L_6 = ___w2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___window_15 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___window_15), (void*)L_7);
		// end = w;
		int32_t L_8 = ___w2;
		__this->___end_16 = L_8;
		// this.checkfn = checkfn;
		RuntimeObject* L_9 = ___checkfn1;
		__this->___checkfn_19 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___checkfn_19), (void*)L_9);
		// mode = InflateBlockMode.TYPE;
		__this->___mode_2 = 0;
		// Reset();
		uint32_t L_10;
		L_10 = InflateBlocks_Reset_m8BF6F7A81688AA1977F0089C2200DB9BC2E3A988(__this, NULL);
		// }
		return;
	}
}
// System.UInt32 Ionic.Zlib.InflateBlocks::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InflateBlocks_Reset_m8BF6F7A81688AA1977F0089C2200DB9BC2E3A988 (InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler_t0FD1A5CDC49CCF1E8741247D09C4D1C46EEAE2D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t G_B2_0 = 0;
	uint32_t G_B1_0 = 0;
	{
		// uint oldCheck = check;
		uint32_t L_0 = __this->___check_20;
		// mode = InflateBlockMode.TYPE;
		__this->___mode_2 = 0;
		// bitk = 0;
		__this->___bitk_12 = 0;
		// bitb = 0;
		__this->___bitb_13 = 0;
		// readAt = writeAt = 0;
		int32_t L_1 = 0;
		V_0 = L_1;
		__this->___writeAt_18 = L_1;
		int32_t L_2 = V_0;
		__this->___readAt_17 = L_2;
		// if (checkfn != null)
		RuntimeObject* L_3 = __this->___checkfn_19;
		G_B1_0 = L_0;
		if (!L_3)
		{
			G_B2_0 = L_0;
			goto IL_0050;
		}
	}
	{
		// _codec._Adler32 = check = Adler.Adler32(0, null, 0, 0);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_4 = __this->____codec_11;
		il2cpp_codegen_runtime_class_init_inline(Adler_t0FD1A5CDC49CCF1E8741247D09C4D1C46EEAE2D2_il2cpp_TypeInfo_var);
		uint32_t L_5;
		L_5 = Adler_Adler32_m9695EEA6DCAA53D00A6F830833B21FAEDE1C0E39(0, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, 0, 0, NULL);
		uint32_t L_6 = L_5;
		V_1 = L_6;
		__this->___check_20 = L_6;
		uint32_t L_7 = V_1;
		NullCheck(L_4);
		L_4->____Adler32_11 = L_7;
		G_B2_0 = G_B1_0;
	}

IL_0050:
	{
		// return oldCheck;
		return G_B2_0;
	}
}
// System.Int32 Ionic.Zlib.InflateBlocks::Process(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateBlocks_Process_mCCBBC67F46F15D0CBFD57C6F2C486E7C6734E768 (InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* __this, int32_t ___r0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral260306369A04CA189E353A93EBB484ED8F9A9B43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral359C7A1FB5CEBD929D7F11F5D3E96EDE7FF01384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A971A9294400EA492DFEFCF8370FA1EBA838E06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC98F8D5063D43F6A1D8B5158D9DE47EAC048113);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_8 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_9 = NULL;
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* V_10 = NULL;
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* V_11 = NULL;
	uint32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_17 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_18 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_19 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_20 = NULL;
	int32_t G_B3_0 = 0;
	InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* G_B28_0 = NULL;
	InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* G_B25_0 = NULL;
	InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* G_B27_0 = NULL;
	InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* G_B26_0 = NULL;
	int32_t G_B29_0 = 0;
	InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* G_B29_1 = NULL;
	int32_t G_B38_0 = 0;
	int32_t G_B43_0 = 0;
	int32_t G_B48_0 = 0;
	InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* G_B58_0 = NULL;
	InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* G_B57_0 = NULL;
	int32_t G_B59_0 = 0;
	InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* G_B59_1 = NULL;
	int32_t G_B100_0 = 0;
	int32_t G_B103_0 = 0;
	int32_t G_B116_0 = 0;
	int32_t G_B129_0 = 0;
	int32_t G_B135_0 = 0;
	{
		// p = _codec.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_0 = __this->____codec_11;
		NullCheck(L_0);
		int32_t L_1 = L_0->___NextIn_1;
		V_3 = L_1;
		// n = _codec.AvailableBytesIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_2 = __this->____codec_11;
		NullCheck(L_2);
		int32_t L_3 = L_2->___AvailableBytesIn_2;
		V_4 = L_3;
		// b = bitb;
		int32_t L_4 = __this->___bitb_13;
		V_1 = L_4;
		// k = bitk;
		int32_t L_5 = __this->___bitk_12;
		V_2 = L_5;
		// q = writeAt;
		int32_t L_6 = __this->___writeAt_18;
		V_5 = L_6;
		// m = (int)(q < readAt ? readAt - q - 1 : end - q);
		int32_t L_7 = V_5;
		int32_t L_8 = __this->___readAt_17;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_9 = __this->___end_16;
		int32_t L_10 = V_5;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(L_9, L_10));
		goto IL_004f;
	}

IL_0044:
	{
		int32_t L_11 = __this->___readAt_17;
		int32_t L_12 = V_5;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_11, L_12)), 1));
	}

IL_004f:
	{
		V_6 = G_B3_0;
	}

IL_0051:
	{
		// switch (mode)
		int32_t L_13 = __this->___mode_2;
		V_7 = L_13;
		int32_t L_14 = V_7;
		switch (L_14)
		{
			case 0:
			{
				goto IL_0116;
			}
			case 1:
			{
				goto IL_02eb;
			}
			case 2:
			{
				goto IL_03ad;
			}
			case 3:
			{
				goto IL_061c;
			}
			case 4:
			{
				goto IL_07d1;
			}
			case 5:
			{
				goto IL_08c4;
			}
			case 6:
			{
				goto IL_0cc9;
			}
			case 7:
			{
				goto IL_0da2;
			}
			case 8:
			{
				goto IL_0e49;
			}
			case 9:
			{
				goto IL_0ea3;
			}
		}
	}
	{
		goto IL_0efe;
	}

IL_008d:
	{
		// if (n != 0)
		int32_t L_15 = V_4;
		if (!L_15)
		{
			goto IL_0096;
		}
	}
	{
		// r = ZlibConstants.Z_OK;
		___r0 = 0;
		goto IL_00ed;
	}

IL_0096:
	{
		// bitb = b; bitk = k;
		int32_t L_16 = V_1;
		__this->___bitb_13 = L_16;
		// bitb = b; bitk = k;
		int32_t L_17 = V_2;
		__this->___bitk_12 = L_17;
		// _codec.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_18 = __this->____codec_11;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		L_18->___AvailableBytesIn_2 = L_19;
		// _codec.TotalBytesIn += p - _codec.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_20 = __this->____codec_11;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_21 = L_20;
		NullCheck(L_21);
		int64_t L_22 = L_21->___TotalBytesIn_3;
		int32_t L_23 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_24 = __this->____codec_11;
		NullCheck(L_24);
		int32_t L_25 = L_24->___NextIn_1;
		NullCheck(L_21);
		L_21->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_22, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_23, L_25)))));
		// _codec.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_26 = __this->____codec_11;
		int32_t L_27 = V_3;
		NullCheck(L_26);
		L_26->___NextIn_1 = L_27;
		// writeAt = q;
		int32_t L_28 = V_5;
		__this->___writeAt_18 = L_28;
		// return Flush(r);
		int32_t L_29 = ___r0;
		int32_t L_30;
		L_30 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(__this, L_29, NULL);
		return L_30;
	}

IL_00ed:
	{
		// n--;
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		// b |= (_codec.InputBuffer[p++] & 0xff) << k;
		int32_t L_32 = V_1;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_33 = __this->____codec_11;
		NullCheck(L_33);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = L_33->___InputBuffer_0;
		int32_t L_35 = V_3;
		int32_t L_36 = L_35;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		NullCheck(L_34);
		int32_t L_37 = L_36;
		uint8_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		int32_t L_39 = V_2;
		V_1 = ((int32_t)(L_32|((int32_t)(((int32_t)((int32_t)L_38&((int32_t)255)))<<((int32_t)(L_39&((int32_t)31)))))));
		// k += 8;
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_40, 8));
	}

IL_0116:
	{
		// while (k < (3))
		int32_t L_41 = V_2;
		if ((((int32_t)L_41) < ((int32_t)3)))
		{
			goto IL_008d;
		}
	}
	{
		// t = (int)(b & 7);
		int32_t L_42 = V_1;
		V_0 = ((int32_t)(L_42&7));
		// last = t & 1;
		int32_t L_43 = V_0;
		__this->___last_10 = ((int32_t)(L_43&1));
		// switch ((uint)t >> 1)
		int32_t L_44 = V_0;
		V_12 = ((int32_t)((uint32_t)L_44>>1));
		uint32_t L_45 = V_12;
		switch (L_45)
		{
			case 0:
			{
				goto IL_014b;
			}
			case 1:
			{
				goto IL_016e;
			}
			case 2:
			{
				goto IL_01d3;
			}
			case 3:
			{
				goto IL_01e7;
			}
		}
	}
	{
		goto IL_0051;
	}

IL_014b:
	{
		// b >>= 3; k -= (3);
		int32_t L_46 = V_1;
		V_1 = ((int32_t)(L_46>>3));
		// b >>= 3; k -= (3);
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_47, 3));
		// t = k & 7; // go to byte boundary
		int32_t L_48 = V_2;
		V_0 = ((int32_t)(L_48&7));
		// b >>= t; k -= t;
		int32_t L_49 = V_1;
		int32_t L_50 = V_0;
		V_1 = ((int32_t)(L_49>>((int32_t)(L_50&((int32_t)31)))));
		// b >>= t; k -= t;
		int32_t L_51 = V_2;
		int32_t L_52 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_51, L_52));
		// mode = InflateBlockMode.LENS; // get length of stored block
		__this->___mode_2 = 1;
		// break;
		goto IL_0051;
	}

IL_016e:
	{
		// int[] bl = new int[1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_8 = L_53;
		// int[] bd = new int[1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_9 = L_54;
		// int[][] tl = new int[1][];
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_55 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var, (uint32_t)1);
		V_10 = L_55;
		// int[][] td = new int[1][];
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_56 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var, (uint32_t)1);
		V_11 = L_56;
		// InfTree.inflate_trees_fixed(bl, bd, tl, td, _codec);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_9;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_59 = V_10;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_60 = V_11;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_61 = __this->____codec_11;
		il2cpp_codegen_runtime_class_init_inline(InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var);
		int32_t L_62;
		L_62 = InfTree_inflate_trees_fixed_m5C3AAC1112CEC346BB6051BAFB3F74DF8A7C3F34(L_57, L_58, L_59, L_60, L_61, NULL);
		// codes.Init(bl[0], bd[0], tl[0], 0, td[0], 0);
		InflateCodes_t2759A3D840DF45440C2D917FC57F100D1969F7D6* L_63 = __this->___codes_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = V_8;
		NullCheck(L_64);
		int32_t L_65 = 0;
		int32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = V_9;
		NullCheck(L_67);
		int32_t L_68 = 0;
		int32_t L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_70 = V_10;
		NullCheck(L_70);
		int32_t L_71 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_73 = V_11;
		NullCheck(L_73);
		int32_t L_74 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_63);
		InflateCodes_Init_mD66ED3F1182B685327EC5A9EB8CB2B3161DE15E5(L_63, L_66, L_69, L_72, 0, L_75, 0, NULL);
		// b >>= 3; k -= 3;
		int32_t L_76 = V_1;
		V_1 = ((int32_t)(L_76>>3));
		// b >>= 3; k -= 3;
		int32_t L_77 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_77, 3));
		// mode = InflateBlockMode.CODES;
		__this->___mode_2 = 6;
		// break;
		goto IL_0051;
	}

IL_01d3:
	{
		// b >>= 3; k -= 3;
		int32_t L_78 = V_1;
		V_1 = ((int32_t)(L_78>>3));
		// b >>= 3; k -= 3;
		int32_t L_79 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_79, 3));
		// mode = InflateBlockMode.TABLE;
		__this->___mode_2 = 3;
		// break;
		goto IL_0051;
	}

IL_01e7:
	{
		// b >>= 3; k -= 3;
		int32_t L_80 = V_1;
		V_1 = ((int32_t)(L_80>>3));
		// b >>= 3; k -= 3;
		int32_t L_81 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_81, 3));
		// mode = InflateBlockMode.BAD;
		__this->___mode_2 = ((int32_t)9);
		// _codec.Message = "invalid block type";
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_82 = __this->____codec_11;
		NullCheck(L_82);
		L_82->___Message_8 = _stringLiteral9A971A9294400EA492DFEFCF8370FA1EBA838E06;
		Il2CppCodeGenWriteBarrier((void**)(&L_82->___Message_8), (void*)_stringLiteral9A971A9294400EA492DFEFCF8370FA1EBA838E06);
		// r = ZlibConstants.Z_DATA_ERROR;
		___r0 = ((int32_t)-3);
		// bitb = b; bitk = k;
		int32_t L_83 = V_1;
		__this->___bitb_13 = L_83;
		// bitb = b; bitk = k;
		int32_t L_84 = V_2;
		__this->___bitk_12 = L_84;
		// _codec.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_85 = __this->____codec_11;
		int32_t L_86 = V_4;
		NullCheck(L_85);
		L_85->___AvailableBytesIn_2 = L_86;
		// _codec.TotalBytesIn += p - _codec.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_87 = __this->____codec_11;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_88 = L_87;
		NullCheck(L_88);
		int64_t L_89 = L_88->___TotalBytesIn_3;
		int32_t L_90 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_91 = __this->____codec_11;
		NullCheck(L_91);
		int32_t L_92 = L_91->___NextIn_1;
		NullCheck(L_88);
		L_88->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_89, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_90, L_92)))));
		// _codec.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_93 = __this->____codec_11;
		int32_t L_94 = V_3;
		NullCheck(L_93);
		L_93->___NextIn_1 = L_94;
		// writeAt = q;
		int32_t L_95 = V_5;
		__this->___writeAt_18 = L_95;
		// return Flush(r);
		int32_t L_96 = ___r0;
		int32_t L_97;
		L_97 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(__this, L_96, NULL);
		return L_97;
	}

IL_0262:
	{
		// if (n != 0)
		int32_t L_98 = V_4;
		if (!L_98)
		{
			goto IL_026b;
		}
	}
	{
		// r = ZlibConstants.Z_OK;
		___r0 = 0;
		goto IL_02c2;
	}

IL_026b:
	{
		// bitb = b; bitk = k;
		int32_t L_99 = V_1;
		__this->___bitb_13 = L_99;
		// bitb = b; bitk = k;
		int32_t L_100 = V_2;
		__this->___bitk_12 = L_100;
		// _codec.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_101 = __this->____codec_11;
		int32_t L_102 = V_4;
		NullCheck(L_101);
		L_101->___AvailableBytesIn_2 = L_102;
		// _codec.TotalBytesIn += p - _codec.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_103 = __this->____codec_11;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_104 = L_103;
		NullCheck(L_104);
		int64_t L_105 = L_104->___TotalBytesIn_3;
		int32_t L_106 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_107 = __this->____codec_11;
		NullCheck(L_107);
		int32_t L_108 = L_107->___NextIn_1;
		NullCheck(L_104);
		L_104->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_105, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_106, L_108)))));
		// _codec.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_109 = __this->____codec_11;
		int32_t L_110 = V_3;
		NullCheck(L_109);
		L_109->___NextIn_1 = L_110;
		// writeAt = q;
		int32_t L_111 = V_5;
		__this->___writeAt_18 = L_111;
		// return Flush(r);
		int32_t L_112 = ___r0;
		int32_t L_113;
		L_113 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(__this, L_112, NULL);
		return L_113;
	}

IL_02c2:
	{
		// n--;
		int32_t L_114 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		// b |= (_codec.InputBuffer[p++] & 0xff) << k;
		int32_t L_115 = V_1;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_116 = __this->____codec_11;
		NullCheck(L_116);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_117 = L_116->___InputBuffer_0;
		int32_t L_118 = V_3;
		int32_t L_119 = L_118;
		V_3 = ((int32_t)il2cpp_codegen_add(L_119, 1));
		NullCheck(L_117);
		int32_t L_120 = L_119;
		uint8_t L_121 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		int32_t L_122 = V_2;
		V_1 = ((int32_t)(L_115|((int32_t)(((int32_t)((int32_t)L_121&((int32_t)255)))<<((int32_t)(L_122&((int32_t)31)))))));
		// k += 8;
		int32_t L_123 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_123, 8));
	}

IL_02eb:
	{
		// while (k < (32))
		int32_t L_124 = V_2;
		if ((((int32_t)L_124) < ((int32_t)((int32_t)32))))
		{
			goto IL_0262;
		}
	}
	{
		// if ( ( ((~b)>>16) & 0xffff) != (b & 0xffff))
		int32_t L_125 = V_1;
		int32_t L_126 = V_1;
		if ((((int32_t)((int32_t)(((int32_t)(((~L_125))>>((int32_t)16)))&((int32_t)65535)))) == ((int32_t)((int32_t)(L_126&((int32_t)65535))))))
		{
			goto IL_037a;
		}
	}
	{
		// mode = InflateBlockMode.BAD;
		__this->___mode_2 = ((int32_t)9);
		// _codec.Message = "invalid stored block lengths";
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_127 = __this->____codec_11;
		NullCheck(L_127);
		L_127->___Message_8 = _stringLiteralCC98F8D5063D43F6A1D8B5158D9DE47EAC048113;
		Il2CppCodeGenWriteBarrier((void**)(&L_127->___Message_8), (void*)_stringLiteralCC98F8D5063D43F6A1D8B5158D9DE47EAC048113);
		// r = ZlibConstants.Z_DATA_ERROR;
		___r0 = ((int32_t)-3);
		// bitb = b; bitk = k;
		int32_t L_128 = V_1;
		__this->___bitb_13 = L_128;
		// bitb = b; bitk = k;
		int32_t L_129 = V_2;
		__this->___bitk_12 = L_129;
		// _codec.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_130 = __this->____codec_11;
		int32_t L_131 = V_4;
		NullCheck(L_130);
		L_130->___AvailableBytesIn_2 = L_131;
		// _codec.TotalBytesIn += p - _codec.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_132 = __this->____codec_11;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_133 = L_132;
		NullCheck(L_133);
		int64_t L_134 = L_133->___TotalBytesIn_3;
		int32_t L_135 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_136 = __this->____codec_11;
		NullCheck(L_136);
		int32_t L_137 = L_136->___NextIn_1;
		NullCheck(L_133);
		L_133->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_134, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_135, L_137)))));
		// _codec.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_138 = __this->____codec_11;
		int32_t L_139 = V_3;
		NullCheck(L_138);
		L_138->___NextIn_1 = L_139;
		// writeAt = q;
		int32_t L_140 = V_5;
		__this->___writeAt_18 = L_140;
		// return Flush(r);
		int32_t L_141 = ___r0;
		int32_t L_142;
		L_142 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(__this, L_141, NULL);
		return L_142;
	}

IL_037a:
	{
		// left = (b & 0xffff);
		int32_t L_143 = V_1;
		__this->___left_3 = ((int32_t)(L_143&((int32_t)65535)));
		// b = k = 0; // dump bits
		int32_t L_144 = 0;
		V_2 = L_144;
		V_1 = L_144;
		// mode = left != 0 ? InflateBlockMode.STORED : (last != 0 ? InflateBlockMode.DRY : InflateBlockMode.TYPE);
		int32_t L_145 = __this->___left_3;
		G_B25_0 = __this;
		if (L_145)
		{
			G_B28_0 = __this;
			goto IL_03a2;
		}
	}
	{
		int32_t L_146 = __this->___last_10;
		G_B26_0 = G_B25_0;
		if (L_146)
		{
			G_B27_0 = G_B25_0;
			goto IL_039f;
		}
	}
	{
		G_B29_0 = 0;
		G_B29_1 = G_B26_0;
		goto IL_03a3;
	}

IL_039f:
	{
		G_B29_0 = 7;
		G_B29_1 = G_B27_0;
		goto IL_03a3;
	}

IL_03a2:
	{
		G_B29_0 = 2;
		G_B29_1 = G_B28_0;
	}

IL_03a3:
	{
		NullCheck(G_B29_1);
		G_B29_1->___mode_2 = G_B29_0;
		// break;
		goto IL_0051;
	}

IL_03ad:
	{
		// if (n == 0)
		int32_t L_147 = V_4;
		if (L_147)
		{
			goto IL_0408;
		}
	}
	{
		// bitb = b; bitk = k;
		int32_t L_148 = V_1;
		__this->___bitb_13 = L_148;
		// bitb = b; bitk = k;
		int32_t L_149 = V_2;
		__this->___bitk_12 = L_149;
		// _codec.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_150 = __this->____codec_11;
		int32_t L_151 = V_4;
		NullCheck(L_150);
		L_150->___AvailableBytesIn_2 = L_151;
		// _codec.TotalBytesIn += p - _codec.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_152 = __this->____codec_11;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_153 = L_152;
		NullCheck(L_153);
		int64_t L_154 = L_153->___TotalBytesIn_3;
		int32_t L_155 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_156 = __this->____codec_11;
		NullCheck(L_156);
		int32_t L_157 = L_156->___NextIn_1;
		NullCheck(L_153);
		L_153->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_154, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_155, L_157)))));
		// _codec.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_158 = __this->____codec_11;
		int32_t L_159 = V_3;
		NullCheck(L_158);
		L_158->___NextIn_1 = L_159;
		// writeAt = q;
		int32_t L_160 = V_5;
		__this->___writeAt_18 = L_160;
		// return Flush(r);
		int32_t L_161 = ___r0;
		int32_t L_162;
		L_162 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(__this, L_161, NULL);
		return L_162;
	}

IL_0408:
	{
		// if (m == 0)
		int32_t L_163 = V_6;
		if (L_163)
		{
			goto IL_051a;
		}
	}
	{
		// if (q == end && readAt != 0)
		int32_t L_164 = V_5;
		int32_t L_165 = __this->___end_16;
		if ((!(((uint32_t)L_164) == ((uint32_t)L_165))))
		{
			goto IL_0446;
		}
	}
	{
		int32_t L_166 = __this->___readAt_17;
		if (!L_166)
		{
			goto IL_0446;
		}
	}
	{
		// q = 0; m = (int)(q < readAt ? readAt - q - 1 : end - q);
		V_5 = 0;
		// q = 0; m = (int)(q < readAt ? readAt - q - 1 : end - q);
		int32_t L_167 = V_5;
		int32_t L_168 = __this->___readAt_17;
		if ((((int32_t)L_167) < ((int32_t)L_168)))
		{
			goto IL_0439;
		}
	}
	{
		int32_t L_169 = __this->___end_16;
		int32_t L_170 = V_5;
		G_B38_0 = ((int32_t)il2cpp_codegen_subtract(L_169, L_170));
		goto IL_0444;
	}

IL_0439:
	{
		int32_t L_171 = __this->___readAt_17;
		int32_t L_172 = V_5;
		G_B38_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_171, L_172)), 1));
	}

IL_0444:
	{
		V_6 = G_B38_0;
	}

IL_0446:
	{
		// if (m == 0)
		int32_t L_173 = V_6;
		if (L_173)
		{
			goto IL_051a;
		}
	}
	{
		// writeAt = q;
		int32_t L_174 = V_5;
		__this->___writeAt_18 = L_174;
		// r = Flush(r);
		int32_t L_175 = ___r0;
		int32_t L_176;
		L_176 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(__this, L_175, NULL);
		___r0 = L_176;
		// q = writeAt; m = (int)(q < readAt ? readAt - q - 1 : end - q);
		int32_t L_177 = __this->___writeAt_18;
		V_5 = L_177;
		// q = writeAt; m = (int)(q < readAt ? readAt - q - 1 : end - q);
		int32_t L_178 = V_5;
		int32_t L_179 = __this->___readAt_17;
		if ((((int32_t)L_178) < ((int32_t)L_179)))
		{
			goto IL_047b;
		}
	}
	{
		int32_t L_180 = __this->___end_16;
		int32_t L_181 = V_5;
		G_B43_0 = ((int32_t)il2cpp_codegen_subtract(L_180, L_181));
		goto IL_0486;
	}

IL_047b:
	{
		int32_t L_182 = __this->___readAt_17;
		int32_t L_183 = V_5;
		G_B43_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_182, L_183)), 1));
	}

IL_0486:
	{
		V_6 = G_B43_0;
		// if (q == end && readAt != 0)
		int32_t L_184 = V_5;
		int32_t L_185 = __this->___end_16;
		if ((!(((uint32_t)L_184) == ((uint32_t)L_185))))
		{
			goto IL_04bf;
		}
	}
	{
		int32_t L_186 = __this->___readAt_17;
		if (!L_186)
		{
			goto IL_04bf;
		}
	}
	{
		// q = 0; m = (int)(q < readAt ? readAt - q - 1 : end - q);
		V_5 = 0;
		// q = 0; m = (int)(q < readAt ? readAt - q - 1 : end - q);
		int32_t L_187 = V_5;
		int32_t L_188 = __this->___readAt_17;
		if ((((int32_t)L_187) < ((int32_t)L_188)))
		{
			goto IL_04b2;
		}
	}
	{
		int32_t L_189 = __this->___end_16;
		int32_t L_190 = V_5;
		G_B48_0 = ((int32_t)il2cpp_codegen_subtract(L_189, L_190));
		goto IL_04bd;
	}

IL_04b2:
	{
		int32_t L_191 = __this->___readAt_17;
		int32_t L_192 = V_5;
		G_B48_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_191, L_192)), 1));
	}

IL_04bd:
	{
		V_6 = G_B48_0;
	}

IL_04bf:
	{
		// if (m == 0)
		int32_t L_193 = V_6;
		if (L_193)
		{
			goto IL_051a;
		}
	}
	{
		// bitb = b; bitk = k;
		int32_t L_194 = V_1;
		__this->___bitb_13 = L_194;
		// bitb = b; bitk = k;
		int32_t L_195 = V_2;
		__this->___bitk_12 = L_195;
		// _codec.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_196 = __this->____codec_11;
		int32_t L_197 = V_4;
		NullCheck(L_196);
		L_196->___AvailableBytesIn_2 = L_197;
		// _codec.TotalBytesIn += p - _codec.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_198 = __this->____codec_11;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_199 = L_198;
		NullCheck(L_199);
		int64_t L_200 = L_199->___TotalBytesIn_3;
		int32_t L_201 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_202 = __this->____codec_11;
		NullCheck(L_202);
		int32_t L_203 = L_202->___NextIn_1;
		NullCheck(L_199);
		L_199->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_200, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_201, L_203)))));
		// _codec.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_204 = __this->____codec_11;
		int32_t L_205 = V_3;
		NullCheck(L_204);
		L_204->___NextIn_1 = L_205;
		// writeAt = q;
		int32_t L_206 = V_5;
		__this->___writeAt_18 = L_206;
		// return Flush(r);
		int32_t L_207 = ___r0;
		int32_t L_208;
		L_208 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(__this, L_207, NULL);
		return L_208;
	}

IL_051a:
	{
		// r = ZlibConstants.Z_OK;
		___r0 = 0;
		// t = left;
		int32_t L_209 = __this->___left_3;
		V_0 = L_209;
		// if (t > n)
		int32_t L_210 = V_0;
		int32_t L_211 = V_4;
		if ((((int32_t)L_210) <= ((int32_t)L_211)))
		{
			goto IL_052c;
		}
	}
	{
		// t = n;
		int32_t L_212 = V_4;
		V_0 = L_212;
	}

IL_052c:
	{
		// if (t > m)
		int32_t L_213 = V_0;
		int32_t L_214 = V_6;
		if ((((int32_t)L_213) <= ((int32_t)L_214)))
		{
			goto IL_0534;
		}
	}
	{
		// t = m;
		int32_t L_215 = V_6;
		V_0 = L_215;
	}

IL_0534:
	{
		// Array.Copy(_codec.InputBuffer, p, window, q, t);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_216 = __this->____codec_11;
		NullCheck(L_216);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_217 = L_216->___InputBuffer_0;
		int32_t L_218 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_219 = __this->___window_15;
		int32_t L_220 = V_5;
		int32_t L_221 = V_0;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_217, L_218, (RuntimeArray*)L_219, L_220, L_221, NULL);
		// p += t; n -= t;
		int32_t L_222 = V_3;
		int32_t L_223 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add(L_222, L_223));
		// p += t; n -= t;
		int32_t L_224 = V_4;
		int32_t L_225 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_224, L_225));
		// q += t; m -= t;
		int32_t L_226 = V_5;
		int32_t L_227 = V_0;
		V_5 = ((int32_t)il2cpp_codegen_add(L_226, L_227));
		// q += t; m -= t;
		int32_t L_228 = V_6;
		int32_t L_229 = V_0;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_228, L_229));
		// if ((left -= t) != 0)
		int32_t L_230 = __this->___left_3;
		int32_t L_231 = V_0;
		int32_t L_232 = ((int32_t)il2cpp_codegen_subtract(L_230, L_231));
		V_13 = L_232;
		__this->___left_3 = L_232;
		int32_t L_233 = V_13;
		if (L_233)
		{
			goto IL_0051;
		}
	}
	{
		// mode = last != 0 ? InflateBlockMode.DRY : InflateBlockMode.TYPE;
		int32_t L_234 = __this->___last_10;
		G_B57_0 = __this;
		if (L_234)
		{
			G_B58_0 = __this;
			goto IL_0588;
		}
	}
	{
		G_B59_0 = 0;
		G_B59_1 = G_B57_0;
		goto IL_0589;
	}

IL_0588:
	{
		G_B59_0 = 7;
		G_B59_1 = G_B58_0;
	}

IL_0589:
	{
		NullCheck(G_B59_1);
		G_B59_1->___mode_2 = G_B59_0;
		// break;
		goto IL_0051;
	}

IL_0593:
	{
		// if (n != 0)
		int32_t L_235 = V_4;
		if (!L_235)
		{
			goto IL_059c;
		}
	}
	{
		// r = ZlibConstants.Z_OK;
		___r0 = 0;
		goto IL_05f3;
	}

IL_059c:
	{
		// bitb = b; bitk = k;
		int32_t L_236 = V_1;
		__this->___bitb_13 = L_236;
		// bitb = b; bitk = k;
		int32_t L_237 = V_2;
		__this->___bitk_12 = L_237;
		// _codec.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_238 = __this->____codec_11;
		int32_t L_239 = V_4;
		NullCheck(L_238);
		L_238->___AvailableBytesIn_2 = L_239;
		// _codec.TotalBytesIn += p - _codec.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_240 = __this->____codec_11;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_241 = L_240;
		NullCheck(L_241);
		int64_t L_242 = L_241->___TotalBytesIn_3;
		int32_t L_243 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_244 = __this->____codec_11;
		NullCheck(L_244);
		int32_t L_245 = L_244->___NextIn_1;
		NullCheck(L_241);
		L_241->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_242, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_243, L_245)))));
		// _codec.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_246 = __this->____codec_11;
		int32_t L_247 = V_3;
		NullCheck(L_246);
		L_246->___NextIn_1 = L_247;
		// writeAt = q;
		int32_t L_248 = V_5;
		__this->___writeAt_18 = L_248;
		// return Flush(r);
		int32_t L_249 = ___r0;
		int32_t L_250;
		L_250 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(__this, L_249, NULL);
		return L_250;
	}

IL_05f3:
	{
		// n--;
		int32_t L_251 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_251, 1));
		// b |= (_codec.InputBuffer[p++] & 0xff) << k;
		int32_t L_252 = V_1;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_253 = __this->____codec_11;
		NullCheck(L_253);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_254 = L_253->___InputBuffer_0;
		int32_t L_255 = V_3;
		int32_t L_256 = L_255;
		V_3 = ((int32_t)il2cpp_codegen_add(L_256, 1));
		NullCheck(L_254);
		int32_t L_257 = L_256;
		uint8_t L_258 = (L_254)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		int32_t L_259 = V_2;
		V_1 = ((int32_t)(L_252|((int32_t)(((int32_t)((int32_t)L_258&((int32_t)255)))<<((int32_t)(L_259&((int32_t)31)))))));
		// k += 8;
		int32_t L_260 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_260, 8));
	}

IL_061c:
	{
		// while (k < (14))
		int32_t L_261 = V_2;
		if ((((int32_t)L_261) < ((int32_t)((int32_t)14))))
		{
			goto IL_0593;
		}
	}
	{
		// table = t = (b & 0x3fff);
		int32_t L_262 = V_1;
		int32_t L_263 = ((int32_t)(L_262&((int32_t)16383)));
		V_0 = L_263;
		__this->___table_4 = L_263;
		// if ((t & 0x1f) > 29 || ((t >> 5) & 0x1f) > 29)
		int32_t L_264 = V_0;
		if ((((int32_t)((int32_t)(L_264&((int32_t)31)))) > ((int32_t)((int32_t)29))))
		{
			goto IL_0645;
		}
	}
	{
		int32_t L_265 = V_0;
		if ((((int32_t)((int32_t)(((int32_t)(L_265>>5))&((int32_t)31)))) <= ((int32_t)((int32_t)29))))
		{
			goto IL_06b8;
		}
	}

IL_0645:
	{
		// mode = InflateBlockMode.BAD;
		__this->___mode_2 = ((int32_t)9);
		// _codec.Message = "too many length or distance symbols";
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_266 = __this->____codec_11;
		NullCheck(L_266);
		L_266->___Message_8 = _stringLiteral260306369A04CA189E353A93EBB484ED8F9A9B43;
		Il2CppCodeGenWriteBarrier((void**)(&L_266->___Message_8), (void*)_stringLiteral260306369A04CA189E353A93EBB484ED8F9A9B43);
		// r = ZlibConstants.Z_DATA_ERROR;
		___r0 = ((int32_t)-3);
		// bitb = b; bitk = k;
		int32_t L_267 = V_1;
		__this->___bitb_13 = L_267;
		// bitb = b; bitk = k;
		int32_t L_268 = V_2;
		__this->___bitk_12 = L_268;
		// _codec.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_269 = __this->____codec_11;
		int32_t L_270 = V_4;
		NullCheck(L_269);
		L_269->___AvailableBytesIn_2 = L_270;
		// _codec.TotalBytesIn += p - _codec.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_271 = __this->____codec_11;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_272 = L_271;
		NullCheck(L_272);
		int64_t L_273 = L_272->___TotalBytesIn_3;
		int32_t L_274 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_275 = __this->____codec_11;
		NullCheck(L_275);
		int32_t L_276 = L_275->___NextIn_1;
		NullCheck(L_272);
		L_272->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_273, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_274, L_276)))));
		// _codec.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_277 = __this->____codec_11;
		int32_t L_278 = V_3;
		NullCheck(L_277);
		L_277->___NextIn_1 = L_278;
		// writeAt = q;
		int32_t L_279 = V_5;
		__this->___writeAt_18 = L_279;
		// return Flush(r);
		int32_t L_280 = ___r0;
		int32_t L_281;
		L_281 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(__this, L_280, NULL);
		return L_281;
	}

IL_06b8:
	{
		// t = 258 + (t & 0x1f) + ((t >> 5) & 0x1f);
		int32_t L_282 = V_0;
		int32_t L_283 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)258), ((int32_t)(L_282&((int32_t)31))))), ((int32_t)(((int32_t)(L_283>>5))&((int32_t)31)))));
		// if (blens == null || blens.Length < t)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_284 = __this->___blens_6;
		if (!L_284)
		{
			goto IL_06dd;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_285 = __this->___blens_6;
		NullCheck(L_285);
		int32_t L_286 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_285)->max_length))) >= ((int32_t)L_286)))
		{
			goto IL_06eb;
		}
	}

IL_06dd:
	{
		// blens = new int[t];
		int32_t L_287 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_288 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_287);
		__this->___blens_6 = L_288;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blens_6), (void*)L_288);
		goto IL_06f8;
	}

IL_06eb:
	{
		// Array.Clear(blens, 0, t);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_289 = __this->___blens_6;
		int32_t L_290 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_289, 0, L_290, NULL);
	}

IL_06f8:
	{
		// b >>= 14;
		int32_t L_291 = V_1;
		V_1 = ((int32_t)(L_291>>((int32_t)14)));
		// k -= 14;
		int32_t L_292 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_292, ((int32_t)14)));
		// index = 0;
		__this->___index_5 = 0;
		// mode = InflateBlockMode.BTREE;
		__this->___mode_2 = 4;
		// goto case InflateBlockMode.BTREE;
		goto IL_07d1;
	}

IL_0715:
	{
		// if (n != 0)
		int32_t L_293 = V_4;
		if (!L_293)
		{
			goto IL_071e;
		}
	}
	{
		// r = ZlibConstants.Z_OK;
		___r0 = 0;
		goto IL_0775;
	}

IL_071e:
	{
		// bitb = b; bitk = k;
		int32_t L_294 = V_1;
		__this->___bitb_13 = L_294;
		// bitb = b; bitk = k;
		int32_t L_295 = V_2;
		__this->___bitk_12 = L_295;
		// _codec.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_296 = __this->____codec_11;
		int32_t L_297 = V_4;
		NullCheck(L_296);
		L_296->___AvailableBytesIn_2 = L_297;
		// _codec.TotalBytesIn += p - _codec.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_298 = __this->____codec_11;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_299 = L_298;
		NullCheck(L_299);
		int64_t L_300 = L_299->___TotalBytesIn_3;
		int32_t L_301 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_302 = __this->____codec_11;
		NullCheck(L_302);
		int32_t L_303 = L_302->___NextIn_1;
		NullCheck(L_299);
		L_299->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_300, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_301, L_303)))));
		// _codec.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_304 = __this->____codec_11;
		int32_t L_305 = V_3;
		NullCheck(L_304);
		L_304->___NextIn_1 = L_305;
		// writeAt = q;
		int32_t L_306 = V_5;
		__this->___writeAt_18 = L_306;
		// return Flush(r);
		int32_t L_307 = ___r0;
		int32_t L_308;
		L_308 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(__this, L_307, NULL);
		return L_308;
	}

IL_0775:
	{
		// n--;
		int32_t L_309 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_309, 1));
		// b |= (_codec.InputBuffer[p++] & 0xff) << k;
		int32_t L_310 = V_1;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_311 = __this->____codec_11;
		NullCheck(L_311);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_312 = L_311->___InputBuffer_0;
		int32_t L_313 = V_3;
		int32_t L_314 = L_313;
		V_3 = ((int32_t)il2cpp_codegen_add(L_314, 1));
		NullCheck(L_312);
		int32_t L_315 = L_314;
		uint8_t L_316 = (L_312)->GetAt(static_cast<il2cpp_array_size_t>(L_315));
		int32_t L_317 = V_2;
		V_1 = ((int32_t)(L_310|((int32_t)(((int32_t)((int32_t)L_316&((int32_t)255)))<<((int32_t)(L_317&((int32_t)31)))))));
		// k += 8;
		int32_t L_318 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_318, 8));
	}

IL_079e:
	{
		// while (k < (3))
		int32_t L_319 = V_2;
		if ((((int32_t)L_319) < ((int32_t)3)))
		{
			goto IL_0715;
		}
	}
	{
		// blens[border[index++]] = b & 7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_320 = __this->___blens_6;
		il2cpp_codegen_runtime_class_init_inline(InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_321 = ((InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E_StaticFields*)il2cpp_codegen_static_fields_for(InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E_il2cpp_TypeInfo_var))->___border_1;
		int32_t L_322 = __this->___index_5;
		V_13 = L_322;
		int32_t L_323 = V_13;
		__this->___index_5 = ((int32_t)il2cpp_codegen_add(L_323, 1));
		int32_t L_324 = V_13;
		NullCheck(L_321);
		int32_t L_325 = L_324;
		int32_t L_326 = (L_321)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		int32_t L_327 = V_1;
		NullCheck(L_320);
		(L_320)->SetAt(static_cast<il2cpp_array_size_t>(L_326), (int32_t)((int32_t)(L_327&7)));
		// b >>= 3; k -= 3;
		int32_t L_328 = V_1;
		V_1 = ((int32_t)(L_328>>3));
		// b >>= 3; k -= 3;
		int32_t L_329 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_329, 3));
	}

IL_07d1:
	{
		// while (index < 4 + (table >> 10))
		int32_t L_330 = __this->___index_5;
		int32_t L_331 = __this->___table_4;
		if ((((int32_t)L_330) < ((int32_t)((int32_t)il2cpp_codegen_add(4, ((int32_t)(L_331>>((int32_t)10))))))))
		{
			goto IL_079e;
		}
	}
	{
		goto IL_0808;
	}

IL_07e6:
	{
		// blens[border[index++]] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_332 = __this->___blens_6;
		il2cpp_codegen_runtime_class_init_inline(InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_333 = ((InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E_StaticFields*)il2cpp_codegen_static_fields_for(InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E_il2cpp_TypeInfo_var))->___border_1;
		int32_t L_334 = __this->___index_5;
		V_13 = L_334;
		int32_t L_335 = V_13;
		__this->___index_5 = ((int32_t)il2cpp_codegen_add(L_335, 1));
		int32_t L_336 = V_13;
		NullCheck(L_333);
		int32_t L_337 = L_336;
		int32_t L_338 = (L_333)->GetAt(static_cast<il2cpp_array_size_t>(L_337));
		NullCheck(L_332);
		(L_332)->SetAt(static_cast<il2cpp_array_size_t>(L_338), (int32_t)0);
	}

IL_0808:
	{
		// while (index < 19)
		int32_t L_339 = __this->___index_5;
		if ((((int32_t)L_339) < ((int32_t)((int32_t)19))))
		{
			goto IL_07e6;
		}
	}
	{
		// bb[0] = 7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_340 = __this->___bb_7;
		NullCheck(L_340);
		(L_340)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)7);
		// t = inftree.inflate_trees_bits(blens, bb, tb, hufts, _codec);
		InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE* L_341 = __this->___inftree_21;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_342 = __this->___blens_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_343 = __this->___bb_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_344 = __this->___tb_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_345 = __this->___hufts_14;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_346 = __this->____codec_11;
		NullCheck(L_341);
		int32_t L_347;
		L_347 = InfTree_inflate_trees_bits_m96F1A3DEB9B9122E97529A1ED65DADC009B47412(L_341, L_342, L_343, L_344, L_345, L_346, NULL);
		V_0 = L_347;
		// if (t != ZlibConstants.Z_OK)
		int32_t L_348 = V_0;
		if (!L_348)
		{
			goto IL_08b6;
		}
	}
	{
		// r = t;
		int32_t L_349 = V_0;
		___r0 = L_349;
		// if (r == ZlibConstants.Z_DATA_ERROR)
		int32_t L_350 = ___r0;
		if ((!(((uint32_t)L_350) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_085f;
		}
	}
	{
		// blens = null;
		__this->___blens_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blens_6), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		// mode = InflateBlockMode.BAD;
		__this->___mode_2 = ((int32_t)9);
	}

IL_085f:
	{
		// bitb = b; bitk = k;
		int32_t L_351 = V_1;
		__this->___bitb_13 = L_351;
		// bitb = b; bitk = k;
		int32_t L_352 = V_2;
		__this->___bitk_12 = L_352;
		// _codec.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_353 = __this->____codec_11;
		int32_t L_354 = V_4;
		NullCheck(L_353);
		L_353->___AvailableBytesIn_2 = L_354;
		// _codec.TotalBytesIn += p - _codec.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_355 = __this->____codec_11;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_356 = L_355;
		NullCheck(L_356);
		int64_t L_357 = L_356->___TotalBytesIn_3;
		int32_t L_358 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_359 = __this->____codec_11;
		NullCheck(L_359);
		int32_t L_360 = L_359->___NextIn_1;
		NullCheck(L_356);
		L_356->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_357, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_358, L_360)))));
		// _codec.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_361 = __this->____codec_11;
		int32_t L_362 = V_3;
		NullCheck(L_361);
		L_361->___NextIn_1 = L_362;
		// writeAt = q;
		int32_t L_363 = V_5;
		__this->___writeAt_18 = L_363;
		// return Flush(r);
		int32_t L_364 = ___r0;
		int32_t L_365;
		L_365 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(__this, L_364, NULL);
		return L_365;
	}

IL_08b6:
	{
		// index = 0;
		__this->___index_5 = 0;
		// mode = InflateBlockMode.DTREE;
		__this->___mode_2 = 5;
	}

IL_08c4:
	{
		// t = table;
		int32_t L_366 = __this->___table_4;
		V_0 = L_366;
		// if (!(index < 258 + (t & 0x1f) + ((t >> 5) & 0x1f)))
		int32_t L_367 = __this->___index_5;
		int32_t L_368 = V_0;
		int32_t L_369 = V_0;
		if ((((int32_t)L_367) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)258), ((int32_t)(L_368&((int32_t)31))))), ((int32_t)(((int32_t)(L_369>>5))&((int32_t)31))))))))
		{
			goto IL_0bb9;
		}
	}
	{
		// t = bb[0];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_370 = __this->___bb_7;
		NullCheck(L_370);
		int32_t L_371 = 0;
		int32_t L_372 = (L_370)->GetAt(static_cast<il2cpp_array_size_t>(L_371));
		V_0 = L_372;
		goto IL_097e;
	}

IL_08f5:
	{
		// if (n != 0)
		int32_t L_373 = V_4;
		if (!L_373)
		{
			goto IL_08fe;
		}
	}
	{
		// r = ZlibConstants.Z_OK;
		___r0 = 0;
		goto IL_0955;
	}

IL_08fe:
	{
		// bitb = b; bitk = k;
		int32_t L_374 = V_1;
		__this->___bitb_13 = L_374;
		// bitb = b; bitk = k;
		int32_t L_375 = V_2;
		__this->___bitk_12 = L_375;
		// _codec.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_376 = __this->____codec_11;
		int32_t L_377 = V_4;
		NullCheck(L_376);
		L_376->___AvailableBytesIn_2 = L_377;
		// _codec.TotalBytesIn += p - _codec.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_378 = __this->____codec_11;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_379 = L_378;
		NullCheck(L_379);
		int64_t L_380 = L_379->___TotalBytesIn_3;
		int32_t L_381 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_382 = __this->____codec_11;
		NullCheck(L_382);
		int32_t L_383 = L_382->___NextIn_1;
		NullCheck(L_379);
		L_379->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_380, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_381, L_383)))));
		// _codec.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_384 = __this->____codec_11;
		int32_t L_385 = V_3;
		NullCheck(L_384);
		L_384->___NextIn_1 = L_385;
		// writeAt = q;
		int32_t L_386 = V_5;
		__this->___writeAt_18 = L_386;
		// return Flush(r);
		int32_t L_387 = ___r0;
		int32_t L_388;
		L_388 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(__this, L_387, NULL);
		return L_388;
	}

IL_0955:
	{
		// n--;
		int32_t L_389 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_389, 1));
		// b |= (_codec.InputBuffer[p++] & 0xff) << k;
		int32_t L_390 = V_1;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_391 = __this->____codec_11;
		NullCheck(L_391);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_392 = L_391->___InputBuffer_0;
		int32_t L_393 = V_3;
		int32_t L_394 = L_393;
		V_3 = ((int32_t)il2cpp_codegen_add(L_394, 1));
		NullCheck(L_392);
		int32_t L_395 = L_394;
		uint8_t L_396 = (L_392)->GetAt(static_cast<il2cpp_array_size_t>(L_395));
		int32_t L_397 = V_2;
		V_1 = ((int32_t)(L_390|((int32_t)(((int32_t)((int32_t)L_396&((int32_t)255)))<<((int32_t)(L_397&((int32_t)31)))))));
		// k += 8;
		int32_t L_398 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_398, 8));
	}

IL_097e:
	{
		// while (k < t)
		int32_t L_399 = V_2;
		int32_t L_400 = V_0;
		if ((((int32_t)L_399) < ((int32_t)L_400)))
		{
			goto IL_08f5;
		}
	}
	{
		// t = hufts[(tb[0] + (b & InternalInflateConstants.InflateMask[t])) * 3 + 1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_401 = __this->___hufts_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_402 = __this->___tb_8;
		NullCheck(L_402);
		int32_t L_403 = 0;
		int32_t L_404 = (L_402)->GetAt(static_cast<il2cpp_array_size_t>(L_403));
		int32_t L_405 = V_1;
		il2cpp_codegen_runtime_class_init_inline(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_406 = ((InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_407 = V_0;
		NullCheck(L_406);
		int32_t L_408 = L_407;
		int32_t L_409 = (L_406)->GetAt(static_cast<il2cpp_array_size_t>(L_408));
		NullCheck(L_401);
		int32_t L_410 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_404, ((int32_t)(L_405&L_409)))), 3)), 1));
		int32_t L_411 = (L_401)->GetAt(static_cast<il2cpp_array_size_t>(L_410));
		V_0 = L_411;
		// c = hufts[(tb[0] + (b & InternalInflateConstants.InflateMask[t])) * 3 + 2];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_412 = __this->___hufts_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_413 = __this->___tb_8;
		NullCheck(L_413);
		int32_t L_414 = 0;
		int32_t L_415 = (L_413)->GetAt(static_cast<il2cpp_array_size_t>(L_414));
		int32_t L_416 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_417 = ((InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_418 = V_0;
		NullCheck(L_417);
		int32_t L_419 = L_418;
		int32_t L_420 = (L_417)->GetAt(static_cast<il2cpp_array_size_t>(L_419));
		NullCheck(L_412);
		int32_t L_421 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_415, ((int32_t)(L_416&L_420)))), 3)), 2));
		int32_t L_422 = (L_412)->GetAt(static_cast<il2cpp_array_size_t>(L_421));
		V_16 = L_422;
		// if (c < 16)
		int32_t L_423 = V_16;
		if ((((int32_t)L_423) >= ((int32_t)((int32_t)16))))
		{
			goto IL_09f5;
		}
	}
	{
		// b >>= t; k -= t;
		int32_t L_424 = V_1;
		int32_t L_425 = V_0;
		V_1 = ((int32_t)(L_424>>((int32_t)(L_425&((int32_t)31)))));
		// b >>= t; k -= t;
		int32_t L_426 = V_2;
		int32_t L_427 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_426, L_427));
		// blens[index++] = c;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_428 = __this->___blens_6;
		int32_t L_429 = __this->___index_5;
		V_13 = L_429;
		int32_t L_430 = V_13;
		__this->___index_5 = ((int32_t)il2cpp_codegen_add(L_430, 1));
		int32_t L_431 = V_13;
		int32_t L_432 = V_16;
		NullCheck(L_428);
		(L_428)->SetAt(static_cast<il2cpp_array_size_t>(L_431), (int32_t)L_432);
		goto IL_08c4;
	}

IL_09f5:
	{
		// i = c == 18 ? 7 : c - 14;
		int32_t L_433 = V_16;
		if ((((int32_t)L_433) == ((int32_t)((int32_t)18))))
		{
			goto IL_0a02;
		}
	}
	{
		int32_t L_434 = V_16;
		G_B100_0 = ((int32_t)il2cpp_codegen_subtract(L_434, ((int32_t)14)));
		goto IL_0a03;
	}

IL_0a02:
	{
		G_B100_0 = 7;
	}

IL_0a03:
	{
		V_14 = G_B100_0;
		// j = c == 18 ? 11 : 3;
		int32_t L_435 = V_16;
		if ((((int32_t)L_435) == ((int32_t)((int32_t)18))))
		{
			goto IL_0a0e;
		}
	}
	{
		G_B103_0 = 3;
		goto IL_0a10;
	}

IL_0a0e:
	{
		G_B103_0 = ((int32_t)11);
	}

IL_0a10:
	{
		V_15 = G_B103_0;
		goto IL_0aa0;
	}

IL_0a17:
	{
		// if (n != 0)
		int32_t L_436 = V_4;
		if (!L_436)
		{
			goto IL_0a20;
		}
	}
	{
		// r = ZlibConstants.Z_OK;
		___r0 = 0;
		goto IL_0a77;
	}

IL_0a20:
	{
		// bitb = b; bitk = k;
		int32_t L_437 = V_1;
		__this->___bitb_13 = L_437;
		// bitb = b; bitk = k;
		int32_t L_438 = V_2;
		__this->___bitk_12 = L_438;
		// _codec.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_439 = __this->____codec_11;
		int32_t L_440 = V_4;
		NullCheck(L_439);
		L_439->___AvailableBytesIn_2 = L_440;
		// _codec.TotalBytesIn += p - _codec.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_441 = __this->____codec_11;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_442 = L_441;
		NullCheck(L_442);
		int64_t L_443 = L_442->___TotalBytesIn_3;
		int32_t L_444 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_445 = __this->____codec_11;
		NullCheck(L_445);
		int32_t L_446 = L_445->___NextIn_1;
		NullCheck(L_442);
		L_442->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_443, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_444, L_446)))));
		// _codec.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_447 = __this->____codec_11;
		int32_t L_448 = V_3;
		NullCheck(L_447);
		L_447->___NextIn_1 = L_448;
		// writeAt = q;
		int32_t L_449 = V_5;
		__this->___writeAt_18 = L_449;
		// return Flush(r);
		int32_t L_450 = ___r0;
		int32_t L_451;
		L_451 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(__this, L_450, NULL);
		return L_451;
	}

IL_0a77:
	{
		// n--;
		int32_t L_452 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_452, 1));
		// b |= (_codec.InputBuffer[p++] & 0xff) << k;
		int32_t L_453 = V_1;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_454 = __this->____codec_11;
		NullCheck(L_454);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_455 = L_454->___InputBuffer_0;
		int32_t L_456 = V_3;
		int32_t L_457 = L_456;
		V_3 = ((int32_t)il2cpp_codegen_add(L_457, 1));
		NullCheck(L_455);
		int32_t L_458 = L_457;
		uint8_t L_459 = (L_455)->GetAt(static_cast<il2cpp_array_size_t>(L_458));
		int32_t L_460 = V_2;
		V_1 = ((int32_t)(L_453|((int32_t)(((int32_t)((int32_t)L_459&((int32_t)255)))<<((int32_t)(L_460&((int32_t)31)))))));
		// k += 8;
		int32_t L_461 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_461, 8));
	}

IL_0aa0:
	{
		// while (k < (t + i))
		int32_t L_462 = V_2;
		int32_t L_463 = V_0;
		int32_t L_464 = V_14;
		if ((((int32_t)L_462) < ((int32_t)((int32_t)il2cpp_codegen_add(L_463, L_464)))))
		{
			goto IL_0a17;
		}
	}
	{
		// b >>= t; k -= t;
		int32_t L_465 = V_1;
		int32_t L_466 = V_0;
		V_1 = ((int32_t)(L_465>>((int32_t)(L_466&((int32_t)31)))));
		// b >>= t; k -= t;
		int32_t L_467 = V_2;
		int32_t L_468 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_467, L_468));
		// j += (b & InternalInflateConstants.InflateMask[i]);
		int32_t L_469 = V_15;
		int32_t L_470 = V_1;
		il2cpp_codegen_runtime_class_init_inline(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_471 = ((InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_472 = V_14;
		NullCheck(L_471);
		int32_t L_473 = L_472;
		int32_t L_474 = (L_471)->GetAt(static_cast<il2cpp_array_size_t>(L_473));
		V_15 = ((int32_t)il2cpp_codegen_add(L_469, ((int32_t)(L_470&L_474))));
		// b >>= i; k -= i;
		int32_t L_475 = V_1;
		int32_t L_476 = V_14;
		V_1 = ((int32_t)(L_475>>((int32_t)(L_476&((int32_t)31)))));
		// b >>= i; k -= i;
		int32_t L_477 = V_2;
		int32_t L_478 = V_14;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_477, L_478));
		// i = index;
		int32_t L_479 = __this->___index_5;
		V_14 = L_479;
		// t = table;
		int32_t L_480 = __this->___table_4;
		V_0 = L_480;
		// if (i + j > 258 + (t & 0x1f) + ((t >> 5) & 0x1f) || (c == 16 && i < 1))
		int32_t L_481 = V_14;
		int32_t L_482 = V_15;
		int32_t L_483 = V_0;
		int32_t L_484 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_481, L_482))) > ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)258), ((int32_t)(L_483&((int32_t)31))))), ((int32_t)(((int32_t)(L_484>>5))&((int32_t)31))))))))
		{
			goto IL_0b03;
		}
	}
	{
		int32_t L_485 = V_16;
		if ((!(((uint32_t)L_485) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0b7d;
		}
	}
	{
		int32_t L_486 = V_14;
		if ((((int32_t)L_486) >= ((int32_t)1)))
		{
			goto IL_0b7d;
		}
	}

IL_0b03:
	{
		// blens = null;
		__this->___blens_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blens_6), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		// mode = InflateBlockMode.BAD;
		__this->___mode_2 = ((int32_t)9);
		// _codec.Message = "invalid bit length repeat";
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_487 = __this->____codec_11;
		NullCheck(L_487);
		L_487->___Message_8 = _stringLiteral359C7A1FB5CEBD929D7F11F5D3E96EDE7FF01384;
		Il2CppCodeGenWriteBarrier((void**)(&L_487->___Message_8), (void*)_stringLiteral359C7A1FB5CEBD929D7F11F5D3E96EDE7FF01384);
		// r = ZlibConstants.Z_DATA_ERROR;
		___r0 = ((int32_t)-3);
		// bitb = b; bitk = k;
		int32_t L_488 = V_1;
		__this->___bitb_13 = L_488;
		// bitb = b; bitk = k;
		int32_t L_489 = V_2;
		__this->___bitk_12 = L_489;
		// _codec.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_490 = __this->____codec_11;
		int32_t L_491 = V_4;
		NullCheck(L_490);
		L_490->___AvailableBytesIn_2 = L_491;
		// _codec.TotalBytesIn += p - _codec.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_492 = __this->____codec_11;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_493 = L_492;
		NullCheck(L_493);
		int64_t L_494 = L_493->___TotalBytesIn_3;
		int32_t L_495 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_496 = __this->____codec_11;
		NullCheck(L_496);
		int32_t L_497 = L_496->___NextIn_1;
		NullCheck(L_493);
		L_493->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_494, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_495, L_497)))));
		// _codec.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_498 = __this->____codec_11;
		int32_t L_499 = V_3;
		NullCheck(L_498);
		L_498->___NextIn_1 = L_499;
		// writeAt = q;
		int32_t L_500 = V_5;
		__this->___writeAt_18 = L_500;
		// return Flush(r);
		int32_t L_501 = ___r0;
		int32_t L_502;
		L_502 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(__this, L_501, NULL);
		return L_502;
	}

IL_0b7d:
	{
		// c = (c == 16) ? blens[i-1] : 0;
		int32_t L_503 = V_16;
		if ((((int32_t)L_503) == ((int32_t)((int32_t)16))))
		{
			goto IL_0b86;
		}
	}
	{
		G_B116_0 = 0;
		goto IL_0b91;
	}

IL_0b86:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_504 = __this->___blens_6;
		int32_t L_505 = V_14;
		NullCheck(L_504);
		int32_t L_506 = ((int32_t)il2cpp_codegen_subtract(L_505, 1));
		int32_t L_507 = (L_504)->GetAt(static_cast<il2cpp_array_size_t>(L_506));
		G_B116_0 = L_507;
	}

IL_0b91:
	{
		V_16 = G_B116_0;
	}

IL_0b93:
	{
		// blens[i++] = c;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_508 = __this->___blens_6;
		int32_t L_509 = V_14;
		int32_t L_510 = L_509;
		V_14 = ((int32_t)il2cpp_codegen_add(L_510, 1));
		int32_t L_511 = V_16;
		NullCheck(L_508);
		(L_508)->SetAt(static_cast<il2cpp_array_size_t>(L_510), (int32_t)L_511);
		// while (--j != 0);
		int32_t L_512 = V_15;
		int32_t L_513 = ((int32_t)il2cpp_codegen_subtract(L_512, 1));
		V_15 = L_513;
		if (L_513)
		{
			goto IL_0b93;
		}
	}
	{
		// index = i;
		int32_t L_514 = V_14;
		__this->___index_5 = L_514;
		// while (true)
		goto IL_08c4;
	}

IL_0bb9:
	{
		// tb[0] = -1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_515 = __this->___tb_8;
		NullCheck(L_515);
		(L_515)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(-1));
		// int[] bl = new int[] { 9 };  // must be <= 9 for lookahead assumptions
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_516 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_517 = L_516;
		NullCheck(L_517);
		(L_517)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)9));
		V_17 = L_517;
		// int[] bd = new int[] { 6 }; // must be <= 9 for lookahead assumptions
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_518 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_519 = L_518;
		NullCheck(L_519);
		(L_519)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)6);
		V_18 = L_519;
		// int[] tl = new int[1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_520 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_19 = L_520;
		// int[] td = new int[1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_521 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_20 = L_521;
		// t = table;
		int32_t L_522 = __this->___table_4;
		V_0 = L_522;
		// t = inftree.inflate_trees_dynamic(257 + (t & 0x1f), 1 + ((t >> 5) & 0x1f), blens, bl, bd, tl, td, hufts, _codec);
		InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE* L_523 = __this->___inftree_21;
		int32_t L_524 = V_0;
		int32_t L_525 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_526 = __this->___blens_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_527 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_528 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_529 = V_19;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_530 = V_20;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_531 = __this->___hufts_14;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_532 = __this->____codec_11;
		NullCheck(L_523);
		int32_t L_533;
		L_533 = InfTree_inflate_trees_dynamic_m014FA1DD7C75E54F675E6B689D7238489F1582EE(L_523, ((int32_t)il2cpp_codegen_add(((int32_t)257), ((int32_t)(L_524&((int32_t)31))))), ((int32_t)il2cpp_codegen_add(1, ((int32_t)(((int32_t)(L_525>>5))&((int32_t)31))))), L_526, L_527, L_528, L_529, L_530, L_531, L_532, NULL);
		V_0 = L_533;
		// if (t != ZlibConstants.Z_OK)
		int32_t L_534 = V_0;
		if (!L_534)
		{
			goto IL_0c9b;
		}
	}
	{
		// if (t == ZlibConstants.Z_DATA_ERROR)
		int32_t L_535 = V_0;
		if ((!(((uint32_t)L_535) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0c41;
		}
	}
	{
		// blens = null;
		__this->___blens_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blens_6), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		// mode = InflateBlockMode.BAD;
		__this->___mode_2 = ((int32_t)9);
	}

IL_0c41:
	{
		// r = t;
		int32_t L_536 = V_0;
		___r0 = L_536;
		// bitb = b; bitk = k;
		int32_t L_537 = V_1;
		__this->___bitb_13 = L_537;
		// bitb = b; bitk = k;
		int32_t L_538 = V_2;
		__this->___bitk_12 = L_538;
		// _codec.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_539 = __this->____codec_11;
		int32_t L_540 = V_4;
		NullCheck(L_539);
		L_539->___AvailableBytesIn_2 = L_540;
		// _codec.TotalBytesIn += p - _codec.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_541 = __this->____codec_11;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_542 = L_541;
		NullCheck(L_542);
		int64_t L_543 = L_542->___TotalBytesIn_3;
		int32_t L_544 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_545 = __this->____codec_11;
		NullCheck(L_545);
		int32_t L_546 = L_545->___NextIn_1;
		NullCheck(L_542);
		L_542->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_543, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_544, L_546)))));
		// _codec.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_547 = __this->____codec_11;
		int32_t L_548 = V_3;
		NullCheck(L_547);
		L_547->___NextIn_1 = L_548;
		// writeAt = q;
		int32_t L_549 = V_5;
		__this->___writeAt_18 = L_549;
		// return Flush(r);
		int32_t L_550 = ___r0;
		int32_t L_551;
		L_551 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(__this, L_550, NULL);
		return L_551;
	}

IL_0c9b:
	{
		// codes.Init(bl[0], bd[0], hufts, tl[0], hufts, td[0]);
		InflateCodes_t2759A3D840DF45440C2D917FC57F100D1969F7D6* L_552 = __this->___codes_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_553 = V_17;
		NullCheck(L_553);
		int32_t L_554 = 0;
		int32_t L_555 = (L_553)->GetAt(static_cast<il2cpp_array_size_t>(L_554));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_556 = V_18;
		NullCheck(L_556);
		int32_t L_557 = 0;
		int32_t L_558 = (L_556)->GetAt(static_cast<il2cpp_array_size_t>(L_557));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_559 = __this->___hufts_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_560 = V_19;
		NullCheck(L_560);
		int32_t L_561 = 0;
		int32_t L_562 = (L_560)->GetAt(static_cast<il2cpp_array_size_t>(L_561));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_563 = __this->___hufts_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_564 = V_20;
		NullCheck(L_564);
		int32_t L_565 = 0;
		int32_t L_566 = (L_564)->GetAt(static_cast<il2cpp_array_size_t>(L_565));
		NullCheck(L_552);
		InflateCodes_Init_mD66ED3F1182B685327EC5A9EB8CB2B3161DE15E5(L_552, L_555, L_558, L_559, L_562, L_563, L_566, NULL);
		// mode = InflateBlockMode.CODES;
		__this->___mode_2 = 6;
	}

IL_0cc9:
	{
		// bitb = b; bitk = k;
		int32_t L_567 = V_1;
		__this->___bitb_13 = L_567;
		// bitb = b; bitk = k;
		int32_t L_568 = V_2;
		__this->___bitk_12 = L_568;
		// _codec.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_569 = __this->____codec_11;
		int32_t L_570 = V_4;
		NullCheck(L_569);
		L_569->___AvailableBytesIn_2 = L_570;
		// _codec.TotalBytesIn += p - _codec.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_571 = __this->____codec_11;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_572 = L_571;
		NullCheck(L_572);
		int64_t L_573 = L_572->___TotalBytesIn_3;
		int32_t L_574 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_575 = __this->____codec_11;
		NullCheck(L_575);
		int32_t L_576 = L_575->___NextIn_1;
		NullCheck(L_572);
		L_572->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_573, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_574, L_576)))));
		// _codec.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_577 = __this->____codec_11;
		int32_t L_578 = V_3;
		NullCheck(L_577);
		L_577->___NextIn_1 = L_578;
		// writeAt = q;
		int32_t L_579 = V_5;
		__this->___writeAt_18 = L_579;
		// r = codes.Process(this, r);
		InflateCodes_t2759A3D840DF45440C2D917FC57F100D1969F7D6* L_580 = __this->___codes_9;
		int32_t L_581 = ___r0;
		NullCheck(L_580);
		int32_t L_582;
		L_582 = InflateCodes_Process_m7F92FF26812C32DB48F09366141943548DBB762C(L_580, __this, L_581, NULL);
		___r0 = L_582;
		// if (r != ZlibConstants.Z_STREAM_END)
		int32_t L_583 = ___r0;
		if ((((int32_t)L_583) == ((int32_t)1)))
		{
			goto IL_0d33;
		}
	}
	{
		// return Flush(r);
		int32_t L_584 = ___r0;
		int32_t L_585;
		L_585 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(__this, L_584, NULL);
		return L_585;
	}

IL_0d33:
	{
		// r = ZlibConstants.Z_OK;
		___r0 = 0;
		// p = _codec.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_586 = __this->____codec_11;
		NullCheck(L_586);
		int32_t L_587 = L_586->___NextIn_1;
		V_3 = L_587;
		// n = _codec.AvailableBytesIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_588 = __this->____codec_11;
		NullCheck(L_588);
		int32_t L_589 = L_588->___AvailableBytesIn_2;
		V_4 = L_589;
		// b = bitb;
		int32_t L_590 = __this->___bitb_13;
		V_1 = L_590;
		// k = bitk;
		int32_t L_591 = __this->___bitk_12;
		V_2 = L_591;
		// q = writeAt;
		int32_t L_592 = __this->___writeAt_18;
		V_5 = L_592;
		// m = (int)(q < readAt ? readAt - q - 1 : end - q);
		int32_t L_593 = V_5;
		int32_t L_594 = __this->___readAt_17;
		if ((((int32_t)L_593) < ((int32_t)L_594)))
		{
			goto IL_0d7a;
		}
	}
	{
		int32_t L_595 = __this->___end_16;
		int32_t L_596 = V_5;
		G_B129_0 = ((int32_t)il2cpp_codegen_subtract(L_595, L_596));
		goto IL_0d85;
	}

IL_0d7a:
	{
		int32_t L_597 = __this->___readAt_17;
		int32_t L_598 = V_5;
		G_B129_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_597, L_598)), 1));
	}

IL_0d85:
	{
		V_6 = G_B129_0;
		// if (last == 0)
		int32_t L_599 = __this->___last_10;
		if (L_599)
		{
			goto IL_0d9b;
		}
	}
	{
		// mode = InflateBlockMode.TYPE;
		__this->___mode_2 = 0;
		// break;
		goto IL_0051;
	}

IL_0d9b:
	{
		// mode = InflateBlockMode.DRY;
		__this->___mode_2 = 7;
	}

IL_0da2:
	{
		// writeAt = q;
		int32_t L_600 = V_5;
		__this->___writeAt_18 = L_600;
		// r = Flush(r);
		int32_t L_601 = ___r0;
		int32_t L_602;
		L_602 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(__this, L_601, NULL);
		___r0 = L_602;
		// q = writeAt; m = (int)(q < readAt ? readAt - q - 1 : end - q);
		int32_t L_603 = __this->___writeAt_18;
		V_5 = L_603;
		// q = writeAt; m = (int)(q < readAt ? readAt - q - 1 : end - q);
		int32_t L_604 = V_5;
		int32_t L_605 = __this->___readAt_17;
		if ((((int32_t)L_604) < ((int32_t)L_605)))
		{
			goto IL_0dd0;
		}
	}
	{
		int32_t L_606 = __this->___end_16;
		int32_t L_607 = V_5;
		G_B135_0 = ((int32_t)il2cpp_codegen_subtract(L_606, L_607));
		goto IL_0ddb;
	}

IL_0dd0:
	{
		int32_t L_608 = __this->___readAt_17;
		int32_t L_609 = V_5;
		G_B135_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_608, L_609)), 1));
	}

IL_0ddb:
	{
		V_6 = G_B135_0;
		// if (readAt != writeAt)
		int32_t L_610 = __this->___readAt_17;
		int32_t L_611 = __this->___writeAt_18;
		if ((((int32_t)L_610) == ((int32_t)L_611)))
		{
			goto IL_0e42;
		}
	}
	{
		// bitb = b; bitk = k;
		int32_t L_612 = V_1;
		__this->___bitb_13 = L_612;
		// bitb = b; bitk = k;
		int32_t L_613 = V_2;
		__this->___bitk_12 = L_613;
		// _codec.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_614 = __this->____codec_11;
		int32_t L_615 = V_4;
		NullCheck(L_614);
		L_614->___AvailableBytesIn_2 = L_615;
		// _codec.TotalBytesIn += p - _codec.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_616 = __this->____codec_11;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_617 = L_616;
		NullCheck(L_617);
		int64_t L_618 = L_617->___TotalBytesIn_3;
		int32_t L_619 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_620 = __this->____codec_11;
		NullCheck(L_620);
		int32_t L_621 = L_620->___NextIn_1;
		NullCheck(L_617);
		L_617->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_618, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_619, L_621)))));
		// _codec.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_622 = __this->____codec_11;
		int32_t L_623 = V_3;
		NullCheck(L_622);
		L_622->___NextIn_1 = L_623;
		// writeAt = q;
		int32_t L_624 = V_5;
		__this->___writeAt_18 = L_624;
		// return Flush(r);
		int32_t L_625 = ___r0;
		int32_t L_626;
		L_626 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(__this, L_625, NULL);
		return L_626;
	}

IL_0e42:
	{
		// mode = InflateBlockMode.DONE;
		__this->___mode_2 = 8;
	}

IL_0e49:
	{
		// r = ZlibConstants.Z_STREAM_END;
		___r0 = 1;
		// bitb = b;
		int32_t L_627 = V_1;
		__this->___bitb_13 = L_627;
		// bitk = k;
		int32_t L_628 = V_2;
		__this->___bitk_12 = L_628;
		// _codec.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_629 = __this->____codec_11;
		int32_t L_630 = V_4;
		NullCheck(L_629);
		L_629->___AvailableBytesIn_2 = L_630;
		// _codec.TotalBytesIn += p - _codec.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_631 = __this->____codec_11;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_632 = L_631;
		NullCheck(L_632);
		int64_t L_633 = L_632->___TotalBytesIn_3;
		int32_t L_634 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_635 = __this->____codec_11;
		NullCheck(L_635);
		int32_t L_636 = L_635->___NextIn_1;
		NullCheck(L_632);
		L_632->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_633, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_634, L_636)))));
		// _codec.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_637 = __this->____codec_11;
		int32_t L_638 = V_3;
		NullCheck(L_637);
		L_637->___NextIn_1 = L_638;
		// writeAt = q;
		int32_t L_639 = V_5;
		__this->___writeAt_18 = L_639;
		// return Flush(r);
		int32_t L_640 = ___r0;
		int32_t L_641;
		L_641 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(__this, L_640, NULL);
		return L_641;
	}

IL_0ea3:
	{
		// r = ZlibConstants.Z_DATA_ERROR;
		___r0 = ((int32_t)-3);
		// bitb = b; bitk = k;
		int32_t L_642 = V_1;
		__this->___bitb_13 = L_642;
		// bitb = b; bitk = k;
		int32_t L_643 = V_2;
		__this->___bitk_12 = L_643;
		// _codec.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_644 = __this->____codec_11;
		int32_t L_645 = V_4;
		NullCheck(L_644);
		L_644->___AvailableBytesIn_2 = L_645;
		// _codec.TotalBytesIn += p - _codec.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_646 = __this->____codec_11;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_647 = L_646;
		NullCheck(L_647);
		int64_t L_648 = L_647->___TotalBytesIn_3;
		int32_t L_649 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_650 = __this->____codec_11;
		NullCheck(L_650);
		int32_t L_651 = L_650->___NextIn_1;
		NullCheck(L_647);
		L_647->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_648, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_649, L_651)))));
		// _codec.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_652 = __this->____codec_11;
		int32_t L_653 = V_3;
		NullCheck(L_652);
		L_652->___NextIn_1 = L_653;
		// writeAt = q;
		int32_t L_654 = V_5;
		__this->___writeAt_18 = L_654;
		// return Flush(r);
		int32_t L_655 = ___r0;
		int32_t L_656;
		L_656 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(__this, L_655, NULL);
		return L_656;
	}

IL_0efe:
	{
		// r = ZlibConstants.Z_STREAM_ERROR;
		___r0 = ((int32_t)-2);
		// bitb = b; bitk = k;
		int32_t L_657 = V_1;
		__this->___bitb_13 = L_657;
		// bitb = b; bitk = k;
		int32_t L_658 = V_2;
		__this->___bitk_12 = L_658;
		// _codec.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_659 = __this->____codec_11;
		int32_t L_660 = V_4;
		NullCheck(L_659);
		L_659->___AvailableBytesIn_2 = L_660;
		// _codec.TotalBytesIn += p - _codec.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_661 = __this->____codec_11;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_662 = L_661;
		NullCheck(L_662);
		int64_t L_663 = L_662->___TotalBytesIn_3;
		int32_t L_664 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_665 = __this->____codec_11;
		NullCheck(L_665);
		int32_t L_666 = L_665->___NextIn_1;
		NullCheck(L_662);
		L_662->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_663, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_664, L_666)))));
		// _codec.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_667 = __this->____codec_11;
		int32_t L_668 = V_3;
		NullCheck(L_667);
		L_667->___NextIn_1 = L_668;
		// writeAt = q;
		int32_t L_669 = V_5;
		__this->___writeAt_18 = L_669;
		// return Flush(r);
		int32_t L_670 = ___r0;
		int32_t L_671;
		L_671 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(__this, L_670, NULL);
		return L_671;
	}
}
// System.Void Ionic.Zlib.InflateBlocks::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateBlocks_Free_m320ED5CDEBC7841177560DD05467595B3D3601B9 (InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* __this, const RuntimeMethod* method) 
{
	{
		// Reset();
		uint32_t L_0;
		L_0 = InflateBlocks_Reset_m8BF6F7A81688AA1977F0089C2200DB9BC2E3A988(__this, NULL);
		// window = null;
		__this->___window_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___window_15), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		// hufts = null;
		__this->___hufts_14 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hufts_14), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.InflateBlocks::SetDictionary(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateBlocks_SetDictionary_mC2D309C03A4AA8F3597EB6EDAFFF11885EC5374D (InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___d0, int32_t ___start1, int32_t ___n2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// Array.Copy(d, start, window, 0, n);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___d0;
		int32_t L_1 = ___start1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___window_15;
		int32_t L_3 = ___n2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_0, L_1, (RuntimeArray*)L_2, 0, L_3, NULL);
		// readAt = writeAt = n;
		int32_t L_4 = ___n2;
		int32_t L_5 = L_4;
		V_0 = L_5;
		__this->___writeAt_18 = L_5;
		int32_t L_6 = V_0;
		__this->___readAt_17 = L_6;
		// }
		return;
	}
}
// System.Int32 Ionic.Zlib.InflateBlocks::SyncPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateBlocks_SyncPoint_mDAF7364D181CCB931E90DC4FD685BE199E44927E (InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* __this, const RuntimeMethod* method) 
{
	{
		// return mode == InflateBlockMode.LENS ? 1 : 0;
		int32_t L_0 = __this->___mode_2;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		return 1;
	}
}
// System.Int32 Ionic.Zlib.InflateBlocks::Flush(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0 (InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* __this, int32_t ___r0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler_t0FD1A5CDC49CCF1E8741247D09C4D1C46EEAE2D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t G_B5_0 = 0;
	{
		// for (int pass=0; pass < 2; pass++)
		V_1 = 0;
		goto IL_014b;
	}

IL_0007:
	{
		// if (pass==0)
		int32_t L_0 = V_1;
		if (L_0)
		{
			goto IL_0030;
		}
	}
	{
		// nBytes = (int)((readAt <= writeAt ? writeAt : end) - readAt);
		int32_t L_1 = __this->___readAt_17;
		int32_t L_2 = __this->___writeAt_18;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = __this->___end_16;
		G_B5_0 = L_3;
		goto IL_0026;
	}

IL_0020:
	{
		int32_t L_4 = __this->___writeAt_18;
		G_B5_0 = L_4;
	}

IL_0026:
	{
		int32_t L_5 = __this->___readAt_17;
		V_0 = ((int32_t)il2cpp_codegen_subtract(G_B5_0, L_5));
		goto IL_003e;
	}

IL_0030:
	{
		// nBytes = writeAt - readAt;
		int32_t L_6 = __this->___writeAt_18;
		int32_t L_7 = __this->___readAt_17;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, L_7));
	}

IL_003e:
	{
		// if (nBytes == 0)
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_004b;
		}
	}
	{
		// if (r == ZlibConstants.Z_BUF_ERROR)
		int32_t L_9 = ___r0;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_0049;
		}
	}
	{
		// r = ZlibConstants.Z_OK;
		___r0 = 0;
	}

IL_0049:
	{
		// return r;
		int32_t L_10 = ___r0;
		return L_10;
	}

IL_004b:
	{
		// if (nBytes > _codec.AvailableBytesOut)
		int32_t L_11 = V_0;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_12 = __this->____codec_11;
		NullCheck(L_12);
		int32_t L_13 = L_12->___AvailableBytesOut_6;
		if ((((int32_t)L_11) <= ((int32_t)L_13)))
		{
			goto IL_0065;
		}
	}
	{
		// nBytes = _codec.AvailableBytesOut;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_14 = __this->____codec_11;
		NullCheck(L_14);
		int32_t L_15 = L_14->___AvailableBytesOut_6;
		V_0 = L_15;
	}

IL_0065:
	{
		// if (nBytes != 0 && r == ZlibConstants.Z_BUF_ERROR)
		int32_t L_16 = V_0;
		if (!L_16)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_17 = ___r0;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_0070;
		}
	}
	{
		// r = ZlibConstants.Z_OK;
		___r0 = 0;
	}

IL_0070:
	{
		// _codec.AvailableBytesOut -= nBytes;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_18 = __this->____codec_11;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_19 = L_18;
		NullCheck(L_19);
		int32_t L_20 = L_19->___AvailableBytesOut_6;
		int32_t L_21 = V_0;
		NullCheck(L_19);
		L_19->___AvailableBytesOut_6 = ((int32_t)il2cpp_codegen_subtract(L_20, L_21));
		// _codec.TotalBytesOut += nBytes;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_22 = __this->____codec_11;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_23 = L_22;
		NullCheck(L_23);
		int64_t L_24 = L_23->___TotalBytesOut_7;
		int32_t L_25 = V_0;
		NullCheck(L_23);
		L_23->___TotalBytesOut_7 = ((int64_t)il2cpp_codegen_add(L_24, ((int64_t)L_25)));
		// if (checkfn != null)
		RuntimeObject* L_26 = __this->___checkfn_19;
		if (!L_26)
		{
			goto IL_00cb;
		}
	}
	{
		// _codec._Adler32 = check = Adler.Adler32(check, window, readAt, nBytes);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_27 = __this->____codec_11;
		uint32_t L_28 = __this->___check_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___window_15;
		int32_t L_30 = __this->___readAt_17;
		int32_t L_31 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Adler_t0FD1A5CDC49CCF1E8741247D09C4D1C46EEAE2D2_il2cpp_TypeInfo_var);
		uint32_t L_32;
		L_32 = Adler_Adler32_m9695EEA6DCAA53D00A6F830833B21FAEDE1C0E39(L_28, L_29, L_30, L_31, NULL);
		uint32_t L_33 = L_32;
		V_2 = L_33;
		__this->___check_20 = L_33;
		uint32_t L_34 = V_2;
		NullCheck(L_27);
		L_27->____Adler32_11 = L_34;
	}

IL_00cb:
	{
		// Array.Copy(window, readAt, _codec.OutputBuffer, _codec.NextOut, nBytes);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->___window_15;
		int32_t L_36 = __this->___readAt_17;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_37 = __this->____codec_11;
		NullCheck(L_37);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = L_37->___OutputBuffer_4;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_39 = __this->____codec_11;
		NullCheck(L_39);
		int32_t L_40 = L_39->___NextOut_5;
		int32_t L_41 = V_0;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_35, L_36, (RuntimeArray*)L_38, L_40, L_41, NULL);
		// _codec.NextOut += nBytes;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_42 = __this->____codec_11;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_43 = L_42;
		NullCheck(L_43);
		int32_t L_44 = L_43->___NextOut_5;
		int32_t L_45 = V_0;
		NullCheck(L_43);
		L_43->___NextOut_5 = ((int32_t)il2cpp_codegen_add(L_44, L_45));
		// readAt += nBytes;
		int32_t L_46 = __this->___readAt_17;
		int32_t L_47 = V_0;
		__this->___readAt_17 = ((int32_t)il2cpp_codegen_add(L_46, L_47));
		// if (readAt == end && pass == 0)
		int32_t L_48 = __this->___readAt_17;
		int32_t L_49 = __this->___end_16;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_50 = V_1;
		if (L_50)
		{
			goto IL_0143;
		}
	}
	{
		// readAt = 0;
		__this->___readAt_17 = 0;
		// if (writeAt == end)
		int32_t L_51 = __this->___writeAt_18;
		int32_t L_52 = __this->___end_16;
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0147;
		}
	}
	{
		// writeAt = 0;
		__this->___writeAt_18 = 0;
		goto IL_0147;
	}

IL_0143:
	{
		// else pass++;
		int32_t L_53 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_0147:
	{
		// for (int pass=0; pass < 2; pass++)
		int32_t L_54 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_014b:
	{
		// for (int pass=0; pass < 2; pass++)
		int32_t L_55 = V_1;
		if ((((int32_t)L_55) < ((int32_t)2)))
		{
			goto IL_0007;
		}
	}
	{
		// return r;
		int32_t L_56 = ___r0;
		return L_56;
	}
}
// System.Void Ionic.Zlib.InflateBlocks::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateBlocks__cctor_mB9A90FE3B1AB1FDA64C22494C94F9FC93562EA78 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____C133E473E5E653C5C4AEDB8BCC1C1A3A44D384FC0B6C0FCF04672B1B325EC01B_13_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly int[] border = new int[]
		// { 16, 17, 18, 0, 8, 7, 9, 6, 10, 5, 11, 4, 12, 3, 13, 2, 14, 1, 15 };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____C133E473E5E653C5C4AEDB8BCC1C1A3A44D384FC0B6C0FCF04672B1B325EC01B_13_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E_StaticFields*)il2cpp_codegen_static_fields_for(InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E_il2cpp_TypeInfo_var))->___border_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E_StaticFields*)il2cpp_codegen_static_fields_for(InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E_il2cpp_TypeInfo_var))->___border_1), (void*)L_1);
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
// System.Void Ionic.Zlib.InternalInflateConstants::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalInflateConstants__cctor_m6164C398431A4B259BE7AFE9B8A8F23C1BCDEDFC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_14_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly int[] InflateMask = new int[] {
		//     0x00000000, 0x00000001, 0x00000003, 0x00000007,
		//     0x0000000f, 0x0000001f, 0x0000003f, 0x0000007f,
		//     0x000000ff, 0x000001ff, 0x000003ff, 0x000007ff,
		//     0x00000fff, 0x00001fff, 0x00003fff, 0x00007fff, 0x0000ffff };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_14_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var))->___InflateMask_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var))->___InflateMask_0), (void*)L_1);
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
// System.Void Ionic.Zlib.InflateCodes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateCodes__ctor_mBD475BE915886D11D4BCA58CEA81698299D65E50 (InflateCodes_t2759A3D840DF45440C2D917FC57F100D1969F7D6* __this, const RuntimeMethod* method) 
{
	{
		// internal InflateCodes()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.InflateCodes::Init(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateCodes_Init_mD66ED3F1182B685327EC5A9EB8CB2B3161DE15E5 (InflateCodes_t2759A3D840DF45440C2D917FC57F100D1969F7D6* __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___td4, int32_t ___td_index5, const RuntimeMethod* method) 
{
	{
		// mode = START;
		__this->___mode_10 = 0;
		// lbits = (byte)bl;
		int32_t L_0 = ___bl0;
		__this->___lbits_18 = (uint8_t)((int32_t)(uint8_t)L_0);
		// dbits = (byte)bd;
		int32_t L_1 = ___bd1;
		__this->___dbits_19 = (uint8_t)((int32_t)(uint8_t)L_1);
		// ltree = tl;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___tl2;
		__this->___ltree_20 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ltree_20), (void*)L_2);
		// ltree_index = tl_index;
		int32_t L_3 = ___tl_index3;
		__this->___ltree_index_21 = L_3;
		// dtree = td;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___td4;
		__this->___dtree_22 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dtree_22), (void*)L_4);
		// dtree_index = td_index;
		int32_t L_5 = ___td_index5;
		__this->___dtree_index_23 = L_5;
		// tree = null;
		__this->___tree_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_12), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		// }
		return;
	}
}
// System.Int32 Ionic.Zlib.InflateCodes::Process(Ionic.Zlib.InflateBlocks,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateCodes_Process_m7F92FF26812C32DB48F09366141943548DBB762C (InflateCodes_t2759A3D840DF45440C2D917FC57F100D1969F7D6* __this, InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* ___blocks0, int32_t ___r1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B11_0 = 0;
	InflateCodes_t2759A3D840DF45440C2D917FC57F100D1969F7D6* G_B14_0 = NULL;
	InflateCodes_t2759A3D840DF45440C2D917FC57F100D1969F7D6* G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	InflateCodes_t2759A3D840DF45440C2D917FC57F100D1969F7D6* G_B15_1 = NULL;
	int32_t G_B67_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B77_0 = 0;
	int32_t G_B91_0 = 0;
	int32_t G_B96_0 = 0;
	int32_t G_B101_0 = 0;
	int32_t G_B110_0 = 0;
	{
		// int b = 0;  // bit buffer
		V_3 = 0;
		// int k = 0;  // bits in bit buffer
		V_4 = 0;
		// int p = 0;  // input data pointer
		V_5 = 0;
		// ZlibCodec z = blocks._codec;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_0 = ___blocks0;
		NullCheck(L_0);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_1 = L_0->____codec_11;
		V_10 = L_1;
		// p = z.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_2 = V_10;
		NullCheck(L_2);
		int32_t L_3 = L_2->___NextIn_1;
		V_5 = L_3;
		// n = z.AvailableBytesIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_4 = V_10;
		NullCheck(L_4);
		int32_t L_5 = L_4->___AvailableBytesIn_2;
		V_6 = L_5;
		// b = blocks.bitb;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_6 = ___blocks0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bitb_13;
		V_3 = L_7;
		// k = blocks.bitk;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_8 = ___blocks0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___bitk_12;
		V_4 = L_9;
		// q = blocks.writeAt; m = q < blocks.readAt ? blocks.readAt - q - 1 : blocks.end - q;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_10 = ___blocks0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___writeAt_18;
		V_7 = L_11;
		// q = blocks.writeAt; m = q < blocks.readAt ? blocks.readAt - q - 1 : blocks.end - q;
		int32_t L_12 = V_7;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_13 = ___blocks0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___readAt_17;
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_004e;
		}
	}
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_15 = ___blocks0;
		NullCheck(L_15);
		int32_t L_16 = L_15->___end_16;
		int32_t L_17 = V_7;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(L_16, L_17));
		goto IL_0059;
	}

IL_004e:
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_18 = ___blocks0;
		NullCheck(L_18);
		int32_t L_19 = L_18->___readAt_17;
		int32_t L_20 = V_7;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_19, L_20)), 1));
	}

IL_0059:
	{
		V_8 = G_B3_0;
	}

IL_005b:
	{
		// switch (mode)
		int32_t L_21 = __this->___mode_10;
		V_11 = L_21;
		int32_t L_22 = V_11;
		switch (L_22)
		{
			case 0:
			{
				goto IL_0097;
			}
			case 1:
			{
				goto IL_01aa;
			}
			case 2:
			{
				goto IL_0358;
			}
			case 3:
			{
				goto IL_0434;
			}
			case 4:
			{
				goto IL_05b1;
			}
			case 5:
			{
				goto IL_0669;
			}
			case 6:
			{
				goto IL_07e4;
			}
			case 7:
			{
				goto IL_0913;
			}
			case 8:
			{
				goto IL_09c4;
			}
			case 9:
			{
				goto IL_0a11;
			}
		}
	}
	{
		goto IL_0a5f;
	}

IL_0097:
	{
		// if (m >= 258 && n >= 10)
		int32_t L_23 = V_8;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)258))))
		{
			goto IL_017f;
		}
	}
	{
		int32_t L_24 = V_6;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)10))))
		{
			goto IL_017f;
		}
	}
	{
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_25 = ___blocks0;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		L_25->___bitb_13 = L_26;
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_27 = ___blocks0;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		L_27->___bitk_12 = L_28;
		// z.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_29 = V_10;
		int32_t L_30 = V_6;
		NullCheck(L_29);
		L_29->___AvailableBytesIn_2 = L_30;
		// z.TotalBytesIn += p - z.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_31 = V_10;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_32 = L_31;
		NullCheck(L_32);
		int64_t L_33 = L_32->___TotalBytesIn_3;
		int32_t L_34 = V_5;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_35 = V_10;
		NullCheck(L_35);
		int32_t L_36 = L_35->___NextIn_1;
		NullCheck(L_32);
		L_32->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_33, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_34, L_36)))));
		// z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_37 = V_10;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		L_37->___NextIn_1 = L_38;
		// blocks.writeAt = q;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_39 = ___blocks0;
		int32_t L_40 = V_7;
		NullCheck(L_39);
		L_39->___writeAt_18 = L_40;
		// r = InflateFast(lbits, dbits, ltree, ltree_index, dtree, dtree_index, blocks, z);
		uint8_t L_41 = __this->___lbits_18;
		uint8_t L_42 = __this->___dbits_19;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = __this->___ltree_20;
		int32_t L_44 = __this->___ltree_index_21;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = __this->___dtree_22;
		int32_t L_46 = __this->___dtree_index_23;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_47 = ___blocks0;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_48 = V_10;
		int32_t L_49;
		L_49 = InflateCodes_InflateFast_m9C7C03641DD6428D054E55124267BE4C06FC3C6F(__this, L_41, L_42, L_43, L_44, L_45, L_46, L_47, L_48, NULL);
		___r1 = L_49;
		// p = z.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_50 = V_10;
		NullCheck(L_50);
		int32_t L_51 = L_50->___NextIn_1;
		V_5 = L_51;
		// n = z.AvailableBytesIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_52 = V_10;
		NullCheck(L_52);
		int32_t L_53 = L_52->___AvailableBytesIn_2;
		V_6 = L_53;
		// b = blocks.bitb;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_54 = ___blocks0;
		NullCheck(L_54);
		int32_t L_55 = L_54->___bitb_13;
		V_3 = L_55;
		// k = blocks.bitk;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_56 = ___blocks0;
		NullCheck(L_56);
		int32_t L_57 = L_56->___bitk_12;
		V_4 = L_57;
		// q = blocks.writeAt; m = q < blocks.readAt ? blocks.readAt - q - 1 : blocks.end - q;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_58 = ___blocks0;
		NullCheck(L_58);
		int32_t L_59 = L_58->___writeAt_18;
		V_7 = L_59;
		// q = blocks.writeAt; m = q < blocks.readAt ? blocks.readAt - q - 1 : blocks.end - q;
		int32_t L_60 = V_7;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_61 = ___blocks0;
		NullCheck(L_61);
		int32_t L_62 = L_61->___readAt_17;
		if ((((int32_t)L_60) < ((int32_t)L_62)))
		{
			goto IL_015b;
		}
	}
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_63 = ___blocks0;
		NullCheck(L_63);
		int32_t L_64 = L_63->___end_16;
		int32_t L_65 = V_7;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract(L_64, L_65));
		goto IL_0166;
	}

IL_015b:
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_66 = ___blocks0;
		NullCheck(L_66);
		int32_t L_67 = L_66->___readAt_17;
		int32_t L_68 = V_7;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_67, L_68)), 1));
	}

IL_0166:
	{
		V_8 = G_B11_0;
		// if (r != ZlibConstants.Z_OK)
		int32_t L_69 = ___r1;
		if (!L_69)
		{
			goto IL_017f;
		}
	}
	{
		// mode = (r == ZlibConstants.Z_STREAM_END) ? WASH : BADCODE;
		int32_t L_70 = ___r1;
		G_B13_0 = __this;
		if ((((int32_t)L_70) == ((int32_t)1)))
		{
			G_B14_0 = __this;
			goto IL_0174;
		}
	}
	{
		G_B15_0 = ((int32_t)9);
		G_B15_1 = G_B13_0;
		goto IL_0175;
	}

IL_0174:
	{
		G_B15_0 = 7;
		G_B15_1 = G_B14_0;
	}

IL_0175:
	{
		NullCheck(G_B15_1);
		G_B15_1->___mode_10 = G_B15_0;
		// break;
		goto IL_005b;
	}

IL_017f:
	{
		// need = lbits;
		uint8_t L_71 = __this->___lbits_18;
		__this->___need_14 = L_71;
		// tree = ltree;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = __this->___ltree_20;
		__this->___tree_12 = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_12), (void*)L_72);
		// tree_index = ltree_index;
		int32_t L_73 = __this->___ltree_index_21;
		__this->___tree_index_13 = L_73;
		// mode = LEN;
		__this->___mode_10 = 1;
	}

IL_01aa:
	{
		// j = need;
		int32_t L_74 = __this->___need_14;
		V_0 = L_74;
		goto IL_0230;
	}

IL_01b3:
	{
		// if (n != 0)
		int32_t L_75 = V_6;
		if (!L_75)
		{
			goto IL_01bc;
		}
	}
	{
		// r = ZlibConstants.Z_OK;
		___r1 = 0;
		goto IL_0206;
	}

IL_01bc:
	{
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_76 = ___blocks0;
		int32_t L_77 = V_3;
		NullCheck(L_76);
		L_76->___bitb_13 = L_77;
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_78 = ___blocks0;
		int32_t L_79 = V_4;
		NullCheck(L_78);
		L_78->___bitk_12 = L_79;
		// z.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_80 = V_10;
		int32_t L_81 = V_6;
		NullCheck(L_80);
		L_80->___AvailableBytesIn_2 = L_81;
		// z.TotalBytesIn += p - z.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_82 = V_10;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_83 = L_82;
		NullCheck(L_83);
		int64_t L_84 = L_83->___TotalBytesIn_3;
		int32_t L_85 = V_5;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_86 = V_10;
		NullCheck(L_86);
		int32_t L_87 = L_86->___NextIn_1;
		NullCheck(L_83);
		L_83->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_84, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_85, L_87)))));
		// z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_88 = V_10;
		int32_t L_89 = V_5;
		NullCheck(L_88);
		L_88->___NextIn_1 = L_89;
		// blocks.writeAt = q;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_90 = ___blocks0;
		int32_t L_91 = V_7;
		NullCheck(L_90);
		L_90->___writeAt_18 = L_91;
		// return blocks.Flush(r);
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_92 = ___blocks0;
		int32_t L_93 = ___r1;
		NullCheck(L_92);
		int32_t L_94;
		L_94 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(L_92, L_93, NULL);
		return L_94;
	}

IL_0206:
	{
		// n--;
		int32_t L_95 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_95, 1));
		// b |= (z.InputBuffer[p++] & 0xff) << k;
		int32_t L_96 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_97 = V_10;
		NullCheck(L_97);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = L_97->___InputBuffer_0;
		int32_t L_99 = V_5;
		int32_t L_100 = L_99;
		V_5 = ((int32_t)il2cpp_codegen_add(L_100, 1));
		NullCheck(L_98);
		int32_t L_101 = L_100;
		uint8_t L_102 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		int32_t L_103 = V_4;
		V_3 = ((int32_t)(L_96|((int32_t)(((int32_t)((int32_t)L_102&((int32_t)255)))<<((int32_t)(L_103&((int32_t)31)))))));
		// k += 8;
		int32_t L_104 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_104, 8));
	}

IL_0230:
	{
		// while (k < j)
		int32_t L_105 = V_4;
		int32_t L_106 = V_0;
		if ((((int32_t)L_105) < ((int32_t)L_106)))
		{
			goto IL_01b3;
		}
	}
	{
		// tindex = (tree_index + (b & InternalInflateConstants.InflateMask[j])) * 3;
		int32_t L_107 = __this->___tree_index_13;
		int32_t L_108 = V_3;
		il2cpp_codegen_runtime_class_init_inline(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = ((InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_110 = V_0;
		NullCheck(L_109);
		int32_t L_111 = L_110;
		int32_t L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		V_1 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_107, ((int32_t)(L_108&L_112)))), 3));
		// b >>= (tree[tindex + 1]);
		int32_t L_113 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_114 = __this->___tree_12;
		int32_t L_115 = V_1;
		NullCheck(L_114);
		int32_t L_116 = ((int32_t)il2cpp_codegen_add(L_115, 1));
		int32_t L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		V_3 = ((int32_t)(L_113>>((int32_t)(L_117&((int32_t)31)))));
		// k -= (tree[tindex + 1]);
		int32_t L_118 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_119 = __this->___tree_12;
		int32_t L_120 = V_1;
		NullCheck(L_119);
		int32_t L_121 = ((int32_t)il2cpp_codegen_add(L_120, 1));
		int32_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_118, L_122));
		// e = tree[tindex];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_123 = __this->___tree_12;
		int32_t L_124 = V_1;
		NullCheck(L_123);
		int32_t L_125 = L_124;
		int32_t L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		V_2 = L_126;
		// if (e == 0)
		int32_t L_127 = V_2;
		if (L_127)
		{
			goto IL_0292;
		}
	}
	{
		// lit = tree[tindex + 2];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_128 = __this->___tree_12;
		int32_t L_129 = V_1;
		NullCheck(L_128);
		int32_t L_130 = ((int32_t)il2cpp_codegen_add(L_129, 2));
		int32_t L_131 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		__this->___lit_15 = L_131;
		// mode = LIT;
		__this->___mode_10 = 6;
		// break;
		goto IL_005b;
	}

IL_0292:
	{
		// if ((e & 16) != 0)
		int32_t L_132 = V_2;
		if (!((int32_t)(L_132&((int32_t)16))))
		{
			goto IL_02be;
		}
	}
	{
		// bitsToGet = e & 15;
		int32_t L_133 = V_2;
		__this->___bitsToGet_16 = ((int32_t)(L_133&((int32_t)15)));
		// len = tree[tindex + 2];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_134 = __this->___tree_12;
		int32_t L_135 = V_1;
		NullCheck(L_134);
		int32_t L_136 = ((int32_t)il2cpp_codegen_add(L_135, 2));
		int32_t L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		__this->___len_11 = L_137;
		// mode = LENEXT;
		__this->___mode_10 = 2;
		// break;
		goto IL_005b;
	}

IL_02be:
	{
		// if ((e & 64) == 0)
		int32_t L_138 = V_2;
		if (((int32_t)(L_138&((int32_t)64))))
		{
			goto IL_02e4;
		}
	}
	{
		// need = e;
		int32_t L_139 = V_2;
		__this->___need_14 = L_139;
		// tree_index = tindex / 3 + tree[tindex + 2];
		int32_t L_140 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = __this->___tree_12;
		int32_t L_142 = V_1;
		NullCheck(L_141);
		int32_t L_143 = ((int32_t)il2cpp_codegen_add(L_142, 2));
		int32_t L_144 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		__this->___tree_index_13 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_140/3)), L_144));
		// break;
		goto IL_005b;
	}

IL_02e4:
	{
		// if ((e & 32) != 0)
		int32_t L_145 = V_2;
		if (!((int32_t)(L_145&((int32_t)32))))
		{
			goto IL_02f6;
		}
	}
	{
		// mode = WASH;
		__this->___mode_10 = 7;
		// break;
		goto IL_005b;
	}

IL_02f6:
	{
		// mode = BADCODE; // invalid code
		__this->___mode_10 = ((int32_t)9);
		// z.Message = "invalid literal/length code";
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_146 = V_10;
		NullCheck(L_146);
		L_146->___Message_8 = _stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16;
		Il2CppCodeGenWriteBarrier((void**)(&L_146->___Message_8), (void*)_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		// r = ZlibConstants.Z_DATA_ERROR;
		___r1 = ((int32_t)-3);
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_147 = ___blocks0;
		int32_t L_148 = V_3;
		NullCheck(L_147);
		L_147->___bitb_13 = L_148;
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_149 = ___blocks0;
		int32_t L_150 = V_4;
		NullCheck(L_149);
		L_149->___bitk_12 = L_150;
		// z.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_151 = V_10;
		int32_t L_152 = V_6;
		NullCheck(L_151);
		L_151->___AvailableBytesIn_2 = L_152;
		// z.TotalBytesIn += p - z.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_153 = V_10;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_154 = L_153;
		NullCheck(L_154);
		int64_t L_155 = L_154->___TotalBytesIn_3;
		int32_t L_156 = V_5;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_157 = V_10;
		NullCheck(L_157);
		int32_t L_158 = L_157->___NextIn_1;
		NullCheck(L_154);
		L_154->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_155, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_156, L_158)))));
		// z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_159 = V_10;
		int32_t L_160 = V_5;
		NullCheck(L_159);
		L_159->___NextIn_1 = L_160;
		// blocks.writeAt = q;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_161 = ___blocks0;
		int32_t L_162 = V_7;
		NullCheck(L_161);
		L_161->___writeAt_18 = L_162;
		// return blocks.Flush(r);
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_163 = ___blocks0;
		int32_t L_164 = ___r1;
		NullCheck(L_163);
		int32_t L_165;
		L_165 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(L_163, L_164, NULL);
		return L_165;
	}

IL_0358:
	{
		// j = bitsToGet;
		int32_t L_166 = __this->___bitsToGet_16;
		V_0 = L_166;
		goto IL_03de;
	}

IL_0361:
	{
		// if (n != 0)
		int32_t L_167 = V_6;
		if (!L_167)
		{
			goto IL_036a;
		}
	}
	{
		// r = ZlibConstants.Z_OK;
		___r1 = 0;
		goto IL_03b4;
	}

IL_036a:
	{
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_168 = ___blocks0;
		int32_t L_169 = V_3;
		NullCheck(L_168);
		L_168->___bitb_13 = L_169;
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_170 = ___blocks0;
		int32_t L_171 = V_4;
		NullCheck(L_170);
		L_170->___bitk_12 = L_171;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_172 = V_10;
		int32_t L_173 = V_6;
		NullCheck(L_172);
		L_172->___AvailableBytesIn_2 = L_173;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_174 = V_10;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_175 = L_174;
		NullCheck(L_175);
		int64_t L_176 = L_175->___TotalBytesIn_3;
		int32_t L_177 = V_5;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_178 = V_10;
		NullCheck(L_178);
		int32_t L_179 = L_178->___NextIn_1;
		NullCheck(L_175);
		L_175->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_176, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_177, L_179)))));
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_180 = V_10;
		int32_t L_181 = V_5;
		NullCheck(L_180);
		L_180->___NextIn_1 = L_181;
		// blocks.writeAt = q;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_182 = ___blocks0;
		int32_t L_183 = V_7;
		NullCheck(L_182);
		L_182->___writeAt_18 = L_183;
		// return blocks.Flush(r);
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_184 = ___blocks0;
		int32_t L_185 = ___r1;
		NullCheck(L_184);
		int32_t L_186;
		L_186 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(L_184, L_185, NULL);
		return L_186;
	}

IL_03b4:
	{
		// n--; b |= (z.InputBuffer[p++] & 0xff) << k;
		int32_t L_187 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_187, 1));
		// n--; b |= (z.InputBuffer[p++] & 0xff) << k;
		int32_t L_188 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_189 = V_10;
		NullCheck(L_189);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_190 = L_189->___InputBuffer_0;
		int32_t L_191 = V_5;
		int32_t L_192 = L_191;
		V_5 = ((int32_t)il2cpp_codegen_add(L_192, 1));
		NullCheck(L_190);
		int32_t L_193 = L_192;
		uint8_t L_194 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		int32_t L_195 = V_4;
		V_3 = ((int32_t)(L_188|((int32_t)(((int32_t)((int32_t)L_194&((int32_t)255)))<<((int32_t)(L_195&((int32_t)31)))))));
		// k += 8;
		int32_t L_196 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_196, 8));
	}

IL_03de:
	{
		// while (k < j)
		int32_t L_197 = V_4;
		int32_t L_198 = V_0;
		if ((((int32_t)L_197) < ((int32_t)L_198)))
		{
			goto IL_0361;
		}
	}
	{
		// len += (b & InternalInflateConstants.InflateMask[j]);
		int32_t L_199 = __this->___len_11;
		int32_t L_200 = V_3;
		il2cpp_codegen_runtime_class_init_inline(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_201 = ((InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_202 = V_0;
		NullCheck(L_201);
		int32_t L_203 = L_202;
		int32_t L_204 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		__this->___len_11 = ((int32_t)il2cpp_codegen_add(L_199, ((int32_t)(L_200&L_204))));
		// b >>= j;
		int32_t L_205 = V_3;
		int32_t L_206 = V_0;
		V_3 = ((int32_t)(L_205>>((int32_t)(L_206&((int32_t)31)))));
		// k -= j;
		int32_t L_207 = V_4;
		int32_t L_208 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_207, L_208));
		// need = dbits;
		uint8_t L_209 = __this->___dbits_19;
		__this->___need_14 = L_209;
		// tree = dtree;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_210 = __this->___dtree_22;
		__this->___tree_12 = L_210;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_12), (void*)L_210);
		// tree_index = dtree_index;
		int32_t L_211 = __this->___dtree_index_23;
		__this->___tree_index_13 = L_211;
		// mode = DIST;
		__this->___mode_10 = 3;
	}

IL_0434:
	{
		// j = need;
		int32_t L_212 = __this->___need_14;
		V_0 = L_212;
		goto IL_04ba;
	}

IL_043d:
	{
		// if (n != 0)
		int32_t L_213 = V_6;
		if (!L_213)
		{
			goto IL_0446;
		}
	}
	{
		// r = ZlibConstants.Z_OK;
		___r1 = 0;
		goto IL_0490;
	}

IL_0446:
	{
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_214 = ___blocks0;
		int32_t L_215 = V_3;
		NullCheck(L_214);
		L_214->___bitb_13 = L_215;
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_216 = ___blocks0;
		int32_t L_217 = V_4;
		NullCheck(L_216);
		L_216->___bitk_12 = L_217;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_218 = V_10;
		int32_t L_219 = V_6;
		NullCheck(L_218);
		L_218->___AvailableBytesIn_2 = L_219;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_220 = V_10;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_221 = L_220;
		NullCheck(L_221);
		int64_t L_222 = L_221->___TotalBytesIn_3;
		int32_t L_223 = V_5;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_224 = V_10;
		NullCheck(L_224);
		int32_t L_225 = L_224->___NextIn_1;
		NullCheck(L_221);
		L_221->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_222, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_223, L_225)))));
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_226 = V_10;
		int32_t L_227 = V_5;
		NullCheck(L_226);
		L_226->___NextIn_1 = L_227;
		// blocks.writeAt = q;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_228 = ___blocks0;
		int32_t L_229 = V_7;
		NullCheck(L_228);
		L_228->___writeAt_18 = L_229;
		// return blocks.Flush(r);
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_230 = ___blocks0;
		int32_t L_231 = ___r1;
		NullCheck(L_230);
		int32_t L_232;
		L_232 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(L_230, L_231, NULL);
		return L_232;
	}

IL_0490:
	{
		// n--; b |= (z.InputBuffer[p++] & 0xff) << k;
		int32_t L_233 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_233, 1));
		// n--; b |= (z.InputBuffer[p++] & 0xff) << k;
		int32_t L_234 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_235 = V_10;
		NullCheck(L_235);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_236 = L_235->___InputBuffer_0;
		int32_t L_237 = V_5;
		int32_t L_238 = L_237;
		V_5 = ((int32_t)il2cpp_codegen_add(L_238, 1));
		NullCheck(L_236);
		int32_t L_239 = L_238;
		uint8_t L_240 = (L_236)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		int32_t L_241 = V_4;
		V_3 = ((int32_t)(L_234|((int32_t)(((int32_t)((int32_t)L_240&((int32_t)255)))<<((int32_t)(L_241&((int32_t)31)))))));
		// k += 8;
		int32_t L_242 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_242, 8));
	}

IL_04ba:
	{
		// while (k < j)
		int32_t L_243 = V_4;
		int32_t L_244 = V_0;
		if ((((int32_t)L_243) < ((int32_t)L_244)))
		{
			goto IL_043d;
		}
	}
	{
		// tindex = (tree_index + (b & InternalInflateConstants.InflateMask[j])) * 3;
		int32_t L_245 = __this->___tree_index_13;
		int32_t L_246 = V_3;
		il2cpp_codegen_runtime_class_init_inline(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_247 = ((InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_248 = V_0;
		NullCheck(L_247);
		int32_t L_249 = L_248;
		int32_t L_250 = (L_247)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		V_1 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_245, ((int32_t)(L_246&L_250)))), 3));
		// b >>= tree[tindex + 1];
		int32_t L_251 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_252 = __this->___tree_12;
		int32_t L_253 = V_1;
		NullCheck(L_252);
		int32_t L_254 = ((int32_t)il2cpp_codegen_add(L_253, 1));
		int32_t L_255 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_254));
		V_3 = ((int32_t)(L_251>>((int32_t)(L_255&((int32_t)31)))));
		// k -= tree[tindex + 1];
		int32_t L_256 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_257 = __this->___tree_12;
		int32_t L_258 = V_1;
		NullCheck(L_257);
		int32_t L_259 = ((int32_t)il2cpp_codegen_add(L_258, 1));
		int32_t L_260 = (L_257)->GetAt(static_cast<il2cpp_array_size_t>(L_259));
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_256, L_260));
		// e = (tree[tindex]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_261 = __this->___tree_12;
		int32_t L_262 = V_1;
		NullCheck(L_261);
		int32_t L_263 = L_262;
		int32_t L_264 = (L_261)->GetAt(static_cast<il2cpp_array_size_t>(L_263));
		V_2 = L_264;
		// if ((e & 0x10) != 0)
		int32_t L_265 = V_2;
		if (!((int32_t)(L_265&((int32_t)16))))
		{
			goto IL_0529;
		}
	}
	{
		// bitsToGet = e & 15;
		int32_t L_266 = V_2;
		__this->___bitsToGet_16 = ((int32_t)(L_266&((int32_t)15)));
		// dist = tree[tindex + 2];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_267 = __this->___tree_12;
		int32_t L_268 = V_1;
		NullCheck(L_267);
		int32_t L_269 = ((int32_t)il2cpp_codegen_add(L_268, 2));
		int32_t L_270 = (L_267)->GetAt(static_cast<il2cpp_array_size_t>(L_269));
		__this->___dist_17 = L_270;
		// mode = DISTEXT;
		__this->___mode_10 = 4;
		// break;
		goto IL_005b;
	}

IL_0529:
	{
		// if ((e & 64) == 0)
		int32_t L_271 = V_2;
		if (((int32_t)(L_271&((int32_t)64))))
		{
			goto IL_054f;
		}
	}
	{
		// need = e;
		int32_t L_272 = V_2;
		__this->___need_14 = L_272;
		// tree_index = tindex / 3 + tree[tindex + 2];
		int32_t L_273 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_274 = __this->___tree_12;
		int32_t L_275 = V_1;
		NullCheck(L_274);
		int32_t L_276 = ((int32_t)il2cpp_codegen_add(L_275, 2));
		int32_t L_277 = (L_274)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		__this->___tree_index_13 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_273/3)), L_277));
		// break;
		goto IL_005b;
	}

IL_054f:
	{
		// mode = BADCODE; // invalid code
		__this->___mode_10 = ((int32_t)9);
		// z.Message = "invalid distance code";
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_278 = V_10;
		NullCheck(L_278);
		L_278->___Message_8 = _stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948;
		Il2CppCodeGenWriteBarrier((void**)(&L_278->___Message_8), (void*)_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
		// r = ZlibConstants.Z_DATA_ERROR;
		___r1 = ((int32_t)-3);
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_279 = ___blocks0;
		int32_t L_280 = V_3;
		NullCheck(L_279);
		L_279->___bitb_13 = L_280;
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_281 = ___blocks0;
		int32_t L_282 = V_4;
		NullCheck(L_281);
		L_281->___bitk_12 = L_282;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_283 = V_10;
		int32_t L_284 = V_6;
		NullCheck(L_283);
		L_283->___AvailableBytesIn_2 = L_284;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_285 = V_10;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_286 = L_285;
		NullCheck(L_286);
		int64_t L_287 = L_286->___TotalBytesIn_3;
		int32_t L_288 = V_5;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_289 = V_10;
		NullCheck(L_289);
		int32_t L_290 = L_289->___NextIn_1;
		NullCheck(L_286);
		L_286->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_287, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_288, L_290)))));
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_291 = V_10;
		int32_t L_292 = V_5;
		NullCheck(L_291);
		L_291->___NextIn_1 = L_292;
		// blocks.writeAt = q;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_293 = ___blocks0;
		int32_t L_294 = V_7;
		NullCheck(L_293);
		L_293->___writeAt_18 = L_294;
		// return blocks.Flush(r);
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_295 = ___blocks0;
		int32_t L_296 = ___r1;
		NullCheck(L_295);
		int32_t L_297;
		L_297 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(L_295, L_296, NULL);
		return L_297;
	}

IL_05b1:
	{
		// j = bitsToGet;
		int32_t L_298 = __this->___bitsToGet_16;
		V_0 = L_298;
		goto IL_0637;
	}

IL_05ba:
	{
		// if (n != 0)
		int32_t L_299 = V_6;
		if (!L_299)
		{
			goto IL_05c3;
		}
	}
	{
		// r = ZlibConstants.Z_OK;
		___r1 = 0;
		goto IL_060d;
	}

IL_05c3:
	{
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_300 = ___blocks0;
		int32_t L_301 = V_3;
		NullCheck(L_300);
		L_300->___bitb_13 = L_301;
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_302 = ___blocks0;
		int32_t L_303 = V_4;
		NullCheck(L_302);
		L_302->___bitk_12 = L_303;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_304 = V_10;
		int32_t L_305 = V_6;
		NullCheck(L_304);
		L_304->___AvailableBytesIn_2 = L_305;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_306 = V_10;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_307 = L_306;
		NullCheck(L_307);
		int64_t L_308 = L_307->___TotalBytesIn_3;
		int32_t L_309 = V_5;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_310 = V_10;
		NullCheck(L_310);
		int32_t L_311 = L_310->___NextIn_1;
		NullCheck(L_307);
		L_307->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_308, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_309, L_311)))));
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_312 = V_10;
		int32_t L_313 = V_5;
		NullCheck(L_312);
		L_312->___NextIn_1 = L_313;
		// blocks.writeAt = q;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_314 = ___blocks0;
		int32_t L_315 = V_7;
		NullCheck(L_314);
		L_314->___writeAt_18 = L_315;
		// return blocks.Flush(r);
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_316 = ___blocks0;
		int32_t L_317 = ___r1;
		NullCheck(L_316);
		int32_t L_318;
		L_318 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(L_316, L_317, NULL);
		return L_318;
	}

IL_060d:
	{
		// n--; b |= (z.InputBuffer[p++] & 0xff) << k;
		int32_t L_319 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_319, 1));
		// n--; b |= (z.InputBuffer[p++] & 0xff) << k;
		int32_t L_320 = V_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_321 = V_10;
		NullCheck(L_321);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_322 = L_321->___InputBuffer_0;
		int32_t L_323 = V_5;
		int32_t L_324 = L_323;
		V_5 = ((int32_t)il2cpp_codegen_add(L_324, 1));
		NullCheck(L_322);
		int32_t L_325 = L_324;
		uint8_t L_326 = (L_322)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		int32_t L_327 = V_4;
		V_3 = ((int32_t)(L_320|((int32_t)(((int32_t)((int32_t)L_326&((int32_t)255)))<<((int32_t)(L_327&((int32_t)31)))))));
		// k += 8;
		int32_t L_328 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_328, 8));
	}

IL_0637:
	{
		// while (k < j)
		int32_t L_329 = V_4;
		int32_t L_330 = V_0;
		if ((((int32_t)L_329) < ((int32_t)L_330)))
		{
			goto IL_05ba;
		}
	}
	{
		// dist += (b & InternalInflateConstants.InflateMask[j]);
		int32_t L_331 = __this->___dist_17;
		int32_t L_332 = V_3;
		il2cpp_codegen_runtime_class_init_inline(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_333 = ((InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_334 = V_0;
		NullCheck(L_333);
		int32_t L_335 = L_334;
		int32_t L_336 = (L_333)->GetAt(static_cast<il2cpp_array_size_t>(L_335));
		__this->___dist_17 = ((int32_t)il2cpp_codegen_add(L_331, ((int32_t)(L_332&L_336))));
		// b >>= j;
		int32_t L_337 = V_3;
		int32_t L_338 = V_0;
		V_3 = ((int32_t)(L_337>>((int32_t)(L_338&((int32_t)31)))));
		// k -= j;
		int32_t L_339 = V_4;
		int32_t L_340 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_339, L_340));
		// mode = COPY;
		__this->___mode_10 = 5;
	}

IL_0669:
	{
		// f = q - dist;
		int32_t L_341 = V_7;
		int32_t L_342 = __this->___dist_17;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_341, L_342));
		goto IL_0681;
	}

IL_0676:
	{
		// f += blocks.end; // of "if" handles invalid distances
		int32_t L_343 = V_9;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_344 = ___blocks0;
		NullCheck(L_344);
		int32_t L_345 = L_344->___end_16;
		V_9 = ((int32_t)il2cpp_codegen_add(L_343, L_345));
	}

IL_0681:
	{
		// while (f < 0)
		int32_t L_346 = V_9;
		if ((((int32_t)L_346) < ((int32_t)0)))
		{
			goto IL_0676;
		}
	}
	{
		goto IL_07cd;
	}

IL_068b:
	{
		// if (m == 0)
		int32_t L_347 = V_8;
		if (L_347)
		{
			goto IL_0790;
		}
	}
	{
		// if (q == blocks.end && blocks.readAt != 0)
		int32_t L_348 = V_7;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_349 = ___blocks0;
		NullCheck(L_349);
		int32_t L_350 = L_349->___end_16;
		if ((!(((uint32_t)L_348) == ((uint32_t)L_350))))
		{
			goto IL_06c9;
		}
	}
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_351 = ___blocks0;
		NullCheck(L_351);
		int32_t L_352 = L_351->___readAt_17;
		if (!L_352)
		{
			goto IL_06c9;
		}
	}
	{
		// q = 0; m = q < blocks.readAt ? blocks.readAt - q - 1 : blocks.end - q;
		V_7 = 0;
		// q = 0; m = q < blocks.readAt ? blocks.readAt - q - 1 : blocks.end - q;
		int32_t L_353 = V_7;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_354 = ___blocks0;
		NullCheck(L_354);
		int32_t L_355 = L_354->___readAt_17;
		if ((((int32_t)L_353) < ((int32_t)L_355)))
		{
			goto IL_06bc;
		}
	}
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_356 = ___blocks0;
		NullCheck(L_356);
		int32_t L_357 = L_356->___end_16;
		int32_t L_358 = V_7;
		G_B67_0 = ((int32_t)il2cpp_codegen_subtract(L_357, L_358));
		goto IL_06c7;
	}

IL_06bc:
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_359 = ___blocks0;
		NullCheck(L_359);
		int32_t L_360 = L_359->___readAt_17;
		int32_t L_361 = V_7;
		G_B67_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_360, L_361)), 1));
	}

IL_06c7:
	{
		V_8 = G_B67_0;
	}

IL_06c9:
	{
		// if (m == 0)
		int32_t L_362 = V_8;
		if (L_362)
		{
			goto IL_0790;
		}
	}
	{
		// blocks.writeAt = q; r = blocks.Flush(r);
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_363 = ___blocks0;
		int32_t L_364 = V_7;
		NullCheck(L_363);
		L_363->___writeAt_18 = L_364;
		// blocks.writeAt = q; r = blocks.Flush(r);
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_365 = ___blocks0;
		int32_t L_366 = ___r1;
		NullCheck(L_365);
		int32_t L_367;
		L_367 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(L_365, L_366, NULL);
		___r1 = L_367;
		// q = blocks.writeAt; m = q < blocks.readAt ? blocks.readAt - q - 1 : blocks.end - q;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_368 = ___blocks0;
		NullCheck(L_368);
		int32_t L_369 = L_368->___writeAt_18;
		V_7 = L_369;
		// q = blocks.writeAt; m = q < blocks.readAt ? blocks.readAt - q - 1 : blocks.end - q;
		int32_t L_370 = V_7;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_371 = ___blocks0;
		NullCheck(L_371);
		int32_t L_372 = L_371->___readAt_17;
		if ((((int32_t)L_370) < ((int32_t)L_372)))
		{
			goto IL_06fe;
		}
	}
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_373 = ___blocks0;
		NullCheck(L_373);
		int32_t L_374 = L_373->___end_16;
		int32_t L_375 = V_7;
		G_B72_0 = ((int32_t)il2cpp_codegen_subtract(L_374, L_375));
		goto IL_0709;
	}

IL_06fe:
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_376 = ___blocks0;
		NullCheck(L_376);
		int32_t L_377 = L_376->___readAt_17;
		int32_t L_378 = V_7;
		G_B72_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_377, L_378)), 1));
	}

IL_0709:
	{
		V_8 = G_B72_0;
		// if (q == blocks.end && blocks.readAt != 0)
		int32_t L_379 = V_7;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_380 = ___blocks0;
		NullCheck(L_380);
		int32_t L_381 = L_380->___end_16;
		if ((!(((uint32_t)L_379) == ((uint32_t)L_381))))
		{
			goto IL_0742;
		}
	}
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_382 = ___blocks0;
		NullCheck(L_382);
		int32_t L_383 = L_382->___readAt_17;
		if (!L_383)
		{
			goto IL_0742;
		}
	}
	{
		// q = 0; m = q < blocks.readAt ? blocks.readAt - q - 1 : blocks.end - q;
		V_7 = 0;
		// q = 0; m = q < blocks.readAt ? blocks.readAt - q - 1 : blocks.end - q;
		int32_t L_384 = V_7;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_385 = ___blocks0;
		NullCheck(L_385);
		int32_t L_386 = L_385->___readAt_17;
		if ((((int32_t)L_384) < ((int32_t)L_386)))
		{
			goto IL_0735;
		}
	}
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_387 = ___blocks0;
		NullCheck(L_387);
		int32_t L_388 = L_387->___end_16;
		int32_t L_389 = V_7;
		G_B77_0 = ((int32_t)il2cpp_codegen_subtract(L_388, L_389));
		goto IL_0740;
	}

IL_0735:
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_390 = ___blocks0;
		NullCheck(L_390);
		int32_t L_391 = L_390->___readAt_17;
		int32_t L_392 = V_7;
		G_B77_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_391, L_392)), 1));
	}

IL_0740:
	{
		V_8 = G_B77_0;
	}

IL_0742:
	{
		// if (m == 0)
		int32_t L_393 = V_8;
		if (L_393)
		{
			goto IL_0790;
		}
	}
	{
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_394 = ___blocks0;
		int32_t L_395 = V_3;
		NullCheck(L_394);
		L_394->___bitb_13 = L_395;
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_396 = ___blocks0;
		int32_t L_397 = V_4;
		NullCheck(L_396);
		L_396->___bitk_12 = L_397;
		// z.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_398 = V_10;
		int32_t L_399 = V_6;
		NullCheck(L_398);
		L_398->___AvailableBytesIn_2 = L_399;
		// z.TotalBytesIn += p - z.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_400 = V_10;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_401 = L_400;
		NullCheck(L_401);
		int64_t L_402 = L_401->___TotalBytesIn_3;
		int32_t L_403 = V_5;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_404 = V_10;
		NullCheck(L_404);
		int32_t L_405 = L_404->___NextIn_1;
		NullCheck(L_401);
		L_401->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_402, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_403, L_405)))));
		// z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_406 = V_10;
		int32_t L_407 = V_5;
		NullCheck(L_406);
		L_406->___NextIn_1 = L_407;
		// blocks.writeAt = q;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_408 = ___blocks0;
		int32_t L_409 = V_7;
		NullCheck(L_408);
		L_408->___writeAt_18 = L_409;
		// return blocks.Flush(r);
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_410 = ___blocks0;
		int32_t L_411 = ___r1;
		NullCheck(L_410);
		int32_t L_412;
		L_412 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(L_410, L_411, NULL);
		return L_412;
	}

IL_0790:
	{
		// blocks.window[q++] = blocks.window[f++]; m--;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_413 = ___blocks0;
		NullCheck(L_413);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_414 = L_413->___window_15;
		int32_t L_415 = V_7;
		int32_t L_416 = L_415;
		V_7 = ((int32_t)il2cpp_codegen_add(L_416, 1));
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_417 = ___blocks0;
		NullCheck(L_417);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_418 = L_417->___window_15;
		int32_t L_419 = V_9;
		int32_t L_420 = L_419;
		V_9 = ((int32_t)il2cpp_codegen_add(L_420, 1));
		NullCheck(L_418);
		int32_t L_421 = L_420;
		uint8_t L_422 = (L_418)->GetAt(static_cast<il2cpp_array_size_t>(L_421));
		NullCheck(L_414);
		(L_414)->SetAt(static_cast<il2cpp_array_size_t>(L_416), (uint8_t)L_422);
		// blocks.window[q++] = blocks.window[f++]; m--;
		int32_t L_423 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_423, 1));
		// if (f == blocks.end)
		int32_t L_424 = V_9;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_425 = ___blocks0;
		NullCheck(L_425);
		int32_t L_426 = L_425->___end_16;
		if ((!(((uint32_t)L_424) == ((uint32_t)L_426))))
		{
			goto IL_07bf;
		}
	}
	{
		// f = 0;
		V_9 = 0;
	}

IL_07bf:
	{
		// len--;
		int32_t L_427 = __this->___len_11;
		__this->___len_11 = ((int32_t)il2cpp_codegen_subtract(L_427, 1));
	}

IL_07cd:
	{
		// while (len != 0)
		int32_t L_428 = __this->___len_11;
		if (L_428)
		{
			goto IL_068b;
		}
	}
	{
		// mode = START;
		__this->___mode_10 = 0;
		// break;
		goto IL_005b;
	}

IL_07e4:
	{
		// if (m == 0)
		int32_t L_429 = V_8;
		if (L_429)
		{
			goto IL_08e9;
		}
	}
	{
		// if (q == blocks.end && blocks.readAt != 0)
		int32_t L_430 = V_7;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_431 = ___blocks0;
		NullCheck(L_431);
		int32_t L_432 = L_431->___end_16;
		if ((!(((uint32_t)L_430) == ((uint32_t)L_432))))
		{
			goto IL_0822;
		}
	}
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_433 = ___blocks0;
		NullCheck(L_433);
		int32_t L_434 = L_433->___readAt_17;
		if (!L_434)
		{
			goto IL_0822;
		}
	}
	{
		// q = 0; m = q < blocks.readAt ? blocks.readAt - q - 1 : blocks.end - q;
		V_7 = 0;
		// q = 0; m = q < blocks.readAt ? blocks.readAt - q - 1 : blocks.end - q;
		int32_t L_435 = V_7;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_436 = ___blocks0;
		NullCheck(L_436);
		int32_t L_437 = L_436->___readAt_17;
		if ((((int32_t)L_435) < ((int32_t)L_437)))
		{
			goto IL_0815;
		}
	}
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_438 = ___blocks0;
		NullCheck(L_438);
		int32_t L_439 = L_438->___end_16;
		int32_t L_440 = V_7;
		G_B91_0 = ((int32_t)il2cpp_codegen_subtract(L_439, L_440));
		goto IL_0820;
	}

IL_0815:
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_441 = ___blocks0;
		NullCheck(L_441);
		int32_t L_442 = L_441->___readAt_17;
		int32_t L_443 = V_7;
		G_B91_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_442, L_443)), 1));
	}

IL_0820:
	{
		V_8 = G_B91_0;
	}

IL_0822:
	{
		// if (m == 0)
		int32_t L_444 = V_8;
		if (L_444)
		{
			goto IL_08e9;
		}
	}
	{
		// blocks.writeAt = q; r = blocks.Flush(r);
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_445 = ___blocks0;
		int32_t L_446 = V_7;
		NullCheck(L_445);
		L_445->___writeAt_18 = L_446;
		// blocks.writeAt = q; r = blocks.Flush(r);
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_447 = ___blocks0;
		int32_t L_448 = ___r1;
		NullCheck(L_447);
		int32_t L_449;
		L_449 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(L_447, L_448, NULL);
		___r1 = L_449;
		// q = blocks.writeAt; m = q < blocks.readAt ? blocks.readAt - q - 1 : blocks.end - q;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_450 = ___blocks0;
		NullCheck(L_450);
		int32_t L_451 = L_450->___writeAt_18;
		V_7 = L_451;
		// q = blocks.writeAt; m = q < blocks.readAt ? blocks.readAt - q - 1 : blocks.end - q;
		int32_t L_452 = V_7;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_453 = ___blocks0;
		NullCheck(L_453);
		int32_t L_454 = L_453->___readAt_17;
		if ((((int32_t)L_452) < ((int32_t)L_454)))
		{
			goto IL_0857;
		}
	}
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_455 = ___blocks0;
		NullCheck(L_455);
		int32_t L_456 = L_455->___end_16;
		int32_t L_457 = V_7;
		G_B96_0 = ((int32_t)il2cpp_codegen_subtract(L_456, L_457));
		goto IL_0862;
	}

IL_0857:
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_458 = ___blocks0;
		NullCheck(L_458);
		int32_t L_459 = L_458->___readAt_17;
		int32_t L_460 = V_7;
		G_B96_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_459, L_460)), 1));
	}

IL_0862:
	{
		V_8 = G_B96_0;
		// if (q == blocks.end && blocks.readAt != 0)
		int32_t L_461 = V_7;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_462 = ___blocks0;
		NullCheck(L_462);
		int32_t L_463 = L_462->___end_16;
		if ((!(((uint32_t)L_461) == ((uint32_t)L_463))))
		{
			goto IL_089b;
		}
	}
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_464 = ___blocks0;
		NullCheck(L_464);
		int32_t L_465 = L_464->___readAt_17;
		if (!L_465)
		{
			goto IL_089b;
		}
	}
	{
		// q = 0; m = q < blocks.readAt ? blocks.readAt - q - 1 : blocks.end - q;
		V_7 = 0;
		// q = 0; m = q < blocks.readAt ? blocks.readAt - q - 1 : blocks.end - q;
		int32_t L_466 = V_7;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_467 = ___blocks0;
		NullCheck(L_467);
		int32_t L_468 = L_467->___readAt_17;
		if ((((int32_t)L_466) < ((int32_t)L_468)))
		{
			goto IL_088e;
		}
	}
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_469 = ___blocks0;
		NullCheck(L_469);
		int32_t L_470 = L_469->___end_16;
		int32_t L_471 = V_7;
		G_B101_0 = ((int32_t)il2cpp_codegen_subtract(L_470, L_471));
		goto IL_0899;
	}

IL_088e:
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_472 = ___blocks0;
		NullCheck(L_472);
		int32_t L_473 = L_472->___readAt_17;
		int32_t L_474 = V_7;
		G_B101_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_473, L_474)), 1));
	}

IL_0899:
	{
		V_8 = G_B101_0;
	}

IL_089b:
	{
		// if (m == 0)
		int32_t L_475 = V_8;
		if (L_475)
		{
			goto IL_08e9;
		}
	}
	{
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_476 = ___blocks0;
		int32_t L_477 = V_3;
		NullCheck(L_476);
		L_476->___bitb_13 = L_477;
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_478 = ___blocks0;
		int32_t L_479 = V_4;
		NullCheck(L_478);
		L_478->___bitk_12 = L_479;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_480 = V_10;
		int32_t L_481 = V_6;
		NullCheck(L_480);
		L_480->___AvailableBytesIn_2 = L_481;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_482 = V_10;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_483 = L_482;
		NullCheck(L_483);
		int64_t L_484 = L_483->___TotalBytesIn_3;
		int32_t L_485 = V_5;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_486 = V_10;
		NullCheck(L_486);
		int32_t L_487 = L_486->___NextIn_1;
		NullCheck(L_483);
		L_483->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_484, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_485, L_487)))));
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_488 = V_10;
		int32_t L_489 = V_5;
		NullCheck(L_488);
		L_488->___NextIn_1 = L_489;
		// blocks.writeAt = q;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_490 = ___blocks0;
		int32_t L_491 = V_7;
		NullCheck(L_490);
		L_490->___writeAt_18 = L_491;
		// return blocks.Flush(r);
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_492 = ___blocks0;
		int32_t L_493 = ___r1;
		NullCheck(L_492);
		int32_t L_494;
		L_494 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(L_492, L_493, NULL);
		return L_494;
	}

IL_08e9:
	{
		// r = ZlibConstants.Z_OK;
		___r1 = 0;
		// blocks.window[q++] = (byte)lit; m--;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_495 = ___blocks0;
		NullCheck(L_495);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_496 = L_495->___window_15;
		int32_t L_497 = V_7;
		int32_t L_498 = L_497;
		V_7 = ((int32_t)il2cpp_codegen_add(L_498, 1));
		int32_t L_499 = __this->___lit_15;
		NullCheck(L_496);
		(L_496)->SetAt(static_cast<il2cpp_array_size_t>(L_498), (uint8_t)((int32_t)(uint8_t)L_499));
		// blocks.window[q++] = (byte)lit; m--;
		int32_t L_500 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_500, 1));
		// mode = START;
		__this->___mode_10 = 0;
		// break;
		goto IL_005b;
	}

IL_0913:
	{
		// if (k > 7)
		int32_t L_501 = V_4;
		if ((((int32_t)L_501) <= ((int32_t)7)))
		{
			goto IL_092a;
		}
	}
	{
		// k -= 8;
		int32_t L_502 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_502, 8));
		// n++;
		int32_t L_503 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_503, 1));
		// p--; // can always return one
		int32_t L_504 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_504, 1));
	}

IL_092a:
	{
		// blocks.writeAt = q; r = blocks.Flush(r);
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_505 = ___blocks0;
		int32_t L_506 = V_7;
		NullCheck(L_505);
		L_505->___writeAt_18 = L_506;
		// blocks.writeAt = q; r = blocks.Flush(r);
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_507 = ___blocks0;
		int32_t L_508 = ___r1;
		NullCheck(L_507);
		int32_t L_509;
		L_509 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(L_507, L_508, NULL);
		___r1 = L_509;
		// q = blocks.writeAt; m = q < blocks.readAt ? blocks.readAt - q - 1 : blocks.end - q;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_510 = ___blocks0;
		NullCheck(L_510);
		int32_t L_511 = L_510->___writeAt_18;
		V_7 = L_511;
		// q = blocks.writeAt; m = q < blocks.readAt ? blocks.readAt - q - 1 : blocks.end - q;
		int32_t L_512 = V_7;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_513 = ___blocks0;
		NullCheck(L_513);
		int32_t L_514 = L_513->___readAt_17;
		if ((((int32_t)L_512) < ((int32_t)L_514)))
		{
			goto IL_0958;
		}
	}
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_515 = ___blocks0;
		NullCheck(L_515);
		int32_t L_516 = L_515->___end_16;
		int32_t L_517 = V_7;
		G_B110_0 = ((int32_t)il2cpp_codegen_subtract(L_516, L_517));
		goto IL_0963;
	}

IL_0958:
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_518 = ___blocks0;
		NullCheck(L_518);
		int32_t L_519 = L_518->___readAt_17;
		int32_t L_520 = V_7;
		G_B110_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_519, L_520)), 1));
	}

IL_0963:
	{
		V_8 = G_B110_0;
		// if (blocks.readAt != blocks.writeAt)
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_521 = ___blocks0;
		NullCheck(L_521);
		int32_t L_522 = L_521->___readAt_17;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_523 = ___blocks0;
		NullCheck(L_523);
		int32_t L_524 = L_523->___writeAt_18;
		if ((((int32_t)L_522) == ((int32_t)L_524)))
		{
			goto IL_09bd;
		}
	}
	{
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_525 = ___blocks0;
		int32_t L_526 = V_3;
		NullCheck(L_525);
		L_525->___bitb_13 = L_526;
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_527 = ___blocks0;
		int32_t L_528 = V_4;
		NullCheck(L_527);
		L_527->___bitk_12 = L_528;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_529 = V_10;
		int32_t L_530 = V_6;
		NullCheck(L_529);
		L_529->___AvailableBytesIn_2 = L_530;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_531 = V_10;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_532 = L_531;
		NullCheck(L_532);
		int64_t L_533 = L_532->___TotalBytesIn_3;
		int32_t L_534 = V_5;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_535 = V_10;
		NullCheck(L_535);
		int32_t L_536 = L_535->___NextIn_1;
		NullCheck(L_532);
		L_532->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_533, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_534, L_536)))));
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_537 = V_10;
		int32_t L_538 = V_5;
		NullCheck(L_537);
		L_537->___NextIn_1 = L_538;
		// blocks.writeAt = q;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_539 = ___blocks0;
		int32_t L_540 = V_7;
		NullCheck(L_539);
		L_539->___writeAt_18 = L_540;
		// return blocks.Flush(r);
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_541 = ___blocks0;
		int32_t L_542 = ___r1;
		NullCheck(L_541);
		int32_t L_543;
		L_543 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(L_541, L_542, NULL);
		return L_543;
	}

IL_09bd:
	{
		// mode = END;
		__this->___mode_10 = 8;
	}

IL_09c4:
	{
		// r = ZlibConstants.Z_STREAM_END;
		___r1 = 1;
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_544 = ___blocks0;
		int32_t L_545 = V_3;
		NullCheck(L_544);
		L_544->___bitb_13 = L_545;
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_546 = ___blocks0;
		int32_t L_547 = V_4;
		NullCheck(L_546);
		L_546->___bitk_12 = L_547;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_548 = V_10;
		int32_t L_549 = V_6;
		NullCheck(L_548);
		L_548->___AvailableBytesIn_2 = L_549;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_550 = V_10;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_551 = L_550;
		NullCheck(L_551);
		int64_t L_552 = L_551->___TotalBytesIn_3;
		int32_t L_553 = V_5;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_554 = V_10;
		NullCheck(L_554);
		int32_t L_555 = L_554->___NextIn_1;
		NullCheck(L_551);
		L_551->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_552, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_553, L_555)))));
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_556 = V_10;
		int32_t L_557 = V_5;
		NullCheck(L_556);
		L_556->___NextIn_1 = L_557;
		// blocks.writeAt = q;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_558 = ___blocks0;
		int32_t L_559 = V_7;
		NullCheck(L_558);
		L_558->___writeAt_18 = L_559;
		// return blocks.Flush(r);
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_560 = ___blocks0;
		int32_t L_561 = ___r1;
		NullCheck(L_560);
		int32_t L_562;
		L_562 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(L_560, L_561, NULL);
		return L_562;
	}

IL_0a11:
	{
		// r = ZlibConstants.Z_DATA_ERROR;
		___r1 = ((int32_t)-3);
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_563 = ___blocks0;
		int32_t L_564 = V_3;
		NullCheck(L_563);
		L_563->___bitb_13 = L_564;
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_565 = ___blocks0;
		int32_t L_566 = V_4;
		NullCheck(L_565);
		L_565->___bitk_12 = L_566;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_567 = V_10;
		int32_t L_568 = V_6;
		NullCheck(L_567);
		L_567->___AvailableBytesIn_2 = L_568;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_569 = V_10;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_570 = L_569;
		NullCheck(L_570);
		int64_t L_571 = L_570->___TotalBytesIn_3;
		int32_t L_572 = V_5;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_573 = V_10;
		NullCheck(L_573);
		int32_t L_574 = L_573->___NextIn_1;
		NullCheck(L_570);
		L_570->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_571, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_572, L_574)))));
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_575 = V_10;
		int32_t L_576 = V_5;
		NullCheck(L_575);
		L_575->___NextIn_1 = L_576;
		// blocks.writeAt = q;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_577 = ___blocks0;
		int32_t L_578 = V_7;
		NullCheck(L_577);
		L_577->___writeAt_18 = L_578;
		// return blocks.Flush(r);
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_579 = ___blocks0;
		int32_t L_580 = ___r1;
		NullCheck(L_579);
		int32_t L_581;
		L_581 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(L_579, L_580, NULL);
		return L_581;
	}

IL_0a5f:
	{
		// r = ZlibConstants.Z_STREAM_ERROR;
		___r1 = ((int32_t)-2);
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_582 = ___blocks0;
		int32_t L_583 = V_3;
		NullCheck(L_582);
		L_582->___bitb_13 = L_583;
		// blocks.bitb = b; blocks.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_584 = ___blocks0;
		int32_t L_585 = V_4;
		NullCheck(L_584);
		L_584->___bitk_12 = L_585;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_586 = V_10;
		int32_t L_587 = V_6;
		NullCheck(L_586);
		L_586->___AvailableBytesIn_2 = L_587;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_588 = V_10;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_589 = L_588;
		NullCheck(L_589);
		int64_t L_590 = L_589->___TotalBytesIn_3;
		int32_t L_591 = V_5;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_592 = V_10;
		NullCheck(L_592);
		int32_t L_593 = L_592->___NextIn_1;
		NullCheck(L_589);
		L_589->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_590, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_591, L_593)))));
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_594 = V_10;
		int32_t L_595 = V_5;
		NullCheck(L_594);
		L_594->___NextIn_1 = L_595;
		// blocks.writeAt = q;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_596 = ___blocks0;
		int32_t L_597 = V_7;
		NullCheck(L_596);
		L_596->___writeAt_18 = L_597;
		// return blocks.Flush(r);
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_598 = ___blocks0;
		int32_t L_599 = ___r1;
		NullCheck(L_598);
		int32_t L_600;
		L_600 = InflateBlocks_Flush_m071B7537364605E2BBFC5DB761779AAA178665A0(L_598, L_599, NULL);
		return L_600;
	}
}
// System.Int32 Ionic.Zlib.InflateCodes::InflateFast(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,Ionic.Zlib.InflateBlocks,Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateCodes_InflateFast_m9C7C03641DD6428D054E55124267BE4C06FC3C6F (InflateCodes_t2759A3D840DF45440C2D917FC57F100D1969F7D6* __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___td4, int32_t ___td_index5, InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* ___s6, ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* ___z7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B41_0 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B53_0 = 0;
	int32_t G_B59_0 = 0;
	{
		// p = z.NextIn; n = z.AvailableBytesIn; b = s.bitb; k = s.bitk;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_0 = ___z7;
		NullCheck(L_0);
		int32_t L_1 = L_0->___NextIn_1;
		V_6 = L_1;
		// p = z.NextIn; n = z.AvailableBytesIn; b = s.bitb; k = s.bitk;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_2 = ___z7;
		NullCheck(L_2);
		int32_t L_3 = L_2->___AvailableBytesIn_2;
		V_7 = L_3;
		// p = z.NextIn; n = z.AvailableBytesIn; b = s.bitb; k = s.bitk;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_4 = ___s6;
		NullCheck(L_4);
		int32_t L_5 = L_4->___bitb_13;
		V_4 = L_5;
		// p = z.NextIn; n = z.AvailableBytesIn; b = s.bitb; k = s.bitk;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_6 = ___s6;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bitk_12;
		V_5 = L_7;
		// q = s.writeAt; m = q < s.readAt ? s.readAt - q - 1 : s.end - q;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_8 = ___s6;
		NullCheck(L_8);
		int32_t L_9 = L_8->___writeAt_18;
		V_8 = L_9;
		// q = s.writeAt; m = q < s.readAt ? s.readAt - q - 1 : s.end - q;
		int32_t L_10 = V_8;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_11 = ___s6;
		NullCheck(L_11);
		int32_t L_12 = L_11->___readAt_17;
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0044;
		}
	}
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_13 = ___s6;
		NullCheck(L_13);
		int32_t L_14 = L_13->___end_16;
		int32_t L_15 = V_8;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(L_14, L_15));
		goto IL_0050;
	}

IL_0044:
	{
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_16 = ___s6;
		NullCheck(L_16);
		int32_t L_17 = L_16->___readAt_17;
		int32_t L_18 = V_8;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_17, L_18)), 1));
	}

IL_0050:
	{
		V_9 = G_B3_0;
		// ml = InternalInflateConstants.InflateMask[bl];
		il2cpp_codegen_runtime_class_init_inline(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ((InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_20 = ___bl0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_10 = L_22;
		// md = InternalInflateConstants.InflateMask[bd];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ((InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_24 = ___bd1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_11 = L_26;
		goto IL_0092;
	}

IL_0066:
	{
		// n--;
		int32_t L_27 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		// b |= (z.InputBuffer[p++] & 0xff) << k; k += 8;
		int32_t L_28 = V_4;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_29 = ___z7;
		NullCheck(L_29);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = L_29->___InputBuffer_0;
		int32_t L_31 = V_6;
		int32_t L_32 = L_31;
		V_6 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		NullCheck(L_30);
		int32_t L_33 = L_32;
		uint8_t L_34 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = V_5;
		V_4 = ((int32_t)(L_28|((int32_t)(((int32_t)((int32_t)L_34&((int32_t)255)))<<((int32_t)(L_35&((int32_t)31)))))));
		// b |= (z.InputBuffer[p++] & 0xff) << k; k += 8;
		int32_t L_36 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_36, 8));
	}

IL_0092:
	{
		// while (k < (20))
		int32_t L_37 = V_5;
		if ((((int32_t)L_37) < ((int32_t)((int32_t)20))))
		{
			goto IL_0066;
		}
	}
	{
		// t = b & ml;
		int32_t L_38 = V_4;
		int32_t L_39 = V_10;
		V_0 = ((int32_t)(L_38&L_39));
		// tp = tl;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = ___tl2;
		V_1 = L_40;
		// tp_index = tl_index;
		int32_t L_41 = ___tl_index3;
		V_2 = L_41;
		// tp_index_t_3 = (tp_index + t) * 3;
		int32_t L_42 = V_2;
		int32_t L_43 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_42, L_43)), 3));
		// if ((e = tp[tp_index_t_3]) == 0)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_1;
		int32_t L_45 = V_15;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		int32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		int32_t L_48 = L_47;
		V_3 = L_48;
		if (L_48)
		{
			goto IL_00ec;
		}
	}
	{
		// b >>= (tp[tp_index_t_3 + 1]); k -= (tp[tp_index_t_3 + 1]);
		int32_t L_49 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = V_1;
		int32_t L_51 = V_15;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add(L_51, 1));
		int32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_4 = ((int32_t)(L_49>>((int32_t)(L_53&((int32_t)31)))));
		// b >>= (tp[tp_index_t_3 + 1]); k -= (tp[tp_index_t_3 + 1]);
		int32_t L_54 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		int32_t L_56 = V_15;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_54, L_58));
		// s.window[q++] = (byte)tp[tp_index_t_3 + 2];
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_59 = ___s6;
		NullCheck(L_59);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = L_59->___window_15;
		int32_t L_61 = V_8;
		int32_t L_62 = L_61;
		V_8 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = V_1;
		int32_t L_64 = V_15;
		NullCheck(L_63);
		int32_t L_65 = ((int32_t)il2cpp_codegen_add(L_64, 2));
		int32_t L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (uint8_t)((int32_t)(uint8_t)L_66));
		// m--;
		int32_t L_67 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_67, 1));
		// continue;
		goto IL_05c0;
	}

IL_00ec:
	{
		// b >>= (tp[tp_index_t_3 + 1]); k -= (tp[tp_index_t_3 + 1]);
		int32_t L_68 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = V_1;
		int32_t L_70 = V_15;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		int32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_4 = ((int32_t)(L_68>>((int32_t)(L_72&((int32_t)31)))));
		// b >>= (tp[tp_index_t_3 + 1]); k -= (tp[tp_index_t_3 + 1]);
		int32_t L_73 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = V_1;
		int32_t L_75 = V_15;
		NullCheck(L_74);
		int32_t L_76 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		int32_t L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_73, L_77));
		// if ((e & 16) != 0)
		int32_t L_78 = V_3;
		if (!((int32_t)(L_78&((int32_t)16))))
		{
			goto IL_044b;
		}
	}
	{
		// e &= 15;
		int32_t L_79 = V_3;
		V_3 = ((int32_t)(L_79&((int32_t)15)));
		// c = tp[tp_index_t_3 + 2] + ((int)b & InternalInflateConstants.InflateMask[e]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = V_1;
		int32_t L_81 = V_15;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 2));
		int32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		int32_t L_84 = V_4;
		il2cpp_codegen_runtime_class_init_inline(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = ((InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_86 = V_3;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		int32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_12 = ((int32_t)il2cpp_codegen_add(L_83, ((int32_t)(L_84&L_88))));
		// b >>= e; k -= e;
		int32_t L_89 = V_4;
		int32_t L_90 = V_3;
		V_4 = ((int32_t)(L_89>>((int32_t)(L_90&((int32_t)31)))));
		// b >>= e; k -= e;
		int32_t L_91 = V_5;
		int32_t L_92 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_91, L_92));
		goto IL_0163;
	}

IL_0137:
	{
		// n--;
		int32_t L_93 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		// b |= (z.InputBuffer[p++] & 0xff) << k; k += 8;
		int32_t L_94 = V_4;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_95 = ___z7;
		NullCheck(L_95);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = L_95->___InputBuffer_0;
		int32_t L_97 = V_6;
		int32_t L_98 = L_97;
		V_6 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		NullCheck(L_96);
		int32_t L_99 = L_98;
		uint8_t L_100 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		int32_t L_101 = V_5;
		V_4 = ((int32_t)(L_94|((int32_t)(((int32_t)((int32_t)L_100&((int32_t)255)))<<((int32_t)(L_101&((int32_t)31)))))));
		// b |= (z.InputBuffer[p++] & 0xff) << k; k += 8;
		int32_t L_102 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_102, 8));
	}

IL_0163:
	{
		// while (k < 15)
		int32_t L_103 = V_5;
		if ((((int32_t)L_103) < ((int32_t)((int32_t)15))))
		{
			goto IL_0137;
		}
	}
	{
		// t = b & md;
		int32_t L_104 = V_4;
		int32_t L_105 = V_11;
		V_0 = ((int32_t)(L_104&L_105));
		// tp = td;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = ___td4;
		V_1 = L_106;
		// tp_index = td_index;
		int32_t L_107 = ___td_index5;
		V_2 = L_107;
		// tp_index_t_3 = (tp_index + t) * 3;
		int32_t L_108 = V_2;
		int32_t L_109 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_108, L_109)), 3));
		// e = tp[tp_index_t_3];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = V_1;
		int32_t L_111 = V_15;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		int32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_3 = L_113;
	}

IL_0181:
	{
		// b >>= (tp[tp_index_t_3 + 1]); k -= (tp[tp_index_t_3 + 1]);
		int32_t L_114 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_115 = V_1;
		int32_t L_116 = V_15;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)il2cpp_codegen_add(L_116, 1));
		int32_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_4 = ((int32_t)(L_114>>((int32_t)(L_118&((int32_t)31)))));
		// b >>= (tp[tp_index_t_3 + 1]); k -= (tp[tp_index_t_3 + 1]);
		int32_t L_119 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_120 = V_1;
		int32_t L_121 = V_15;
		NullCheck(L_120);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add(L_121, 1));
		int32_t L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_119, L_123));
		// if ((e & 16) != 0)
		int32_t L_124 = V_3;
		if (!((int32_t)(L_124&((int32_t)16))))
		{
			goto IL_0394;
		}
	}
	{
		// e &= 15;
		int32_t L_125 = V_3;
		V_3 = ((int32_t)(L_125&((int32_t)15)));
		goto IL_01d6;
	}

IL_01aa:
	{
		// n--;
		int32_t L_126 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_126, 1));
		// b |= (z.InputBuffer[p++] & 0xff) << k; k += 8;
		int32_t L_127 = V_4;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_128 = ___z7;
		NullCheck(L_128);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_129 = L_128->___InputBuffer_0;
		int32_t L_130 = V_6;
		int32_t L_131 = L_130;
		V_6 = ((int32_t)il2cpp_codegen_add(L_131, 1));
		NullCheck(L_129);
		int32_t L_132 = L_131;
		uint8_t L_133 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		int32_t L_134 = V_5;
		V_4 = ((int32_t)(L_127|((int32_t)(((int32_t)((int32_t)L_133&((int32_t)255)))<<((int32_t)(L_134&((int32_t)31)))))));
		// b |= (z.InputBuffer[p++] & 0xff) << k; k += 8;
		int32_t L_135 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_135, 8));
	}

IL_01d6:
	{
		// while (k < e)
		int32_t L_136 = V_5;
		int32_t L_137 = V_3;
		if ((((int32_t)L_136) < ((int32_t)L_137)))
		{
			goto IL_01aa;
		}
	}
	{
		// d = tp[tp_index_t_3 + 2] + (b & InternalInflateConstants.InflateMask[e]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_138 = V_1;
		int32_t L_139 = V_15;
		NullCheck(L_138);
		int32_t L_140 = ((int32_t)il2cpp_codegen_add(L_139, 2));
		int32_t L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		int32_t L_142 = V_4;
		il2cpp_codegen_runtime_class_init_inline(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_143 = ((InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_144 = V_3;
		NullCheck(L_143);
		int32_t L_145 = L_144;
		int32_t L_146 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		V_13 = ((int32_t)il2cpp_codegen_add(L_141, ((int32_t)(L_142&L_146))));
		// b >>= e; k -= e;
		int32_t L_147 = V_4;
		int32_t L_148 = V_3;
		V_4 = ((int32_t)(L_147>>((int32_t)(L_148&((int32_t)31)))));
		// b >>= e; k -= e;
		int32_t L_149 = V_5;
		int32_t L_150 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_149, L_150));
		// m -= c;
		int32_t L_151 = V_9;
		int32_t L_152 = V_12;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_151, L_152));
		// if (q >= d)
		int32_t L_153 = V_8;
		int32_t L_154 = V_13;
		if ((((int32_t)L_153) < ((int32_t)L_154)))
		{
			goto IL_029a;
		}
	}
	{
		// r = q - d;
		int32_t L_155 = V_8;
		int32_t L_156 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_155, L_156));
		// if (q - r > 0 && 2 > (q - r))
		int32_t L_157 = V_8;
		int32_t L_158 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_157, L_158))) <= ((int32_t)0)))
		{
			goto IL_026b;
		}
	}
	{
		int32_t L_159 = V_8;
		int32_t L_160 = V_14;
		if ((((int32_t)2) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_159, L_160)))))
		{
			goto IL_026b;
		}
	}
	{
		// s.window[q++] = s.window[r++]; // minimum count is three,
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_161 = ___s6;
		NullCheck(L_161);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_162 = L_161->___window_15;
		int32_t L_163 = V_8;
		int32_t L_164 = L_163;
		V_8 = ((int32_t)il2cpp_codegen_add(L_164, 1));
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_165 = ___s6;
		NullCheck(L_165);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_166 = L_165->___window_15;
		int32_t L_167 = V_14;
		int32_t L_168 = L_167;
		V_14 = ((int32_t)il2cpp_codegen_add(L_168, 1));
		NullCheck(L_166);
		int32_t L_169 = L_168;
		uint8_t L_170 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(L_164), (uint8_t)L_170);
		// s.window[q++] = s.window[r++]; // so unroll loop a little
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_171 = ___s6;
		NullCheck(L_171);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_172 = L_171->___window_15;
		int32_t L_173 = V_8;
		int32_t L_174 = L_173;
		V_8 = ((int32_t)il2cpp_codegen_add(L_174, 1));
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_175 = ___s6;
		NullCheck(L_175);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_176 = L_175->___window_15;
		int32_t L_177 = V_14;
		int32_t L_178 = L_177;
		V_14 = ((int32_t)il2cpp_codegen_add(L_178, 1));
		NullCheck(L_176);
		int32_t L_179 = L_178;
		uint8_t L_180 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		NullCheck(L_172);
		(L_172)->SetAt(static_cast<il2cpp_array_size_t>(L_174), (uint8_t)L_180);
		// c -= 2;
		int32_t L_181 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_181, 2));
		goto IL_0328;
	}

IL_026b:
	{
		// Array.Copy(s.window, r, s.window, q, 2);
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_182 = ___s6;
		NullCheck(L_182);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_183 = L_182->___window_15;
		int32_t L_184 = V_14;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_185 = ___s6;
		NullCheck(L_185);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_186 = L_185->___window_15;
		int32_t L_187 = V_8;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_183, L_184, (RuntimeArray*)L_186, L_187, 2, NULL);
		// q += 2; r += 2; c -= 2;
		int32_t L_188 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_188, 2));
		// q += 2; r += 2; c -= 2;
		int32_t L_189 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_189, 2));
		// q += 2; r += 2; c -= 2;
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_190, 2));
		goto IL_0328;
	}

IL_029a:
	{
		// r = q - d;
		int32_t L_191 = V_8;
		int32_t L_192 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_191, L_192));
	}

IL_02a1:
	{
		// r += s.end; // force pointer in window
		int32_t L_193 = V_14;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_194 = ___s6;
		NullCheck(L_194);
		int32_t L_195 = L_194->___end_16;
		V_14 = ((int32_t)il2cpp_codegen_add(L_193, L_195));
		// while (r < 0); // covers invalid distances
		int32_t L_196 = V_14;
		if ((((int32_t)L_196) < ((int32_t)0)))
		{
			goto IL_02a1;
		}
	}
	{
		// e = s.end - r;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_197 = ___s6;
		NullCheck(L_197);
		int32_t L_198 = L_197->___end_16;
		int32_t L_199 = V_14;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_198, L_199));
		// if (c > e)
		int32_t L_200 = V_12;
		int32_t L_201 = V_3;
		if ((((int32_t)L_200) <= ((int32_t)L_201)))
		{
			goto IL_0328;
		}
	}
	{
		// c -= e; // wrapped copy
		int32_t L_202 = V_12;
		int32_t L_203 = V_3;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_202, L_203));
		// if (q - r > 0 && e > (q - r))
		int32_t L_204 = V_8;
		int32_t L_205 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_204, L_205))) <= ((int32_t)0)))
		{
			goto IL_02ff;
		}
	}
	{
		int32_t L_206 = V_3;
		int32_t L_207 = V_8;
		int32_t L_208 = V_14;
		if ((((int32_t)L_206) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_207, L_208)))))
		{
			goto IL_02ff;
		}
	}

IL_02d8:
	{
		// s.window[q++] = s.window[r++];
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_209 = ___s6;
		NullCheck(L_209);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_210 = L_209->___window_15;
		int32_t L_211 = V_8;
		int32_t L_212 = L_211;
		V_8 = ((int32_t)il2cpp_codegen_add(L_212, 1));
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_213 = ___s6;
		NullCheck(L_213);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_214 = L_213->___window_15;
		int32_t L_215 = V_14;
		int32_t L_216 = L_215;
		V_14 = ((int32_t)il2cpp_codegen_add(L_216, 1));
		NullCheck(L_214);
		int32_t L_217 = L_216;
		uint8_t L_218 = (L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		NullCheck(L_210);
		(L_210)->SetAt(static_cast<il2cpp_array_size_t>(L_212), (uint8_t)L_218);
		// while (--e != 0);
		int32_t L_219 = V_3;
		int32_t L_220 = ((int32_t)il2cpp_codegen_subtract(L_219, 1));
		V_3 = L_220;
		if (L_220)
		{
			goto IL_02d8;
		}
	}
	{
		goto IL_0325;
	}

IL_02ff:
	{
		// Array.Copy(s.window, r, s.window, q, e);
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_221 = ___s6;
		NullCheck(L_221);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_222 = L_221->___window_15;
		int32_t L_223 = V_14;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_224 = ___s6;
		NullCheck(L_224);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_225 = L_224->___window_15;
		int32_t L_226 = V_8;
		int32_t L_227 = V_3;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_222, L_223, (RuntimeArray*)L_225, L_226, L_227, NULL);
		// q += e; r += e; e = 0;
		int32_t L_228 = V_8;
		int32_t L_229 = V_3;
		V_8 = ((int32_t)il2cpp_codegen_add(L_228, L_229));
		// q += e; r += e; e = 0;
		int32_t L_230 = V_14;
		int32_t L_231 = V_3;
		V_14 = ((int32_t)il2cpp_codegen_add(L_230, L_231));
		// q += e; r += e; e = 0;
		V_3 = 0;
	}

IL_0325:
	{
		// r = 0; // copy rest from start of window
		V_14 = 0;
	}

IL_0328:
	{
		// if (q - r > 0 && c > (q - r))
		int32_t L_232 = V_8;
		int32_t L_233 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_232, L_233))) <= ((int32_t)0)))
		{
			goto IL_0365;
		}
	}
	{
		int32_t L_234 = V_12;
		int32_t L_235 = V_8;
		int32_t L_236 = V_14;
		if ((((int32_t)L_234) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_235, L_236)))))
		{
			goto IL_0365;
		}
	}

IL_0339:
	{
		// s.window[q++] = s.window[r++];
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_237 = ___s6;
		NullCheck(L_237);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_238 = L_237->___window_15;
		int32_t L_239 = V_8;
		int32_t L_240 = L_239;
		V_8 = ((int32_t)il2cpp_codegen_add(L_240, 1));
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_241 = ___s6;
		NullCheck(L_241);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_242 = L_241->___window_15;
		int32_t L_243 = V_14;
		int32_t L_244 = L_243;
		V_14 = ((int32_t)il2cpp_codegen_add(L_244, 1));
		NullCheck(L_242);
		int32_t L_245 = L_244;
		uint8_t L_246 = (L_242)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		NullCheck(L_238);
		(L_238)->SetAt(static_cast<il2cpp_array_size_t>(L_240), (uint8_t)L_246);
		// while (--c != 0);
		int32_t L_247 = V_12;
		int32_t L_248 = ((int32_t)il2cpp_codegen_subtract(L_247, 1));
		V_12 = L_248;
		if (L_248)
		{
			goto IL_0339;
		}
	}
	{
		goto IL_05c0;
	}

IL_0365:
	{
		// Array.Copy(s.window, r, s.window, q, c);
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_249 = ___s6;
		NullCheck(L_249);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_250 = L_249->___window_15;
		int32_t L_251 = V_14;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_252 = ___s6;
		NullCheck(L_252);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_253 = L_252->___window_15;
		int32_t L_254 = V_8;
		int32_t L_255 = V_12;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_250, L_251, (RuntimeArray*)L_253, L_254, L_255, NULL);
		// q += c; r += c; c = 0;
		int32_t L_256 = V_8;
		int32_t L_257 = V_12;
		V_8 = ((int32_t)il2cpp_codegen_add(L_256, L_257));
		// q += c; r += c; c = 0;
		int32_t L_258 = V_14;
		int32_t L_259 = V_12;
		V_14 = ((int32_t)il2cpp_codegen_add(L_258, L_259));
		// q += c; r += c; c = 0;
		V_12 = 0;
		// break;
		goto IL_05c0;
	}

IL_0394:
	{
		// else if ((e & 64) == 0)
		int32_t L_260 = V_3;
		if (((int32_t)(L_260&((int32_t)64))))
		{
			goto IL_03c1;
		}
	}
	{
		// t += tp[tp_index_t_3 + 2];
		int32_t L_261 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_262 = V_1;
		int32_t L_263 = V_15;
		NullCheck(L_262);
		int32_t L_264 = ((int32_t)il2cpp_codegen_add(L_263, 2));
		int32_t L_265 = (L_262)->GetAt(static_cast<il2cpp_array_size_t>(L_264));
		V_0 = ((int32_t)il2cpp_codegen_add(L_261, L_265));
		// t += (b & InternalInflateConstants.InflateMask[e]);
		int32_t L_266 = V_0;
		int32_t L_267 = V_4;
		il2cpp_codegen_runtime_class_init_inline(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_268 = ((InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_269 = V_3;
		NullCheck(L_268);
		int32_t L_270 = L_269;
		int32_t L_271 = (L_268)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		V_0 = ((int32_t)il2cpp_codegen_add(L_266, ((int32_t)(L_267&L_271))));
		// tp_index_t_3 = (tp_index + t) * 3;
		int32_t L_272 = V_2;
		int32_t L_273 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_272, L_273)), 3));
		// e = tp[tp_index_t_3];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_274 = V_1;
		int32_t L_275 = V_15;
		NullCheck(L_274);
		int32_t L_276 = L_275;
		int32_t L_277 = (L_274)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		V_3 = L_277;
		goto IL_0181;
	}

IL_03c1:
	{
		// z.Message = "invalid distance code";
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_278 = ___z7;
		NullCheck(L_278);
		L_278->___Message_8 = _stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948;
		Il2CppCodeGenWriteBarrier((void**)(&L_278->___Message_8), (void*)_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
		// c = z.AvailableBytesIn - n; c = (k >> 3) < c ? k >> 3 : c; n += c; p -= c; k -= (c << 3);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_279 = ___z7;
		NullCheck(L_279);
		int32_t L_280 = L_279->___AvailableBytesIn_2;
		int32_t L_281 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_280, L_281));
		// c = z.AvailableBytesIn - n; c = (k >> 3) < c ? k >> 3 : c; n += c; p -= c; k -= (c << 3);
		int32_t L_282 = V_5;
		int32_t L_283 = V_12;
		if ((((int32_t)((int32_t)(L_282>>3))) < ((int32_t)L_283)))
		{
			goto IL_03e5;
		}
	}
	{
		int32_t L_284 = V_12;
		G_B41_0 = L_284;
		goto IL_03e9;
	}

IL_03e5:
	{
		int32_t L_285 = V_5;
		G_B41_0 = ((int32_t)(L_285>>3));
	}

IL_03e9:
	{
		V_12 = G_B41_0;
		// c = z.AvailableBytesIn - n; c = (k >> 3) < c ? k >> 3 : c; n += c; p -= c; k -= (c << 3);
		int32_t L_286 = V_7;
		int32_t L_287 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add(L_286, L_287));
		// c = z.AvailableBytesIn - n; c = (k >> 3) < c ? k >> 3 : c; n += c; p -= c; k -= (c << 3);
		int32_t L_288 = V_6;
		int32_t L_289 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_288, L_289));
		// c = z.AvailableBytesIn - n; c = (k >> 3) < c ? k >> 3 : c; n += c; p -= c; k -= (c << 3);
		int32_t L_290 = V_5;
		int32_t L_291 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_290, ((int32_t)(L_291<<3))));
		// s.bitb = b; s.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_292 = ___s6;
		int32_t L_293 = V_4;
		NullCheck(L_292);
		L_292->___bitb_13 = L_293;
		// s.bitb = b; s.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_294 = ___s6;
		int32_t L_295 = V_5;
		NullCheck(L_294);
		L_294->___bitk_12 = L_295;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_296 = ___z7;
		int32_t L_297 = V_7;
		NullCheck(L_296);
		L_296->___AvailableBytesIn_2 = L_297;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_298 = ___z7;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_299 = L_298;
		NullCheck(L_299);
		int64_t L_300 = L_299->___TotalBytesIn_3;
		int32_t L_301 = V_6;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_302 = ___z7;
		NullCheck(L_302);
		int32_t L_303 = L_302->___NextIn_1;
		NullCheck(L_299);
		L_299->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_300, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_301, L_303)))));
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_304 = ___z7;
		int32_t L_305 = V_6;
		NullCheck(L_304);
		L_304->___NextIn_1 = L_305;
		// s.writeAt = q;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_306 = ___s6;
		int32_t L_307 = V_8;
		NullCheck(L_306);
		L_306->___writeAt_18 = L_307;
		// return ZlibConstants.Z_DATA_ERROR;
		return ((int32_t)-3);
	}

IL_044b:
	{
		// if ((e & 64) == 0)
		int32_t L_308 = V_3;
		if (((int32_t)(L_308&((int32_t)64))))
		{
			goto IL_04b3;
		}
	}
	{
		// t += tp[tp_index_t_3 + 2];
		int32_t L_309 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_310 = V_1;
		int32_t L_311 = V_15;
		NullCheck(L_310);
		int32_t L_312 = ((int32_t)il2cpp_codegen_add(L_311, 2));
		int32_t L_313 = (L_310)->GetAt(static_cast<il2cpp_array_size_t>(L_312));
		V_0 = ((int32_t)il2cpp_codegen_add(L_309, L_313));
		// t += (b & InternalInflateConstants.InflateMask[e]);
		int32_t L_314 = V_0;
		int32_t L_315 = V_4;
		il2cpp_codegen_runtime_class_init_inline(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_316 = ((InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_tABD74C72A542980B5321DA5A474AA7FC185682DC_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_317 = V_3;
		NullCheck(L_316);
		int32_t L_318 = L_317;
		int32_t L_319 = (L_316)->GetAt(static_cast<il2cpp_array_size_t>(L_318));
		V_0 = ((int32_t)il2cpp_codegen_add(L_314, ((int32_t)(L_315&L_319))));
		// tp_index_t_3 = (tp_index + t) * 3;
		int32_t L_320 = V_2;
		int32_t L_321 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_320, L_321)), 3));
		// if ((e = tp[tp_index_t_3]) == 0)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_322 = V_1;
		int32_t L_323 = V_15;
		NullCheck(L_322);
		int32_t L_324 = L_323;
		int32_t L_325 = (L_322)->GetAt(static_cast<il2cpp_array_size_t>(L_324));
		int32_t L_326 = L_325;
		V_3 = L_326;
		if (L_326)
		{
			goto IL_00ec;
		}
	}
	{
		// b >>= (tp[tp_index_t_3 + 1]); k -= (tp[tp_index_t_3 + 1]);
		int32_t L_327 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_328 = V_1;
		int32_t L_329 = V_15;
		NullCheck(L_328);
		int32_t L_330 = ((int32_t)il2cpp_codegen_add(L_329, 1));
		int32_t L_331 = (L_328)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		V_4 = ((int32_t)(L_327>>((int32_t)(L_331&((int32_t)31)))));
		// b >>= (tp[tp_index_t_3 + 1]); k -= (tp[tp_index_t_3 + 1]);
		int32_t L_332 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_333 = V_1;
		int32_t L_334 = V_15;
		NullCheck(L_333);
		int32_t L_335 = ((int32_t)il2cpp_codegen_add(L_334, 1));
		int32_t L_336 = (L_333)->GetAt(static_cast<il2cpp_array_size_t>(L_335));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_332, L_336));
		// s.window[q++] = (byte)tp[tp_index_t_3 + 2];
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_337 = ___s6;
		NullCheck(L_337);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_338 = L_337->___window_15;
		int32_t L_339 = V_8;
		int32_t L_340 = L_339;
		V_8 = ((int32_t)il2cpp_codegen_add(L_340, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_341 = V_1;
		int32_t L_342 = V_15;
		NullCheck(L_341);
		int32_t L_343 = ((int32_t)il2cpp_codegen_add(L_342, 2));
		int32_t L_344 = (L_341)->GetAt(static_cast<il2cpp_array_size_t>(L_343));
		NullCheck(L_338);
		(L_338)->SetAt(static_cast<il2cpp_array_size_t>(L_340), (uint8_t)((int32_t)(uint8_t)L_344));
		// m--;
		int32_t L_345 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_345, 1));
		// break;
		goto IL_05c0;
	}

IL_04b3:
	{
		// else if ((e & 32) != 0)
		int32_t L_346 = V_3;
		if (!((int32_t)(L_346&((int32_t)32))))
		{
			goto IL_0536;
		}
	}
	{
		// c = z.AvailableBytesIn - n; c = (k >> 3) < c ? k >> 3 : c; n += c; p -= c; k -= (c << 3);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_347 = ___z7;
		NullCheck(L_347);
		int32_t L_348 = L_347->___AvailableBytesIn_2;
		int32_t L_349 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_348, L_349));
		// c = z.AvailableBytesIn - n; c = (k >> 3) < c ? k >> 3 : c; n += c; p -= c; k -= (c << 3);
		int32_t L_350 = V_5;
		int32_t L_351 = V_12;
		if ((((int32_t)((int32_t)(L_350>>3))) < ((int32_t)L_351)))
		{
			goto IL_04d1;
		}
	}
	{
		int32_t L_352 = V_12;
		G_B49_0 = L_352;
		goto IL_04d5;
	}

IL_04d1:
	{
		int32_t L_353 = V_5;
		G_B49_0 = ((int32_t)(L_353>>3));
	}

IL_04d5:
	{
		V_12 = G_B49_0;
		// c = z.AvailableBytesIn - n; c = (k >> 3) < c ? k >> 3 : c; n += c; p -= c; k -= (c << 3);
		int32_t L_354 = V_7;
		int32_t L_355 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add(L_354, L_355));
		// c = z.AvailableBytesIn - n; c = (k >> 3) < c ? k >> 3 : c; n += c; p -= c; k -= (c << 3);
		int32_t L_356 = V_6;
		int32_t L_357 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_356, L_357));
		// c = z.AvailableBytesIn - n; c = (k >> 3) < c ? k >> 3 : c; n += c; p -= c; k -= (c << 3);
		int32_t L_358 = V_5;
		int32_t L_359 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_358, ((int32_t)(L_359<<3))));
		// s.bitb = b; s.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_360 = ___s6;
		int32_t L_361 = V_4;
		NullCheck(L_360);
		L_360->___bitb_13 = L_361;
		// s.bitb = b; s.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_362 = ___s6;
		int32_t L_363 = V_5;
		NullCheck(L_362);
		L_362->___bitk_12 = L_363;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_364 = ___z7;
		int32_t L_365 = V_7;
		NullCheck(L_364);
		L_364->___AvailableBytesIn_2 = L_365;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_366 = ___z7;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_367 = L_366;
		NullCheck(L_367);
		int64_t L_368 = L_367->___TotalBytesIn_3;
		int32_t L_369 = V_6;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_370 = ___z7;
		NullCheck(L_370);
		int32_t L_371 = L_370->___NextIn_1;
		NullCheck(L_367);
		L_367->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_368, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_369, L_371)))));
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_372 = ___z7;
		int32_t L_373 = V_6;
		NullCheck(L_372);
		L_372->___NextIn_1 = L_373;
		// s.writeAt = q;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_374 = ___s6;
		int32_t L_375 = V_8;
		NullCheck(L_374);
		L_374->___writeAt_18 = L_375;
		// return ZlibConstants.Z_STREAM_END;
		return 1;
	}

IL_0536:
	{
		// z.Message = "invalid literal/length code";
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_376 = ___z7;
		NullCheck(L_376);
		L_376->___Message_8 = _stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16;
		Il2CppCodeGenWriteBarrier((void**)(&L_376->___Message_8), (void*)_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		// c = z.AvailableBytesIn - n; c = (k >> 3) < c ? k >> 3 : c; n += c; p -= c; k -= (c << 3);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_377 = ___z7;
		NullCheck(L_377);
		int32_t L_378 = L_377->___AvailableBytesIn_2;
		int32_t L_379 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_378, L_379));
		// c = z.AvailableBytesIn - n; c = (k >> 3) < c ? k >> 3 : c; n += c; p -= c; k -= (c << 3);
		int32_t L_380 = V_5;
		int32_t L_381 = V_12;
		if ((((int32_t)((int32_t)(L_380>>3))) < ((int32_t)L_381)))
		{
			goto IL_055a;
		}
	}
	{
		int32_t L_382 = V_12;
		G_B53_0 = L_382;
		goto IL_055e;
	}

IL_055a:
	{
		int32_t L_383 = V_5;
		G_B53_0 = ((int32_t)(L_383>>3));
	}

IL_055e:
	{
		V_12 = G_B53_0;
		// c = z.AvailableBytesIn - n; c = (k >> 3) < c ? k >> 3 : c; n += c; p -= c; k -= (c << 3);
		int32_t L_384 = V_7;
		int32_t L_385 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add(L_384, L_385));
		// c = z.AvailableBytesIn - n; c = (k >> 3) < c ? k >> 3 : c; n += c; p -= c; k -= (c << 3);
		int32_t L_386 = V_6;
		int32_t L_387 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_386, L_387));
		// c = z.AvailableBytesIn - n; c = (k >> 3) < c ? k >> 3 : c; n += c; p -= c; k -= (c << 3);
		int32_t L_388 = V_5;
		int32_t L_389 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_388, ((int32_t)(L_389<<3))));
		// s.bitb = b; s.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_390 = ___s6;
		int32_t L_391 = V_4;
		NullCheck(L_390);
		L_390->___bitb_13 = L_391;
		// s.bitb = b; s.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_392 = ___s6;
		int32_t L_393 = V_5;
		NullCheck(L_392);
		L_392->___bitk_12 = L_393;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_394 = ___z7;
		int32_t L_395 = V_7;
		NullCheck(L_394);
		L_394->___AvailableBytesIn_2 = L_395;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_396 = ___z7;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_397 = L_396;
		NullCheck(L_397);
		int64_t L_398 = L_397->___TotalBytesIn_3;
		int32_t L_399 = V_6;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_400 = ___z7;
		NullCheck(L_400);
		int32_t L_401 = L_400->___NextIn_1;
		NullCheck(L_397);
		L_397->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_398, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_399, L_401)))));
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_402 = ___z7;
		int32_t L_403 = V_6;
		NullCheck(L_402);
		L_402->___NextIn_1 = L_403;
		// s.writeAt = q;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_404 = ___s6;
		int32_t L_405 = V_8;
		NullCheck(L_404);
		L_404->___writeAt_18 = L_405;
		// return ZlibConstants.Z_DATA_ERROR;
		return ((int32_t)-3);
	}

IL_05c0:
	{
		// while (m >= 258 && n >= 10);
		int32_t L_406 = V_9;
		if ((((int32_t)L_406) < ((int32_t)((int32_t)258))))
		{
			goto IL_05d2;
		}
	}
	{
		int32_t L_407 = V_7;
		if ((((int32_t)L_407) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0092;
		}
	}

IL_05d2:
	{
		// c = z.AvailableBytesIn - n; c = (k >> 3) < c ? k >> 3 : c; n += c; p -= c; k -= (c << 3);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_408 = ___z7;
		NullCheck(L_408);
		int32_t L_409 = L_408->___AvailableBytesIn_2;
		int32_t L_410 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_409, L_410));
		// c = z.AvailableBytesIn - n; c = (k >> 3) < c ? k >> 3 : c; n += c; p -= c; k -= (c << 3);
		int32_t L_411 = V_5;
		int32_t L_412 = V_12;
		if ((((int32_t)((int32_t)(L_411>>3))) < ((int32_t)L_412)))
		{
			goto IL_05ea;
		}
	}
	{
		int32_t L_413 = V_12;
		G_B59_0 = L_413;
		goto IL_05ee;
	}

IL_05ea:
	{
		int32_t L_414 = V_5;
		G_B59_0 = ((int32_t)(L_414>>3));
	}

IL_05ee:
	{
		V_12 = G_B59_0;
		// c = z.AvailableBytesIn - n; c = (k >> 3) < c ? k >> 3 : c; n += c; p -= c; k -= (c << 3);
		int32_t L_415 = V_7;
		int32_t L_416 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add(L_415, L_416));
		// c = z.AvailableBytesIn - n; c = (k >> 3) < c ? k >> 3 : c; n += c; p -= c; k -= (c << 3);
		int32_t L_417 = V_6;
		int32_t L_418 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_417, L_418));
		// c = z.AvailableBytesIn - n; c = (k >> 3) < c ? k >> 3 : c; n += c; p -= c; k -= (c << 3);
		int32_t L_419 = V_5;
		int32_t L_420 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_419, ((int32_t)(L_420<<3))));
		// s.bitb = b; s.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_421 = ___s6;
		int32_t L_422 = V_4;
		NullCheck(L_421);
		L_421->___bitb_13 = L_422;
		// s.bitb = b; s.bitk = k;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_423 = ___s6;
		int32_t L_424 = V_5;
		NullCheck(L_423);
		L_423->___bitk_12 = L_424;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_425 = ___z7;
		int32_t L_426 = V_7;
		NullCheck(L_425);
		L_425->___AvailableBytesIn_2 = L_426;
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_427 = ___z7;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_428 = L_427;
		NullCheck(L_428);
		int64_t L_429 = L_428->___TotalBytesIn_3;
		int32_t L_430 = V_6;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_431 = ___z7;
		NullCheck(L_431);
		int32_t L_432 = L_431->___NextIn_1;
		NullCheck(L_428);
		L_428->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_429, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_430, L_432)))));
		// z.AvailableBytesIn = n; z.TotalBytesIn += p - z.NextIn; z.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_433 = ___z7;
		int32_t L_434 = V_6;
		NullCheck(L_433);
		L_433->___NextIn_1 = L_434;
		// s.writeAt = q;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_435 = ___s6;
		int32_t L_436 = V_8;
		NullCheck(L_435);
		L_435->___writeAt_18 = L_436;
		// return ZlibConstants.Z_OK;
		return 0;
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
// System.Boolean Ionic.Zlib.InflateManager::get_HandleRfc1950HeaderBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InflateManager_get_HandleRfc1950HeaderBytes_mA528D034844C015D09B38CAABA4D3F44EE24B288 (InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* __this, const RuntimeMethod* method) 
{
	{
		// get { return _handleRfc1950HeaderBytes; }
		bool L_0 = __this->____handleRfc1950HeaderBytes_8;
		return L_0;
	}
}
// System.Void Ionic.Zlib.InflateManager::set_HandleRfc1950HeaderBytes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateManager_set_HandleRfc1950HeaderBytes_m64A097B1CC527A92C38F0453EF4AE85A23058DCA (InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { _handleRfc1950HeaderBytes = value; }
		bool L_0 = ___value0;
		__this->____handleRfc1950HeaderBytes_8 = L_0;
		// set { _handleRfc1950HeaderBytes = value; }
		return;
	}
}
// System.Void Ionic.Zlib.InflateManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateManager__ctor_mCF5FDEDDED1ABB4B2E1591ADE2A4DB83ADEEB32F (InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* __this, const RuntimeMethod* method) 
{
	{
		// private bool _handleRfc1950HeaderBytes = true;
		__this->____handleRfc1950HeaderBytes_8 = (bool)1;
		// public InflateManager() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public InflateManager() { }
		return;
	}
}
// System.Void Ionic.Zlib.InflateManager::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateManager__ctor_mC1710C0D465A5BB3998A722F921BF58A9FCDC3C0 (InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* __this, bool ___expectRfc1950HeaderBytes0, const RuntimeMethod* method) 
{
	{
		// private bool _handleRfc1950HeaderBytes = true;
		__this->____handleRfc1950HeaderBytes_8 = (bool)1;
		// public InflateManager(bool expectRfc1950HeaderBytes)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _handleRfc1950HeaderBytes = expectRfc1950HeaderBytes;
		bool L_0 = ___expectRfc1950HeaderBytes0;
		__this->____handleRfc1950HeaderBytes_8 = L_0;
		// }
		return;
	}
}
// System.Int32 Ionic.Zlib.InflateManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_Reset_m15007DE1228F2DC299705BB31B0B64E43BD72640 (InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* G_B2_0 = NULL;
	InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* G_B3_1 = NULL;
	{
		// _codec.TotalBytesIn = _codec.TotalBytesOut = 0;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_0 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_1 = __this->____codec_3;
		int64_t L_2 = ((int64_t)0);
		V_0 = L_2;
		NullCheck(L_1);
		L_1->___TotalBytesOut_7 = L_2;
		int64_t L_3 = V_0;
		NullCheck(L_0);
		L_0->___TotalBytesIn_3 = L_3;
		// _codec.Message = null;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_4 = __this->____codec_3;
		NullCheck(L_4);
		L_4->___Message_8 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___Message_8), (void*)(String_t*)NULL);
		// mode = HandleRfc1950HeaderBytes ? InflateManagerMode.METHOD : InflateManagerMode.BLOCKS;
		bool L_5;
		L_5 = InflateManager_get_HandleRfc1950HeaderBytes_mA528D034844C015D09B38CAABA4D3F44EE24B288_inline(__this, NULL);
		G_B1_0 = __this;
		if (L_5)
		{
			G_B2_0 = __this;
			goto IL_0033;
		}
	}
	{
		G_B3_0 = 7;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		NullCheck(G_B3_1);
		G_B3_1->___mode_2 = G_B3_0;
		// blocks.Reset();
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_6 = __this->___blocks_10;
		NullCheck(L_6);
		uint32_t L_7;
		L_7 = InflateBlocks_Reset_m8BF6F7A81688AA1977F0089C2200DB9BC2E3A988(L_6, NULL);
		// return ZlibConstants.Z_OK;
		return 0;
	}
}
// System.Int32 Ionic.Zlib.InflateManager::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_End_mDA4E43AA004A60EDCE9AC86E468F8799C28EC70C (InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* __this, const RuntimeMethod* method) 
{
	{
		// if (blocks != null)
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_0 = __this->___blocks_10;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// blocks.Free();
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_1 = __this->___blocks_10;
		NullCheck(L_1);
		InflateBlocks_Free_m320ED5CDEBC7841177560DD05467595B3D3601B9(L_1, NULL);
	}

IL_0013:
	{
		// blocks = null;
		__this->___blocks_10 = (InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blocks_10), (void*)(InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E*)NULL);
		// return ZlibConstants.Z_OK;
		return 0;
	}
}
// System.Int32 Ionic.Zlib.InflateManager::Initialize(Ionic.Zlib.ZlibCodec,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_Initialize_mFD7F0609F2EE88DD02048C41113B1A5BD27AC0CF (InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* __this, ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* ___codec0, int32_t ___w1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* G_B5_0 = NULL;
	InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* G_B5_1 = NULL;
	ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* G_B4_0 = NULL;
	InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* G_B4_1 = NULL;
	InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* G_B6_0 = NULL;
	ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* G_B6_1 = NULL;
	InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* G_B6_2 = NULL;
	{
		// _codec = codec;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_0 = ___codec0;
		__this->____codec_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____codec_3), (void*)L_0);
		// _codec.Message = null;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_1 = __this->____codec_3;
		NullCheck(L_1);
		L_1->___Message_8 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Message_8), (void*)(String_t*)NULL);
		// blocks = null;
		__this->___blocks_10 = (InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blocks_10), (void*)(InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E*)NULL);
		// if (w < 8 || w > 15)
		int32_t L_2 = ___w1;
		if ((((int32_t)L_2) < ((int32_t)8)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = ___w1;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)15))))
		{
			goto IL_0035;
		}
	}

IL_0023:
	{
		// End();
		int32_t L_4;
		L_4 = InflateManager_End_mDA4E43AA004A60EDCE9AC86E468F8799C28EC70C(__this, NULL);
		// throw new ZlibException("Bad window size.");
		ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1* L_5 = (ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ZlibException__ctor_m64D791E8513A445C3D6E672332E2EC5DD6EE76E4(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31F5FB1C38A44C5FB3A50E292D89F851681E4A86)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflateManager_Initialize_mFD7F0609F2EE88DD02048C41113B1A5BD27AC0CF_RuntimeMethod_var)));
	}

IL_0035:
	{
		// wbits = w;
		int32_t L_6 = ___w1;
		__this->___wbits_9 = L_6;
		// blocks = new InflateBlocks(codec,
		//     HandleRfc1950HeaderBytes ? this : null,
		//     1 << w);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_7 = ___codec0;
		bool L_8;
		L_8 = InflateManager_get_HandleRfc1950HeaderBytes_mA528D034844C015D09B38CAABA4D3F44EE24B288_inline(__this, NULL);
		G_B4_0 = L_7;
		G_B4_1 = __this;
		if (L_8)
		{
			G_B5_0 = L_7;
			G_B5_1 = __this;
			goto IL_0049;
		}
	}
	{
		G_B6_0 = ((InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398*)(NULL));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_004a;
	}

IL_0049:
	{
		G_B6_0 = __this;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_004a:
	{
		int32_t L_9 = ___w1;
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_10 = (InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E*)il2cpp_codegen_object_new(InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		InflateBlocks__ctor_mD40ABB6B19C3AE06EA756866856449A44F6F12AA(L_10, G_B6_1, G_B6_0, ((int32_t)(1<<((int32_t)(L_9&((int32_t)31))))), NULL);
		NullCheck(G_B6_2);
		G_B6_2->___blocks_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_2->___blocks_10), (void*)L_10);
		// Reset();
		int32_t L_11;
		L_11 = InflateManager_Reset_m15007DE1228F2DC299705BB31B0B64E43BD72640(__this, NULL);
		// return ZlibConstants.Z_OK;
		return 0;
	}
}
// System.Int32 Ionic.Zlib.InflateManager::Inflate(Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_Inflate_m36D3D9694FFD3C282E0A6C0CCF3004013DB98AEA (InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* __this, int32_t ___flush0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0659AF070440111C5138C5C2CF237FE1D199797C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06F3358B23D666113A1020E1C9CFEBE16373BE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6304F4645B5484ACF5D9DF2D847AE616393DC417);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral988F3366E12D654A4876B3640459880EFD9315D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* G_B18_0 = NULL;
	InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* G_B19_1 = NULL;
	{
		// if (_codec.InputBuffer == null)
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_0 = __this->____codec_3;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0->___InputBuffer_0;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new ZlibException("InputBuffer is null. ");
		ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1* L_2 = (ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ZlibException__ctor_m64D791E8513A445C3D6E672332E2EC5DD6EE76E4(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7897EC9A2D8A7F35E69F42F0A932E1E9320CB2DA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflateManager_Inflate_m36D3D9694FFD3C282E0A6C0CCF3004013DB98AEA_RuntimeMethod_var)));
	}

IL_0018:
	{
		// int f = ZlibConstants.Z_OK;
		V_1 = 0;
		// int r = ZlibConstants.Z_BUF_ERROR;
		V_2 = ((int32_t)-5);
	}

IL_001d:
	{
		// switch (mode)
		int32_t L_3 = __this->___mode_2;
		V_3 = L_3;
		int32_t L_4 = V_3;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0067;
			}
			case 1:
			{
				goto IL_015f;
			}
			case 2:
			{
				goto IL_020b;
			}
			case 3:
			{
				goto IL_0286;
			}
			case 4:
			{
				goto IL_0305;
			}
			case 5:
			{
				goto IL_0383;
			}
			case 6:
			{
				goto IL_040d;
			}
			case 7:
			{
				goto IL_042f;
			}
			case 8:
			{
				goto IL_0491;
			}
			case 9:
			{
				goto IL_050d;
			}
			case 10:
			{
				goto IL_058d;
			}
			case 11:
			{
				goto IL_060c;
			}
			case 12:
			{
				goto IL_06b8;
			}
			case 13:
			{
				goto IL_06ba;
			}
		}
	}
	{
		goto IL_06d5;
	}

IL_0067:
	{
		// if (_codec.AvailableBytesIn == 0) return r;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_5 = __this->____codec_3;
		NullCheck(L_5);
		int32_t L_6 = L_5->___AvailableBytesIn_2;
		if (L_6)
		{
			goto IL_0076;
		}
	}
	{
		// if (_codec.AvailableBytesIn == 0) return r;
		int32_t L_7 = V_2;
		return L_7;
	}

IL_0076:
	{
		// r = f;
		int32_t L_8 = V_1;
		V_2 = L_8;
		// _codec.AvailableBytesIn--;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_9 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_10 = L_9;
		NullCheck(L_10);
		int32_t L_11 = L_10->___AvailableBytesIn_2;
		NullCheck(L_10);
		L_10->___AvailableBytesIn_2 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		// _codec.TotalBytesIn++;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_12 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_13 = L_12;
		NullCheck(L_13);
		int64_t L_14 = L_13->___TotalBytesIn_3;
		NullCheck(L_13);
		L_13->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_14, ((int64_t)1)));
		// if (((method = _codec.InputBuffer[_codec.NextIn++]) & 0xf) != Z_DEFLATED)
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_15 = __this->____codec_3;
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = L_15->___InputBuffer_0;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_17 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_18 = L_17;
		NullCheck(L_18);
		int32_t L_19 = L_18->___NextIn_1;
		V_4 = L_19;
		int32_t L_20 = V_4;
		NullCheck(L_18);
		L_18->___NextIn_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = V_4;
		NullCheck(L_16);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		uint8_t L_24 = L_23;
		V_4 = L_24;
		__this->___method_4 = L_24;
		int32_t L_25 = V_4;
		if ((((int32_t)((int32_t)(L_25&((int32_t)15)))) == ((int32_t)8)))
		{
			goto IL_0109;
		}
	}
	{
		// mode = InflateManagerMode.BAD;
		__this->___mode_2 = ((int32_t)13);
		// _codec.Message = String.Format("unknown compression method (0x{0:X2})", method);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_26 = __this->____codec_3;
		int32_t L_27 = __this->___method_4;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_28);
		String_t* L_30;
		L_30 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral988F3366E12D654A4876B3640459880EFD9315D1, L_29, NULL);
		NullCheck(L_26);
		L_26->___Message_8 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___Message_8), (void*)L_30);
		// marker = 5; // can't try inflateSync
		__this->___marker_7 = 5;
		// break;
		goto IL_001d;
	}

IL_0109:
	{
		// if ((method >> 4) + 8 > wbits)
		int32_t L_31 = __this->___method_4;
		int32_t L_32 = __this->___wbits_9;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(L_31>>4)), 8))) <= ((int32_t)L_32)))
		{
			goto IL_0153;
		}
	}
	{
		// mode = InflateManagerMode.BAD;
		__this->___mode_2 = ((int32_t)13);
		// _codec.Message = String.Format("invalid window size ({0})", (method >> 4) + 8);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_33 = __this->____codec_3;
		int32_t L_34 = __this->___method_4;
		int32_t L_35 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_34>>4)), 8));
		RuntimeObject* L_36 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37;
		L_37 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral0659AF070440111C5138C5C2CF237FE1D199797C, L_36, NULL);
		NullCheck(L_33);
		L_33->___Message_8 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&L_33->___Message_8), (void*)L_37);
		// marker = 5; // can't try inflateSync
		__this->___marker_7 = 5;
		// break;
		goto IL_001d;
	}

IL_0153:
	{
		// mode = InflateManagerMode.FLAG;
		__this->___mode_2 = 1;
		// break;
		goto IL_001d;
	}

IL_015f:
	{
		// if (_codec.AvailableBytesIn == 0) return r;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_38 = __this->____codec_3;
		NullCheck(L_38);
		int32_t L_39 = L_38->___AvailableBytesIn_2;
		if (L_39)
		{
			goto IL_016e;
		}
	}
	{
		// if (_codec.AvailableBytesIn == 0) return r;
		int32_t L_40 = V_2;
		return L_40;
	}

IL_016e:
	{
		// r = f;
		int32_t L_41 = V_1;
		V_2 = L_41;
		// _codec.AvailableBytesIn--;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_42 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_43 = L_42;
		NullCheck(L_43);
		int32_t L_44 = L_43->___AvailableBytesIn_2;
		NullCheck(L_43);
		L_43->___AvailableBytesIn_2 = ((int32_t)il2cpp_codegen_subtract(L_44, 1));
		// _codec.TotalBytesIn++;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_45 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_46 = L_45;
		NullCheck(L_46);
		int64_t L_47 = L_46->___TotalBytesIn_3;
		NullCheck(L_46);
		L_46->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_47, ((int64_t)1)));
		// b = (_codec.InputBuffer[_codec.NextIn++]) & 0xff;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_48 = __this->____codec_3;
		NullCheck(L_48);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = L_48->___InputBuffer_0;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_50 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_51 = L_50;
		NullCheck(L_51);
		int32_t L_52 = L_51->___NextIn_1;
		V_4 = L_52;
		int32_t L_53 = V_4;
		NullCheck(L_51);
		L_51->___NextIn_1 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		int32_t L_54 = V_4;
		NullCheck(L_49);
		int32_t L_55 = L_54;
		uint8_t L_56 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int32_t)((int32_t)L_56&((int32_t)255)));
		// if ((((method << 8) + b) % 31) != 0)
		int32_t L_57 = __this->___method_4;
		int32_t L_58 = V_0;
		if (!((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(L_57<<8)), L_58))%((int32_t)31))))
		{
			goto IL_01f6;
		}
	}
	{
		// mode = InflateManagerMode.BAD;
		__this->___mode_2 = ((int32_t)13);
		// _codec.Message = "incorrect header check";
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_59 = __this->____codec_3;
		NullCheck(L_59);
		L_59->___Message_8 = _stringLiteral6304F4645B5484ACF5D9DF2D847AE616393DC417;
		Il2CppCodeGenWriteBarrier((void**)(&L_59->___Message_8), (void*)_stringLiteral6304F4645B5484ACF5D9DF2D847AE616393DC417);
		// marker = 5; // can't try inflateSync
		__this->___marker_7 = 5;
		// break;
		goto IL_001d;
	}

IL_01f6:
	{
		// mode = ((b & PRESET_DICT) == 0)
		//     ? InflateManagerMode.BLOCKS
		//     : InflateManagerMode.DICT4;
		int32_t L_60 = V_0;
		G_B17_0 = __this;
		if (!((int32_t)(L_60&((int32_t)32))))
		{
			G_B18_0 = __this;
			goto IL_0200;
		}
	}
	{
		G_B19_0 = 2;
		G_B19_1 = G_B17_0;
		goto IL_0201;
	}

IL_0200:
	{
		G_B19_0 = 7;
		G_B19_1 = G_B18_0;
	}

IL_0201:
	{
		NullCheck(G_B19_1);
		G_B19_1->___mode_2 = G_B19_0;
		// break;
		goto IL_001d;
	}

IL_020b:
	{
		// if (_codec.AvailableBytesIn == 0) return r;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_61 = __this->____codec_3;
		NullCheck(L_61);
		int32_t L_62 = L_61->___AvailableBytesIn_2;
		if (L_62)
		{
			goto IL_021a;
		}
	}
	{
		// if (_codec.AvailableBytesIn == 0) return r;
		int32_t L_63 = V_2;
		return L_63;
	}

IL_021a:
	{
		// r = f;
		int32_t L_64 = V_1;
		V_2 = L_64;
		// _codec.AvailableBytesIn--;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_65 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_66 = L_65;
		NullCheck(L_66);
		int32_t L_67 = L_66->___AvailableBytesIn_2;
		NullCheck(L_66);
		L_66->___AvailableBytesIn_2 = ((int32_t)il2cpp_codegen_subtract(L_67, 1));
		// _codec.TotalBytesIn++;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_68 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_69 = L_68;
		NullCheck(L_69);
		int64_t L_70 = L_69->___TotalBytesIn_3;
		NullCheck(L_69);
		L_69->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_70, ((int64_t)1)));
		// expectedCheck = (uint)((_codec.InputBuffer[_codec.NextIn++] << 24) & 0xff000000);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_71 = __this->____codec_3;
		NullCheck(L_71);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = L_71->___InputBuffer_0;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_73 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_74 = L_73;
		NullCheck(L_74);
		int32_t L_75 = L_74->___NextIn_1;
		V_4 = L_75;
		int32_t L_76 = V_4;
		NullCheck(L_74);
		L_74->___NextIn_1 = ((int32_t)il2cpp_codegen_add(L_76, 1));
		int32_t L_77 = V_4;
		NullCheck(L_72);
		int32_t L_78 = L_77;
		uint8_t L_79 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		__this->___expectedCheck_6 = ((int32_t)(uint32_t)((int64_t)(((int64_t)((int32_t)((int32_t)L_79<<((int32_t)24))))&((int64_t)(uint64_t)((uint32_t)((int32_t)-16777216))))));
		// mode = InflateManagerMode.DICT3;
		__this->___mode_2 = 3;
		// break;
		goto IL_001d;
	}

IL_0286:
	{
		// if (_codec.AvailableBytesIn == 0) return r;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_80 = __this->____codec_3;
		NullCheck(L_80);
		int32_t L_81 = L_80->___AvailableBytesIn_2;
		if (L_81)
		{
			goto IL_0295;
		}
	}
	{
		// if (_codec.AvailableBytesIn == 0) return r;
		int32_t L_82 = V_2;
		return L_82;
	}

IL_0295:
	{
		// r = f;
		int32_t L_83 = V_1;
		V_2 = L_83;
		// _codec.AvailableBytesIn--;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_84 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_85 = L_84;
		NullCheck(L_85);
		int32_t L_86 = L_85->___AvailableBytesIn_2;
		NullCheck(L_85);
		L_85->___AvailableBytesIn_2 = ((int32_t)il2cpp_codegen_subtract(L_86, 1));
		// _codec.TotalBytesIn++;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_87 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_88 = L_87;
		NullCheck(L_88);
		int64_t L_89 = L_88->___TotalBytesIn_3;
		NullCheck(L_88);
		L_88->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_89, ((int64_t)1)));
		// expectedCheck += (uint)((_codec.InputBuffer[_codec.NextIn++] << 16) & 0x00ff0000);
		uint32_t L_90 = __this->___expectedCheck_6;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_91 = __this->____codec_3;
		NullCheck(L_91);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = L_91->___InputBuffer_0;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_93 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_94 = L_93;
		NullCheck(L_94);
		int32_t L_95 = L_94->___NextIn_1;
		V_4 = L_95;
		int32_t L_96 = V_4;
		NullCheck(L_94);
		L_94->___NextIn_1 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		int32_t L_97 = V_4;
		NullCheck(L_92);
		int32_t L_98 = L_97;
		uint8_t L_99 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		__this->___expectedCheck_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, ((int32_t)(((int32_t)((int32_t)L_99<<((int32_t)16)))&((int32_t)16711680)))));
		// mode = InflateManagerMode.DICT2;
		__this->___mode_2 = 4;
		// break;
		goto IL_001d;
	}

IL_0305:
	{
		// if (_codec.AvailableBytesIn == 0) return r;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_100 = __this->____codec_3;
		NullCheck(L_100);
		int32_t L_101 = L_100->___AvailableBytesIn_2;
		if (L_101)
		{
			goto IL_0314;
		}
	}
	{
		// if (_codec.AvailableBytesIn == 0) return r;
		int32_t L_102 = V_2;
		return L_102;
	}

IL_0314:
	{
		// r = f;
		int32_t L_103 = V_1;
		V_2 = L_103;
		// _codec.AvailableBytesIn--;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_104 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_105 = L_104;
		NullCheck(L_105);
		int32_t L_106 = L_105->___AvailableBytesIn_2;
		NullCheck(L_105);
		L_105->___AvailableBytesIn_2 = ((int32_t)il2cpp_codegen_subtract(L_106, 1));
		// _codec.TotalBytesIn++;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_107 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_108 = L_107;
		NullCheck(L_108);
		int64_t L_109 = L_108->___TotalBytesIn_3;
		NullCheck(L_108);
		L_108->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_109, ((int64_t)1)));
		// expectedCheck += (uint)((_codec.InputBuffer[_codec.NextIn++] << 8) & 0x0000ff00);
		uint32_t L_110 = __this->___expectedCheck_6;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_111 = __this->____codec_3;
		NullCheck(L_111);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = L_111->___InputBuffer_0;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_113 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_114 = L_113;
		NullCheck(L_114);
		int32_t L_115 = L_114->___NextIn_1;
		V_4 = L_115;
		int32_t L_116 = V_4;
		NullCheck(L_114);
		L_114->___NextIn_1 = ((int32_t)il2cpp_codegen_add(L_116, 1));
		int32_t L_117 = V_4;
		NullCheck(L_112);
		int32_t L_118 = L_117;
		uint8_t L_119 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		__this->___expectedCheck_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_110, ((int32_t)(((int32_t)((int32_t)L_119<<8))&((int32_t)65280)))));
		// mode = InflateManagerMode.DICT1;
		__this->___mode_2 = 5;
		// break;
		goto IL_001d;
	}

IL_0383:
	{
		// if (_codec.AvailableBytesIn == 0) return r;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_120 = __this->____codec_3;
		NullCheck(L_120);
		int32_t L_121 = L_120->___AvailableBytesIn_2;
		if (L_121)
		{
			goto IL_0392;
		}
	}
	{
		// if (_codec.AvailableBytesIn == 0) return r;
		int32_t L_122 = V_2;
		return L_122;
	}

IL_0392:
	{
		// r = f;
		int32_t L_123 = V_1;
		V_2 = L_123;
		// _codec.AvailableBytesIn--; _codec.TotalBytesIn++;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_124 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_125 = L_124;
		NullCheck(L_125);
		int32_t L_126 = L_125->___AvailableBytesIn_2;
		NullCheck(L_125);
		L_125->___AvailableBytesIn_2 = ((int32_t)il2cpp_codegen_subtract(L_126, 1));
		// _codec.AvailableBytesIn--; _codec.TotalBytesIn++;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_127 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_128 = L_127;
		NullCheck(L_128);
		int64_t L_129 = L_128->___TotalBytesIn_3;
		NullCheck(L_128);
		L_128->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_129, ((int64_t)1)));
		// expectedCheck += (uint)(_codec.InputBuffer[_codec.NextIn++] & 0x000000ff);
		uint32_t L_130 = __this->___expectedCheck_6;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_131 = __this->____codec_3;
		NullCheck(L_131);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_132 = L_131->___InputBuffer_0;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_133 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_134 = L_133;
		NullCheck(L_134);
		int32_t L_135 = L_134->___NextIn_1;
		V_4 = L_135;
		int32_t L_136 = V_4;
		NullCheck(L_134);
		L_134->___NextIn_1 = ((int32_t)il2cpp_codegen_add(L_136, 1));
		int32_t L_137 = V_4;
		NullCheck(L_132);
		int32_t L_138 = L_137;
		uint8_t L_139 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		__this->___expectedCheck_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_130, ((int32_t)((int32_t)L_139&((int32_t)255)))));
		// _codec._Adler32 = expectedCheck;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_140 = __this->____codec_3;
		uint32_t L_141 = __this->___expectedCheck_6;
		NullCheck(L_140);
		L_140->____Adler32_11 = L_141;
		// mode = InflateManagerMode.DICT0;
		__this->___mode_2 = 6;
		// return ZlibConstants.Z_NEED_DICT;
		return 2;
	}

IL_040d:
	{
		// mode = InflateManagerMode.BAD;
		__this->___mode_2 = ((int32_t)13);
		// _codec.Message = "need dictionary";
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_142 = __this->____codec_3;
		NullCheck(L_142);
		L_142->___Message_8 = _stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E;
		Il2CppCodeGenWriteBarrier((void**)(&L_142->___Message_8), (void*)_stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		// marker = 0; // can try inflateSync
		__this->___marker_7 = 0;
		// return ZlibConstants.Z_STREAM_ERROR;
		return ((int32_t)-2);
	}

IL_042f:
	{
		// r = blocks.Process(r);
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_143 = __this->___blocks_10;
		int32_t L_144 = V_2;
		NullCheck(L_143);
		int32_t L_145;
		L_145 = InflateBlocks_Process_mCCBBC67F46F15D0CBFD57C6F2C486E7C6734E768(L_143, L_144, NULL);
		V_2 = L_145;
		// if (r == ZlibConstants.Z_DATA_ERROR)
		int32_t L_146 = V_2;
		if ((!(((uint32_t)L_146) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0455;
		}
	}
	{
		// mode = InflateManagerMode.BAD;
		__this->___mode_2 = ((int32_t)13);
		// marker = 0; // can try inflateSync
		__this->___marker_7 = 0;
		// break;
		goto IL_001d;
	}

IL_0455:
	{
		// if (r == ZlibConstants.Z_OK) r = f;
		int32_t L_147 = V_2;
		if (L_147)
		{
			goto IL_045a;
		}
	}
	{
		// if (r == ZlibConstants.Z_OK) r = f;
		int32_t L_148 = V_1;
		V_2 = L_148;
	}

IL_045a:
	{
		// if (r != ZlibConstants.Z_STREAM_END)
		int32_t L_149 = V_2;
		if ((((int32_t)L_149) == ((int32_t)1)))
		{
			goto IL_0460;
		}
	}
	{
		// return r;
		int32_t L_150 = V_2;
		return L_150;
	}

IL_0460:
	{
		// r = f;
		int32_t L_151 = V_1;
		V_2 = L_151;
		// computedCheck = blocks.Reset();
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_152 = __this->___blocks_10;
		NullCheck(L_152);
		uint32_t L_153;
		L_153 = InflateBlocks_Reset_m8BF6F7A81688AA1977F0089C2200DB9BC2E3A988(L_152, NULL);
		__this->___computedCheck_5 = L_153;
		// if (!HandleRfc1950HeaderBytes)
		bool L_154;
		L_154 = InflateManager_get_HandleRfc1950HeaderBytes_mA528D034844C015D09B38CAABA4D3F44EE24B288_inline(__this, NULL);
		if (L_154)
		{
			goto IL_0485;
		}
	}
	{
		// mode = InflateManagerMode.DONE;
		__this->___mode_2 = ((int32_t)12);
		// return ZlibConstants.Z_STREAM_END;
		return 1;
	}

IL_0485:
	{
		// mode = InflateManagerMode.CHECK4;
		__this->___mode_2 = 8;
		// break;
		goto IL_001d;
	}

IL_0491:
	{
		// if (_codec.AvailableBytesIn == 0) return r;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_155 = __this->____codec_3;
		NullCheck(L_155);
		int32_t L_156 = L_155->___AvailableBytesIn_2;
		if (L_156)
		{
			goto IL_04a0;
		}
	}
	{
		// if (_codec.AvailableBytesIn == 0) return r;
		int32_t L_157 = V_2;
		return L_157;
	}

IL_04a0:
	{
		// r = f;
		int32_t L_158 = V_1;
		V_2 = L_158;
		// _codec.AvailableBytesIn--;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_159 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_160 = L_159;
		NullCheck(L_160);
		int32_t L_161 = L_160->___AvailableBytesIn_2;
		NullCheck(L_160);
		L_160->___AvailableBytesIn_2 = ((int32_t)il2cpp_codegen_subtract(L_161, 1));
		// _codec.TotalBytesIn++;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_162 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_163 = L_162;
		NullCheck(L_163);
		int64_t L_164 = L_163->___TotalBytesIn_3;
		NullCheck(L_163);
		L_163->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_164, ((int64_t)1)));
		// expectedCheck = (uint)((_codec.InputBuffer[_codec.NextIn++] << 24) & 0xff000000);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_165 = __this->____codec_3;
		NullCheck(L_165);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_166 = L_165->___InputBuffer_0;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_167 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_168 = L_167;
		NullCheck(L_168);
		int32_t L_169 = L_168->___NextIn_1;
		V_4 = L_169;
		int32_t L_170 = V_4;
		NullCheck(L_168);
		L_168->___NextIn_1 = ((int32_t)il2cpp_codegen_add(L_170, 1));
		int32_t L_171 = V_4;
		NullCheck(L_166);
		int32_t L_172 = L_171;
		uint8_t L_173 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		__this->___expectedCheck_6 = ((int32_t)(uint32_t)((int64_t)(((int64_t)((int32_t)((int32_t)L_173<<((int32_t)24))))&((int64_t)(uint64_t)((uint32_t)((int32_t)-16777216))))));
		// mode = InflateManagerMode.CHECK3;
		__this->___mode_2 = ((int32_t)9);
		// break;
		goto IL_001d;
	}

IL_050d:
	{
		// if (_codec.AvailableBytesIn == 0) return r;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_174 = __this->____codec_3;
		NullCheck(L_174);
		int32_t L_175 = L_174->___AvailableBytesIn_2;
		if (L_175)
		{
			goto IL_051c;
		}
	}
	{
		// if (_codec.AvailableBytesIn == 0) return r;
		int32_t L_176 = V_2;
		return L_176;
	}

IL_051c:
	{
		// r = f;
		int32_t L_177 = V_1;
		V_2 = L_177;
		// _codec.AvailableBytesIn--; _codec.TotalBytesIn++;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_178 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_179 = L_178;
		NullCheck(L_179);
		int32_t L_180 = L_179->___AvailableBytesIn_2;
		NullCheck(L_179);
		L_179->___AvailableBytesIn_2 = ((int32_t)il2cpp_codegen_subtract(L_180, 1));
		// _codec.AvailableBytesIn--; _codec.TotalBytesIn++;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_181 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_182 = L_181;
		NullCheck(L_182);
		int64_t L_183 = L_182->___TotalBytesIn_3;
		NullCheck(L_182);
		L_182->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_183, ((int64_t)1)));
		// expectedCheck += (uint)((_codec.InputBuffer[_codec.NextIn++] << 16) & 0x00ff0000);
		uint32_t L_184 = __this->___expectedCheck_6;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_185 = __this->____codec_3;
		NullCheck(L_185);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_186 = L_185->___InputBuffer_0;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_187 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_188 = L_187;
		NullCheck(L_188);
		int32_t L_189 = L_188->___NextIn_1;
		V_4 = L_189;
		int32_t L_190 = V_4;
		NullCheck(L_188);
		L_188->___NextIn_1 = ((int32_t)il2cpp_codegen_add(L_190, 1));
		int32_t L_191 = V_4;
		NullCheck(L_186);
		int32_t L_192 = L_191;
		uint8_t L_193 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_192));
		__this->___expectedCheck_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_184, ((int32_t)(((int32_t)((int32_t)L_193<<((int32_t)16)))&((int32_t)16711680)))));
		// mode = InflateManagerMode.CHECK2;
		__this->___mode_2 = ((int32_t)10);
		// break;
		goto IL_001d;
	}

IL_058d:
	{
		// if (_codec.AvailableBytesIn == 0) return r;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_194 = __this->____codec_3;
		NullCheck(L_194);
		int32_t L_195 = L_194->___AvailableBytesIn_2;
		if (L_195)
		{
			goto IL_059c;
		}
	}
	{
		// if (_codec.AvailableBytesIn == 0) return r;
		int32_t L_196 = V_2;
		return L_196;
	}

IL_059c:
	{
		// r = f;
		int32_t L_197 = V_1;
		V_2 = L_197;
		// _codec.AvailableBytesIn--;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_198 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_199 = L_198;
		NullCheck(L_199);
		int32_t L_200 = L_199->___AvailableBytesIn_2;
		NullCheck(L_199);
		L_199->___AvailableBytesIn_2 = ((int32_t)il2cpp_codegen_subtract(L_200, 1));
		// _codec.TotalBytesIn++;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_201 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_202 = L_201;
		NullCheck(L_202);
		int64_t L_203 = L_202->___TotalBytesIn_3;
		NullCheck(L_202);
		L_202->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_203, ((int64_t)1)));
		// expectedCheck += (uint)((_codec.InputBuffer[_codec.NextIn++] << 8) & 0x0000ff00);
		uint32_t L_204 = __this->___expectedCheck_6;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_205 = __this->____codec_3;
		NullCheck(L_205);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_206 = L_205->___InputBuffer_0;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_207 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_208 = L_207;
		NullCheck(L_208);
		int32_t L_209 = L_208->___NextIn_1;
		V_4 = L_209;
		int32_t L_210 = V_4;
		NullCheck(L_208);
		L_208->___NextIn_1 = ((int32_t)il2cpp_codegen_add(L_210, 1));
		int32_t L_211 = V_4;
		NullCheck(L_206);
		int32_t L_212 = L_211;
		uint8_t L_213 = (L_206)->GetAt(static_cast<il2cpp_array_size_t>(L_212));
		__this->___expectedCheck_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_204, ((int32_t)(((int32_t)((int32_t)L_213<<8))&((int32_t)65280)))));
		// mode = InflateManagerMode.CHECK1;
		__this->___mode_2 = ((int32_t)11);
		// break;
		goto IL_001d;
	}

IL_060c:
	{
		// if (_codec.AvailableBytesIn == 0) return r;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_214 = __this->____codec_3;
		NullCheck(L_214);
		int32_t L_215 = L_214->___AvailableBytesIn_2;
		if (L_215)
		{
			goto IL_061b;
		}
	}
	{
		// if (_codec.AvailableBytesIn == 0) return r;
		int32_t L_216 = V_2;
		return L_216;
	}

IL_061b:
	{
		// r = f;
		int32_t L_217 = V_1;
		V_2 = L_217;
		// _codec.AvailableBytesIn--; _codec.TotalBytesIn++;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_218 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_219 = L_218;
		NullCheck(L_219);
		int32_t L_220 = L_219->___AvailableBytesIn_2;
		NullCheck(L_219);
		L_219->___AvailableBytesIn_2 = ((int32_t)il2cpp_codegen_subtract(L_220, 1));
		// _codec.AvailableBytesIn--; _codec.TotalBytesIn++;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_221 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_222 = L_221;
		NullCheck(L_222);
		int64_t L_223 = L_222->___TotalBytesIn_3;
		NullCheck(L_222);
		L_222->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_223, ((int64_t)1)));
		// expectedCheck += (uint)(_codec.InputBuffer[_codec.NextIn++] & 0x000000ff);
		uint32_t L_224 = __this->___expectedCheck_6;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_225 = __this->____codec_3;
		NullCheck(L_225);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_226 = L_225->___InputBuffer_0;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_227 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_228 = L_227;
		NullCheck(L_228);
		int32_t L_229 = L_228->___NextIn_1;
		V_4 = L_229;
		int32_t L_230 = V_4;
		NullCheck(L_228);
		L_228->___NextIn_1 = ((int32_t)il2cpp_codegen_add(L_230, 1));
		int32_t L_231 = V_4;
		NullCheck(L_226);
		int32_t L_232 = L_231;
		uint8_t L_233 = (L_226)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		__this->___expectedCheck_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_224, ((int32_t)((int32_t)L_233&((int32_t)255)))));
		// if (computedCheck != expectedCheck)
		uint32_t L_234 = __this->___computedCheck_5;
		uint32_t L_235 = __this->___expectedCheck_6;
		if ((((int32_t)L_234) == ((int32_t)L_235)))
		{
			goto IL_06ae;
		}
	}
	{
		// mode = InflateManagerMode.BAD;
		__this->___mode_2 = ((int32_t)13);
		// _codec.Message = "incorrect data check";
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_236 = __this->____codec_3;
		NullCheck(L_236);
		L_236->___Message_8 = _stringLiteral06F3358B23D666113A1020E1C9CFEBE16373BE40;
		Il2CppCodeGenWriteBarrier((void**)(&L_236->___Message_8), (void*)_stringLiteral06F3358B23D666113A1020E1C9CFEBE16373BE40);
		// marker = 5; // can't try inflateSync
		__this->___marker_7 = 5;
		// break;
		goto IL_001d;
	}

IL_06ae:
	{
		// mode = InflateManagerMode.DONE;
		__this->___mode_2 = ((int32_t)12);
		// return ZlibConstants.Z_STREAM_END;
		return 1;
	}

IL_06b8:
	{
		// return ZlibConstants.Z_STREAM_END;
		return 1;
	}

IL_06ba:
	{
		// throw new ZlibException(String.Format("Bad state ({0})", _codec.Message));
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_237 = __this->____codec_3;
		NullCheck(L_237);
		String_t* L_238 = L_237->___Message_8;
		String_t* L_239;
		L_239 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31FF32DD49EB95324AC3BBB26903BDBBB3D9DE53)), L_238, NULL);
		ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1* L_240 = (ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1_il2cpp_TypeInfo_var)));
		NullCheck(L_240);
		ZlibException__ctor_m64D791E8513A445C3D6E672332E2EC5DD6EE76E4(L_240, L_239, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_240, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflateManager_Inflate_m36D3D9694FFD3C282E0A6C0CCF3004013DB98AEA_RuntimeMethod_var)));
	}

IL_06d5:
	{
		// throw new ZlibException("Stream error.");
		ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1* L_241 = (ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1_il2cpp_TypeInfo_var)));
		NullCheck(L_241);
		ZlibException__ctor_m64D791E8513A445C3D6E672332E2EC5DD6EE76E4(L_241, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD94DFA59855436FE4E964729609DFFE5BDFF64A0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_241, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflateManager_Inflate_m36D3D9694FFD3C282E0A6C0CCF3004013DB98AEA_RuntimeMethod_var)));
	}
}
// System.Int32 Ionic.Zlib.InflateManager::SetDictionary(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_SetDictionary_m6C95E208DB3669056A64B3CA3092193A8A506797 (InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dictionary0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler_t0FD1A5CDC49CCF1E8741247D09C4D1C46EEAE2D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int index = 0;
		V_0 = 0;
		// int length = dictionary.Length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___dictionary0;
		NullCheck(L_0);
		V_1 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		// if (mode != InflateManagerMode.DICT0)
		int32_t L_1 = __this->___mode_2;
		if ((((int32_t)L_1) == ((int32_t)6)))
		{
			goto IL_001a;
		}
	}
	{
		// throw new ZlibException("Stream error.");
		ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1* L_2 = (ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tD8EF6435BCE64E1FBBFEDB4BB100995117964BF1_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ZlibException__ctor_m64D791E8513A445C3D6E672332E2EC5DD6EE76E4(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD94DFA59855436FE4E964729609DFFE5BDFF64A0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflateManager_SetDictionary_m6C95E208DB3669056A64B3CA3092193A8A506797_RuntimeMethod_var)));
	}

IL_001a:
	{
		// if (Adler.Adler32(1, dictionary, 0, dictionary.Length) != _codec._Adler32)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___dictionary0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___dictionary0;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Adler_t0FD1A5CDC49CCF1E8741247D09C4D1C46EEAE2D2_il2cpp_TypeInfo_var);
		uint32_t L_5;
		L_5 = Adler_Adler32_m9695EEA6DCAA53D00A6F830833B21FAEDE1C0E39(1, L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_6 = __this->____codec_3;
		NullCheck(L_6);
		uint32_t L_7 = L_6->____Adler32_11;
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0035;
		}
	}
	{
		// return ZlibConstants.Z_DATA_ERROR;
		return ((int32_t)-3);
	}

IL_0035:
	{
		// _codec._Adler32 = Adler.Adler32(0, null, 0, 0);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_8 = __this->____codec_3;
		il2cpp_codegen_runtime_class_init_inline(Adler_t0FD1A5CDC49CCF1E8741247D09C4D1C46EEAE2D2_il2cpp_TypeInfo_var);
		uint32_t L_9;
		L_9 = Adler_Adler32_m9695EEA6DCAA53D00A6F830833B21FAEDE1C0E39(0, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, 0, 0, NULL);
		NullCheck(L_8);
		L_8->____Adler32_11 = L_9;
		// if (length >= (1 << wbits))
		int32_t L_10 = V_1;
		int32_t L_11 = __this->___wbits_9;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(1<<((int32_t)(L_11&((int32_t)31))))))))
		{
			goto IL_006b;
		}
	}
	{
		// length = (1 << wbits) - 1;
		int32_t L_12 = __this->___wbits_9;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_12&((int32_t)31))))), 1));
		// index = dictionary.Length - length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___dictionary0;
		NullCheck(L_13);
		int32_t L_14 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14));
	}

IL_006b:
	{
		// blocks.SetDictionary(dictionary, index, length);
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_15 = __this->___blocks_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___dictionary0;
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		NullCheck(L_15);
		InflateBlocks_SetDictionary_mC2D309C03A4AA8F3597EB6EDAFFF11885EC5374D(L_15, L_16, L_17, L_18, NULL);
		// mode = InflateManagerMode.BLOCKS;
		__this->___mode_2 = 7;
		// return ZlibConstants.Z_OK;
		return 0;
	}
}
// System.Int32 Ionic.Zlib.InflateManager::Sync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_Sync_m38C79361521A7EEDAEBE0DA7ECD3EDBB275760E8 (InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	{
		// if (mode != InflateManagerMode.BAD)
		int32_t L_0 = __this->___mode_2;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)13))))
		{
			goto IL_0019;
		}
	}
	{
		// mode = InflateManagerMode.BAD;
		__this->___mode_2 = ((int32_t)13);
		// marker = 0;
		__this->___marker_7 = 0;
	}

IL_0019:
	{
		// if ((n = _codec.AvailableBytesIn) == 0)
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_1 = __this->____codec_3;
		NullCheck(L_1);
		int32_t L_2 = L_1->___AvailableBytesIn_2;
		int32_t L_3 = L_2;
		V_0 = L_3;
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		// return ZlibConstants.Z_BUF_ERROR;
		return ((int32_t)-5);
	}

IL_002b:
	{
		// p = _codec.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_4 = __this->____codec_3;
		NullCheck(L_4);
		int32_t L_5 = L_4->___NextIn_1;
		V_1 = L_5;
		// m = marker;
		int32_t L_6 = __this->___marker_7;
		V_2 = L_6;
		goto IL_007b;
	}

IL_0040:
	{
		// if (_codec.InputBuffer[p] == mark[m])
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_7 = __this->____codec_3;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_7->___InputBuffer_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		il2cpp_codegen_runtime_class_init_inline(InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ((InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398_StaticFields*)il2cpp_codegen_static_fields_for(InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398_il2cpp_TypeInfo_var))->___mark_11;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if ((!(((uint32_t)L_11) == ((uint32_t)L_15))))
		{
			goto IL_005c;
		}
	}
	{
		// m++;
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		goto IL_0073;
	}

IL_005c:
	{
		// else if (_codec.InputBuffer[p] != 0)
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_17 = __this->____codec_3;
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = L_17->___InputBuffer_0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if (!L_21)
		{
			goto IL_006f;
		}
	}
	{
		// m = 0;
		V_2 = 0;
		goto IL_0073;
	}

IL_006f:
	{
		// m = 4 - m;
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(4, L_22));
	}

IL_0073:
	{
		// p++; n--;
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		// p++; n--;
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
	}

IL_007b:
	{
		// while (n != 0 && m < 4)
		int32_t L_25 = V_0;
		if (!L_25)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_26 = V_2;
		if ((((int32_t)L_26) < ((int32_t)4)))
		{
			goto IL_0040;
		}
	}

IL_0082:
	{
		// _codec.TotalBytesIn += p - _codec.NextIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_27 = __this->____codec_3;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_28 = L_27;
		NullCheck(L_28);
		int64_t L_29 = L_28->___TotalBytesIn_3;
		int32_t L_30 = V_1;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_31 = __this->____codec_3;
		NullCheck(L_31);
		int32_t L_32 = L_31->___NextIn_1;
		NullCheck(L_28);
		L_28->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_29, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_30, L_32)))));
		// _codec.NextIn = p;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_33 = __this->____codec_3;
		int32_t L_34 = V_1;
		NullCheck(L_33);
		L_33->___NextIn_1 = L_34;
		// _codec.AvailableBytesIn = n;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_35 = __this->____codec_3;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		L_35->___AvailableBytesIn_2 = L_36;
		// marker = m;
		int32_t L_37 = V_2;
		__this->___marker_7 = L_37;
		// if (m != 4)
		int32_t L_38 = V_2;
		if ((((int32_t)L_38) == ((int32_t)4)))
		{
			goto IL_00c8;
		}
	}
	{
		// return ZlibConstants.Z_DATA_ERROR;
		return ((int32_t)-3);
	}

IL_00c8:
	{
		// r = _codec.TotalBytesIn;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_39 = __this->____codec_3;
		NullCheck(L_39);
		int64_t L_40 = L_39->___TotalBytesIn_3;
		V_3 = L_40;
		// w = _codec.TotalBytesOut;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_41 = __this->____codec_3;
		NullCheck(L_41);
		int64_t L_42 = L_41->___TotalBytesOut_7;
		V_4 = L_42;
		// Reset();
		int32_t L_43;
		L_43 = InflateManager_Reset_m15007DE1228F2DC299705BB31B0B64E43BD72640(__this, NULL);
		// _codec.TotalBytesIn = r;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_44 = __this->____codec_3;
		int64_t L_45 = V_3;
		NullCheck(L_44);
		L_44->___TotalBytesIn_3 = L_45;
		// _codec.TotalBytesOut = w;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_46 = __this->____codec_3;
		int64_t L_47 = V_4;
		NullCheck(L_46);
		L_46->___TotalBytesOut_7 = L_47;
		// mode = InflateManagerMode.BLOCKS;
		__this->___mode_2 = 7;
		// return ZlibConstants.Z_OK;
		return 0;
	}
}
// System.Int32 Ionic.Zlib.InflateManager::SyncPoint(Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_SyncPoint_mA0933FD50CC5CB08A2F1866A9575C44CA211AA99 (InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* __this, ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* ___z0, const RuntimeMethod* method) 
{
	{
		// return blocks.SyncPoint();
		InflateBlocks_tFDAE2E89E624111FF1DC7861B39D0559613CC61E* L_0 = __this->___blocks_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InflateBlocks_SyncPoint_mDAF7364D181CCB931E90DC4FD685BE199E44927E(L_0, NULL);
		return L_1;
	}
}
// System.Void Ionic.Zlib.InflateManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateManager__cctor_m23FF5FA0D739C594AD34F2981CED8F5A7CE26909 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly byte[] mark = new byte[] { 0, 0, 0xff, 0xff };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)255));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)255));
		((InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398_StaticFields*)il2cpp_codegen_static_fields_for(InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398_il2cpp_TypeInfo_var))->___mark_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398_StaticFields*)il2cpp_codegen_static_fields_for(InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398_il2cpp_TypeInfo_var))->___mark_11), (void*)L_2);
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
// System.Int32 Ionic.Zlib.InfTree::huft_build(System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_huft_build_m05C4C1490F8507633B517C0524635B8BB563BE63 (InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___b0, int32_t ___bindex1, int32_t ___n2, int32_t ___s3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___d4, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___e5, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___t6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m7, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hp8, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hn9, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___v10, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B52_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B52_1 = NULL;
	int32_t G_B51_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B51_1 = NULL;
	int32_t G_B53_0 = 0;
	int32_t G_B53_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B53_2 = NULL;
	{
		// p = 0; i = n;
		V_9 = 0;
		// p = 0; i = n;
		int32_t L_0 = ___n2;
		V_4 = L_0;
	}

IL_0006:
	{
		// c[b[bindex + p]]++; p++; i--; // assume all entries <= BMAX
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___c_21;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___b0;
		int32_t L_3 = ___bindex1;
		int32_t L_4 = V_9;
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		int32_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_1);
		int32_t* L_7 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)));
		int32_t L_8 = *((int32_t*)L_7);
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add(L_8, 1));
		// c[b[bindex + p]]++; p++; i--; // assume all entries <= BMAX
		int32_t L_9 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// c[b[bindex + p]]++; p++; i--; // assume all entries <= BMAX
		int32_t L_10 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		// while (i != 0);
		int32_t L_11 = V_4;
		if (L_11)
		{
			goto IL_0006;
		}
	}
	{
		// if (c[0] == n)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___c_21;
		NullCheck(L_12);
		int32_t L_13 = 0;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = ___n2;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0043;
		}
	}
	{
		// t[0] = - 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ___t6;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(-1));
		// m[0] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___m7;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		// return Z_OK;
		return 0;
	}

IL_0043:
	{
		// l = m[0];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ___m7;
		NullCheck(L_18);
		int32_t L_19 = 0;
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_7 = L_20;
		// for (j = 1; j <= BMAX; j++)
		V_5 = 1;
		goto IL_005f;
	}

IL_004e:
	{
		// if (c[j] != 0)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->___c_21;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if (L_24)
		{
			goto IL_0065;
		}
	}
	{
		// for (j = 1; j <= BMAX; j++)
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_005f:
	{
		// for (j = 1; j <= BMAX; j++)
		int32_t L_26 = V_5;
		if ((((int32_t)L_26) <= ((int32_t)((int32_t)15))))
		{
			goto IL_004e;
		}
	}

IL_0065:
	{
		// k = j; // minimum code length
		int32_t L_27 = V_5;
		V_6 = L_27;
		// if (l < j)
		int32_t L_28 = V_7;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)L_29)))
		{
			goto IL_0073;
		}
	}
	{
		// l = j;
		int32_t L_30 = V_5;
		V_7 = L_30;
	}

IL_0073:
	{
		// for (i = BMAX; i != 0; i--)
		V_4 = ((int32_t)15);
		goto IL_008a;
	}

IL_0079:
	{
		// if (c[i] != 0)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___c_21;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if (L_34)
		{
			goto IL_008e;
		}
	}
	{
		// for (i = BMAX; i != 0; i--)
		int32_t L_35 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
	}

IL_008a:
	{
		// for (i = BMAX; i != 0; i--)
		int32_t L_36 = V_4;
		if (L_36)
		{
			goto IL_0079;
		}
	}

IL_008e:
	{
		// g = i; // maximum code length
		int32_t L_37 = V_4;
		V_2 = L_37;
		// if (l > i)
		int32_t L_38 = V_7;
		int32_t L_39 = V_4;
		if ((((int32_t)L_38) <= ((int32_t)L_39)))
		{
			goto IL_009b;
		}
	}
	{
		// l = i;
		int32_t L_40 = V_4;
		V_7 = L_40;
	}

IL_009b:
	{
		// m[0] = l;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = ___m7;
		int32_t L_42 = V_7;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_42);
		// for (y = 1 << j; j < i; j++, y <<= 1)
		int32_t L_43 = V_5;
		V_13 = ((int32_t)(1<<((int32_t)(L_43&((int32_t)31)))));
		goto IL_00cd;
	}

IL_00ac:
	{
		// if ((y -= c[j]) < 0)
		int32_t L_44 = V_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = __this->___c_21;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		int32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		int32_t L_49 = ((int32_t)il2cpp_codegen_subtract(L_44, L_48));
		V_13 = L_49;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_00c1;
		}
	}
	{
		// return Z_DATA_ERROR;
		return ((int32_t)-3);
	}

IL_00c1:
	{
		// for (y = 1 << j; j < i; j++, y <<= 1)
		int32_t L_50 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		// for (y = 1 << j; j < i; j++, y <<= 1)
		int32_t L_51 = V_13;
		V_13 = ((int32_t)(L_51<<1));
	}

IL_00cd:
	{
		// for (y = 1 << j; j < i; j++, y <<= 1)
		int32_t L_52 = V_5;
		int32_t L_53 = V_4;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_00ac;
		}
	}
	{
		// if ((y -= c[i]) < 0)
		int32_t L_54 = V_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = __this->___c_21;
		int32_t L_56 = V_4;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		int32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		int32_t L_59 = ((int32_t)il2cpp_codegen_subtract(L_54, L_58));
		V_13 = L_59;
		if ((((int32_t)L_59) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		// return Z_DATA_ERROR;
		return ((int32_t)-3);
	}

IL_00e8:
	{
		// c[i] += y;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = __this->___c_21;
		int32_t L_61 = V_4;
		NullCheck(L_60);
		int32_t* L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)));
		int32_t L_63 = *((int32_t*)L_62);
		int32_t L_64 = V_13;
		*((int32_t*)L_62) = (int32_t)((int32_t)il2cpp_codegen_add(L_63, L_64));
		// x[1] = j = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = __this->___x_24;
		int32_t L_66 = 0;
		V_5 = L_66;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_66);
		// p = 1; xp = 2;
		V_9 = 1;
		// p = 1; xp = 2;
		V_12 = 2;
		goto IL_0133;
	}

IL_010f:
	{
		// x[xp] = (j += c[p]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = __this->___x_24;
		int32_t L_68 = V_12;
		int32_t L_69 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = __this->___c_21;
		int32_t L_71 = V_9;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		int32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		int32_t L_74 = ((int32_t)il2cpp_codegen_add(L_69, L_73));
		V_5 = L_74;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (int32_t)L_74);
		// xp++;
		int32_t L_75 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		// p++;
		int32_t L_76 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_0133:
	{
		// while (--i != 0)
		int32_t L_77 = V_4;
		int32_t L_78 = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		V_4 = L_78;
		if (L_78)
		{
			goto IL_010f;
		}
	}
	{
		// i = 0; p = 0;
		V_4 = 0;
		// i = 0; p = 0;
		V_9 = 0;
	}

IL_0142:
	{
		// if ((j = b[bindex + p]) != 0)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = ___b0;
		int32_t L_80 = ___bindex1;
		int32_t L_81 = V_9;
		NullCheck(L_79);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_80, L_81));
		int32_t L_83 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		int32_t L_84 = L_83;
		V_5 = L_84;
		if (!L_84)
		{
			goto IL_016a;
		}
	}
	{
		// v[x[j]++] = i;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = ___v10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = __this->___x_24;
		int32_t L_87 = V_5;
		NullCheck(L_86);
		int32_t* L_88 = ((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)));
		int32_t L_89 = *((int32_t*)L_88);
		V_15 = L_89;
		int32_t L_90 = V_15;
		*((int32_t*)L_88) = (int32_t)((int32_t)il2cpp_codegen_add(L_90, 1));
		int32_t L_91 = V_15;
		int32_t L_92 = V_4;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(L_91), (int32_t)L_92);
	}

IL_016a:
	{
		// p++;
		int32_t L_93 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_93, 1));
		// while (++i < n);
		int32_t L_94 = V_4;
		int32_t L_95 = ((int32_t)il2cpp_codegen_add(L_94, 1));
		V_4 = L_95;
		int32_t L_96 = ___n2;
		if ((((int32_t)L_95) < ((int32_t)L_96)))
		{
			goto IL_0142;
		}
	}
	{
		// n = x[g]; // set n to length of v
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = __this->___x_24;
		int32_t L_98 = V_2;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		int32_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		___n2 = L_100;
		// x[0] = i = 0; // first Huffman code is zero
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = __this->___x_24;
		int32_t L_102 = 0;
		V_4 = L_102;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_102);
		// p = 0; // grab values in bit order
		V_9 = 0;
		// h = - 1; // no tables yet--level -1
		V_3 = (-1);
		// w = - l; // bits decoded == (l * h)
		int32_t L_103 = V_7;
		V_11 = ((-L_103));
		// u[0] = 0; // just to keep compilers happy
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = __this->___u_23;
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		// q = 0; // ditto
		V_10 = 0;
		// z = 0; // ditto
		V_14 = 0;
		goto IL_0413;
	}

IL_01ae:
	{
		// a = c[k];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = __this->___c_21;
		int32_t L_106 = V_6;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		int32_t L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_0 = L_108;
		goto IL_0403;
	}

IL_01bd:
	{
		// h++;
		int32_t L_109 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_109, 1));
		// w += l; // previous table always l bits
		int32_t L_110 = V_11;
		int32_t L_111 = V_7;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, L_111));
		// z = g - w;
		int32_t L_112 = V_2;
		int32_t L_113 = V_11;
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_112, L_113));
		// z = (z > l)?l:z; // table size upper limit
		int32_t L_114 = V_14;
		int32_t L_115 = V_7;
		if ((((int32_t)L_114) > ((int32_t)L_115)))
		{
			goto IL_01d8;
		}
	}
	{
		int32_t L_116 = V_14;
		G_B35_0 = L_116;
		goto IL_01da;
	}

IL_01d8:
	{
		int32_t L_117 = V_7;
		G_B35_0 = L_117;
	}

IL_01da:
	{
		V_14 = G_B35_0;
		// if ((f = 1 << (j = k - w)) > a + 1)
		int32_t L_118 = V_6;
		int32_t L_119 = V_11;
		int32_t L_120 = ((int32_t)il2cpp_codegen_subtract(L_118, L_119));
		V_5 = L_120;
		int32_t L_121 = ((int32_t)(1<<((int32_t)(L_120&((int32_t)31)))));
		V_1 = L_121;
		int32_t L_122 = V_0;
		if ((((int32_t)L_121) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_122, 1)))))
		{
			goto IL_022e;
		}
	}
	{
		// f -= (a + 1); // deduct codes from patterns left
		int32_t L_123 = V_1;
		int32_t L_124 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_123, ((int32_t)il2cpp_codegen_add(L_124, 1))));
		// xp = k;
		int32_t L_125 = V_6;
		V_12 = L_125;
		// if (j < z)
		int32_t L_126 = V_5;
		int32_t L_127 = V_14;
		if ((((int32_t)L_126) >= ((int32_t)L_127)))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0223;
	}

IL_0202:
	{
		// if ((f <<= 1) <= c[++xp])
		int32_t L_128 = V_1;
		int32_t L_129 = ((int32_t)(L_128<<1));
		V_1 = L_129;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_130 = __this->___c_21;
		int32_t L_131 = V_12;
		int32_t L_132 = ((int32_t)il2cpp_codegen_add(L_131, 1));
		V_12 = L_132;
		NullCheck(L_130);
		int32_t L_133 = L_132;
		int32_t L_134 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		if ((((int32_t)L_129) <= ((int32_t)L_134)))
		{
			goto IL_022e;
		}
	}
	{
		// f -= c[xp]; // else deduct codes from patterns
		int32_t L_135 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_136 = __this->___c_21;
		int32_t L_137 = V_12;
		NullCheck(L_136);
		int32_t L_138 = L_137;
		int32_t L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_135, L_139));
	}

IL_0223:
	{
		// while (++j < z)
		int32_t L_140 = V_5;
		int32_t L_141 = ((int32_t)il2cpp_codegen_add(L_140, 1));
		V_5 = L_141;
		int32_t L_142 = V_14;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_0202;
		}
	}

IL_022e:
	{
		// z = 1 << j; // table entries for j-bit table
		int32_t L_143 = V_5;
		V_14 = ((int32_t)(1<<((int32_t)(L_143&((int32_t)31)))));
		// if (hn[0] + z > MANY)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_144 = ___hn9;
		NullCheck(L_144);
		int32_t L_145 = 0;
		int32_t L_146 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		int32_t L_147 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_146, L_147))) <= ((int32_t)((int32_t)1440))))
		{
			goto IL_0248;
		}
	}
	{
		// return Z_DATA_ERROR; // overflow of MANY
		return ((int32_t)-3);
	}

IL_0248:
	{
		// u[h] = q = hn[0]; // DEBUG
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_148 = __this->___u_23;
		int32_t L_149 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_150 = ___hn9;
		NullCheck(L_150);
		int32_t L_151 = 0;
		int32_t L_152 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		int32_t L_153 = L_152;
		V_10 = L_153;
		NullCheck(L_148);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(L_149), (int32_t)L_153);
		// hn[0] += z;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_154 = ___hn9;
		NullCheck(L_154);
		int32_t* L_155 = ((L_154)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_156 = *((int32_t*)L_155);
		int32_t L_157 = V_14;
		*((int32_t*)L_155) = (int32_t)((int32_t)il2cpp_codegen_add(L_156, L_157));
		// if (h != 0)
		int32_t L_158 = V_3;
		if (!L_158)
		{
			goto IL_02ce;
		}
	}
	{
		// x[h] = i; // save pattern for backing up
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_159 = __this->___x_24;
		int32_t L_160 = V_3;
		int32_t L_161 = V_4;
		NullCheck(L_159);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(L_160), (int32_t)L_161);
		// r[0] = (sbyte) j; // bits in this table
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_162 = __this->___r_22;
		int32_t L_163 = V_5;
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int8_t)L_163));
		// r[1] = (sbyte) l; // bits to dump before this table
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_164 = __this->___r_22;
		int32_t L_165 = V_7;
		NullCheck(L_164);
		(L_164)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int8_t)L_165));
		// j = SharedUtils.URShift(i, (w - l));
		int32_t L_166 = V_4;
		int32_t L_167 = V_11;
		int32_t L_168 = V_7;
		int32_t L_169;
		L_169 = SharedUtils_URShift_mBE2BD8E27A3D7F84DA11CEAFB66829009D115EE9(L_166, ((int32_t)il2cpp_codegen_subtract(L_167, L_168)), NULL);
		V_5 = L_169;
		// r[2] = (int) (q - u[h - 1] - j); // offset to this table
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_170 = __this->___r_22;
		int32_t L_171 = V_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_172 = __this->___u_23;
		int32_t L_173 = V_3;
		NullCheck(L_172);
		int32_t L_174 = ((int32_t)il2cpp_codegen_subtract(L_173, 1));
		int32_t L_175 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		int32_t L_176 = V_5;
		NullCheck(L_170);
		(L_170)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_171, L_175)), L_176)));
		// Array.Copy(r, 0, hp, (u[h - 1] + j) * 3, 3); // connect to last table
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_177 = __this->___r_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_178 = ___hp8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_179 = __this->___u_23;
		int32_t L_180 = V_3;
		NullCheck(L_179);
		int32_t L_181 = ((int32_t)il2cpp_codegen_subtract(L_180, 1));
		int32_t L_182 = (L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		int32_t L_183 = V_5;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_177, 0, (RuntimeArray*)L_178, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_182, L_183)), 3)), 3, NULL);
		goto IL_02d4;
	}

IL_02ce:
	{
		// t[0] = q; // first table is returned result
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_184 = ___t6;
		int32_t L_185 = V_10;
		NullCheck(L_184);
		(L_184)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_185);
	}

IL_02d4:
	{
		// while (k > w + l)
		int32_t L_186 = V_6;
		int32_t L_187 = V_11;
		int32_t L_188 = V_7;
		if ((((int32_t)L_186) > ((int32_t)((int32_t)il2cpp_codegen_add(L_187, L_188)))))
		{
			goto IL_01bd;
		}
	}
	{
		// r[1] = (sbyte) (k - w);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_189 = __this->___r_22;
		int32_t L_190 = V_6;
		int32_t L_191 = V_11;
		NullCheck(L_189);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int8_t)((int32_t)il2cpp_codegen_subtract(L_190, L_191))));
		// if (p >= n)
		int32_t L_192 = V_9;
		int32_t L_193 = ___n2;
		if ((((int32_t)L_192) < ((int32_t)L_193)))
		{
			goto IL_0302;
		}
	}
	{
		// r[0] = 128 + 64; // out of values--invalid code
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_194 = __this->___r_22;
		NullCheck(L_194);
		(L_194)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)192));
		goto IL_036b;
	}

IL_0302:
	{
		// else if (v[p] < s)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_195 = ___v10;
		int32_t L_196 = V_9;
		NullCheck(L_195);
		int32_t L_197 = L_196;
		int32_t L_198 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		int32_t L_199 = ___s3;
		if ((((int32_t)L_198) >= ((int32_t)L_199)))
		{
			goto IL_0339;
		}
	}
	{
		// r[0] = (sbyte) (v[p] < 256?0:32 + 64); // 256 is end-of-block
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_200 = __this->___r_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_201 = ___v10;
		int32_t L_202 = V_9;
		NullCheck(L_201);
		int32_t L_203 = L_202;
		int32_t L_204 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		G_B51_0 = 0;
		G_B51_1 = L_200;
		if ((((int32_t)L_204) < ((int32_t)((int32_t)256))))
		{
			G_B52_0 = 0;
			G_B52_1 = L_200;
			goto IL_0322;
		}
	}
	{
		G_B53_0 = ((int32_t)96);
		G_B53_1 = G_B51_0;
		G_B53_2 = G_B51_1;
		goto IL_0323;
	}

IL_0322:
	{
		G_B53_0 = 0;
		G_B53_1 = G_B52_0;
		G_B53_2 = G_B52_1;
	}

IL_0323:
	{
		NullCheck(G_B53_2);
		(G_B53_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B53_1), (int32_t)((int8_t)G_B53_0));
		// r[2] = v[p++]; // simple code is just the value
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_205 = __this->___r_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_206 = ___v10;
		int32_t L_207 = V_9;
		int32_t L_208 = L_207;
		V_9 = ((int32_t)il2cpp_codegen_add(L_208, 1));
		NullCheck(L_206);
		int32_t L_209 = L_208;
		int32_t L_210 = (L_206)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		NullCheck(L_205);
		(L_205)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_210);
		goto IL_036b;
	}

IL_0339:
	{
		// r[0] = (sbyte) (e[v[p] - s] + 16 + 64); // non-simple--look up in lists
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_211 = __this->___r_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_212 = ___e5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_213 = ___v10;
		int32_t L_214 = V_9;
		NullCheck(L_213);
		int32_t L_215 = L_214;
		int32_t L_216 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		int32_t L_217 = ___s3;
		NullCheck(L_212);
		int32_t L_218 = ((int32_t)il2cpp_codegen_subtract(L_216, L_217));
		int32_t L_219 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		NullCheck(L_211);
		(L_211)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int8_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_219, ((int32_t)16))), ((int32_t)64)))));
		// r[2] = d[v[p++] - s];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_220 = __this->___r_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_221 = ___d4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_222 = ___v10;
		int32_t L_223 = V_9;
		int32_t L_224 = L_223;
		V_9 = ((int32_t)il2cpp_codegen_add(L_224, 1));
		NullCheck(L_222);
		int32_t L_225 = L_224;
		int32_t L_226 = (L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		int32_t L_227 = ___s3;
		NullCheck(L_221);
		int32_t L_228 = ((int32_t)il2cpp_codegen_subtract(L_226, L_227));
		int32_t L_229 = (L_221)->GetAt(static_cast<il2cpp_array_size_t>(L_228));
		NullCheck(L_220);
		(L_220)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_229);
	}

IL_036b:
	{
		// f = 1 << (k - w);
		int32_t L_230 = V_6;
		int32_t L_231 = V_11;
		V_1 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_230, L_231))&((int32_t)31)))));
		// for (j = SharedUtils.URShift(i, w); j < z; j += f)
		int32_t L_232 = V_4;
		int32_t L_233 = V_11;
		int32_t L_234;
		L_234 = SharedUtils_URShift_mBE2BD8E27A3D7F84DA11CEAFB66829009D115EE9(L_232, L_233, NULL);
		V_5 = L_234;
		goto IL_039f;
	}

IL_0383:
	{
		// Array.Copy(r, 0, hp, (q + j) * 3, 3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_235 = __this->___r_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_236 = ___hp8;
		int32_t L_237 = V_10;
		int32_t L_238 = V_5;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_235, 0, (RuntimeArray*)L_236, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_237, L_238)), 3)), 3, NULL);
		// for (j = SharedUtils.URShift(i, w); j < z; j += f)
		int32_t L_239 = V_5;
		int32_t L_240 = V_1;
		V_5 = ((int32_t)il2cpp_codegen_add(L_239, L_240));
	}

IL_039f:
	{
		// for (j = SharedUtils.URShift(i, w); j < z; j += f)
		int32_t L_241 = V_5;
		int32_t L_242 = V_14;
		if ((((int32_t)L_241) < ((int32_t)L_242)))
		{
			goto IL_0383;
		}
	}
	{
		// for (j = 1 << (k - 1); (i & j) != 0; j = SharedUtils.URShift(j, 1))
		int32_t L_243 = V_6;
		V_5 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_243, 1))&((int32_t)31)))));
		goto IL_03c3;
	}

IL_03b2:
	{
		// i ^= j;
		int32_t L_244 = V_4;
		int32_t L_245 = V_5;
		V_4 = ((int32_t)(L_244^L_245));
		// for (j = 1 << (k - 1); (i & j) != 0; j = SharedUtils.URShift(j, 1))
		int32_t L_246 = V_5;
		int32_t L_247;
		L_247 = SharedUtils_URShift_mBE2BD8E27A3D7F84DA11CEAFB66829009D115EE9(L_246, 1, NULL);
		V_5 = L_247;
	}

IL_03c3:
	{
		// for (j = 1 << (k - 1); (i & j) != 0; j = SharedUtils.URShift(j, 1))
		int32_t L_248 = V_4;
		int32_t L_249 = V_5;
		if (((int32_t)(L_248&L_249)))
		{
			goto IL_03b2;
		}
	}
	{
		// i ^= j;
		int32_t L_250 = V_4;
		int32_t L_251 = V_5;
		V_4 = ((int32_t)(L_250^L_251));
		// mask = (1 << w) - 1; // needed on HP, cc -O bug
		int32_t L_252 = V_11;
		V_8 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_252&((int32_t)31))))), 1));
		goto IL_03f4;
	}

IL_03de:
	{
		// h--; // don't need to update q
		int32_t L_253 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_253, 1));
		// w -= l;
		int32_t L_254 = V_11;
		int32_t L_255 = V_7;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_254, L_255));
		// mask = (1 << w) - 1;
		int32_t L_256 = V_11;
		V_8 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_256&((int32_t)31))))), 1));
	}

IL_03f4:
	{
		// while ((i & mask) != x[h])
		int32_t L_257 = V_4;
		int32_t L_258 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_259 = __this->___x_24;
		int32_t L_260 = V_3;
		NullCheck(L_259);
		int32_t L_261 = L_260;
		int32_t L_262 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		if ((!(((uint32_t)((int32_t)(L_257&L_258))) == ((uint32_t)L_262))))
		{
			goto IL_03de;
		}
	}

IL_0403:
	{
		// while (a-- != 0)
		int32_t L_263 = V_0;
		int32_t L_264 = L_263;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_264, 1));
		if (L_264)
		{
			goto IL_02d4;
		}
	}
	{
		// for (; k <= g; k++)
		int32_t L_265 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_265, 1));
	}

IL_0413:
	{
		// for (; k <= g; k++)
		int32_t L_266 = V_6;
		int32_t L_267 = V_2;
		if ((((int32_t)L_266) <= ((int32_t)L_267)))
		{
			goto IL_01ae;
		}
	}
	{
		// return y != 0 && g != 1?Z_BUF_ERROR:Z_OK;
		int32_t L_268 = V_13;
		if (!L_268)
		{
			goto IL_0423;
		}
	}
	{
		int32_t L_269 = V_2;
		if ((!(((uint32_t)L_269) == ((uint32_t)1))))
		{
			goto IL_0425;
		}
	}

IL_0423:
	{
		return 0;
	}

IL_0425:
	{
		return ((int32_t)-5);
	}
}
// System.Int32 Ionic.Zlib.InfTree::inflate_trees_bits(System.Int32[],System.Int32[],System.Int32[],System.Int32[],Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_bits_m96F1A3DEB9B9122E97529A1ED65DADC009B47412 (InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___c0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bb1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tb2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hp3, ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* ___z4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13A5361A51002BE0AE3A86C6F54E7ADAC4F2CE94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90581047810EB87A7277461DDA1C1493B91DAAA4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// initWorkArea(19);
		InfTree_initWorkArea_mB15CE0CB1213EA95DAB5CBB202DA79F21F6EF6C0(__this, ((int32_t)19), NULL);
		// hn[0] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___hn_19;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		// result = huft_build(c, 0, 19, 19, null, null, tb, bb, hp, hn, v);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___c0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___tb2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___bb1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___hp3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___hn_19;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___v_20;
		int32_t L_7;
		L_7 = InfTree_huft_build_m05C4C1490F8507633B517C0524635B8BB563BE63(__this, L_1, 0, ((int32_t)19), ((int32_t)19), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL, (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL, L_2, L_3, L_4, L_5, L_6, NULL);
		V_0 = L_7;
		// if (result == Z_DATA_ERROR)
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0043;
		}
	}
	{
		// z.Message = "oversubscribed dynamic bit lengths tree";
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_9 = ___z4;
		NullCheck(L_9);
		L_9->___Message_8 = _stringLiteral90581047810EB87A7277461DDA1C1493B91DAAA4;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___Message_8), (void*)_stringLiteral90581047810EB87A7277461DDA1C1493B91DAAA4);
		goto IL_005c;
	}

IL_0043:
	{
		// else if (result == Z_BUF_ERROR || bb[0] == 0)
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-5))))
		{
			goto IL_004d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___bb1;
		NullCheck(L_11);
		int32_t L_12 = 0;
		int32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if (L_13)
		{
			goto IL_005c;
		}
	}

IL_004d:
	{
		// z.Message = "incomplete dynamic bit lengths tree";
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_14 = ___z4;
		NullCheck(L_14);
		L_14->___Message_8 = _stringLiteral13A5361A51002BE0AE3A86C6F54E7ADAC4F2CE94;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___Message_8), (void*)_stringLiteral13A5361A51002BE0AE3A86C6F54E7ADAC4F2CE94);
		// result = Z_DATA_ERROR;
		V_0 = ((int32_t)-3);
	}

IL_005c:
	{
		// return result;
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Int32 Ionic.Zlib.InfTree::inflate_trees_dynamic(System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_dynamic_m014FA1DD7C75E54F675E6B689D7238489F1582EE (InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE* __this, int32_t ___nl0, int32_t ___nd1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___c2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bl3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bd4, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tl5, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___td6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hp7, ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* ___z8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral527C1A81C9577E20EFCD218DE9B39383A8F64CD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A888468814C6717D8F1F53C27076E49BCF685AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61CF8C6E69A5020616A55D8196F59FE4DE0129D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFBC3A862771D0485E915BD869029175AD24B07C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE960A05B0E3F3B1A832A46162FB0C2332497D8F4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// initWorkArea(288);
		InfTree_initWorkArea_mB15CE0CB1213EA95DAB5CBB202DA79F21F6EF6C0(__this, ((int32_t)288), NULL);
		// hn[0] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___hn_19;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		// result = huft_build(c, 0, nl, 257, cplens, cplext, tl, bl, hp, hn, v);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___c2;
		int32_t L_2 = ___nl0;
		il2cpp_codegen_runtime_class_init_inline(InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var))->___cplens_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ((InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var))->___cplext_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___tl5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___bl3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___hp7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___hn_19;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___v_20;
		int32_t L_10;
		L_10 = InfTree_huft_build_m05C4C1490F8507633B517C0524635B8BB563BE63(__this, L_1, 0, L_2, ((int32_t)257), L_3, L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		V_0 = L_10;
		// if (result != Z_OK || bl[0] == 0)
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_0048;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___bl3;
		NullCheck(L_12);
		int32_t L_13 = 0;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if (L_14)
		{
			goto IL_0071;
		}
	}

IL_0048:
	{
		// if (result == Z_DATA_ERROR)
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_005b;
		}
	}
	{
		// z.Message = "oversubscribed literal/length tree";
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_16 = ___z8;
		NullCheck(L_16);
		L_16->___Message_8 = _stringLiteral527C1A81C9577E20EFCD218DE9B39383A8F64CD0;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___Message_8), (void*)_stringLiteral527C1A81C9577E20EFCD218DE9B39383A8F64CD0);
		goto IL_006f;
	}

IL_005b:
	{
		// else if (result != Z_MEM_ERROR)
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-4))))
		{
			goto IL_006f;
		}
	}
	{
		// z.Message = "incomplete literal/length tree";
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_18 = ___z8;
		NullCheck(L_18);
		L_18->___Message_8 = _stringLiteralE960A05B0E3F3B1A832A46162FB0C2332497D8F4;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___Message_8), (void*)_stringLiteralE960A05B0E3F3B1A832A46162FB0C2332497D8F4);
		// result = Z_DATA_ERROR;
		V_0 = ((int32_t)-3);
	}

IL_006f:
	{
		// return result;
		int32_t L_19 = V_0;
		return L_19;
	}

IL_0071:
	{
		// initWorkArea(288);
		InfTree_initWorkArea_mB15CE0CB1213EA95DAB5CBB202DA79F21F6EF6C0(__this, ((int32_t)288), NULL);
		// result = huft_build(c, nl, nd, 0, cpdist, cpdext, td, bd, hp, hn, v);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ___c2;
		int32_t L_21 = ___nl0;
		int32_t L_22 = ___nd1;
		il2cpp_codegen_runtime_class_init_inline(InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ((InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var))->___cpdist_16;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = ((InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var))->___cpdext_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = ___td6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = ___bd4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = ___hp7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = __this->___hn_19;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->___v_20;
		int32_t L_30;
		L_30 = InfTree_huft_build_m05C4C1490F8507633B517C0524635B8BB563BE63(__this, L_20, L_21, L_22, 0, L_23, L_24, L_25, L_26, L_27, L_28, L_29, NULL);
		V_0 = L_30;
		// if (result != Z_OK || (bd[0] == 0 && nl > 257))
		int32_t L_31 = V_0;
		if (L_31)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = ___bd4;
		NullCheck(L_32);
		int32_t L_33 = 0;
		int32_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if (L_34)
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_35 = ___nl0;
		if ((((int32_t)L_35) <= ((int32_t)((int32_t)257))))
		{
			goto IL_00f3;
		}
	}

IL_00b4:
	{
		// if (result == Z_DATA_ERROR)
		int32_t L_36 = V_0;
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_00c7;
		}
	}
	{
		// z.Message = "oversubscribed distance tree";
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_37 = ___z8;
		NullCheck(L_37);
		L_37->___Message_8 = _stringLiteral5A888468814C6717D8F1F53C27076E49BCF685AE;
		Il2CppCodeGenWriteBarrier((void**)(&L_37->___Message_8), (void*)_stringLiteral5A888468814C6717D8F1F53C27076E49BCF685AE);
		goto IL_00f1;
	}

IL_00c7:
	{
		// else if (result == Z_BUF_ERROR)
		int32_t L_38 = V_0;
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_00dd;
		}
	}
	{
		// z.Message = "incomplete distance tree";
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_39 = ___z8;
		NullCheck(L_39);
		L_39->___Message_8 = _stringLiteralCFBC3A862771D0485E915BD869029175AD24B07C;
		Il2CppCodeGenWriteBarrier((void**)(&L_39->___Message_8), (void*)_stringLiteralCFBC3A862771D0485E915BD869029175AD24B07C);
		// result = Z_DATA_ERROR;
		V_0 = ((int32_t)-3);
		goto IL_00f1;
	}

IL_00dd:
	{
		// else if (result != Z_MEM_ERROR)
		int32_t L_40 = V_0;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)-4))))
		{
			goto IL_00f1;
		}
	}
	{
		// z.Message = "empty distance tree with lengths";
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_41 = ___z8;
		NullCheck(L_41);
		L_41->___Message_8 = _stringLiteral61CF8C6E69A5020616A55D8196F59FE4DE0129D6;
		Il2CppCodeGenWriteBarrier((void**)(&L_41->___Message_8), (void*)_stringLiteral61CF8C6E69A5020616A55D8196F59FE4DE0129D6);
		// result = Z_DATA_ERROR;
		V_0 = ((int32_t)-3);
	}

IL_00f1:
	{
		// return result;
		int32_t L_42 = V_0;
		return L_42;
	}

IL_00f3:
	{
		// return Z_OK;
		return 0;
	}
}
// System.Int32 Ionic.Zlib.InfTree::inflate_trees_fixed(System.Int32[],System.Int32[],System.Int32[][],System.Int32[][],Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_fixed_m5C3AAC1112CEC346BB6051BAFB3F74DF8A7C3F34 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bl0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bd1, Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___tl2, Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___td3, ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* ___z4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bl[0] = fixed_bl;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___bl0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)9));
		// bd[0] = fixed_bd;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___bd1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)5);
		// tl[0] = fixed_tl;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_2 = ___tl2;
		il2cpp_codegen_runtime_class_init_inline(InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var))->___fixed_tl_12;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_3);
		// td[0] = fixed_td;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_4 = ___td3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ((InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var))->___fixed_td_13;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_5);
		// return Z_OK;
		return 0;
	}
}
// System.Void Ionic.Zlib.InfTree::initWorkArea(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree_initWorkArea_mB15CE0CB1213EA95DAB5CBB202DA79F21F6EF6C0 (InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE* __this, int32_t ___vsize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (hn == null)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___hn_19;
		if (L_0)
		{
			goto IL_0054;
		}
	}
	{
		// hn = new int[1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___hn_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hn_19), (void*)L_1);
		// v = new int[vsize];
		int32_t L_2 = ___vsize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->___v_20 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___v_20), (void*)L_3);
		// c = new int[BMAX + 1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___c_21 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c_21), (void*)L_4);
		// r = new int[3];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___r_22 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___r_22), (void*)L_5);
		// u = new int[BMAX];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		__this->___u_23 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___u_23), (void*)L_6);
		// x = new int[BMAX + 1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___x_24 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x_24), (void*)L_7);
		return;
	}

IL_0054:
	{
		// if (v.Length < vsize)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___v_20;
		NullCheck(L_8);
		int32_t L_9 = ___vsize0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) >= ((int32_t)L_9)))
		{
			goto IL_006b;
		}
	}
	{
		// v = new int[vsize];
		int32_t L_10 = ___vsize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->___v_20 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___v_20), (void*)L_11);
	}

IL_006b:
	{
		// Array.Clear(v,0,vsize);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___v_20;
		int32_t L_13 = ___vsize0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_12, 0, L_13, NULL);
		// Array.Clear(c,0,BMAX+1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->___c_21;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_14, 0, ((int32_t)16), NULL);
		// r[0]=0; r[1]=0; r[2]=0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___r_22;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		// r[0]=0; r[1]=0; r[2]=0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->___r_22;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)0);
		// r[0]=0; r[1]=0; r[2]=0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->___r_22;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)0);
		// Array.Clear(u,0,BMAX);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___u_23;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_18, 0, ((int32_t)15), NULL);
		// Array.Clear(x,0,BMAX+1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___x_24;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_19, 0, ((int32_t)16), NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.InfTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree__ctor_m23D7BB79D78967033812470BF4A675A8FB273780 (InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Ionic.Zlib.InfTree::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree__cctor_mBD5EF6ADCE12839ED20AAC7D558158B94BC5CB61 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____5D34088B4ABB1F3FE88DCF84DD5C145EFD5EA01DF1B05BB8FEAD12305B0979B7_4_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____5D6878AD6E68B2CCB04A7CD7942BE07C15F947CCA8824203021DD465D90712AD_5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____61358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1_6_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____8AE83CF30C3CEAC5F4B9F025200D65EFAEC851DE0098817DB69F0E547407C095_8_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_11_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____FC216F5C5AE2947D800794ECD5F752EE8381073C2E5D0D095FDA040F541702F3_17_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly int[] fixed_tl = new int[]{96, 7, 256, 0, 8, 80, 0, 8, 16, 84, 8, 115, 82, 7, 31, 0, 8, 112, 0, 8, 48, 0, 9, 192, 80, 7, 10, 0, 8, 96, 0, 8, 32, 0, 9, 160, 0, 8, 0, 0, 8, 128, 0, 8, 64, 0, 9, 224, 80, 7, 6, 0, 8, 88, 0, 8, 24, 0, 9, 144, 83, 7, 59, 0, 8, 120, 0, 8, 56, 0, 9, 208, 81, 7, 17, 0, 8, 104, 0, 8, 40, 0, 9, 176, 0, 8, 8, 0, 8, 136, 0, 8, 72, 0, 9, 240, 80, 7, 4, 0, 8, 84, 0, 8, 20, 85, 8, 227, 83, 7, 43, 0, 8, 116, 0, 8, 52, 0, 9, 200, 81, 7, 13, 0, 8, 100, 0, 8, 36, 0, 9, 168, 0, 8, 4, 0, 8, 132, 0, 8, 68, 0, 9, 232, 80, 7, 8, 0, 8, 92, 0, 8, 28, 0, 9, 152, 84, 7, 83, 0, 8, 124, 0, 8, 60, 0, 9, 216, 82, 7, 23, 0, 8, 108, 0, 8, 44, 0, 9, 184, 0, 8, 12, 0, 8, 140, 0, 8, 76, 0, 9, 248, 80, 7, 3, 0, 8, 82, 0, 8, 18, 85, 8, 163, 83, 7, 35, 0, 8, 114, 0, 8, 50, 0, 9, 196, 81, 7, 11, 0, 8, 98, 0, 8, 34, 0, 9, 164, 0, 8, 2, 0, 8, 130, 0, 8, 66, 0, 9, 228, 80, 7, 7, 0, 8, 90, 0, 8, 26, 0, 9, 148, 84, 7, 67, 0, 8, 122, 0, 8, 58, 0, 9, 212, 82, 7, 19, 0, 8, 106, 0, 8, 42, 0, 9, 180, 0, 8, 10, 0, 8, 138, 0, 8, 74, 0, 9, 244, 80, 7, 5, 0, 8, 86, 0, 8, 22, 192, 8, 0, 83, 7, 51, 0, 8, 118, 0, 8, 54, 0, 9, 204, 81, 7, 15, 0, 8, 102, 0, 8, 38, 0, 9, 172, 0, 8, 6, 0, 8, 134, 0, 8, 70, 0, 9, 236, 80, 7, 9, 0, 8, 94, 0, 8, 30, 0, 9, 156, 84, 7, 99, 0, 8, 126, 0, 8, 62, 0, 9, 220, 82, 7, 27, 0, 8, 110, 0, 8, 46, 0, 9, 188, 0, 8, 14, 0, 8, 142, 0, 8, 78, 0, 9, 252, 96, 7, 256, 0, 8, 81, 0, 8, 17, 85, 8, 131, 82, 7, 31, 0, 8, 113, 0, 8, 49, 0, 9, 194, 80, 7, 10, 0, 8, 97, 0, 8, 33, 0, 9, 162, 0, 8, 1, 0, 8, 129, 0, 8, 65, 0, 9, 226, 80, 7, 6, 0, 8, 89, 0, 8, 25, 0, 9, 146, 83, 7, 59, 0, 8, 121, 0, 8, 57, 0, 9, 210, 81, 7, 17, 0, 8, 105, 0, 8, 41, 0, 9, 178, 0, 8, 9, 0, 8, 137, 0, 8, 73, 0, 9, 242, 80, 7, 4, 0, 8, 85, 0, 8, 21, 80, 8, 258, 83, 7, 43, 0, 8, 117, 0, 8, 53, 0, 9, 202, 81, 7, 13, 0, 8, 101, 0, 8, 37, 0, 9, 170, 0, 8, 5, 0, 8, 133, 0, 8, 69, 0, 9, 234, 80, 7, 8, 0, 8, 93, 0, 8, 29, 0, 9, 154, 84, 7, 83, 0, 8, 125, 0, 8, 61, 0, 9, 218, 82, 7, 23, 0, 8, 109, 0, 8, 45, 0, 9, 186,
		//         0, 8, 13, 0, 8, 141, 0, 8, 77, 0, 9, 250, 80, 7, 3, 0, 8, 83, 0, 8, 19, 85, 8, 195, 83, 7, 35, 0, 8, 115, 0, 8, 51, 0, 9, 198, 81, 7, 11, 0, 8, 99, 0, 8, 35, 0, 9, 166, 0, 8, 3, 0, 8, 131, 0, 8, 67, 0, 9, 230, 80, 7, 7, 0, 8, 91, 0, 8, 27, 0, 9, 150, 84, 7, 67, 0, 8, 123, 0, 8, 59, 0, 9, 214, 82, 7, 19, 0, 8, 107, 0, 8, 43, 0, 9, 182, 0, 8, 11, 0, 8, 139, 0, 8, 75, 0, 9, 246, 80, 7, 5, 0, 8, 87, 0, 8, 23, 192, 8, 0, 83, 7, 51, 0, 8, 119, 0, 8, 55, 0, 9, 206, 81, 7, 15, 0, 8, 103, 0, 8, 39, 0, 9, 174, 0, 8, 7, 0, 8, 135, 0, 8, 71, 0, 9, 238, 80, 7, 9, 0, 8, 95, 0, 8, 31, 0, 9, 158, 84, 7, 99, 0, 8, 127, 0, 8, 63, 0, 9, 222, 82, 7, 27, 0, 8, 111, 0, 8, 47, 0, 9, 190, 0, 8, 15, 0, 8, 143, 0, 8, 79, 0, 9, 254, 96, 7, 256, 0, 8, 80, 0, 8, 16, 84, 8, 115, 82, 7, 31, 0, 8, 112, 0, 8, 48, 0, 9, 193, 80, 7, 10, 0, 8, 96, 0, 8, 32, 0, 9, 161, 0, 8, 0, 0, 8, 128, 0, 8, 64, 0, 9, 225, 80, 7, 6, 0, 8, 88, 0, 8, 24, 0, 9, 145, 83, 7, 59, 0, 8, 120, 0, 8, 56, 0, 9, 209, 81, 7, 17, 0, 8, 104, 0, 8, 40, 0, 9, 177, 0, 8, 8, 0, 8, 136, 0, 8, 72, 0, 9, 241, 80, 7, 4, 0, 8, 84, 0, 8, 20, 85, 8, 227, 83, 7, 43, 0, 8, 116, 0, 8, 52, 0, 9, 201, 81, 7, 13, 0, 8, 100, 0, 8, 36, 0, 9, 169, 0, 8, 4, 0, 8, 132, 0, 8, 68, 0, 9, 233, 80, 7, 8, 0, 8, 92, 0, 8, 28, 0, 9, 153, 84, 7, 83, 0, 8, 124, 0, 8, 60, 0, 9, 217, 82, 7, 23, 0, 8, 108, 0, 8, 44, 0, 9, 185, 0, 8, 12, 0, 8, 140, 0, 8, 76, 0, 9, 249, 80, 7, 3, 0, 8, 82, 0, 8, 18, 85, 8, 163, 83, 7, 35, 0, 8, 114, 0, 8, 50, 0, 9, 197, 81, 7, 11, 0, 8, 98, 0, 8, 34, 0, 9, 165, 0, 8, 2, 0, 8, 130, 0, 8, 66, 0, 9, 229, 80, 7, 7, 0, 8, 90, 0, 8, 26, 0, 9, 149, 84, 7, 67, 0, 8, 122, 0, 8, 58, 0, 9, 213, 82, 7, 19, 0, 8, 106, 0, 8, 42, 0, 9, 181, 0, 8, 10, 0, 8, 138, 0, 8, 74, 0, 9, 245, 80, 7, 5, 0, 8, 86, 0, 8, 22, 192, 8, 0, 83, 7, 51, 0, 8, 118, 0, 8, 54, 0, 9, 205, 81, 7, 15, 0, 8, 102, 0, 8, 38, 0, 9, 173, 0, 8, 6, 0, 8, 134, 0, 8, 70, 0, 9, 237, 80, 7, 9, 0, 8, 94, 0, 8, 30, 0, 9, 157, 84, 7, 99, 0, 8, 126, 0, 8, 62, 0, 9, 221, 82, 7, 27, 0, 8, 110, 0, 8, 46, 0, 9, 189, 0, 8,
		//         14, 0, 8, 142, 0, 8, 78, 0, 9, 253, 96, 7, 256, 0, 8, 81, 0, 8, 17, 85, 8, 131, 82, 7, 31, 0, 8, 113, 0, 8, 49, 0, 9, 195, 80, 7, 10, 0, 8, 97, 0, 8, 33, 0, 9, 163, 0, 8, 1, 0, 8, 129, 0, 8, 65, 0, 9, 227, 80, 7, 6, 0, 8, 89, 0, 8, 25, 0, 9, 147, 83, 7, 59, 0, 8, 121, 0, 8, 57, 0, 9, 211, 81, 7, 17, 0, 8, 105, 0, 8, 41, 0, 9, 179, 0, 8, 9, 0, 8, 137, 0, 8, 73, 0, 9, 243, 80, 7, 4, 0, 8, 85, 0, 8, 21, 80, 8, 258, 83, 7, 43, 0, 8, 117, 0, 8, 53, 0, 9, 203, 81, 7, 13, 0, 8, 101, 0, 8, 37, 0, 9, 171, 0, 8, 5, 0, 8, 133, 0, 8, 69, 0, 9, 235, 80, 7, 8, 0, 8, 93, 0, 8, 29, 0, 9, 155, 84, 7, 83, 0, 8, 125, 0, 8, 61, 0, 9, 219, 82, 7, 23, 0, 8, 109, 0, 8, 45, 0, 9, 187, 0, 8, 13, 0, 8, 141, 0, 8, 77, 0, 9, 251, 80, 7, 3, 0, 8, 83, 0, 8, 19, 85, 8, 195, 83, 7, 35, 0, 8, 115, 0, 8, 51, 0, 9, 199, 81, 7, 11, 0, 8, 99, 0, 8, 35, 0, 9, 167, 0, 8, 3, 0, 8, 131, 0, 8, 67, 0, 9, 231, 80, 7, 7, 0, 8, 91, 0, 8, 27, 0, 9, 151, 84, 7, 67, 0, 8, 123, 0, 8, 59, 0, 9, 215, 82, 7, 19, 0, 8, 107, 0, 8, 43, 0, 9, 183, 0, 8, 11, 0, 8, 139, 0, 8, 75, 0, 9, 247, 80, 7, 5, 0, 8, 87, 0, 8, 23, 192, 8, 0, 83, 7, 51, 0, 8, 119, 0, 8, 55, 0, 9, 207, 81, 7, 15, 0, 8, 103, 0, 8, 39, 0, 9, 175, 0, 8, 7, 0, 8, 135, 0, 8, 71, 0, 9, 239, 80, 7, 9, 0, 8, 95, 0, 8, 31, 0, 9, 159, 84, 7, 99, 0, 8, 127, 0, 8, 63, 0, 9, 223, 82, 7, 27, 0, 8, 111, 0, 8, 47, 0, 9, 191, 0, 8, 15, 0, 8, 143, 0, 8, 79, 0, 9, 255};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1536));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____8AE83CF30C3CEAC5F4B9F025200D65EFAEC851DE0098817DB69F0E547407C095_8_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var))->___fixed_tl_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var))->___fixed_tl_12), (void*)L_1);
		// internal static readonly int[] fixed_td = new int[]{80, 5, 1, 87, 5, 257, 83, 5, 17, 91, 5, 4097, 81, 5, 5, 89, 5, 1025, 85, 5, 65, 93, 5, 16385, 80, 5, 3, 88, 5, 513, 84, 5, 33, 92, 5, 8193, 82, 5, 9, 90, 5, 2049, 86, 5, 129, 192, 5, 24577, 80, 5, 2, 87, 5, 385, 83, 5, 25, 91, 5, 6145, 81, 5, 7, 89, 5, 1537, 85, 5, 97, 93, 5, 24577, 80, 5, 4, 88, 5, 769, 84, 5, 49, 92, 5, 12289, 82, 5, 13, 90, 5, 3073, 86, 5, 193, 192, 5, 24577};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)96));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____5D34088B4ABB1F3FE88DCF84DD5C145EFD5EA01DF1B05BB8FEAD12305B0979B7_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_4, L_5, NULL);
		((InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var))->___fixed_td_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var))->___fixed_td_13), (void*)L_4);
		// internal static readonly int[] cplens = new int[]{3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 15, 17, 19, 23, 27, 31, 35, 43, 51, 59, 67, 83, 99, 115, 131, 163, 195, 227, 258, 0, 0};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)31));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____61358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_7, L_8, NULL);
		((InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var))->___cplens_14 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var))->___cplens_14), (void*)L_7);
		// internal static readonly int[] cplext = new int[]{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 0, 112, 112};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)31));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____5D6878AD6E68B2CCB04A7CD7942BE07C15F947CCA8824203021DD465D90712AD_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_10, L_11, NULL);
		((InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var))->___cplext_15 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var))->___cplext_15), (void*)L_10);
		// internal static readonly int[] cpdist = new int[]{1, 2, 3, 4, 5, 7, 9, 13, 17, 25, 33, 49, 65, 97, 129, 193, 257, 385, 513, 769, 1025, 1537, 2049, 3073, 4097, 6145, 8193, 12289, 16385, 24577};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____FC216F5C5AE2947D800794ECD5F752EE8381073C2E5D0D095FDA040F541702F3_17_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_13, L_14, NULL);
		((InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var))->___cpdist_16 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var))->___cpdist_16), (void*)L_13);
		// internal static readonly int[] cpdext = new int[]{0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D____B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_11_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_16, L_17, NULL);
		((InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var))->___cpdext_17 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E061611ECB25E28F0F54C918515095F70B9C8CE_il2cpp_TypeInfo_var))->___cpdext_17), (void*)L_16);
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
// System.Void Ionic.Zlib.WorkItem::.ctor(System.Int32,Ionic.Zlib.CompressionLevel,Ionic.Zlib.CompressionStrategy,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkItem__ctor_mEBD4525D084243858465FAFD76B8ABB95EDF6DA5 (WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* __this, int32_t ___size0, int32_t ___compressLevel1, int32_t ___strategy2, int32_t ___ix3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public WorkItem(int size,
		//                 Ionic.Zlib.CompressionLevel compressLevel,
		//                 CompressionStrategy strategy,
		//                 int ix)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.buffer= new byte[size];
		int32_t L_0 = ___size0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___buffer_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_0), (void*)L_1);
		// int n = size + ((size / 32768)+1) * 5 * 2;
		int32_t L_2 = ___size0;
		int32_t L_3 = ___size0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)(L_3/((int32_t)32768))), 1)), 5)), 2))));
		// this.compressed = new byte[n];
		int32_t L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___compressed_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___compressed_1), (void*)L_5);
		// this.compressor = new ZlibCodec();
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_6 = (ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0*)il2cpp_codegen_object_new(ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ZlibCodec__ctor_mB1C7954D9FDAEA29B445D6E17434A101519F216D(L_6, NULL);
		__this->___compressor_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___compressor_7), (void*)L_6);
		// this.compressor.InitializeDeflate(compressLevel, false);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_7 = __this->___compressor_7;
		int32_t L_8 = ___compressLevel1;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = ZlibCodec_InitializeDeflate_m0F92D20347FA4706324623CFDBC2CD7993CBC89B(L_7, L_8, (bool)0, NULL);
		// this.compressor.OutputBuffer = this.compressed;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_10 = __this->___compressor_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___compressed_1;
		NullCheck(L_10);
		L_10->___OutputBuffer_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___OutputBuffer_4), (void*)L_11);
		// this.compressor.InputBuffer = this.buffer;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_12 = __this->___compressor_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___buffer_0;
		NullCheck(L_12);
		L_12->___InputBuffer_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___InputBuffer_0), (void*)L_13);
		// this.index = ix;
		int32_t L_14 = ___ix3;
		__this->___index_3 = L_14;
		// }
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
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__ctor_m3BA90D701B4E6563D294DD8FBED765DDCA16B324 (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	{
		// : this(stream, CompressionLevel.Default, CompressionStrategy.Default, false)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		ParallelDeflateOutputStream__ctor_m692AFDB363AC49AE6BDA12670285C88DAEC861A4(__this, L_0, 6, 0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__ctor_mD971B836A410CFEB2CF08DE132C4CC6B87D7F0DA (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___level1, const RuntimeMethod* method) 
{
	{
		// : this(stream, level, CompressionStrategy.Default, false)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___level1;
		ParallelDeflateOutputStream__ctor_m692AFDB363AC49AE6BDA12670285C88DAEC861A4(__this, L_0, L_1, 0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::.ctor(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__ctor_mD52CC30624222487B81B57C1D85C44F4C12746FC (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, bool ___leaveOpen1, const RuntimeMethod* method) 
{
	{
		// : this(stream, CompressionLevel.Default, CompressionStrategy.Default, leaveOpen)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		bool L_1 = ___leaveOpen1;
		ParallelDeflateOutputStream__ctor_m692AFDB363AC49AE6BDA12670285C88DAEC861A4(__this, L_0, 6, 0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__ctor_m9B89C6AF028D4A8759769427B33B12BA76FFD585 (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___level1, bool ___leaveOpen2, const RuntimeMethod* method) 
{
	{
		// : this(stream, CompressionLevel.Default, CompressionStrategy.Default, leaveOpen)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		bool L_1 = ___leaveOpen2;
		ParallelDeflateOutputStream__ctor_m692AFDB363AC49AE6BDA12670285C88DAEC861A4(__this, L_0, 6, 0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionLevel,Ionic.Zlib.CompressionStrategy,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__ctor_m692AFDB363AC49AE6BDA12670285C88DAEC861A4 (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___level1, int32_t ___strategy2, bool ___leaveOpen3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int                         _bufferSize = IO_BUFFER_SIZE_DEFAULT;
		il2cpp_codegen_runtime_class_init_inline(ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49_StaticFields*)il2cpp_codegen_static_fields_for(ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49_il2cpp_TypeInfo_var))->___IO_BUFFER_SIZE_DEFAULT_5;
		__this->____bufferSize_12 = L_0;
		// private object                      _outputLock = new object();
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		__this->____outputLock_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____outputLock_14), (void*)L_1);
		// private object                      _latestLock = new object();
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		__this->____latestLock_23 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____latestLock_23), (void*)L_2);
		// private object                      _eLock = new Object();  // protects _pendingException
		RuntimeObject* L_3 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_3, NULL);
		__this->____eLock_30 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eLock_30), (void*)L_3);
		// private TraceBits _DesiredTrace =
		//     TraceBits.Session |
		//     TraceBits.Compress |
		//     TraceBits.WriteTake |
		//     TraceBits.WriteEnter |
		//     TraceBits.EmitEnter |
		//     TraceBits.EmitDone |
		//     TraceBits.EmitLock |
		//     TraceBits.EmitSkip |
		//     TraceBits.EmitBegin;
		__this->____DesiredTrace_31 = ((int32_t)26942);
		// public ParallelDeflateOutputStream(System.IO.Stream stream,
		//                                    CompressionLevel level,
		//                                    CompressionStrategy strategy,
		//                                    bool leaveOpen)
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		// _outStream = stream;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = ___stream0;
		__this->____outStream_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____outStream_10), (void*)L_4);
		// _compressLevel= level;
		int32_t L_5 = ___level1;
		__this->____compressLevel_27 = L_5;
		// Strategy = strategy;
		int32_t L_6 = ___strategy2;
		ParallelDeflateOutputStream_set_Strategy_m500A0FB016BD5F4769796B7242E36603AAEA624D_inline(__this, L_6, NULL);
		// _leaveOpen = leaveOpen;
		bool L_7 = ___leaveOpen3;
		__this->____leaveOpen_8 = L_7;
		// this.MaxBufferPairs = 16; // default
		ParallelDeflateOutputStream_set_MaxBufferPairs_m83A0B75EB21EBC8805C8C2AA0A65A24894234FCE(__this, ((int32_t)16), NULL);
		// }
		return;
	}
}
// Ionic.Zlib.CompressionStrategy Ionic.Zlib.ParallelDeflateOutputStream::get_Strategy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParallelDeflateOutputStream_get_Strategy_m6458E048264FD65467D3F39F28B0D015FD09AF8F (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CStrategyU3Ek__BackingField_32;
		return L_0;
	}
}
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::set_Strategy(Ionic.Zlib.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_set_Strategy_m500A0FB016BD5F4769796B7242E36603AAEA624D (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		int32_t L_0 = ___value0;
		__this->___U3CStrategyU3Ek__BackingField_32 = L_0;
		return;
	}
}
// System.Int32 Ionic.Zlib.ParallelDeflateOutputStream::get_MaxBufferPairs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParallelDeflateOutputStream_get_MaxBufferPairs_mB609A85D493A98F2BB2DBBF8184FAE258FD0B44B (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, const RuntimeMethod* method) 
{
	{
		// return _maxBufferPairs;
		int32_t L_0 = __this->____maxBufferPairs_11;
		return L_0;
	}
}
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::set_MaxBufferPairs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_set_MaxBufferPairs_m83A0B75EB21EBC8805C8C2AA0A65A24894234FCE (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// if (value < 4)
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) >= ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentException("MaxBufferPairs",
		//                             "Value must be 4 or greater.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11FE1AF2EF5B24C9B42886F7D9C6829BE37BF129)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral62034F7639F85F62F5742EE798FEB248336A482E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParallelDeflateOutputStream_set_MaxBufferPairs_m83A0B75EB21EBC8805C8C2AA0A65A24894234FCE_RuntimeMethod_var)));
	}

IL_0014:
	{
		// _maxBufferPairs = value;
		int32_t L_2 = ___value0;
		__this->____maxBufferPairs_11 = L_2;
		// }
		return;
	}
}
// System.Int32 Ionic.Zlib.ParallelDeflateOutputStream::get_BufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParallelDeflateOutputStream_get_BufferSize_m62486BB617F6CF1FEF13F09E716B8231B16B5347 (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, const RuntimeMethod* method) 
{
	{
		// get { return _bufferSize;}
		int32_t L_0 = __this->____bufferSize_12;
		return L_0;
	}
}
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::set_BufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_set_BufferSize_m5F3015D12023E615656085F84B64393E34E1440E (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// if (value < 1024)
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)1024))))
		{
			goto IL_0018;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("BufferSize",
		//                                       "BufferSize must be greater than 1024 bytes");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E5A222E4E81315C36B27CEAAC616EBB8410514A)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1CA295F21B655270168F1CF97085795F47FFB0E1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParallelDeflateOutputStream_set_BufferSize_m5F3015D12023E615656085F84B64393E34E1440E_RuntimeMethod_var)));
	}

IL_0018:
	{
		// _bufferSize = value;
		int32_t L_2 = ___value0;
		__this->____bufferSize_12 = L_2;
		// }
		return;
	}
}
// System.Int32 Ionic.Zlib.ParallelDeflateOutputStream::get_Crc32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParallelDeflateOutputStream_get_Crc32_m99BCE10CF46DDD0624F11D7A12D59ABA1F4701DD (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, const RuntimeMethod* method) 
{
	{
		// public int Crc32 { get { return _Crc32; } }
		int32_t L_0 = __this->____Crc32_21;
		return L_0;
	}
}
// System.Int64 Ionic.Zlib.ParallelDeflateOutputStream::get_BytesProcessed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ParallelDeflateOutputStream_get_BytesProcessed_m6B4F490791EA68C269A0F820F911629BB40A1C84 (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, const RuntimeMethod* method) 
{
	{
		// public Int64 BytesProcessed { get { return _totalBytesProcessed; } }
		int64_t L_0 = __this->____totalBytesProcessed_26;
		return L_0;
	}
}
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::_InitializePoolOfWorkItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__InitializePoolOfWorkItems_m9BB70756B0E4D6C1FE1F74A48E30FF74ECD7C10B (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m753996EE8766DE3C6413FA43A01485148E13D55D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2648001759CD08A36C46E203995A86939771277_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// _toWrite = new Queue<int>();
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_0 = (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*)il2cpp_codegen_object_new(Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D(L_0, Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		__this->____toWrite_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toWrite_24), (void*)L_0);
		// _toFill = new Queue<int>();
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_1 = (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*)il2cpp_codegen_object_new(Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D(L_1, Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		__this->____toFill_25 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toFill_25), (void*)L_1);
		// _pool = new System.Collections.Generic.List<WorkItem>();
		List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B* L_2 = (List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B*)il2cpp_codegen_object_new(List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mE2648001759CD08A36C46E203995A86939771277(L_2, List_1__ctor_mE2648001759CD08A36C46E203995A86939771277_RuntimeMethod_var);
		__this->____pool_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pool_7), (void*)L_2);
		// int nTasks = BufferPairsPerCore * Environment.ProcessorCount;
		il2cpp_codegen_runtime_class_init_inline(ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49_il2cpp_TypeInfo_var);
		int32_t L_3 = ((ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49_StaticFields*)il2cpp_codegen_static_fields_for(ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49_il2cpp_TypeInfo_var))->___BufferPairsPerCore_6;
		int32_t L_4;
		L_4 = Environment_get_ProcessorCount_m247F6A8B0FD7F58EC777E7D393CC382C82446418(NULL);
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_3, L_4));
		// nTasks = Math.Min(nTasks, _maxBufferPairs);
		int32_t L_5 = V_0;
		int32_t L_6 = __this->____maxBufferPairs_11;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_5, L_6, NULL);
		V_0 = L_7;
		// for(int i=0; i < nTasks; i++)
		V_1 = 0;
		goto IL_0071;
	}

IL_003e:
	{
		// _pool.Add(new WorkItem(_bufferSize, _compressLevel, Strategy, i));
		List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B* L_8 = __this->____pool_7;
		int32_t L_9 = __this->____bufferSize_12;
		int32_t L_10 = __this->____compressLevel_27;
		int32_t L_11;
		L_11 = ParallelDeflateOutputStream_get_Strategy_m6458E048264FD65467D3F39F28B0D015FD09AF8F_inline(__this, NULL);
		int32_t L_12 = V_1;
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_13 = (WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D*)il2cpp_codegen_object_new(WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		WorkItem__ctor_mEBD4525D084243858465FAFD76B8ABB95EDF6DA5(L_13, L_9, L_10, L_11, L_12, NULL);
		NullCheck(L_8);
		List_1_Add_m753996EE8766DE3C6413FA43A01485148E13D55D_inline(L_8, L_13, List_1_Add_m753996EE8766DE3C6413FA43A01485148E13D55D_RuntimeMethod_var);
		// _toFill.Enqueue(i);
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_14 = __this->____toFill_25;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A(L_14, L_15, Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		// for(int i=0; i < nTasks; i++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0071:
	{
		// for(int i=0; i < nTasks; i++)
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_003e;
		}
	}
	{
		// _newlyCompressedBlob = new AutoResetEvent(false);
		AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* L_19 = (AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0*)il2cpp_codegen_object_new(AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		AutoResetEvent__ctor_mB7C8CD30C5BE11A2C8DB79B27593CF0C5FE82ADE(L_19, (bool)0, NULL);
		__this->____newlyCompressedBlob_13 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____newlyCompressedBlob_13), (void*)L_19);
		// _runningCrc = new Ionic.Crc.CRC32();
		CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59* L_20 = (CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59*)il2cpp_codegen_object_new(CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		CRC32__ctor_m34C589BA2DA750522A47C7293127B85402673352(L_20, NULL);
		__this->____runningCrc_22 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____runningCrc_22), (void*)L_20);
		// _currentlyFilling = -1;
		__this->____currentlyFilling_17 = (-1);
		// _lastFilled = -1;
		__this->____lastFilled_18 = (-1);
		// _lastWritten = -1;
		__this->____lastWritten_19 = (-1);
		// _latestCompressed = -1;
		__this->____latestCompressed_20 = (-1);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_Write_m7381D2A467A5714A0175BC2085AB385AE65BF59B (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF020E3C2EE9BA95FAD755AD36DE8810062214E44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParallelDeflateOutputStream__DeflateOne_m0433191E2D84B0AB11AD975B4A1BD7000A4B1B86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t G_B16_0 = 0;
	{
		// bool mustWait = false;
		V_0 = (bool)0;
		// if (_isClosed)
		bool L_0 = __this->____isClosed_15;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// throw new InvalidOperationException();
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParallelDeflateOutputStream_Write_m7381D2A467A5714A0175BC2085AB385AE65BF59B_RuntimeMethod_var)));
	}

IL_0010:
	{
		// if (_pendingException != null)
		Exception_t* L_2 = __this->____pendingException_28;
		il2cpp_codegen_memory_barrier();
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// _handlingException = true;
		__this->____handlingException_29 = (bool)1;
		// var pe = _pendingException;
		Exception_t* L_3 = __this->____pendingException_28;
		il2cpp_codegen_memory_barrier();
		// _pendingException = null;
		il2cpp_codegen_memory_barrier();
		__this->____pendingException_28 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pendingException_28), (void*)(Exception_t*)NULL);
		// throw pe;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParallelDeflateOutputStream_Write_m7381D2A467A5714A0175BC2085AB385AE65BF59B_RuntimeMethod_var)));
	}

IL_0033:
	{
		// if (count == 0) return;
		int32_t L_4 = ___count2;
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		// if (count == 0) return;
		return;
	}

IL_0037:
	{
		// if (!_firstWriteDone)
		bool L_5 = __this->____firstWriteDone_16;
		if (L_5)
		{
			goto IL_004c;
		}
	}
	{
		// _InitializePoolOfWorkItems();
		ParallelDeflateOutputStream__InitializePoolOfWorkItems_m9BB70756B0E4D6C1FE1F74A48E30FF74ECD7C10B(__this, NULL);
		// _firstWriteDone = true;
		__this->____firstWriteDone_16 = (bool)1;
	}

IL_004c:
	{
		// EmitPendingBuffers(false, mustWait);
		bool L_6 = V_0;
		ParallelDeflateOutputStream_EmitPendingBuffers_m2CF742C32DFC6939D32DB7BA776428BD15976E5C(__this, (bool)0, L_6, NULL);
		// mustWait = false;
		V_0 = (bool)0;
		// int ix = -1;
		V_1 = (-1);
		// if (_currentlyFilling >= 0)
		int32_t L_7 = __this->____currentlyFilling_17;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		// ix = _currentlyFilling;
		int32_t L_8 = __this->____currentlyFilling_17;
		V_1 = L_8;
		goto IL_0098;
	}

IL_006a:
	{
		// if (_toFill.Count == 0)
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_9 = __this->____toFill_25;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline(L_9, Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_007e;
		}
	}
	{
		// mustWait = true;
		V_0 = (bool)1;
		// continue;
		goto IL_0145;
	}

IL_007e:
	{
		// ix = _toFill.Dequeue();
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_11 = __this->____toFill_25;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650(L_11, Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
		V_1 = L_12;
		// ++_lastFilled; // TODO: consider rollover?
		int32_t L_13 = __this->____lastFilled_18;
		__this->____lastFilled_18 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0098:
	{
		// WorkItem workitem = _pool[ix];
		List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B* L_14 = __this->____pool_7;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_16;
		L_16 = List_1_get_Item_mF020E3C2EE9BA95FAD755AD36DE8810062214E44(L_14, L_15, List_1_get_Item_mF020E3C2EE9BA95FAD755AD36DE8810062214E44_RuntimeMethod_var);
		V_2 = L_16;
		// int limit = ((workitem.buffer.Length - workitem.inputBytesAvailable) > count)
		//     ? count
		//     : (workitem.buffer.Length - workitem.inputBytesAvailable);
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_17 = V_2;
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = L_17->___buffer_0;
		NullCheck(L_18);
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_19 = V_2;
		NullCheck(L_19);
		int32_t L_20 = L_19->___inputBytesAvailable_5;
		int32_t L_21 = ___count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_18)->max_length)), L_20))) > ((int32_t)L_21)))
		{
			goto IL_00c8;
		}
	}
	{
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_22 = V_2;
		NullCheck(L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = L_22->___buffer_0;
		NullCheck(L_23);
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_24 = V_2;
		NullCheck(L_24);
		int32_t L_25 = L_24->___inputBytesAvailable_5;
		G_B16_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_25));
		goto IL_00c9;
	}

IL_00c8:
	{
		int32_t L_26 = ___count2;
		G_B16_0 = L_26;
	}

IL_00c9:
	{
		V_3 = G_B16_0;
		// workitem.ordinal = _lastFilled;
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_27 = V_2;
		int32_t L_28 = __this->____lastFilled_18;
		NullCheck(L_27);
		L_27->___ordinal_4 = L_28;
		// Buffer.BlockCopy(buffer,
		//                  offset,
		//                  workitem.buffer,
		//                  workitem.inputBytesAvailable,
		//                  limit);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___buffer0;
		int32_t L_30 = ___offset1;
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_31 = V_2;
		NullCheck(L_31);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = L_31->___buffer_0;
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_33 = V_2;
		NullCheck(L_33);
		int32_t L_34 = L_33->___inputBytesAvailable_5;
		int32_t L_35 = V_3;
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_29, L_30, (RuntimeArray*)L_32, L_34, L_35, NULL);
		// count -= limit;
		int32_t L_36 = ___count2;
		int32_t L_37 = V_3;
		___count2 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
		// offset += limit;
		int32_t L_38 = ___offset1;
		int32_t L_39 = V_3;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_38, L_39));
		// workitem.inputBytesAvailable += limit;
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_40 = V_2;
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_41 = L_40;
		NullCheck(L_41);
		int32_t L_42 = L_41->___inputBytesAvailable_5;
		int32_t L_43 = V_3;
		NullCheck(L_41);
		L_41->___inputBytesAvailable_5 = ((int32_t)il2cpp_codegen_add(L_42, L_43));
		// if (workitem.inputBytesAvailable == workitem.buffer.Length)
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_44 = V_2;
		NullCheck(L_44);
		int32_t L_45 = L_44->___inputBytesAvailable_5;
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_46 = V_2;
		NullCheck(L_46);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = L_46->___buffer_0;
		NullCheck(L_47);
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)(((RuntimeArray*)L_47)->max_length))))))
		{
			goto IL_013a;
		}
	}
	{
		// if (!ThreadPool.QueueUserWorkItem( _DeflateOne, workitem ))
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_48 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_48, __this, (intptr_t)((void*)ParallelDeflateOutputStream__DeflateOne_m0433191E2D84B0AB11AD975B4A1BD7000A4B1B86_RuntimeMethod_var), NULL);
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_49 = V_2;
		bool L_50;
		L_50 = ThreadPool_QueueUserWorkItem_m8E941E4D8C281AAEE450CDEEFE5CA4B8F77ABDD1(L_48, L_49, NULL);
		if (L_50)
		{
			goto IL_0131;
		}
	}
	{
		// throw new Exception("Cannot enqueue workitem");
		Exception_t* L_51 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_51);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_51, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8474B72B7141899E58C9FAD714BA8DC215DF2844)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_51, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParallelDeflateOutputStream_Write_m7381D2A467A5714A0175BC2085AB385AE65BF59B_RuntimeMethod_var)));
	}

IL_0131:
	{
		// _currentlyFilling = -1; // will get a new buffer next time
		__this->____currentlyFilling_17 = (-1);
		goto IL_0141;
	}

IL_013a:
	{
		// _currentlyFilling = ix;
		int32_t L_52 = V_1;
		__this->____currentlyFilling_17 = L_52;
	}

IL_0141:
	{
		// if (count > 0)
		int32_t L_53 = ___count2;
	}

IL_0145:
	{
		// while (count > 0);  // until no more to write
		int32_t L_54 = ___count2;
		if ((((int32_t)L_54) > ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		// return;
		return;
	}
}
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::_FlushFinish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__FlushFinish_m4819CA9506CD70F9103C4BF9FD2E3799CE337D44 (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// byte[] buffer = new byte[128];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		V_0 = L_0;
		// var compressor = new ZlibCodec();
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_1 = (ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0*)il2cpp_codegen_object_new(ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ZlibCodec__ctor_mB1C7954D9FDAEA29B445D6E17434A101519F216D(L_1, NULL);
		V_1 = L_1;
		// int rc = compressor.InitializeDeflate(_compressLevel, false);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_2 = V_1;
		int32_t L_3 = __this->____compressLevel_27;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = ZlibCodec_InitializeDeflate_m0F92D20347FA4706324623CFDBC2CD7993CBC89B(L_2, L_3, (bool)0, NULL);
		V_2 = L_4;
		// compressor.InputBuffer = null;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_5 = V_1;
		NullCheck(L_5);
		L_5->___InputBuffer_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___InputBuffer_0), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		// compressor.NextIn = 0;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_6 = V_1;
		NullCheck(L_6);
		L_6->___NextIn_1 = 0;
		// compressor.AvailableBytesIn = 0;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_7 = V_1;
		NullCheck(L_7);
		L_7->___AvailableBytesIn_2 = 0;
		// compressor.OutputBuffer = buffer;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_8 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_8);
		L_8->___OutputBuffer_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___OutputBuffer_4), (void*)L_9);
		// compressor.NextOut = 0;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_10 = V_1;
		NullCheck(L_10);
		L_10->___NextOut_5 = 0;
		// compressor.AvailableBytesOut = buffer.Length;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_11 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		NullCheck(L_12);
		NullCheck(L_11);
		L_11->___AvailableBytesOut_6 = ((int32_t)(((RuntimeArray*)L_12)->max_length));
		// rc = compressor.Deflate(FlushType.Finish);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = ZlibCodec_Deflate_m119870C4DAC47865D53B39EA397367EDCD9F72AE(L_13, 4, NULL);
		V_2 = L_14;
		// if (rc != ZlibConstants.Z_STREAM_END && rc != ZlibConstants.Z_OK)
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)1)))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_16 = V_2;
		if (!L_16)
		{
			goto IL_0070;
		}
	}
	{
		// throw new Exception("deflating: " + compressor.Message);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_17 = V_1;
		NullCheck(L_17);
		String_t* L_18 = L_17->___Message_8;
		String_t* L_19;
		L_19 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8843DC4A33316C1A7FC9E28CF5D334C24196060)), L_18, NULL);
		Exception_t* L_20 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParallelDeflateOutputStream__FlushFinish_m4819CA9506CD70F9103C4BF9FD2E3799CE337D44_RuntimeMethod_var)));
	}

IL_0070:
	{
		// if (buffer.Length - compressor.AvailableBytesOut > 0)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		NullCheck(L_21);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = L_22->___AvailableBytesOut_6;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_21)->max_length)), L_23))) <= ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		// _outStream.Write(buffer, 0, buffer.Length - compressor.AvailableBytesOut);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_24 = __this->____outStream_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_0;
		NullCheck(L_26);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_27 = V_1;
		NullCheck(L_27);
		int32_t L_28 = L_27->___AvailableBytesOut_6;
		NullCheck(L_24);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_24, L_25, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_26)->max_length)), L_28)));
	}

IL_0094:
	{
		// compressor.EndDeflate();
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_29 = V_1;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = ZlibCodec_EndDeflate_mC39498579CB18A0A141CCC5A64D812C0543DB7F8(L_29, NULL);
		// _Crc32 = _runningCrc.Crc32Result;
		CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59* L_31 = __this->____runningCrc_22;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = CRC32_get_Crc32Result_m041D8245E883D11274D3698C9C3386B316D133A8(L_31, NULL);
		__this->____Crc32_21 = L_32;
		// }
		return;
	}
}
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::_Flush(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__Flush_mB6D12776C06FBD0B17C83859014AB7760E1D7485 (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, bool ___lastInput0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF020E3C2EE9BA95FAD755AD36DE8810062214E44_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* V_0 = NULL;
	{
		// if (_isClosed)
		bool L_0 = __this->____isClosed_15;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new InvalidOperationException();
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParallelDeflateOutputStream__Flush_mB6D12776C06FBD0B17C83859014AB7760E1D7485_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (emitting) return;
		bool L_2 = __this->___emitting_9;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// if (emitting) return;
		return;
	}

IL_0017:
	{
		// if (_currentlyFilling >= 0)
		int32_t L_3 = __this->____currentlyFilling_17;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		// WorkItem workitem = _pool[_currentlyFilling];
		List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B* L_4 = __this->____pool_7;
		int32_t L_5 = __this->____currentlyFilling_17;
		NullCheck(L_4);
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_6;
		L_6 = List_1_get_Item_mF020E3C2EE9BA95FAD755AD36DE8810062214E44(L_4, L_5, List_1_get_Item_mF020E3C2EE9BA95FAD755AD36DE8810062214E44_RuntimeMethod_var);
		V_0 = L_6;
		// _DeflateOne(workitem);
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_7 = V_0;
		ParallelDeflateOutputStream__DeflateOne_m0433191E2D84B0AB11AD975B4A1BD7000A4B1B86(__this, L_7, NULL);
		// _currentlyFilling = -1; // get a new buffer next Write()
		__this->____currentlyFilling_17 = (-1);
	}

IL_0040:
	{
		// if (lastInput)
		bool L_8 = ___lastInput0;
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		// EmitPendingBuffers(true, false);
		ParallelDeflateOutputStream_EmitPendingBuffers_m2CF742C32DFC6939D32DB7BA776428BD15976E5C(__this, (bool)1, (bool)0, NULL);
		// _FlushFinish();
		ParallelDeflateOutputStream__FlushFinish_m4819CA9506CD70F9103C4BF9FD2E3799CE337D44(__this, NULL);
		return;
	}

IL_0052:
	{
		// EmitPendingBuffers(false, false);
		ParallelDeflateOutputStream_EmitPendingBuffers_m2CF742C32DFC6939D32DB7BA776428BD15976E5C(__this, (bool)0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_Flush_mDB53E9F3AB0AF76D10617805AB0F444EA4F7985E (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, const RuntimeMethod* method) 
{
	{
		// if (_pendingException != null)
		Exception_t* L_0 = __this->____pendingException_28;
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// _handlingException = true;
		__this->____handlingException_29 = (bool)1;
		// var pe = _pendingException;
		Exception_t* L_1 = __this->____pendingException_28;
		il2cpp_codegen_memory_barrier();
		// _pendingException = null;
		il2cpp_codegen_memory_barrier();
		__this->____pendingException_28 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pendingException_28), (void*)(Exception_t*)NULL);
		// throw pe;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParallelDeflateOutputStream_Flush_mDB53E9F3AB0AF76D10617805AB0F444EA4F7985E_RuntimeMethod_var)));
	}

IL_0023:
	{
		// if (_handlingException)
		bool L_2 = __this->____handlingException_29;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// return;
		return;
	}

IL_002c:
	{
		// _Flush(false);
		ParallelDeflateOutputStream__Flush_mB6D12776C06FBD0B17C83859014AB7760E1D7485(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_Close_mC73ED06B649C6C6355F8C0E66CE5A919A897078A (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, const RuntimeMethod* method) 
{
	{
		// if (_pendingException != null)
		Exception_t* L_0 = __this->____pendingException_28;
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// _handlingException = true;
		__this->____handlingException_29 = (bool)1;
		// var pe = _pendingException;
		Exception_t* L_1 = __this->____pendingException_28;
		il2cpp_codegen_memory_barrier();
		// _pendingException = null;
		il2cpp_codegen_memory_barrier();
		__this->____pendingException_28 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pendingException_28), (void*)(Exception_t*)NULL);
		// throw pe;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParallelDeflateOutputStream_Close_mC73ED06B649C6C6355F8C0E66CE5A919A897078A_RuntimeMethod_var)));
	}

IL_0023:
	{
		// if (_handlingException)
		bool L_2 = __this->____handlingException_29;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// return;
		return;
	}

IL_002c:
	{
		// if (_isClosed) return;
		bool L_3 = __this->____isClosed_15;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// if (_isClosed) return;
		return;
	}

IL_0035:
	{
		// _Flush(true);
		ParallelDeflateOutputStream__Flush_mB6D12776C06FBD0B17C83859014AB7760E1D7485(__this, (bool)1, NULL);
		// if (!_leaveOpen)
		bool L_4 = __this->____leaveOpen_8;
		if (L_4)
		{
			goto IL_004f;
		}
	}
	{
		// _outStream.Close();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = __this->____outStream_10;
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(18 /* System.Void System.IO.Stream::Close() */, L_5);
	}

IL_004f:
	{
		// _isClosed= true;
		__this->____isClosed_15 = (bool)1;
		// }
		return;
	}
}
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_Dispose_mDC87DEE7C87F12D789B5882BFD3E2B14E0ABDABB (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, const RuntimeMethod* method) 
{
	{
		// Close();
		VirtualActionInvoker0::Invoke(18 /* System.Void System.IO.Stream::Close() */, __this);
		// _pool = null;
		__this->____pool_7 = (List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pool_7), (void*)(List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B*)NULL);
		// Dispose(true);
		VirtualActionInvoker1< bool >::Invoke(19 /* System.Void System.IO.Stream::Dispose(System.Boolean) */, __this, (bool)1);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_Dispose_m9069EAEDBCD0EB7C73F3A0B4339AA07D80D33495 (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		// base.Dispose(disposing);
		bool L_0 = ___disposing0;
		Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::Reset(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_Reset_m3F81F04E3BF56FB70C0E211DDC0A5F2FF44697DC (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA5B3AD69860A64ABE5D597ECAA62E7BBCAC1F8EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m35A17EDEA07CBA05840536A676C447B11ACBD8FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m54A3B18A69EA981C5545BE370472587D51C3CF76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m035CB3A1422D19055CA08EE0754BC694A077206B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t958BE15B8412AD7D54A4DCF60E7D35E0146F1C1A V_0;
	memset((&V_0), 0, sizeof(V_0));
	WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* V_1 = NULL;
	{
		// if (!_firstWriteDone) return;
		bool L_0 = __this->____firstWriteDone_16;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!_firstWriteDone) return;
		return;
	}

IL_0009:
	{
		// _toWrite.Clear();
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_1 = __this->____toWrite_24;
		NullCheck(L_1);
		Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1(L_1, Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1_RuntimeMethod_var);
		// _toFill.Clear();
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_2 = __this->____toFill_25;
		NullCheck(L_2);
		Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1(L_2, Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1_RuntimeMethod_var);
		// foreach (var workitem in _pool)
		List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B* L_3 = __this->____pool_7;
		NullCheck(L_3);
		Enumerator_t958BE15B8412AD7D54A4DCF60E7D35E0146F1C1A L_4;
		L_4 = List_1_GetEnumerator_m035CB3A1422D19055CA08EE0754BC694A077206B(L_3, List_1_GetEnumerator_m035CB3A1422D19055CA08EE0754BC694A077206B_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0058:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA5B3AD69860A64ABE5D597ECAA62E7BBCAC1F8EF((&V_0), Enumerator_Dispose_mA5B3AD69860A64ABE5D597ECAA62E7BBCAC1F8EF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004d_1;
			}

IL_002d_1:
			{
				// foreach (var workitem in _pool)
				WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_5;
				L_5 = Enumerator_get_Current_m54A3B18A69EA981C5545BE370472587D51C3CF76_inline((&V_0), Enumerator_get_Current_m54A3B18A69EA981C5545BE370472587D51C3CF76_RuntimeMethod_var);
				V_1 = L_5;
				// _toFill.Enqueue(workitem.index);
				Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_6 = __this->____toFill_25;
				WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_7 = V_1;
				NullCheck(L_7);
				int32_t L_8 = L_7->___index_3;
				NullCheck(L_6);
				Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A(L_6, L_8, Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
				// workitem.ordinal = -1;
				WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_9 = V_1;
				NullCheck(L_9);
				L_9->___ordinal_4 = (-1);
			}

IL_004d_1:
			{
				// foreach (var workitem in _pool)
				bool L_10;
				L_10 = Enumerator_MoveNext_m35A17EDEA07CBA05840536A676C447B11ACBD8FC((&V_0), Enumerator_MoveNext_m35A17EDEA07CBA05840536A676C447B11ACBD8FC_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_002d_1;
				}
			}
			{
				goto IL_0066;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		// _firstWriteDone = false;
		__this->____firstWriteDone_16 = (bool)0;
		// _totalBytesProcessed = 0L;
		__this->____totalBytesProcessed_26 = ((int64_t)0);
		// _runningCrc = new Ionic.Crc.CRC32();
		CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59* L_11 = (CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59*)il2cpp_codegen_object_new(CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		CRC32__ctor_m34C589BA2DA750522A47C7293127B85402673352(L_11, NULL);
		__this->____runningCrc_22 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____runningCrc_22), (void*)L_11);
		// _isClosed= false;
		__this->____isClosed_15 = (bool)0;
		// _currentlyFilling = -1;
		__this->____currentlyFilling_17 = (-1);
		// _lastFilled = -1;
		__this->____lastFilled_18 = (-1);
		// _lastWritten = -1;
		__this->____lastWritten_19 = (-1);
		// _latestCompressed = -1;
		__this->____latestCompressed_20 = (-1);
		// _outStream = stream;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12 = ___stream0;
		__this->____outStream_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____outStream_10), (void*)L_12);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::EmitPendingBuffers(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_EmitPendingBuffers_m2CF742C32DFC6939D32DB7BA776428BD15976E5C (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, bool ___doAll0, bool ___mustWait1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF020E3C2EE9BA95FAD755AD36DE8810062214E44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* V_3 = NULL;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* V_4 = NULL;
	bool V_5 = false;
	int32_t G_B9_0 = 0;
	{
		// if (emitting) return;
		bool L_0 = __this->___emitting_9;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (emitting) return;
		return;
	}

IL_0009:
	{
		// emitting = true;
		__this->___emitting_9 = (bool)1;
		// if (doAll || mustWait)
		bool L_1 = ___doAll0;
		bool L_2 = ___mustWait1;
		if (!((int32_t)((int32_t)L_1|(int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		// _newlyCompressedBlob.WaitOne();
		AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* L_3 = __this->____newlyCompressedBlob_13;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_3);
	}

IL_0021:
	{
		// int firstSkip = -1;
		V_0 = (-1);
		// int millisecondsToWait = doAll ? 200 : (mustWait ? -1 : 0);
		bool L_5 = ___doAll0;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		bool L_6 = ___mustWait1;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		G_B9_0 = 0;
		goto IL_0034;
	}

IL_002c:
	{
		G_B9_0 = (-1);
		goto IL_0034;
	}

IL_002f:
	{
		G_B9_0 = ((int32_t)200);
	}

IL_0034:
	{
		V_1 = G_B9_0;
		// int nextToWrite = -1;
		V_2 = (-1);
	}

IL_0037:
	{
		// if (Monitor.TryEnter(_toWrite, millisecondsToWait))
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_7 = __this->____toWrite_24;
		int32_t L_8 = V_1;
		bool L_9;
		L_9 = Monitor_TryEnter_mBDCC9F84B7EB106272C05016117D1D26BB3BCD2C(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0151;
		}
	}
	{
		// nextToWrite = -1;
		V_2 = (-1);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				// Monitor.Exit(_toWrite);
				Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_10 = __this->____toWrite_24;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_10, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (_toWrite.Count > 0)
				Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_11 = __this->____toWrite_24;
				NullCheck(L_11);
				int32_t L_12;
				L_12 = Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline(L_11, Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var);
				if ((((int32_t)L_12) <= ((int32_t)0)))
				{
					goto IL_0064_1;
				}
			}
			{
				// nextToWrite = _toWrite.Dequeue();
				Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_13 = __this->____toWrite_24;
				NullCheck(L_13);
				int32_t L_14;
				L_14 = Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650(L_13, Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
				V_2 = L_14;
			}

IL_0064_1:
			{
				// }
				goto IL_0072;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0072:
	{
		// if (nextToWrite >= 0)
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0153;
		}
	}
	{
		// WorkItem workitem = _pool[nextToWrite];
		List_1_tB79AF91B7AF2BAED0564424965B9710BD2CD738B* L_16 = __this->____pool_7;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_18;
		L_18 = List_1_get_Item_mF020E3C2EE9BA95FAD755AD36DE8810062214E44(L_16, L_17, List_1_get_Item_mF020E3C2EE9BA95FAD755AD36DE8810062214E44_RuntimeMethod_var);
		V_3 = L_18;
		// if (workitem.ordinal != _lastWritten + 1)
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_19 = V_3;
		NullCheck(L_19);
		int32_t L_20 = L_19->___ordinal_4;
		int32_t L_21 = __this->____lastWritten_19;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)il2cpp_codegen_add(L_21, 1)))))
		{
			goto IL_00e0;
		}
	}
	{
		// lock(_toWrite)
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_22 = __this->____toWrite_24;
		V_4 = L_22;
		V_5 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b8:
			{// begin finally (depth: 1)
				{
					bool L_23 = V_5;
					if (!L_23)
					{
						goto IL_00c3;
					}
				}
				{
					Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_24 = V_4;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_24, NULL);
				}

IL_00c3:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_25 = V_4;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_25, (&V_5), NULL);
			// _toWrite.Enqueue(nextToWrite);
			Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_26 = __this->____toWrite_24;
			int32_t L_27 = V_2;
			NullCheck(L_26);
			Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A(L_26, L_27, Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
			// }
			goto IL_00c4;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c4:
	{
		// if (firstSkip == nextToWrite)
		int32_t L_28 = V_0;
		int32_t L_29 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_00d8;
		}
	}
	{
		// _newlyCompressedBlob.WaitOne();
		AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* L_30 = __this->____newlyCompressedBlob_13;
		NullCheck(L_30);
		bool L_31;
		L_31 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_30);
		// firstSkip = -1;
		V_0 = (-1);
		goto IL_0153;
	}

IL_00d8:
	{
		// else if (firstSkip == -1)
		int32_t L_32 = V_0;
		if ((!(((uint32_t)L_32) == ((uint32_t)(-1)))))
		{
			goto IL_0153;
		}
	}
	{
		// firstSkip = nextToWrite;
		int32_t L_33 = V_2;
		V_0 = L_33;
		// continue;
		goto IL_0153;
	}

IL_00e0:
	{
		// firstSkip = -1;
		V_0 = (-1);
		// _outStream.Write(workitem.compressed, 0, workitem.compressedBytesAvailable);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_34 = __this->____outStream_10;
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_35 = V_3;
		NullCheck(L_35);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = L_35->___compressed_1;
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = L_37->___compressedBytesAvailable_6;
		NullCheck(L_34);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_34, L_36, 0, L_38);
		// _runningCrc.Combine(workitem.crc, workitem.inputBytesAvailable);
		CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59* L_39 = __this->____runningCrc_22;
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_40 = V_3;
		NullCheck(L_40);
		int32_t L_41 = L_40->___crc_2;
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_42 = V_3;
		NullCheck(L_42);
		int32_t L_43 = L_42->___inputBytesAvailable_5;
		NullCheck(L_39);
		CRC32_Combine_m0B5B1C064BB633491CDF26A4398A68E2AA090E2D(L_39, L_41, L_43, NULL);
		// _totalBytesProcessed += workitem.inputBytesAvailable;
		int64_t L_44 = __this->____totalBytesProcessed_26;
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_45 = V_3;
		NullCheck(L_45);
		int32_t L_46 = L_45->___inputBytesAvailable_5;
		__this->____totalBytesProcessed_26 = ((int64_t)il2cpp_codegen_add(L_44, ((int64_t)L_46)));
		// workitem.inputBytesAvailable = 0;
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_47 = V_3;
		NullCheck(L_47);
		L_47->___inputBytesAvailable_5 = 0;
		// _lastWritten = workitem.ordinal;
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_48 = V_3;
		NullCheck(L_48);
		int32_t L_49 = L_48->___ordinal_4;
		__this->____lastWritten_19 = L_49;
		// _toFill.Enqueue(workitem.index);
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_50 = __this->____toFill_25;
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_51 = V_3;
		NullCheck(L_51);
		int32_t L_52 = L_51->___index_3;
		NullCheck(L_50);
		Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A(L_50, L_52, Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		// if (millisecondsToWait == -1) millisecondsToWait = 0;
		int32_t L_53 = V_1;
		if ((!(((uint32_t)L_53) == ((uint32_t)(-1)))))
		{
			goto IL_0153;
		}
	}
	{
		// if (millisecondsToWait == -1) millisecondsToWait = 0;
		V_1 = 0;
		goto IL_0153;
	}

IL_0151:
	{
		// nextToWrite = -1;
		V_2 = (-1);
	}

IL_0153:
	{
		// } while (nextToWrite >= 0);
		int32_t L_54 = V_2;
		if ((((int32_t)L_54) >= ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		// } while (doAll && (_lastWritten != _latestCompressed));
		bool L_55 = ___doAll0;
		if (!L_55)
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_56 = __this->____lastWritten_19;
		int32_t L_57 = __this->____latestCompressed_20;
		if ((!(((uint32_t)L_56) == ((uint32_t)L_57))))
		{
			goto IL_0021;
		}
	}

IL_016e:
	{
		// emitting = false;
		__this->___emitting_9 = (bool)0;
		// }
		return;
	}
}
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::_DeflateOne(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__DeflateOne_m0433191E2D84B0AB11AD975B4A1BD7000A4B1B86 (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, RuntimeObject* ___wi0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* V_0 = NULL;
	CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// WorkItem workitem = (WorkItem) wi;
		RuntimeObject* L_0 = ___wi0;
		V_0 = ((WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D*)CastclassClass((RuntimeObject*)L_0, WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D_il2cpp_TypeInfo_var));
	}
	try
	{// begin try (depth: 1)
		{
			// Ionic.Crc.CRC32 crc = new Ionic.Crc.CRC32();
			CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59* L_1 = (CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59*)il2cpp_codegen_object_new(CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59_il2cpp_TypeInfo_var);
			NullCheck(L_1);
			CRC32__ctor_m34C589BA2DA750522A47C7293127B85402673352(L_1, NULL);
			V_1 = L_1;
			// crc.SlurpBlock(workitem.buffer, 0, workitem.inputBytesAvailable);
			CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59* L_2 = V_1;
			WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_3 = V_0;
			NullCheck(L_3);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3->___buffer_0;
			WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_5 = V_0;
			NullCheck(L_5);
			int32_t L_6 = L_5->___inputBytesAvailable_5;
			NullCheck(L_2);
			CRC32_SlurpBlock_mD8F9A2F2CE446F15EC8CBD3F0E8DC11E0180B618(L_2, L_4, 0, L_6, NULL);
			// DeflateOneSegment(workitem);
			WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_7 = V_0;
			bool L_8;
			L_8 = ParallelDeflateOutputStream_DeflateOneSegment_m441204B046F0336CDBEE4D1B3C5251451D540BD5(__this, L_7, NULL);
			// workitem.crc = crc.Crc32Result;
			WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_9 = V_0;
			CRC32_t2E4022C1953B5DC6986C1059ACDB433D4BA05A59* L_10 = V_1;
			NullCheck(L_10);
			int32_t L_11;
			L_11 = CRC32_get_Crc32Result_m041D8245E883D11274D3698C9C3386B316D133A8(L_10, NULL);
			NullCheck(L_9);
			L_9->___crc_2 = L_11;
			// lock(_latestLock)
			RuntimeObject* L_12 = __this->____latestLock_23;
			V_2 = L_12;
			V_3 = (bool)0;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0061_1:
				{// begin finally (depth: 2)
					{
						bool L_13 = V_3;
						if (!L_13)
						{
							goto IL_006a_1;
						}
					}
					{
						RuntimeObject* L_14 = V_2;
						Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_14, NULL);
					}

IL_006a_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					RuntimeObject* L_15 = V_2;
					Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_15, (&V_3), NULL);
					// if (workitem.ordinal > _latestCompressed)
					WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_16 = V_0;
					NullCheck(L_16);
					int32_t L_17 = L_16->___ordinal_4;
					int32_t L_18 = __this->____latestCompressed_20;
					if ((((int32_t)L_17) <= ((int32_t)L_18)))
					{
						goto IL_005f_2;
					}
				}
				{
					// _latestCompressed = workitem.ordinal;
					WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_19 = V_0;
					NullCheck(L_19);
					int32_t L_20 = L_19->___ordinal_4;
					__this->____latestCompressed_20 = L_20;
				}

IL_005f_2:
				{
					// }
					goto IL_006b_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_006b_1:
		{
			// lock (_toWrite)
			Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_21 = __this->____toWrite_24;
			V_4 = L_21;
			V_3 = (bool)0;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0091_1:
				{// begin finally (depth: 2)
					{
						bool L_22 = V_3;
						if (!L_22)
						{
							goto IL_009b_1;
						}
					}
					{
						Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_23 = V_4;
						Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_23, NULL);
					}

IL_009b_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_24 = V_4;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_24, (&V_3), NULL);
				// _toWrite.Enqueue(workitem.index);
				Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_25 = __this->____toWrite_24;
				WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_26 = V_0;
				NullCheck(L_26);
				int32_t L_27 = L_26->___index_3;
				NullCheck(L_25);
				Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A(L_25, L_27, Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
				// }
				goto IL_009c_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_009c_1:
		{
			// _newlyCompressedBlob.Set();
			AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* L_28 = __this->____newlyCompressedBlob_13;
			NullCheck(L_28);
			bool L_29;
			L_29 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_28, NULL);
			// }
			goto IL_00df;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00aa;
		}
		throw e;
	}

CATCH_00aa:
	{// begin catch(System.Exception)
		{
			// catch (System.Exception exc1)
			V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// lock(_eLock)
			RuntimeObject* L_30 = __this->____eLock_30;
			V_2 = L_30;
			V_3 = (bool)0;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_00d3:
				{// begin finally (depth: 2)
					{
						bool L_31 = V_3;
						if (!L_31)
						{
							goto IL_00dc;
						}
					}
					{
						RuntimeObject* L_32 = V_2;
						Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_32, NULL);
					}

IL_00dc:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					RuntimeObject* L_33 = V_2;
					Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_33, (&V_3), NULL);
					// if (_pendingException!=null)
					Exception_t* L_34 = __this->____pendingException_28;
					il2cpp_codegen_memory_barrier();
					if (!L_34)
					{
						goto IL_00d1_1;
					}
				}
				{
					// _pendingException = exc1;
					Exception_t* L_35 = V_5;
					il2cpp_codegen_memory_barrier();
					__this->____pendingException_28 = L_35;
					Il2CppCodeGenWriteBarrier((void**)(&__this->____pendingException_28), (void*)L_35);
				}

IL_00d1_1:
				{
					// }
					goto IL_00dd;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_00dd:
		{
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00df;
		}
	}// end catch (depth: 1)

IL_00df:
	{
		// }
		return;
	}
}
// System.Boolean Ionic.Zlib.ParallelDeflateOutputStream::DeflateOneSegment(Ionic.Zlib.WorkItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParallelDeflateOutputStream_DeflateOneSegment_m441204B046F0336CDBEE4D1B3C5251451D540BD5 (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* ___workitem0, const RuntimeMethod* method) 
{
	ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* V_0 = NULL;
	{
		// ZlibCodec compressor = workitem.compressor;
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_0 = ___workitem0;
		NullCheck(L_0);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_1 = L_0->___compressor_7;
		V_0 = L_1;
		// compressor.ResetDeflate();
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_2 = V_0;
		NullCheck(L_2);
		ZlibCodec_ResetDeflate_m46547FA4FF8B4D06CD4271AFC32DBCB351492005(L_2, NULL);
		// compressor.NextIn = 0;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_3 = V_0;
		NullCheck(L_3);
		L_3->___NextIn_1 = 0;
		// compressor.AvailableBytesIn = workitem.inputBytesAvailable;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_4 = V_0;
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_5 = ___workitem0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___inputBytesAvailable_5;
		NullCheck(L_4);
		L_4->___AvailableBytesIn_2 = L_6;
		// compressor.NextOut = 0;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_7 = V_0;
		NullCheck(L_7);
		L_7->___NextOut_5 = 0;
		// compressor.AvailableBytesOut =  workitem.compressed.Length;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_8 = V_0;
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_9 = ___workitem0;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_9->___compressed_1;
		NullCheck(L_10);
		NullCheck(L_8);
		L_8->___AvailableBytesOut_6 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
	}

IL_0035:
	{
		// compressor.Deflate(FlushType.None);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = ZlibCodec_Deflate_m119870C4DAC47865D53B39EA397367EDCD9F72AE(L_11, 0, NULL);
		// while (compressor.AvailableBytesIn > 0 || compressor.AvailableBytesOut == 0);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___AvailableBytesIn_2;
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = L_15->___AvailableBytesOut_6;
		if (!L_16)
		{
			goto IL_0035;
		}
	}
	{
		// rc = compressor.Deflate(FlushType.Sync);
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = ZlibCodec_Deflate_m119870C4DAC47865D53B39EA397367EDCD9F72AE(L_17, 2, NULL);
		// workitem.compressedBytesAvailable= (int) compressor.TotalBytesOut;
		WorkItem_t0784B7CCD34AEB4C986C9062D0D2D29A6AAD150D* L_19 = ___workitem0;
		ZlibCodec_t82B8A1F00C4EB3A31D7430982A7223D2810796A0* L_20 = V_0;
		NullCheck(L_20);
		int64_t L_21 = L_20->___TotalBytesOut_7;
		NullCheck(L_19);
		L_19->___compressedBytesAvailable_6 = ((int32_t)L_21);
		// return true;
		return (bool)1;
	}
}
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::TraceOutput(Ionic.Zlib.ParallelDeflateOutputStream/TraceBits,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_TraceOutput_m398644942A1E5E248F62E383F450CA7D56F7446F (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, uint32_t ___bits0, String_t* ___format1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___varParams2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30BCB087B41A6F00FEBBA97739609206E052A32F);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// if ((bits & _DesiredTrace) != 0)
		uint32_t L_0 = ___bits0;
		uint32_t L_1 = __this->____DesiredTrace_31;
		if (!((int32_t)((int32_t)L_0&(int32_t)L_1)))
		{
			goto IL_0049;
		}
	}
	{
		// lock(_outputLock)
		RuntimeObject* L_2 = __this->____outputLock_14;
		V_0 = L_2;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_1;
					if (!L_3)
					{
						goto IL_0048;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_4, NULL);
				}

IL_0048:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_5 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_5, (&V_1), NULL);
			// int tid = Thread.CurrentThread.GetHashCode();
			Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_6;
			L_6 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
			NullCheck(L_6);
			int32_t L_7;
			L_7 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
			V_2 = L_7;
			// Console.Write("{0:000} PDOS ", tid);
			int32_t L_8 = V_2;
			int32_t L_9 = L_8;
			RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
			il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
			Console_Write_m00E51F9C43F639E1D95D8D0569883A2AA02898D9(_stringLiteral30BCB087B41A6F00FEBBA97739609206E052A32F, L_10, NULL);
			// Console.WriteLine(format, varParams);
			String_t* L_11 = ___format1;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = ___varParams2;
			Console_WriteLine_mBCCE2C2A3FD35C53FA731B7B4713C1A2082C6257(L_11, L_12, NULL);
			// }
			goto IL_0049;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Boolean Ionic.Zlib.ParallelDeflateOutputStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParallelDeflateOutputStream_get_CanSeek_m3706037EE7EAD839E0201526F86F2877EC7D3FEF (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, const RuntimeMethod* method) 
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Boolean Ionic.Zlib.ParallelDeflateOutputStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParallelDeflateOutputStream_get_CanRead_m2FD2EEAA9689F24362899E86B5449E1CD927382C (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, const RuntimeMethod* method) 
{
	{
		// get {return false;}
		return (bool)0;
	}
}
// System.Boolean Ionic.Zlib.ParallelDeflateOutputStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParallelDeflateOutputStream_get_CanWrite_mDD9485BFB5AE3D85A601C44852BE42C50E0BBB82 (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, const RuntimeMethod* method) 
{
	{
		// get { return _outStream.CanWrite; }
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____outStream_10;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_0);
		return L_1;
	}
}
// System.Int64 Ionic.Zlib.ParallelDeflateOutputStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ParallelDeflateOutputStream_get_Length_m75ACA9CD7A8219A8336C534B1D854786C3023649 (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, const RuntimeMethod* method) 
{
	{
		// get { throw new NotSupportedException(); }
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParallelDeflateOutputStream_get_Length_m75ACA9CD7A8219A8336C534B1D854786C3023649_RuntimeMethod_var)));
	}
}
// System.Int64 Ionic.Zlib.ParallelDeflateOutputStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ParallelDeflateOutputStream_get_Position_m1FB161FF6BD7980FCE8AD2F7C6D908C18405D17E (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, const RuntimeMethod* method) 
{
	{
		// get { return _outStream.Position; }
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____outStream_10;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		return L_1;
	}
}
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_set_Position_m53EFF0C29A3E710313606353456FEB335DAC1B05 (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { throw new NotSupportedException(); }
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParallelDeflateOutputStream_set_Position_m53EFF0C29A3E710313606353456FEB335DAC1B05_RuntimeMethod_var)));
	}
}
// System.Int32 Ionic.Zlib.ParallelDeflateOutputStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParallelDeflateOutputStream_Read_m8195796CB10E1A9799C337BF2C228742EEB57C06 (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException();
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParallelDeflateOutputStream_Read_m8195796CB10E1A9799C337BF2C228742EEB57C06_RuntimeMethod_var)));
	}
}
// System.Int64 Ionic.Zlib.ParallelDeflateOutputStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ParallelDeflateOutputStream_Seek_m10B7BE7661E692AEDB332B125C24DE98A9B735FE (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException();
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParallelDeflateOutputStream_Seek_m10B7BE7661E692AEDB332B125C24DE98A9B735FE_RuntimeMethod_var)));
	}
}
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_SetLength_m43D0AD5E7FB5447360426369987196AA9A1C3C31 (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException();
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParallelDeflateOutputStream_SetLength_m43D0AD5E7FB5447360426369987196AA9A1C3C31_RuntimeMethod_var)));
	}
}
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__cctor_mE50BC87EAA7132F1D01D14E84DAF1A2EC48C7607 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int IO_BUFFER_SIZE_DEFAULT = 64 * 1024;  // 128k
		((ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49_StaticFields*)il2cpp_codegen_static_fields_for(ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49_il2cpp_TypeInfo_var))->___IO_BUFFER_SIZE_DEFAULT_5 = ((int32_t)65536);
		// private static readonly int BufferPairsPerCore = 4;
		((ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49_StaticFields*)il2cpp_codegen_static_fields_for(ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49_il2cpp_TypeInfo_var))->___BufferPairsPerCore_6 = 4;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeflateManager_get_WantRfc1950HeaderBytes_m75F40211D40B3305737878C796ABF362D3B4A1B1_inline (DeflateManager_t5A38E37663F53193E2AC4F9A7F38DCF7384A157B* __this, const RuntimeMethod* method) 
{
	{
		// get { return _WantRfc1950HeaderBytes; }
		bool L_0 = __this->____WantRfc1950HeaderBytes_73;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompressFunc_Invoke_m2F705D391F2B3B99EFA994DABBE061FB9FD56747_inline (CompressFunc_tBCE8EA32BEA7581737260CA8D5EE64A173E4DCE0* __this, int32_t ___flush0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___flush0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GZipStream_get_Comment_m854751A0B57F628205B127CA73BE5CD5F9D41D9B_inline (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, const RuntimeMethod* method) 
{
	{
		// return _Comment;
		String_t* L_0 = __this->____Comment_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GZipStream_get_FileName_m7E2FD03B41897EE52074E71085F676DDFD42A7BD_inline (GZipStream_tAF5C41C90160E9B13C3479D9D68D10989F7112C0* __this, const RuntimeMethod* method) 
{
	{
		// get { return _FileName; }
		String_t* L_0 = __this->____FileName_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InflateManager_get_HandleRfc1950HeaderBytes_mA528D034844C015D09B38CAABA4D3F44EE24B288_inline (InflateManager_t286F6185EE8B9C948C49E3FC644FD96404B15398* __this, const RuntimeMethod* method) 
{
	{
		// get { return _handleRfc1950HeaderBytes; }
		bool L_0 = __this->____handleRfc1950HeaderBytes_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_set_Strategy_m500A0FB016BD5F4769796B7242E36603AAEA624D_inline (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		int32_t L_0 = ___value0;
		__this->___U3CStrategyU3Ek__BackingField_32 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ParallelDeflateOutputStream_get_Strategy_m6458E048264FD65467D3F39F28B0D015FD09AF8F_inline (ParallelDeflateOutputStream_tB45D2E6C0A093DF5361CC1237F2A314989093D49* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CStrategyU3Ek__BackingField_32;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_gshared_inline (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_gshared_inline (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
