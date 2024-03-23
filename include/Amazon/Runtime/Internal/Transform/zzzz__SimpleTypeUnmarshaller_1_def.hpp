#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SimpleTypeUnmarshaller_1)
namespace Amazon::Runtime::Internal::Transform {
class JsonUnmarshallerContext;
}
namespace Amazon::Runtime::Internal::Transform {
class XmlUnmarshallerContext;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
template <typename T> class SimpleTypeUnmarshaller_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::Transform::SimpleTypeUnmarshaller_1);
// Type: Amazon.Runtime.Internal.Transform::SimpleTypeUnmarshaller`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::SimpleTypeUnmarshaller`1<T>*
class CORDL_TYPE SimpleTypeUnmarshaller_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Method Unmarshall, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context);

  /// @brief Method Unmarshall, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T Unmarshall(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleTypeUnmarshaller_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleTypeUnmarshaller_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleTypeUnmarshaller_1(SimpleTypeUnmarshaller_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleTypeUnmarshaller_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleTypeUnmarshaller_1(SimpleTypeUnmarshaller_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Transform
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::Transform::SimpleTypeUnmarshaller_1, "Amazon.Runtime.Internal.Transform", "SimpleTypeUnmarshaller`1");
