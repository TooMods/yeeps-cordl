#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SerializableGuidUtil)
namespace System {
struct Guid;
}
namespace Unity::XR::CoreUtils {
struct SerializableGuid;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class SerializableGuidUtil;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::SerializableGuidUtil);
// Type: Unity.XR.CoreUtils::SerializableGuidUtil
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::SerializableGuidUtil*
class CORDL_TYPE SerializableGuidUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x287f5a0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::XR::CoreUtils::SerializableGuid Create(::System::Guid guid);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializableGuidUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializableGuidUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializableGuidUtil(SerializableGuidUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializableGuidUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializableGuidUtil(SerializableGuidUtil const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::SerializableGuidUtil, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::SerializableGuidUtil);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::SerializableGuidUtil*, "Unity.XR.CoreUtils", "SerializableGuidUtil");
