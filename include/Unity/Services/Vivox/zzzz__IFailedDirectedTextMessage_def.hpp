#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IFailedDirectedTextMessage)
namespace Unity::Services::Vivox {
class AccountId;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class IFailedDirectedTextMessage;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::IFailedDirectedTextMessage);
// Type: Unity.Services.Vivox::IFailedDirectedTextMessage
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::IFailedDirectedTextMessage*
class CORDL_TYPE IFailedDirectedTextMessage {
public:
  // Declarations
  __declspec(property(get = get_FromSelf)) bool FromSelf;

  __declspec(property(get = get_RequestId))::StringW RequestId;

  __declspec(property(get = get_Sender))::Unity::Services::Vivox::AccountId* Sender;

  __declspec(property(get = get_StatusCode)) int32_t StatusCode;

  /// @brief Method get_FromSelf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_FromSelf();

  /// @brief Method get_RequestId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_RequestId();

  /// @brief Method get_Sender, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::AccountId* get_Sender();

  /// @brief Method get_StatusCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_StatusCode();

  // Ctor Parameters [CppParam { name: "", ty: "IFailedDirectedTextMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IFailedDirectedTextMessage(IFailedDirectedTextMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IFailedDirectedTextMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFailedDirectedTextMessage(IFailedDirectedTextMessage const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::IFailedDirectedTextMessage);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::IFailedDirectedTextMessage*, "Unity.Services.Vivox", "IFailedDirectedTextMessage");
