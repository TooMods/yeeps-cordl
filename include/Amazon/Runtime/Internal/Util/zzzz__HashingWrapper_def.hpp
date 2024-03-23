#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashingWrapper)
namespace Amazon::Runtime::Internal::Util {
class IHashingWrapper;
}
namespace System::IO {
class Stream;
}
namespace System {
class IDisposable;
}
namespace ThirdParty::MD5 {
class MD5Managed;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class HashingWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::HashingWrapper);
// Type: Amazon.Runtime.Internal.Util::HashingWrapper
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::HashingWrapper*
class CORDL_TYPE HashingWrapper : public ::System::Object {
public:
  // Declarations
  /// @brief Field MD5ManagedName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MD5ManagedName, put = setStaticF_MD5ManagedName))::StringW MD5ManagedName;

  /// @brief Field _algorithm, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__algorithm, put = __cordl_internal_set__algorithm))::ThirdParty::MD5::MD5Managed* _algorithm;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Util::IHashingWrapper"
  constexpr operator ::Amazon::Runtime::Internal::Util::IHashingWrapper*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AppendBlock, addr 0x2438d10, size 0x28, virtual true, abstract: false, final true
  inline void AppendBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method AppendBlock, addr 0x2438d38, size 0x1c, virtual true, abstract: false, final true
  inline void AppendBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method AppendLastBlock, addr 0x2438d54, size 0x28, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> AppendLastBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method AppendLastBlock, addr 0x2438d7c, size 0x1c, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> AppendLastBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Clear, addr 0x2438e04, size 0x24, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method ComputeHash, addr 0x2438e28, size 0x1c, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeHash(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method ComputeHash, addr 0x2438e44, size 0x1c, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeHash(::System::IO::Stream* stream);

  /// @brief Method Dispose, addr 0x2438d98, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2438e60, size 0xac, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Init, addr 0x2438c10, size 0x100, virtual false, abstract: false, final false
  inline void Init(::StringW algorithmName);

  static inline ::Amazon::Runtime::Internal::Util::HashingWrapper* New_ctor(::StringW algorithmName);

  constexpr ::ThirdParty::MD5::MD5Managed*& __cordl_internal_get__algorithm();

  constexpr ::cordl_internals::to_const_pointer<::ThirdParty::MD5::MD5Managed*> const& __cordl_internal_get__algorithm() const;

  constexpr void __cordl_internal_set__algorithm(::ThirdParty::MD5::MD5Managed* value);

  /// @brief Method .ctor, addr 0x2438b88, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::StringW algorithmName);

  static inline ::StringW getStaticF_MD5ManagedName();

  /// @brief Convert to "::Amazon::Runtime::Internal::Util::IHashingWrapper"
  constexpr ::Amazon::Runtime::Internal::Util::IHashingWrapper* i___Amazon__Runtime__Internal__Util__IHashingWrapper() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_MD5ManagedName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashingWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HashingWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashingWrapper(HashingWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashingWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashingWrapper(HashingWrapper const&) = delete;

  /// @brief Field _algorithm, offset: 0x10, size: 0x8, def value: None
  ::ThirdParty::MD5::MD5Managed* ____algorithm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::HashingWrapper, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::HashingWrapper, ____algorithm) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::HashingWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::HashingWrapper*, "Amazon.Runtime.Internal.Util", "HashingWrapper");
