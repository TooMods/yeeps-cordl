#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Realtime/zzzz__IErrorInfoCallback_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
CORDL_MODULE_EXPORT(ErrorInfoCallbacksContainer)
namespace Photon::Realtime {
class ErrorInfo;
}
namespace Photon::Realtime {
class IErrorInfoCallback;
}
namespace Photon::Realtime {
class LoadBalancingClient;
}
// Forward declare root types
namespace Photon::Realtime {
class ErrorInfoCallbacksContainer;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::ErrorInfoCallbacksContainer);
// Type: Photon.Realtime::ErrorInfoCallbacksContainer
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::ErrorInfoCallbacksContainer*
class CORDL_TYPE ErrorInfoCallbacksContainer : public ::System::Collections::Generic::List_1<::Photon::Realtime::IErrorInfoCallback*> {
public:
  // Declarations
  /// @brief Field client, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_client, put = __cordl_internal_set_client))::Photon::Realtime::LoadBalancingClient* client;

  /// @brief Convert operator to "::Photon::Realtime::IErrorInfoCallback"
  constexpr operator ::Photon::Realtime::IErrorInfoCallback*() noexcept;

  static inline ::Photon::Realtime::ErrorInfoCallbacksContainer* New_ctor(::Photon::Realtime::LoadBalancingClient* client);

  /// @brief Method OnErrorInfo, addr 0x2243bf4, size 0x1c0, virtual true, abstract: false, final true
  inline void OnErrorInfo(::Photon::Realtime::ErrorInfo* errorInfo);

  constexpr ::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get_client();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::LoadBalancingClient*> const& __cordl_internal_get_client() const;

  constexpr void __cordl_internal_set_client(::Photon::Realtime::LoadBalancingClient* value);

  /// @brief Method .ctor, addr 0x22397b4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Photon::Realtime::LoadBalancingClient* client);

  /// @brief Convert to "::Photon::Realtime::IErrorInfoCallback"
  constexpr ::Photon::Realtime::IErrorInfoCallback* i___Photon__Realtime__IErrorInfoCallback() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ErrorInfoCallbacksContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ErrorInfoCallbacksContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ErrorInfoCallbacksContainer(ErrorInfoCallbacksContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ErrorInfoCallbacksContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ErrorInfoCallbacksContainer(ErrorInfoCallbacksContainer const&) = delete;

  /// @brief Field client, offset: 0x28, size: 0x8, def value: None
  ::Photon::Realtime::LoadBalancingClient* ___client;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::ErrorInfoCallbacksContainer, 0x30>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::ErrorInfoCallbacksContainer, ___client) == 0x28, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::ErrorInfoCallbacksContainer);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::ErrorInfoCallbacksContainer*, "Photon.Realtime", "ErrorInfoCallbacksContainer");
