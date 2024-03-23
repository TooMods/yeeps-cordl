#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GuidExtensions)
namespace System {
struct Guid;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class GuidExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::GuidExtensions);
// Type: Unity.XR.CoreUtils::GuidExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::GuidExtensions*
class CORDL_TYPE GuidExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Decompose, addr 0x287472c, size 0xa4, virtual false, abstract: false, final false
  static inline void Decompose(::System::Guid guid, ByRef<uint64_t> low, ByRef<uint64_t> high);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GuidExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GuidExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GuidExtensions(GuidExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GuidExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GuidExtensions(GuidExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::GuidExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::GuidExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::GuidExtensions*, "Unity.XR.CoreUtils", "GuidExtensions");
