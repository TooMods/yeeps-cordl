#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Platform)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace ThirdParty::BouncyCastle::Utilities {
class Platform;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::BouncyCastle::Utilities::Platform);
// Type: ThirdParty.BouncyCastle.Utilities::Platform
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ThirdParty::BouncyCastle::Utilities {
// Is value type: false
// CS Name: ::ThirdParty.BouncyCastle.Utilities::Platform*
class CORDL_TYPE Platform : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateArrayList, addr 0x14b5c58, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* CreateArrayList();

  /// @brief Method CreateArrayList, addr 0x14b5cc8, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* CreateArrayList(int32_t capacity);

  /// @brief Method CreateArrayList, addr 0x14b5d40, size 0x40c, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* CreateArrayList(::System::Collections::ICollection* collection);

  /// @brief Method CreateArrayList, addr 0x14b614c, size 0x390, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* CreateArrayList(::System::Collections::IEnumerable* collection);

  static inline ::ThirdParty::BouncyCastle::Utilities::Platform* New_ctor();

  /// @brief Method .ctor, addr 0x14b64dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Platform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Platform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Platform(Platform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Platform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Platform(Platform const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::BouncyCastle::Utilities::Platform, 0x10>, "Size mismatch!");

} // namespace ThirdParty::BouncyCastle::Utilities
NEED_NO_BOX(::ThirdParty::BouncyCastle::Utilities::Platform);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::BouncyCastle::Utilities::Platform*, "ThirdParty.BouncyCastle.Utilities", "Platform");
