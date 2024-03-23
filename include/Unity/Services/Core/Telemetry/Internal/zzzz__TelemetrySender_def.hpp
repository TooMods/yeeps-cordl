#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TelemetrySender)
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Object;
}
namespace Unity::Services::Core::Scheduler::Internal {
class IActionScheduler;
}
namespace Unity::Services::Core::Telemetry::Internal {
class ExponentialBackOffRetryPolicy;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IUnityWebRequestSender;
}
namespace Unity::Services::Core::Telemetry::Internal {
struct WebRequest;
}
namespace Unity::Services::Core::Telemetry::Internal {
template <typename TPayload> class __TelemetrySender____c__DisplayClass7_0_1;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class TelemetrySender;
}
namespace Unity::Services::Core::Telemetry::Internal {
template <typename TPayload> class __TelemetrySender____c__DisplayClass7_0_1;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::TelemetrySender);
MARK_GEN_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1);
// Type: ::<>c__DisplayClass7_0`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// cpp template
template <typename TPayload>
// Is value type: false
// CS Name: ::TelemetrySender::<>c__DisplayClass7_0`1<TPayload>*
class CORDL_TYPE __TelemetrySender____c__DisplayClass7_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Core::Telemetry::Internal::TelemetrySender* __4__this;

  /// @brief Field completionSource, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_completionSource, put = __cordl_internal_set_completionSource))::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* completionSource;

  /// @brief Field sendCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_sendCount, put = __cordl_internal_set_sendCount)) int32_t sendCount;

  /// @brief Field serializedPayload, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_serializedPayload, put = __cordl_internal_set_serializedPayload))::ArrayW<uint8_t, ::Array<uint8_t>*> serializedPayload;

  static inline ::Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>* New_ctor();

  /// @brief Method <SendAsync>g__OnRequestCompleted|1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _SendAsync_g__OnRequestCompleted_1(::Unity::Services::Core::Telemetry::Internal::WebRequest webRequest);

  /// @brief Method <SendAsync>g__SendWebRequest|0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _SendAsync_g__SendWebRequest_0();

  constexpr ::Unity::Services::Core::Telemetry::Internal::TelemetrySender*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::TelemetrySender*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*& __cordl_internal_get_completionSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*> const& __cordl_internal_get_completionSource() const;

  constexpr int32_t const& __cordl_internal_get_sendCount() const;

  constexpr int32_t& __cordl_internal_get_sendCount();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_serializedPayload() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_serializedPayload();

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Core::Telemetry::Internal::TelemetrySender* value);

  constexpr void __cordl_internal_set_completionSource(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* value);

  constexpr void __cordl_internal_set_sendCount(int32_t value);

  constexpr void __cordl_internal_set_serializedPayload(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TelemetrySender____c__DisplayClass7_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TelemetrySender____c__DisplayClass7_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TelemetrySender____c__DisplayClass7_0_1(__TelemetrySender____c__DisplayClass7_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TelemetrySender____c__DisplayClass7_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TelemetrySender____c__DisplayClass7_0_1(__TelemetrySender____c__DisplayClass7_0_1 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Core::Telemetry::Internal::TelemetrySender* _____4__this;

  /// @brief Field serializedPayload, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___serializedPayload;

  /// @brief Field sendCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___sendCount;

  /// @brief Field completionSource, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* ___completionSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Telemetry::Internal
// Type: Unity.Services.Core.Telemetry.Internal::TelemetrySender
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::TelemetrySender*
class CORDL_TYPE TelemetrySender : public ::System::Object {
public:
  // Declarations
  template <typename TPayload> using __c__DisplayClass7_0_1 = ::Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>;

  __declspec(property(get = get_TargetUrl))::StringW TargetUrl;

  /// @brief Field <TargetUrl>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__TargetUrl_k__BackingField, put = __cordl_internal_set__TargetUrl_k__BackingField))::StringW _TargetUrl_k__BackingField;

  /// @brief Field m_RequestSender, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RequestSender, put = __cordl_internal_set_m_RequestSender))::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender* m_RequestSender;

  /// @brief Field m_RetryPolicy, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RetryPolicy, put = __cordl_internal_set_m_RetryPolicy))::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy* m_RetryPolicy;

  /// @brief Field m_Scheduler, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Scheduler, put = __cordl_internal_set_m_Scheduler))::Unity::Services::Core::Scheduler::Internal::IActionScheduler* m_Scheduler;

  /// @brief Method CreateRequest, addr 0x270d5c8, size 0x154, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::UnityWebRequest* CreateRequest(::ArrayW<uint8_t, ::Array<uint8_t>*> serializedPayload);

  static inline ::Unity::Services::Core::Telemetry::Internal::TelemetrySender* New_ctor(::StringW targetUrl, ::StringW servicePath,
                                                                                        ::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler,
                                                                                        ::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy* retryPolicy,
                                                                                        ::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender* requestSender);

  /// @brief Method SendAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TPayload> inline ::System::Threading::Tasks::Task* SendAsync(TPayload payload);

  /// @brief Method SerializePayload, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TPayload> static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SerializePayload(TPayload payload);

  constexpr ::StringW const& __cordl_internal_get__TargetUrl_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__TargetUrl_k__BackingField();

  constexpr ::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender*& __cordl_internal_get_m_RequestSender();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender*> const& __cordl_internal_get_m_RequestSender() const;

  constexpr ::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy*& __cordl_internal_get_m_RetryPolicy();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy*> const& __cordl_internal_get_m_RetryPolicy() const;

  constexpr ::Unity::Services::Core::Scheduler::Internal::IActionScheduler*& __cordl_internal_get_m_Scheduler();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Scheduler::Internal::IActionScheduler*> const& __cordl_internal_get_m_Scheduler() const;

  constexpr void __cordl_internal_set__TargetUrl_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_m_RequestSender(::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender* value);

  constexpr void __cordl_internal_set_m_RetryPolicy(::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy* value);

  constexpr void __cordl_internal_set_m_Scheduler(::Unity::Services::Core::Scheduler::Internal::IActionScheduler* value);

  /// @brief Method .ctor, addr 0x270d534, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::StringW targetUrl, ::StringW servicePath, ::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler,
                    ::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy* retryPolicy, ::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender* requestSender);

  /// @brief Method get_TargetUrl, addr 0x270d52c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TargetUrl();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TelemetrySender();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TelemetrySender", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TelemetrySender(TelemetrySender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TelemetrySender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TelemetrySender(TelemetrySender const&) = delete;

  /// @brief Field <TargetUrl>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____TargetUrl_k__BackingField;

  /// @brief Field m_RetryPolicy, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy* ___m_RetryPolicy;

  /// @brief Field m_Scheduler, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Core::Scheduler::Internal::IActionScheduler* ___m_Scheduler;

  /// @brief Field m_RequestSender, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender* ___m_RequestSender;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::TelemetrySender, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::TelemetrySender, ____TargetUrl_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::TelemetrySender, ___m_RetryPolicy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::TelemetrySender, ___m_Scheduler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::TelemetrySender, ___m_RequestSender) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::TelemetrySender);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::TelemetrySender*, "Unity.Services.Core.Telemetry.Internal", "TelemetrySender");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1, "Unity.Services.Core.Telemetry.Internal",
                                     "TelemetrySender/<>c__DisplayClass7_0`1");
