#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomType)
namespace ExitGames::Client::Photon {
class DeserializeMethod;
}
namespace ExitGames::Client::Photon {
class DeserializeStreamMethod;
}
namespace ExitGames::Client::Photon {
class SerializeMethod;
}
namespace ExitGames::Client::Photon {
class SerializeStreamMethod;
}
namespace System {
class Type;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class CustomType;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::CustomType);
// Type: ExitGames.Client.Photon::CustomType
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::CustomType*
class CORDL_TYPE CustomType : public ::System::Object {
public:
  // Declarations
  /// @brief Field Code, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_Code, put = __cordl_internal_set_Code)) uint8_t Code;

  /// @brief Field DeserializeFunction, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_DeserializeFunction, put = __cordl_internal_set_DeserializeFunction))::ExitGames::Client::Photon::DeserializeMethod* DeserializeFunction;

  /// @brief Field DeserializeStreamFunction, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_DeserializeStreamFunction,
                      put = __cordl_internal_set_DeserializeStreamFunction))::ExitGames::Client::Photon::DeserializeStreamMethod* DeserializeStreamFunction;

  /// @brief Field SerializeFunction, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_SerializeFunction, put = __cordl_internal_set_SerializeFunction))::ExitGames::Client::Photon::SerializeMethod* SerializeFunction;

  /// @brief Field SerializeStreamFunction, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_SerializeStreamFunction,
                      put = __cordl_internal_set_SerializeStreamFunction))::ExitGames::Client::Photon::SerializeStreamMethod* SerializeStreamFunction;

  /// @brief Field Type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type))::System::Type* Type;

  static inline ::ExitGames::Client::Photon::CustomType* New_ctor(::System::Type* type, uint8_t code, ::ExitGames::Client::Photon::SerializeMethod* serializeFunction,
                                                                  ::ExitGames::Client::Photon::DeserializeMethod* deserializeFunction);

  static inline ::ExitGames::Client::Photon::CustomType* New_ctor(::System::Type* type, uint8_t code, ::ExitGames::Client::Photon::SerializeStreamMethod* serializeFunction,
                                                                  ::ExitGames::Client::Photon::DeserializeStreamMethod* deserializeFunction);

  constexpr uint8_t const& __cordl_internal_get_Code() const;

  constexpr uint8_t& __cordl_internal_get_Code();

  constexpr ::ExitGames::Client::Photon::DeserializeMethod*& __cordl_internal_get_DeserializeFunction();

  constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::DeserializeMethod*> const& __cordl_internal_get_DeserializeFunction() const;

  constexpr ::ExitGames::Client::Photon::DeserializeStreamMethod*& __cordl_internal_get_DeserializeStreamFunction();

  constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::DeserializeStreamMethod*> const& __cordl_internal_get_DeserializeStreamFunction() const;

  constexpr ::ExitGames::Client::Photon::SerializeMethod*& __cordl_internal_get_SerializeFunction();

  constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::SerializeMethod*> const& __cordl_internal_get_SerializeFunction() const;

  constexpr ::ExitGames::Client::Photon::SerializeStreamMethod*& __cordl_internal_get_SerializeStreamFunction();

  constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::SerializeStreamMethod*> const& __cordl_internal_get_SerializeStreamFunction() const;

  constexpr ::System::Type*& __cordl_internal_get_Type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_Type() const;

  constexpr void __cordl_internal_set_Code(uint8_t value);

  constexpr void __cordl_internal_set_DeserializeFunction(::ExitGames::Client::Photon::DeserializeMethod* value);

  constexpr void __cordl_internal_set_DeserializeStreamFunction(::ExitGames::Client::Photon::DeserializeStreamMethod* value);

  constexpr void __cordl_internal_set_SerializeFunction(::ExitGames::Client::Photon::SerializeMethod* value);

  constexpr void __cordl_internal_set_SerializeStreamFunction(::ExitGames::Client::Photon::SerializeStreamMethod* value);

  constexpr void __cordl_internal_set_Type(::System::Type* value);

  /// @brief Method .ctor, addr 0x2861f44, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, uint8_t code, ::ExitGames::Client::Photon::SerializeMethod* serializeFunction, ::ExitGames::Client::Photon::DeserializeMethod* deserializeFunction);

  /// @brief Method .ctor, addr 0x2861f88, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, uint8_t code, ::ExitGames::Client::Photon::SerializeStreamMethod* serializeFunction,
                    ::ExitGames::Client::Photon::DeserializeStreamMethod* deserializeFunction);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomType(CustomType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomType(CustomType const&) = delete;

  /// @brief Field Code, offset: 0x10, size: 0x1, def value: None
  uint8_t ___Code;

  /// @brief Field Type, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___Type;

  /// @brief Field SerializeFunction, offset: 0x20, size: 0x8, def value: None
  ::ExitGames::Client::Photon::SerializeMethod* ___SerializeFunction;

  /// @brief Field DeserializeFunction, offset: 0x28, size: 0x8, def value: None
  ::ExitGames::Client::Photon::DeserializeMethod* ___DeserializeFunction;

  /// @brief Field SerializeStreamFunction, offset: 0x30, size: 0x8, def value: None
  ::ExitGames::Client::Photon::SerializeStreamMethod* ___SerializeStreamFunction;

  /// @brief Field DeserializeStreamFunction, offset: 0x38, size: 0x8, def value: None
  ::ExitGames::Client::Photon::DeserializeStreamMethod* ___DeserializeStreamFunction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::CustomType, 0x40>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::CustomType, ___Code) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::CustomType, ___Type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::CustomType, ___SerializeFunction) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::CustomType, ___DeserializeFunction) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::CustomType, ___SerializeStreamFunction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::CustomType, ___DeserializeStreamFunction) == 0x38, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::CustomType);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::CustomType*, "ExitGames.Client.Photon", "CustomType");
