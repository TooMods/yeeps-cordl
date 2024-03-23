#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMarshallTransformations)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
class CustomMarshallTransformations;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Transform::CustomMarshallTransformations);
// Type: Amazon.Runtime.Internal.Transform::CustomMarshallTransformations
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::CustomMarshallTransformations*
class CORDL_TYPE CustomMarshallTransformations : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertDateTimeToEpochMilliseconds, addr 0x2448ce4, size 0xc4, virtual false, abstract: false, final false
  static inline int64_t ConvertDateTimeToEpochMilliseconds(::System::DateTime dateTime);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomMarshallTransformations();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomMarshallTransformations", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomMarshallTransformations(CustomMarshallTransformations&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomMarshallTransformations", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomMarshallTransformations(CustomMarshallTransformations const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Transform::CustomMarshallTransformations, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Transform
NEED_NO_BOX(::Amazon::Runtime::Internal::Transform::CustomMarshallTransformations);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::CustomMarshallTransformations*, "Amazon.Runtime.Internal.Transform", "CustomMarshallTransformations");
