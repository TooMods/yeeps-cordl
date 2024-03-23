#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectSerializationExtension)
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryFormatter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Utils {
class ObjectSerializationExtension;
}
// Write type traits
MARK_REF_PTR_T(::Utils::ObjectSerializationExtension);
// Type: Utils::ObjectSerializationExtension
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Utils {
// Is value type: false
// CS Name: ::Utils::ObjectSerializationExtension*
class CORDL_TYPE ObjectSerializationExtension : public ::System::Object {
public:
  // Declarations
  /// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Deserialize(::ArrayW<uint8_t, ::Array<uint8_t>*> byteArray);

  /// @brief Method GetCustomFormatter, addr 0xf353cc, size 0x254, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* GetCustomFormatter();

  /// @brief Method SerializeToByteArray, addr 0xf35620, size 0x1d4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SerializeToByteArray(::System::Object* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectSerializationExtension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectSerializationExtension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectSerializationExtension(ObjectSerializationExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectSerializationExtension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectSerializationExtension(ObjectSerializationExtension const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Utils::ObjectSerializationExtension, 0x10>, "Size mismatch!");

} // namespace Utils
NEED_NO_BOX(::Utils::ObjectSerializationExtension);
DEFINE_IL2CPP_ARG_TYPE(::Utils::ObjectSerializationExtension*, "Utils", "ObjectSerializationExtension");
