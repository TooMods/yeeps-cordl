#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectNull)
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryHeaderEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectNull;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::ObjectNull);
// Type: System.Runtime.Serialization.Formatters.Binary::ObjectNull
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::ObjectNull*
class CORDL_TYPE ObjectNull : public ::System::Object {
public:
  // Declarations
  /// @brief Field nullCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_nullCount, put = __cordl_internal_set_nullCount)) int32_t nullCount;

  /// @brief Method Dump, addr 0x1ab3ca8, size 0x4, virtual false, abstract: false, final false
  inline void Dump();

  static inline ::System::Runtime::Serialization::Formatters::Binary::ObjectNull* New_ctor();

  /// @brief Method Read, addr 0x1ab3c48, size 0x60, virtual false, abstract: false, final false
  inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input, ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

  /// @brief Method SetNullCount, addr 0x1ab3b94, size 0x8, virtual false, abstract: false, final false
  inline void SetNullCount(int32_t nullCount);

  /// @brief Method Write, addr 0x1ab3b9c, size 0xac, virtual true, abstract: false, final true
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  constexpr int32_t const& __cordl_internal_get_nullCount() const;

  constexpr int32_t& __cordl_internal_get_nullCount();

  constexpr void __cordl_internal_set_nullCount(int32_t value);

  /// @brief Method .ctor, addr 0x1ab3b8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectNull();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectNull", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectNull(ObjectNull&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectNull", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectNull(ObjectNull const&) = delete;

  /// @brief Field nullCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___nullCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::ObjectNull, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectNull, ___nullCount) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ObjectNull);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ObjectNull*, "System.Runtime.Serialization.Formatters.Binary", "ObjectNull");
