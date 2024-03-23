#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUnityWebRequestSender)
namespace System {
template <typename T> class Action_1;
}
namespace Unity::Services::Core::Telemetry::Internal {
struct WebRequest;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class IUnityWebRequestSender;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender);
// Type: Unity.Services.Core.Telemetry.Internal::IUnityWebRequestSender
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::IUnityWebRequestSender*
class CORDL_TYPE IUnityWebRequestSender {
public:
  // Declarations
  /// @brief Method SendRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SendRequest(::UnityEngine::Networking::UnityWebRequest* request, ::System::Action_1<::Unity::Services::Core::Telemetry::Internal::WebRequest>* callback);

  // Ctor Parameters [CppParam { name: "", ty: "IUnityWebRequestSender", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IUnityWebRequestSender(IUnityWebRequestSender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IUnityWebRequestSender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUnityWebRequestSender(IUnityWebRequestSender const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender*, "Unity.Services.Core.Telemetry.Internal", "IUnityWebRequestSender");
