#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IHashingWrapper)
namespace System::IO {
class Stream;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class IHashingWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::IHashingWrapper);
// Type: Amazon.Runtime.Internal.Util::IHashingWrapper
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::IHashingWrapper*
class CORDL_TYPE IHashingWrapper {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AppendBlock, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AppendBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method AppendBlock, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AppendBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method AppendLastBlock, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> AppendLastBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method AppendLastBlock, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> AppendLastBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Clear();

  /// @brief Method ComputeHash, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeHash(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method ComputeHash, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeHash(::System::IO::Stream* stream);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IHashingWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IHashingWrapper(IHashingWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IHashingWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IHashingWrapper(IHashingWrapper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::IHashingWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::IHashingWrapper*, "Amazon.Runtime.Internal.Util", "IHashingWrapper");
