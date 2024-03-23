#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityWebRequestSender)
namespace System {
template <typename T> class Action_1;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IUnityWebRequestSender;
}
namespace Unity::Services::Core::Telemetry::Internal {
struct WebRequest;
}
namespace Unity::Services::Core::Telemetry::Internal {
class __UnityWebRequestSender____c__DisplayClass0_0;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class UnityWebRequestSender;
}
namespace Unity::Services::Core::Telemetry::Internal {
class __UnityWebRequestSender____c__DisplayClass0_0;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender);
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0);
// Type: ::<>c__DisplayClass0_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::UnityWebRequestSender::<>c__DisplayClass0_0*
class CORDL_TYPE __UnityWebRequestSender____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback))::System::Action_1<::Unity::Services::Core::Telemetry::Internal::WebRequest>* callback;

  static inline ::Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0* New_ctor();

  /// @brief Method <SendRequest>g__OnSendingRequestCompleted|0, addr 0x270d8b8, size 0x27c, virtual false, abstract: false, final false
  inline void _SendRequest_g__OnSendingRequestCompleted_0(::UnityEngine::AsyncOperation* operation);

  constexpr ::System::Action_1<::Unity::Services::Core::Telemetry::Internal::WebRequest>*& __cordl_internal_get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Unity::Services::Core::Telemetry::Internal::WebRequest>*> const& __cordl_internal_get_callback() const;

  constexpr void __cordl_internal_set_callback(::System::Action_1<::Unity::Services::Core::Telemetry::Internal::WebRequest>* value);

  /// @brief Method .ctor, addr 0x270d7f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityWebRequestSender____c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityWebRequestSender____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityWebRequestSender____c__DisplayClass0_0(__UnityWebRequestSender____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityWebRequestSender____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityWebRequestSender____c__DisplayClass0_0(__UnityWebRequestSender____c__DisplayClass0_0 const&) = delete;

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::Unity::Services::Core::Telemetry::Internal::WebRequest>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0, ___callback) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
// Type: Unity.Services.Core.Telemetry.Internal::UnityWebRequestSender
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::UnityWebRequestSender*
class CORDL_TYPE UnityWebRequestSender : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0;

  /// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender"
  constexpr operator ::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender*() noexcept;

  static inline ::Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender* New_ctor();

  /// @brief Method SendRequest, addr 0x270d71c, size 0xdc, virtual true, abstract: false, final true
  inline void SendRequest(::UnityEngine::Networking::UnityWebRequest* request, ::System::Action_1<::Unity::Services::Core::Telemetry::Internal::WebRequest>* callback);

  /// @brief Method Simplify, addr 0x270d800, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Services::Core::Telemetry::Internal::WebRequest Simplify(::UnityEngine::Networking::UnityWebRequest* webRequest);

  /// @brief Method .ctor, addr 0x270d8b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender"
  constexpr ::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender* i___Unity__Services__Core__Telemetry__Internal__IUnityWebRequestSender() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityWebRequestSender();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestSender", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityWebRequestSender(UnityWebRequestSender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestSender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityWebRequestSender(UnityWebRequestSender const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender*, "Unity.Services.Core.Telemetry.Internal", "UnityWebRequestSender");
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0*, "Unity.Services.Core.Telemetry.Internal",
                       "UnityWebRequestSender/<>c__DisplayClass0_0");
