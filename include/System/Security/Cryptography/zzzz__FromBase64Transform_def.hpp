#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__FromBase64TransformMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FromBase64Transform)
namespace System::Security::Cryptography {
struct FromBase64TransformMode;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Security::Cryptography {
class FromBase64Transform;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::FromBase64Transform);
// Type: System.Security.Cryptography::FromBase64Transform
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::FromBase64Transform*
class CORDL_TYPE FromBase64Transform : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CanReuseTransform)) bool CanReuseTransform;

  __declspec(property(get = get_CanTransformMultipleBlocks)) bool CanTransformMultipleBlocks;

  __declspec(property(get = get_InputBlockSize)) int32_t InputBlockSize;

  __declspec(property(get = get_OutputBlockSize)) int32_t OutputBlockSize;

  /// @brief Field _inputBuffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__inputBuffer, put = __cordl_internal_set__inputBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _inputBuffer;

  /// @brief Field _inputIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__inputIndex, put = __cordl_internal_set__inputIndex)) int32_t _inputIndex;

  /// @brief Field _whitespaces, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__whitespaces, put = __cordl_internal_set__whitespaces))::System::Security::Cryptography::FromBase64TransformMode _whitespaces;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Security::Cryptography::ICryptoTransform"
  constexpr operator ::System::Security::Cryptography::ICryptoTransform*() noexcept;

  /// @brief Method Clear, addr 0x1d1a608, size 0x4, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method DiscardWhiteSpaces, addr 0x1d1a078, size 0x1b8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DiscardWhiteSpaces(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount);

  /// @brief Method Dispose, addr 0x1d1a59c, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x1d1a60c, size 0x34, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x1d1a640, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::System::Security::Cryptography::FromBase64Transform* New_ctor();

  static inline ::System::Security::Cryptography::FromBase64Transform* New_ctor(::System::Security::Cryptography::FromBase64TransformMode whitespaces);

  /// @brief Method Reset, addr 0x1d1a594, size 0x8, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method TransformBlock, addr 0x1d19cf0, size 0x388, virtual true, abstract: false, final true
  inline int32_t TransformBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> outputBuffer, int32_t outputOffset);

  /// @brief Method TransformFinalBlock, addr 0x1d1a230, size 0x364, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> TransformFinalBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__inputBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__inputBuffer();

  constexpr int32_t const& __cordl_internal_get__inputIndex() const;

  constexpr int32_t& __cordl_internal_get__inputIndex();

  constexpr ::System::Security::Cryptography::FromBase64TransformMode const& __cordl_internal_get__whitespaces() const;

  constexpr ::System::Security::Cryptography::FromBase64TransformMode& __cordl_internal_get__whitespaces();

  constexpr void __cordl_internal_set__inputBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__inputIndex(int32_t value);

  constexpr void __cordl_internal_set__whitespaces(::System::Security::Cryptography::FromBase64TransformMode value);

  /// @brief Method .ctor, addr 0x1d19c5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1d19c64, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::FromBase64TransformMode whitespaces);

  /// @brief Method get_CanReuseTransform, addr 0x1d19ce8, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanReuseTransform();

  /// @brief Method get_CanTransformMultipleBlocks, addr 0x1d19ce0, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanTransformMultipleBlocks();

  /// @brief Method get_InputBlockSize, addr 0x1d19cd0, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_InputBlockSize();

  /// @brief Method get_OutputBlockSize, addr 0x1d19cd8, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_OutputBlockSize();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::System::Security::Cryptography::ICryptoTransform"
  constexpr ::System::Security::Cryptography::ICryptoTransform* i___System__Security__Cryptography__ICryptoTransform() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBase64Transform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBase64Transform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBase64Transform(FromBase64Transform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBase64Transform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBase64Transform(FromBase64Transform const&) = delete;

  /// @brief Field _inputBuffer, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____inputBuffer;

  /// @brief Field _inputIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ____inputIndex;

  /// @brief Field _whitespaces, offset: 0x1c, size: 0x4, def value: None
  ::System::Security::Cryptography::FromBase64TransformMode ____whitespaces;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::FromBase64Transform, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::FromBase64Transform, ____inputBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::FromBase64Transform, ____inputIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::FromBase64Transform, ____whitespaces) == 0x1c, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::FromBase64Transform);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::FromBase64Transform*, "System.Security.Cryptography", "FromBase64Transform");
