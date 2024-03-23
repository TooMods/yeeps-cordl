#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CryptoAPITransform)
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Security::Cryptography {
class CryptoAPITransform;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::CryptoAPITransform);
// Type: System.Security.Cryptography::CryptoAPITransform
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::CryptoAPITransform*
class CORDL_TYPE CryptoAPITransform : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CanReuseTransform)) bool CanReuseTransform;

  __declspec(property(get = get_CanTransformMultipleBlocks)) bool CanTransformMultipleBlocks;

  __declspec(property(get = get_InputBlockSize)) int32_t InputBlockSize;

  __declspec(property(get = get_KeyHandle)) void* KeyHandle;

  __declspec(property(get = get_OutputBlockSize)) int32_t OutputBlockSize;

  /// @brief Field m_disposed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_disposed, put = __cordl_internal_set_m_disposed)) bool m_disposed;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Security::Cryptography::ICryptoTransform"
  constexpr operator ::System::Security::Cryptography::ICryptoTransform*() noexcept;

  /// @brief Method Clear, addr 0x1c8ddf4, size 0x18, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Dispose, addr 0x1c8dd74, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x1c8dddc, size 0x18, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::System::Security::Cryptography::CryptoAPITransform* New_ctor();

  /// @brief Method Reset, addr 0x1c8de1c, size 0x4, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method TransformBlock, addr 0x1c8de0c, size 0x8, virtual true, abstract: false, final true
  inline int32_t TransformBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> outputBuffer, int32_t outputOffset);

  /// @brief Method TransformFinalBlock, addr 0x1c8de14, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> TransformFinalBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount);

  constexpr bool const& __cordl_internal_get_m_disposed() const;

  constexpr bool& __cordl_internal_get_m_disposed();

  constexpr void __cordl_internal_set_m_disposed(bool value);

  /// @brief Method .ctor, addr 0x1c8dcf0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CanReuseTransform, addr 0x1c8dd0c, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanReuseTransform();

  /// @brief Method get_CanTransformMultipleBlocks, addr 0x1c8dd14, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanTransformMultipleBlocks();

  /// @brief Method get_InputBlockSize, addr 0x1c8dd1c, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_InputBlockSize();

  /// @brief Method get_KeyHandle, addr 0x1c8dd24, size 0x48, virtual false, abstract: false, final false
  inline void* get_KeyHandle();

  /// @brief Method get_OutputBlockSize, addr 0x1c8dd6c, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_OutputBlockSize();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::System::Security::Cryptography::ICryptoTransform"
  constexpr ::System::Security::Cryptography::ICryptoTransform* i___System__Security__Cryptography__ICryptoTransform() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CryptoAPITransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CryptoAPITransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CryptoAPITransform(CryptoAPITransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CryptoAPITransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CryptoAPITransform(CryptoAPITransform const&) = delete;

  /// @brief Field m_disposed, offset: 0x10, size: 0x1, def value: None
  bool ___m_disposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::CryptoAPITransform, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CryptoAPITransform, ___m_disposed) == 0x10, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::CryptoAPITransform);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CryptoAPITransform*, "System.Security.Cryptography", "CryptoAPITransform");
