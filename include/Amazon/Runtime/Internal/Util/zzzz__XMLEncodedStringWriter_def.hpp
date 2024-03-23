#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__StringWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XMLEncodedStringWriter)
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class XMLEncodedStringWriter;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::XMLEncodedStringWriter);
// Type: Amazon.Runtime.Internal.Util::XMLEncodedStringWriter
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::XMLEncodedStringWriter*
class CORDL_TYPE XMLEncodedStringWriter : public ::System::IO::StringWriter {
public:
  // Declarations
  static inline ::Amazon::Runtime::Internal::Util::XMLEncodedStringWriter* New_ctor(::System::IFormatProvider* formatProvider);

  /// @brief Method Write, addr 0x2447de0, size 0x230, virtual true, abstract: false, final false
  inline void Write(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method .ctor, addr 0x2447dd8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IFormatProvider* formatProvider);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XMLEncodedStringWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XMLEncodedStringWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XMLEncodedStringWriter(XMLEncodedStringWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XMLEncodedStringWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XMLEncodedStringWriter(XMLEncodedStringWriter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::XMLEncodedStringWriter, 0x40>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::XMLEncodedStringWriter);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::XMLEncodedStringWriter*, "Amazon.Runtime.Internal.Util", "XMLEncodedStringWriter");
