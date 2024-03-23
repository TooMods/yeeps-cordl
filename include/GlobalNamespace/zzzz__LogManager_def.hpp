#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AWSDatabase_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogManager)
namespace GlobalNamespace {
struct __AWSDatabase__LambdaResponse;
}
namespace GlobalNamespace {
class __LogManager__LogData;
}
namespace GlobalNamespace {
class __LogManager__OnSendLogsFailed;
}
namespace GlobalNamespace {
class __LogManager__OnSendLogsSuccess;
}
namespace GlobalNamespace {
struct __LogManager___SendLogs_d__16;
}
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct DateTime;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace GlobalNamespace {
class LogManager;
}
namespace GlobalNamespace {
class __LogManager__LogData;
}
namespace GlobalNamespace {
class __LogManager__OnSendLogsFailed;
}
namespace GlobalNamespace {
class __LogManager__OnSendLogsSuccess;
}
namespace GlobalNamespace {
struct __LogManager___SendLogs_d__16;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LogManager);
MARK_REF_PTR_T(::GlobalNamespace::__LogManager__LogData);
MARK_REF_PTR_T(::GlobalNamespace::__LogManager__OnSendLogsFailed);
MARK_REF_PTR_T(::GlobalNamespace::__LogManager__OnSendLogsSuccess);
MARK_VAL_T(::GlobalNamespace::__LogManager___SendLogs_d__16);
// Type: ::LogData
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LogManager::LogData*
class CORDL_TYPE __LogManager__LogData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <count>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__count_k__BackingField, put = __cordl_internal_set__count_k__BackingField)) int32_t _count_k__BackingField;

  /// @brief Field <hash>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__hash_k__BackingField, put = __cordl_internal_set__hash_k__BackingField)) int32_t _hash_k__BackingField;

  /// @brief Field <lastLog>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lastLog_k__BackingField, put = __cordl_internal_set__lastLog_k__BackingField))::System::DateTime _lastLog_k__BackingField;

  /// @brief Field <logMessage>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__logMessage_k__BackingField, put = __cordl_internal_set__logMessage_k__BackingField))::StringW _logMessage_k__BackingField;

  /// @brief Field <stackTrace>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__stackTrace_k__BackingField, put = __cordl_internal_set__stackTrace_k__BackingField))::StringW _stackTrace_k__BackingField;

  __declspec(property(get = get_count, put = set_count)) int32_t count;

  __declspec(property(get = get_hash, put = set_hash)) int32_t hash;

  __declspec(property(get = get_lastLog, put = set_lastLog))::System::DateTime lastLog;

  __declspec(property(get = get_logMessage, put = set_logMessage))::StringW logMessage;

  __declspec(property(get = get_stackTrace, put = set_stackTrace))::StringW stackTrace;

  /// @brief Method Copy, addr 0x29ca974, size 0x60, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__LogManager__LogData* Copy();

  /// @brief Method GetCountDisplayText, addr 0x29ca730, size 0xa8, virtual false, abstract: false, final false
  inline ::StringW GetCountDisplayText();

  /// @brief Method GetShortDisplayText, addr 0x29ca690, size 0xa0, virtual false, abstract: false, final false
  inline ::StringW GetShortDisplayText();

  /// @brief Method GetSimplifiedStackTrace, addr 0x29ca584, size 0xc0, virtual false, abstract: false, final false
  inline ::StringW GetSimplifiedStackTrace(::StringW input);

  /// @brief Method GetTimeDisplayText, addr 0x29ca7d8, size 0x19c, virtual false, abstract: false, final false
  inline ::StringW GetTimeDisplayText(::System::DateTime currentTime);

  /// @brief Method Increment, addr 0x29c9b30, size 0x68, virtual false, abstract: false, final false
  inline void Increment();

  static inline ::GlobalNamespace::__LogManager__LogData* New_ctor(::StringW logMessage, ::StringW stackTrace, int32_t hash);

  static inline ::GlobalNamespace::__LogManager__LogData* New_ctor(::GlobalNamespace::__LogManager__LogData* original);

  constexpr int32_t const& __cordl_internal_get__count_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__count_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__hash_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__hash_k__BackingField();

  constexpr ::System::DateTime const& __cordl_internal_get__lastLog_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__lastLog_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__logMessage_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__logMessage_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__stackTrace_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__stackTrace_k__BackingField();

  constexpr void __cordl_internal_set__count_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__hash_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__lastLog_k__BackingField(::System::DateTime value);

  constexpr void __cordl_internal_set__logMessage_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__stackTrace_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x29c9ecc, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::StringW logMessage, ::StringW stackTrace, int32_t hash);

  /// @brief Method .ctor, addr 0x29ca644, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__LogManager__LogData* original);

  /// @brief Method get_count, addr 0x29ca554, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_count();

  /// @brief Method get_hash, addr 0x29ca574, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_hash();

  /// @brief Method get_lastLog, addr 0x29ca564, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_lastLog();

  /// @brief Method get_logMessage, addr 0x29ca534, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_logMessage();

  /// @brief Method get_stackTrace, addr 0x29ca544, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_stackTrace();

  /// @brief Method set_count, addr 0x29ca55c, size 0x8, virtual false, abstract: false, final false
  inline void set_count(int32_t value);

  /// @brief Method set_hash, addr 0x29ca57c, size 0x8, virtual false, abstract: false, final false
  inline void set_hash(int32_t value);

  /// @brief Method set_lastLog, addr 0x29ca56c, size 0x8, virtual false, abstract: false, final false
  inline void set_lastLog(::System::DateTime value);

  /// @brief Method set_logMessage, addr 0x29ca53c, size 0x8, virtual false, abstract: false, final false
  inline void set_logMessage(::StringW value);

  /// @brief Method set_stackTrace, addr 0x29ca54c, size 0x8, virtual false, abstract: false, final false
  inline void set_stackTrace(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LogManager__LogData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LogManager__LogData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LogManager__LogData(__LogManager__LogData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LogManager__LogData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LogManager__LogData(__LogManager__LogData const&) = delete;

  /// @brief Field <logMessage>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____logMessage_k__BackingField;

  /// @brief Field <stackTrace>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____stackTrace_k__BackingField;

  /// @brief Field <count>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____count_k__BackingField;

  /// @brief Field <lastLog>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::DateTime ____lastLog_k__BackingField;

  /// @brief Field <hash>k__BackingField, offset: 0x30, size: 0x4, def value: None
  int32_t ____hash_k__BackingField;

  /// @brief Field TITLE_TRUNCATE_LENGTH offset 0xffffffff size 0x4
  static constexpr int32_t TITLE_TRUNCATE_LENGTH{ static_cast<int32_t>(0xf) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LogManager__LogData, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LogManager__LogData, ____logMessage_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LogManager__LogData, ____stackTrace_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LogManager__LogData, ____count_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LogManager__LogData, ____lastLog_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LogManager__LogData, ____hash_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OnSendLogsSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LogManager::OnSendLogsSuccess*
class CORDL_TYPE __LogManager__OnSendLogsSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x29caaa4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x29caac4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x29caa90, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__LogManager__OnSendLogsSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x29ca9d4, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LogManager__OnSendLogsSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LogManager__OnSendLogsSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LogManager__OnSendLogsSuccess(__LogManager__OnSendLogsSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LogManager__OnSendLogsSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LogManager__OnSendLogsSuccess(__LogManager__OnSendLogsSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LogManager__OnSendLogsSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnSendLogsFailed
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LogManager::OnSendLogsFailed*
class CORDL_TYPE __LogManager__OnSendLogsFailed : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x29cabb8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x29cabd8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x29caba4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errType);

  static inline ::GlobalNamespace::__LogManager__OnSendLogsFailed* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x29caad0, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LogManager__OnSendLogsFailed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LogManager__OnSendLogsFailed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LogManager__OnSendLogsFailed(__LogManager__OnSendLogsFailed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LogManager__OnSendLogsFailed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LogManager__OnSendLogsFailed(__LogManager__OnSendLogsFailed const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LogManager__OnSendLogsFailed, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<SendLogs>d__16
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LogManager::<SendLogs>d__16
struct CORDL_TYPE __LogManager___SendLogs_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x29cabe4, size 0x564, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x29cb148, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LogManager___SendLogs_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onFailed", ty: "::GlobalNamespace::__LogManager__OnSendLogsFailed*", modifiers:
  // "", def_value: None }, CppParam { name: "accountID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::GlobalNamespace::__LogManager__OnSendLogsSuccess*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value:
  // None }]
  constexpr __LogManager___SendLogs_d__16(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::__LogManager__OnSendLogsFailed* onFailed,
                                          ::StringW accountID, ::GlobalNamespace::__LogManager__OnSendLogsSuccess* onSuccess,
                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field onFailed, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__LogManager__OnSendLogsFailed* onFailed;

  /// @brief Field accountID, offset: 0x30, size: 0x8, def value: None
  ::StringW accountID;

  /// @brief Field onSuccess, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__LogManager__OnSendLogsSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LogManager___SendLogs_d__16, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LogManager___SendLogs_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LogManager___SendLogs_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LogManager___SendLogs_d__16, onFailed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LogManager___SendLogs_d__16, accountID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LogManager___SendLogs_d__16, onSuccess) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LogManager___SendLogs_d__16, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LogManager
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LogManager*
class CORDL_TYPE LogManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::LogManager>> {
public:
  // Declarations
  using LogData = ::GlobalNamespace::__LogManager__LogData;

  using OnSendLogsFailed = ::GlobalNamespace::__LogManager__OnSendLogsFailed;

  using OnSendLogsSuccess = ::GlobalNamespace::__LogManager__OnSendLogsSuccess;

  using _SendLogs_d__16 = ::GlobalNamespace::__LogManager___SendLogs_d__16;

  /// @brief Field lastErrorLog, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_lastErrorLog, put = setStaticF_lastErrorLog))::GlobalNamespace::__LogManager__LogData* lastErrorLog;

  /// @brief Field logHistory, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_logHistory, put = setStaticF_logHistory))::System::Collections::Generic::LinkedList_1<::StringW>* logHistory;

  /// @brief Field shouldTrackLogs, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_shouldTrackLogs, put = setStaticF_shouldTrackLogs)) bool shouldTrackLogs;

  /// @brief Method Awake, addr 0x29c97cc, size 0x80, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method DisableLogHistory, addr 0x29ca32c, size 0x7c, virtual false, abstract: false, final false
  static inline void DisableLogHistory();

  /// @brief Method EnableLogHistory, addr 0x29ca2d0, size 0x5c, virtual false, abstract: false, final false
  static inline void EnableLogHistory();

  /// @brief Method GetLogHistory, addr 0x29c9f6c, size 0x218, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetLogHistory();

  /// @brief Method GetLogState, addr 0x29ca258, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW GetLogState();

  /// @brief Method GetMergedLogHistory, addr 0x29ca184, size 0xd4, virtual false, abstract: false, final false
  static inline ::StringW GetMergedLogHistory();

  /// @brief Method LogEvent, addr 0x29c9b98, size 0x334, virtual false, abstract: false, final false
  static inline void LogEvent(::StringW preface, ::StringW eventName);

  static inline ::GlobalNamespace::LogManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x29c984c, size 0x80, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnLogReceived, addr 0x29c98cc, size 0x264, virtual false, abstract: false, final false
  inline void OnLogReceived(::StringW logMessage, ::StringW stackTrace, ::UnityEngine::LogType logType);

  /// @brief Method SendLogs, addr 0x29ca3a8, size 0xa8, virtual false, abstract: false, final false
  inline void SendLogs(::StringW accountID, ::GlobalNamespace::__LogManager__OnSendLogsSuccess* onSuccess, ::GlobalNamespace::__LogManager__OnSendLogsFailed* onFailed);

  /// @brief Method .ctor, addr 0x29ca450, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__LogManager__LogData* getStaticF_lastErrorLog();

  static inline ::System::Collections::Generic::LinkedList_1<::StringW>* getStaticF_logHistory();

  static inline bool getStaticF_shouldTrackLogs();

  static inline void setStaticF_lastErrorLog(::GlobalNamespace::__LogManager__LogData* value);

  static inline void setStaticF_logHistory(::System::Collections::Generic::LinkedList_1<::StringW>* value);

  static inline void setStaticF_shouldTrackLogs(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LogManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LogManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LogManager(LogManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LogManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LogManager(LogManager const&) = delete;

  /// @brief Field MAX_LOG_HISTORY offset 0xffffffff size 0x4
  static constexpr int32_t MAX_LOG_HISTORY{ static_cast<int32_t>(0x1f4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LogManager, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LogManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LogManager*, "", "LogManager");
NEED_NO_BOX(::GlobalNamespace::__LogManager__LogData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LogManager__LogData*, "", "LogManager/LogData");
NEED_NO_BOX(::GlobalNamespace::__LogManager__OnSendLogsFailed);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LogManager__OnSendLogsFailed*, "", "LogManager/OnSendLogsFailed");
NEED_NO_BOX(::GlobalNamespace::__LogManager__OnSendLogsSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LogManager__OnSendLogsSuccess*, "", "LogManager/OnSendLogsSuccess");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LogManager___SendLogs_d__16, "", "LogManager/<SendLogs>d__16");
