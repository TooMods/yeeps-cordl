#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StringBuffer)
namespace Newtonsoft::Json {
template <typename T> class IArrayPool_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
struct StringBuffer;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Utilities::StringBuffer);
// Type: Newtonsoft.Json.Utilities::StringBuffer
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// CS Name: ::Newtonsoft.Json.Utilities::StringBuffer
struct CORDL_TYPE StringBuffer {
public:
  // Declarations
  __declspec(property(get = get_InternalBuffer))::ArrayW<char16_t, ::Array<char16_t>*> InternalBuffer;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Position, put = set_Position)) int32_t Position;

  /// @brief Method Append, addr 0xefeb54, size 0x80, virtual false, abstract: false, final false
  inline void Append(::Newtonsoft::Json::IArrayPool_1<char16_t>* bufferPool, ::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t startIndex, int32_t count);

  /// @brief Method Append, addr 0xefea74, size 0x78, virtual false, abstract: false, final false
  inline void Append(::Newtonsoft::Json::IArrayPool_1<char16_t>* bufferPool, char16_t value);

  /// @brief Method Clear, addr 0xefebd4, size 0x30, virtual false, abstract: false, final false
  inline void Clear(::Newtonsoft::Json::IArrayPool_1<char16_t>* bufferPool);

  /// @brief Method EnsureSize, addr 0xefeaec, size 0x68, virtual false, abstract: false, final false
  inline void EnsureSize(::Newtonsoft::Json::IArrayPool_1<char16_t>* bufferPool, int32_t appendLength);

  /// @brief Method ToString, addr 0xefec04, size 0x18, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0xefec1c, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW ToString(int32_t start, int32_t length);

  /// @brief Method .ctor, addr 0xefea68, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<char16_t, ::Array<char16_t>*> buffer);

  /// @brief Method .ctor, addr 0xefea40, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::IArrayPool_1<char16_t>* bufferPool, int32_t initalSize);

  /// @brief Method get_InternalBuffer, addr 0xefec38, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> get_InternalBuffer();

  /// @brief Method get_IsEmpty, addr 0xefea30, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_Position, addr 0xefea20, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Position();

  /// @brief Method set_Position, addr 0xefea28, size 0x8, virtual false, abstract: false, final false
  inline void set_Position(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StringBuffer();

  // Ctor Parameters [CppParam { name: "_buffer", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: None }, CppParam { name: "_position", ty: "int32_t", modifiers: "", def_value:
  // None }]
  constexpr StringBuffer(::ArrayW<char16_t, ::Array<char16_t>*> _buffer, int32_t _position) noexcept;

  /// @brief Field _buffer, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> _buffer;

  /// @brief Field _position, offset: 0x8, size: 0x4, def value: None
  int32_t _position;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::StringBuffer, 0x10>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::StringBuffer, _buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::StringBuffer, _position) == 0x8, "Offset mismatch!");

} // namespace Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::StringBuffer, "Newtonsoft.Json.Utilities", "StringBuffer");
