#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DestinationList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithDestinationList)
namespace Oculus::Platform::Models {
class DestinationList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithDestinationList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithDestinationList);
// Type: Oculus.Platform::MessageWithDestinationList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithDestinationList*
class CORDL_TYPE MessageWithDestinationList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::DestinationList*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x19b35a0, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::DestinationList* GetDataFromMessage(void* c_message);

  /// @brief Method GetDestinationList, addr 0x19b3564, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::DestinationList* GetDestinationList();

  static inline ::Oculus::Platform::MessageWithDestinationList* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x19b0c54, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithDestinationList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithDestinationList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithDestinationList(MessageWithDestinationList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithDestinationList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithDestinationList(MessageWithDestinationList const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithDestinationList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithDestinationList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithDestinationList*, "Oculus.Platform", "MessageWithDestinationList");
