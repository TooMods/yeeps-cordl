#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IErrorInfoCallback)
namespace Photon::Realtime {
class ErrorInfo;
}
// Forward declare root types
namespace Photon::Realtime {
class IErrorInfoCallback;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::IErrorInfoCallback);
// Type: Photon.Realtime::IErrorInfoCallback
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::IErrorInfoCallback*
class CORDL_TYPE IErrorInfoCallback {
public:
  // Declarations
  /// @brief Method OnErrorInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnErrorInfo(::Photon::Realtime::ErrorInfo* errorInfo);

  // Ctor Parameters [CppParam { name: "", ty: "IErrorInfoCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IErrorInfoCallback(IErrorInfoCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IErrorInfoCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IErrorInfoCallback(IErrorInfoCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::IErrorInfoCallback);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::IErrorInfoCallback*, "Photon.Realtime", "IErrorInfoCallback");
