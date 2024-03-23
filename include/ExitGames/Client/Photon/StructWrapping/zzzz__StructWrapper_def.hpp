#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/StructWrapping/zzzz__WrappedType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StructWrapper)
namespace ExitGames::Client::Photon::StructWrapping {
struct WrappedType;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace ExitGames::Client::Photon::StructWrapping {
class StructWrapper;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::StructWrapping::StructWrapper);
// Type: ExitGames.Client.Photon.StructWrapping::StructWrapper
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon::StructWrapping {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon.StructWrapping::StructWrapper*
class CORDL_TYPE StructWrapper : public ::System::Object {
public:
  // Declarations
  /// @brief Field ttype, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ttype, put = __cordl_internal_set_ttype))::System::Type* ttype;

  /// @brief Field wrappedType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_wrappedType, put = __cordl_internal_set_wrappedType))::ExitGames::Client::Photon::StructWrapping::WrappedType wrappedType;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Box, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* Box();

  /// @brief Method DisconnectFromPool, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DisconnectFromPool();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Dispose();

  static inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper* New_ctor(::System::Type* ttype, ::ExitGames::Client::Photon::StructWrapping::WrappedType wrappedType);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW ToString(bool writeType);

  constexpr ::System::Type*& __cordl_internal_get_ttype();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_ttype() const;

  constexpr ::ExitGames::Client::Photon::StructWrapping::WrappedType const& __cordl_internal_get_wrappedType() const;

  constexpr ::ExitGames::Client::Photon::StructWrapping::WrappedType& __cordl_internal_get_wrappedType();

  constexpr void __cordl_internal_set_ttype(::System::Type* value);

  constexpr void __cordl_internal_set_wrappedType(::ExitGames::Client::Photon::StructWrapping::WrappedType value);

  /// @brief Method .ctor, addr 0x2ac3900, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* ttype, ::ExitGames::Client::Photon::StructWrapping::WrappedType wrappedType);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method op_Implicit, addr 0x2ac4064, size 0x70, virtual false, abstract: false, final false
  static inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper* op_Implicit___ExitGames__Client__Photon__StructWrapping__StructWrapper_(::UnityEngine::Quaternion value);

  /// @brief Method op_Implicit, addr 0x2ac3fa4, size 0x58, virtual false, abstract: false, final false
  static inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper* op_Implicit___ExitGames__Client__Photon__StructWrapping__StructWrapper_(::UnityEngine::Vector2 value);

  /// @brief Method op_Implicit, addr 0x2ac3ffc, size 0x68, virtual false, abstract: false, final false
  static inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper* op_Implicit___ExitGames__Client__Photon__StructWrapping__StructWrapper_(::UnityEngine::Vector3 value);

  /// @brief Method op_Implicit, addr 0x2ac3930, size 0x8, virtual false, abstract: false, final false
  static inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper* op_Implicit___ExitGames__Client__Photon__StructWrapping__StructWrapper_(bool value);

  /// @brief Method op_Implicit, addr 0x2ac3a8c, size 0x50, virtual false, abstract: false, final false
  static inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper* op_Implicit___ExitGames__Client__Photon__StructWrapping__StructWrapper_(double_t value);

  /// @brief Method op_Implicit, addr 0x2ac3a3c, size 0x50, virtual false, abstract: false, final false
  static inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper* op_Implicit___ExitGames__Client__Photon__StructWrapping__StructWrapper_(float_t value);

  /// @brief Method op_Implicit, addr 0x2ac3adc, size 0x48, virtual false, abstract: false, final false
  static inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper* op_Implicit___ExitGames__Client__Photon__StructWrapping__StructWrapper_(int16_t value);

  /// @brief Method op_Implicit, addr 0x2ac3b24, size 0x48, virtual false, abstract: false, final false
  static inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper* op_Implicit___ExitGames__Client__Photon__StructWrapping__StructWrapper_(int32_t value);

  /// @brief Method op_Implicit, addr 0x2ac3b6c, size 0x48, virtual false, abstract: false, final false
  static inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper* op_Implicit___ExitGames__Client__Photon__StructWrapping__StructWrapper_(int64_t value);

  /// @brief Method op_Implicit, addr 0x2ac39bc, size 0x4, virtual false, abstract: false, final false
  static inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper* op_Implicit___ExitGames__Client__Photon__StructWrapping__StructWrapper_(uint8_t value);

  /// @brief Method op_Implicit, addr 0x2ac41f4, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion op_Implicit___UnityEngine__Quaternion(::ExitGames::Client::Photon::StructWrapping::StructWrapper* wrapper);

  /// @brief Method op_Implicit, addr 0x2ac40d4, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::ExitGames::Client::Photon::StructWrapping::StructWrapper* wrapper);

  /// @brief Method op_Implicit, addr 0x2ac4164, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::ExitGames::Client::Photon::StructWrapping::StructWrapper* wrapper);

  /// @brief Method op_Implicit, addr 0x2ac3bb4, size 0x90, virtual false, abstract: false, final false
  static inline bool op_Implicit_bool(::ExitGames::Client::Photon::StructWrapping::StructWrapper* wrapper);

  /// @brief Method op_Implicit, addr 0x2ac3d64, size 0x90, virtual false, abstract: false, final false
  static inline double_t op_Implicit_double_t(::ExitGames::Client::Photon::StructWrapping::StructWrapper* wrapper);

  /// @brief Method op_Implicit, addr 0x2ac3cd4, size 0x90, virtual false, abstract: false, final false
  static inline float_t op_Implicit_float_t(::ExitGames::Client::Photon::StructWrapping::StructWrapper* wrapper);

  /// @brief Method op_Implicit, addr 0x2ac3df4, size 0x90, virtual false, abstract: false, final false
  static inline int16_t op_Implicit_int16_t(::ExitGames::Client::Photon::StructWrapping::StructWrapper* wrapper);

  /// @brief Method op_Implicit, addr 0x2ac3e84, size 0x90, virtual false, abstract: false, final false
  static inline int32_t op_Implicit_int32_t(::ExitGames::Client::Photon::StructWrapping::StructWrapper* wrapper);

  /// @brief Method op_Implicit, addr 0x2ac3f14, size 0x90, virtual false, abstract: false, final false
  static inline int64_t op_Implicit_int64_t(::ExitGames::Client::Photon::StructWrapping::StructWrapper* wrapper);

  /// @brief Method op_Implicit, addr 0x2ac3c44, size 0x90, virtual false, abstract: false, final false
  static inline uint8_t op_Implicit_uint8_t(::ExitGames::Client::Photon::StructWrapping::StructWrapper* wrapper);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StructWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StructWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StructWrapper(StructWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StructWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StructWrapper(StructWrapper const&) = delete;

  /// @brief Field wrappedType, offset: 0x10, size: 0x4, def value: None
  ::ExitGames::Client::Photon::StructWrapping::WrappedType ___wrappedType;

  /// @brief Field ttype, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___ttype;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::StructWrapping::StructWrapper, 0x20>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::StructWrapping::StructWrapper, ___wrappedType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::StructWrapping::StructWrapper, ___ttype) == 0x18, "Offset mismatch!");

} // namespace ExitGames::Client::Photon::StructWrapping
NEED_NO_BOX(::ExitGames::Client::Photon::StructWrapping::StructWrapper);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::StructWrapping::StructWrapper*, "ExitGames.Client.Photon.StructWrapping", "StructWrapper");
