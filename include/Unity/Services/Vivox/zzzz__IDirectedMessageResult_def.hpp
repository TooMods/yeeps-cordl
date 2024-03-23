#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IDirectedMessageResult)
// Forward declare root types
namespace Unity::Services::Vivox {
class IDirectedMessageResult;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::IDirectedMessageResult);
// Type: Unity.Services.Vivox::IDirectedMessageResult
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::IDirectedMessageResult*
class CORDL_TYPE IDirectedMessageResult {
public:
  // Declarations
  __declspec(property(get = get_RequestId))::StringW RequestId;

  /// @brief Method get_RequestId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_RequestId();

  // Ctor Parameters [CppParam { name: "", ty: "IDirectedMessageResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDirectedMessageResult(IDirectedMessageResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDirectedMessageResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDirectedMessageResult(IDirectedMessageResult const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::IDirectedMessageResult);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::IDirectedMessageResult*, "Unity.Services.Vivox", "IDirectedMessageResult");
