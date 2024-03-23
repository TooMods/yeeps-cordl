#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IChatHistoryQueryResult)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace Unity::Services::Vivox {
class AccountId;
}
namespace Unity::Services::Vivox {
class VivoxMessage;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class IChatHistoryQueryResult;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::IChatHistoryQueryResult);
// Type: Unity.Services.Vivox::IChatHistoryQueryResult
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::IChatHistoryQueryResult*
class CORDL_TYPE IChatHistoryQueryResult {
public:
  // Declarations
  __declspec(property(get = get_Participant))::Unity::Services::Vivox::AccountId* Participant;

  __declspec(property(get = get_RequestId))::StringW RequestId;

  __declspec(property(get = get_VivoxMessages))::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>* VivoxMessages;

  /// @brief Method get_Participant, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::AccountId* get_Participant();

  /// @brief Method get_RequestId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_RequestId();

  /// @brief Method get_VivoxMessages, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>* get_VivoxMessages();

  // Ctor Parameters [CppParam { name: "", ty: "IChatHistoryQueryResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IChatHistoryQueryResult(IChatHistoryQueryResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IChatHistoryQueryResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IChatHistoryQueryResult(IChatHistoryQueryResult const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::IChatHistoryQueryResult);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::IChatHistoryQueryResult*, "Unity.Services.Vivox", "IChatHistoryQueryResult");
