#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__ShareMediaResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithShareMediaResult)
namespace Oculus::Platform::Models {
class ShareMediaResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithShareMediaResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithShareMediaResult);
// Type: Oculus.Platform::MessageWithShareMediaResult
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithShareMediaResult*
class CORDL_TYPE MessageWithShareMediaResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ShareMediaResult*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x19b56f0, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::ShareMediaResult* GetDataFromMessage(void* c_message);

  /// @brief Method GetShareMediaResult, addr 0x19b56b4, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::ShareMediaResult* GetShareMediaResult();

  static inline ::Oculus::Platform::MessageWithShareMediaResult* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x19b14ec, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithShareMediaResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithShareMediaResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithShareMediaResult(MessageWithShareMediaResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithShareMediaResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithShareMediaResult(MessageWithShareMediaResult const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithShareMediaResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithShareMediaResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithShareMediaResult*, "Oculus.Platform", "MessageWithShareMediaResult");
