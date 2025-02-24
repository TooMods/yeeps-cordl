#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__UserCapabilityList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithUserCapabilityList)
namespace Oculus::Platform::Models {
class UserCapabilityList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithUserCapabilityList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithUserCapabilityList);
// Type: Oculus.Platform::MessageWithUserCapabilityList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithUserCapabilityList*
class CORDL_TYPE MessageWithUserCapabilityList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserCapabilityList*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x19b5bb8, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserCapabilityList* GetDataFromMessage(void* c_message);

  /// @brief Method GetUserCapabilityList, addr 0x19b5b7c, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserCapabilityList* GetUserCapabilityList();

  static inline ::Oculus::Platform::MessageWithUserCapabilityList* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x19b16fc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithUserCapabilityList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithUserCapabilityList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithUserCapabilityList(MessageWithUserCapabilityList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithUserCapabilityList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithUserCapabilityList(MessageWithUserCapabilityList const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithUserCapabilityList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithUserCapabilityList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithUserCapabilityList*, "Oculus.Platform", "MessageWithUserCapabilityList");
