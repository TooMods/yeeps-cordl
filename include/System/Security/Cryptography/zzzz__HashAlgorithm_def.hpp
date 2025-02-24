#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashAlgorithm)
namespace System::IO {
class Stream;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::Security::Cryptography {
class HashAlgorithm;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::HashAlgorithm);
// Type: System.Security.Cryptography::HashAlgorithm
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::HashAlgorithm*
class CORDL_TYPE HashAlgorithm : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CanReuseTransform)) bool CanReuseTransform;

  __declspec(property(get = get_CanTransformMultipleBlocks)) bool CanTransformMultipleBlocks;

  __declspec(property(get = get_Hash))::ArrayW<uint8_t, ::Array<uint8_t>*> Hash;

  __declspec(property(get = get_HashSize)) int32_t HashSize;

  /// @brief Field HashSizeValue, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_HashSizeValue, put = __cordl_internal_set_HashSizeValue)) int32_t HashSizeValue;

  /// @brief Field HashValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_HashValue, put = __cordl_internal_set_HashValue))::ArrayW<uint8_t, ::Array<uint8_t>*> HashValue;

  __declspec(property(get = get_InputBlockSize)) int32_t InputBlockSize;

  __declspec(property(get = get_OutputBlockSize)) int32_t OutputBlockSize;

  /// @brief Field State, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_State, put = __cordl_internal_set_State)) int32_t State;

  /// @brief Field _disposed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed, put = __cordl_internal_set__disposed)) bool _disposed;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Security::Cryptography::ICryptoTransform"
  constexpr operator ::System::Security::Cryptography::ICryptoTransform*() noexcept;

  /// @brief Method CaptureHashCodeAndReinitialize, addr 0x1d17094, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CaptureHashCodeAndReinitialize();

  /// @brief Method Clear, addr 0x1d17690, size 0x94, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ComputeHash, addr 0x1d16fe4, size 0xb0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeHash(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method ComputeHash, addr 0x1d17298, size 0x178, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeHash(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ComputeHash, addr 0x1d17410, size 0x210, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeHash(::System::IO::Stream* inputStream);

  /// @brief Method Create, addr 0x1d16e14, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::HashAlgorithm* Create();

  /// @brief Method Create, addr 0x1d16e1c, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::HashAlgorithm* Create(::StringW hashName);

  /// @brief Method Dispose, addr 0x1d17620, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x1d17724, size 0x10, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method HashCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t ibStart, int32_t cbSize);

  /// @brief Method HashCore, addr 0x1d17a70, size 0x1d0, virtual true, abstract: false, final false
  inline void HashCore(::System::ReadOnlySpan_1<uint8_t> source);

  /// @brief Method HashFinal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashFinal();

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Initialize();

  static inline ::System::Security::Cryptography::HashAlgorithm* New_ctor();

  /// @brief Method TransformBlock, addr 0x1d17754, size 0x9c, virtual true, abstract: false, final true
  inline int32_t TransformBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> outputBuffer, int32_t outputOffset);

  /// @brief Method TransformFinalBlock, addr 0x1d1794c, size 0x124, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> TransformFinalBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount);

  /// @brief Method TryComputeHash, addr 0x1d1713c, size 0x15c, virtual false, abstract: false, final false
  inline bool TryComputeHash(::System::ReadOnlySpan_1<uint8_t> source, ::System::Span_1<uint8_t> destination, ByRef<int32_t> bytesWritten);

  /// @brief Method TryHashFinal, addr 0x1d17c40, size 0x144, virtual true, abstract: false, final false
  inline bool TryHashFinal(::System::Span_1<uint8_t> destination, ByRef<int32_t> bytesWritten);

  /// @brief Method ValidateTransformBlock, addr 0x1d177f0, size 0x15c, virtual false, abstract: false, final false
  inline void ValidateTransformBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount);

  constexpr int32_t const& __cordl_internal_get_HashSizeValue() const;

  constexpr int32_t& __cordl_internal_get_HashSizeValue();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_HashValue() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_HashValue();

  constexpr int32_t const& __cordl_internal_get_State() const;

  constexpr int32_t& __cordl_internal_get_State();

  constexpr bool const& __cordl_internal_get__disposed() const;

  constexpr bool& __cordl_internal_get__disposed();

  constexpr void __cordl_internal_set_HashSizeValue(int32_t value);

  constexpr void __cordl_internal_set_HashValue(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_State(int32_t value);

  constexpr void __cordl_internal_set__disposed(bool value);

  /// @brief Method .ctor, addr 0x1d16e0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CanReuseTransform, addr 0x1d1774c, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanReuseTransform();

  /// @brief Method get_CanTransformMultipleBlocks, addr 0x1d17744, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanTransformMultipleBlocks();

  /// @brief Method get_Hash, addr 0x1d16ea4, size 0xf8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Hash();

  /// @brief Method get_HashSize, addr 0x1d16e9c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_HashSize();

  /// @brief Method get_InputBlockSize, addr 0x1d17734, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_InputBlockSize();

  /// @brief Method get_OutputBlockSize, addr 0x1d1773c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_OutputBlockSize();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::System::Security::Cryptography::ICryptoTransform"
  constexpr ::System::Security::Cryptography::ICryptoTransform* i___System__Security__Cryptography__ICryptoTransform() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashAlgorithm();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HashAlgorithm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashAlgorithm(HashAlgorithm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashAlgorithm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashAlgorithm(HashAlgorithm const&) = delete;

  /// @brief Field _disposed, offset: 0x10, size: 0x1, def value: None
  bool ____disposed;

  /// @brief Field HashSizeValue, offset: 0x14, size: 0x4, def value: None
  int32_t ___HashSizeValue;

  /// @brief Field HashValue, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___HashValue;

  /// @brief Field State, offset: 0x20, size: 0x4, def value: None
  int32_t ___State;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::HashAlgorithm, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::HashAlgorithm, ____disposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::HashAlgorithm, ___HashSizeValue) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::HashAlgorithm, ___HashValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::HashAlgorithm, ___State) == 0x20, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::HashAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::HashAlgorithm*, "System.Security.Cryptography", "HashAlgorithm");
