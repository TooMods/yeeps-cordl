#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GuidUtil)
namespace System {
struct Guid;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class GuidUtil;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::GuidUtil);
// Type: Unity.XR.CoreUtils::GuidUtil
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::GuidUtil*
class CORDL_TYPE GuidUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Method Compose, addr 0x287cb68, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Guid Compose(uint64_t low, uint64_t high);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GuidUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GuidUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GuidUtil(GuidUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GuidUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GuidUtil(GuidUtil const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::GuidUtil, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::GuidUtil);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::GuidUtil*, "Unity.XR.CoreUtils", "GuidUtil");
