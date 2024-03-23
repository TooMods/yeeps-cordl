#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Extensions)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IDictionary;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Realtime {
class Extensions;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::Extensions);
// Type: Photon.Realtime::Extensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::Extensions*
class CORDL_TYPE Extensions : public ::System::Object {
public:
  // Declarations
  /// @brief Field keysWithNullValue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_keysWithNullValue, put = setStaticF_keysWithNullValue))::System::Collections::Generic::List_1<::System::Object*>* keysWithNullValue;

  /// @brief Method Contains, addr 0x2238554, size 0x54, virtual false, abstract: false, final false
  static inline bool Contains(::ArrayW<int32_t, ::Array<int32_t>*> target, int32_t nr);

  /// @brief Method Merge, addr 0x2236ba4, size 0x440, virtual false, abstract: false, final false
  static inline void Merge(::System::Collections::IDictionary* target, ::System::Collections::IDictionary* addHash);

  /// @brief Method MergeStringKeys, addr 0x2236fe4, size 0x468, virtual false, abstract: false, final false
  static inline void MergeStringKeys(::System::Collections::IDictionary* target, ::System::Collections::IDictionary* addHash);

  /// @brief Method StripKeysWithNullValues, addr 0x22381ac, size 0x3a8, virtual false, abstract: false, final false
  static inline void StripKeysWithNullValues(::ExitGames::Client::Photon::Hashtable* original);

  /// @brief Method StripKeysWithNullValues, addr 0x2237ba0, size 0x60c, virtual false, abstract: false, final false
  static inline void StripKeysWithNullValues(::System::Collections::IDictionary* original);

  /// @brief Method StripToStringKeys, addr 0x2237a14, size 0x18c, virtual false, abstract: false, final false
  static inline ::ExitGames::Client::Photon::Hashtable* StripToStringKeys(::ExitGames::Client::Photon::Hashtable* original);

  /// @brief Method StripToStringKeys, addr 0x22375f0, size 0x424, virtual false, abstract: false, final false
  static inline ::ExitGames::Client::Photon::Hashtable* StripToStringKeys(::System::Collections::IDictionary* original);

  /// @brief Method ToStringFull, addr 0x22374a8, size 0x148, virtual false, abstract: false, final false
  static inline ::StringW ToStringFull(::ArrayW<::System::Object*, ::Array<::System::Object*>*> data);

  /// @brief Method ToStringFull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::StringW ToStringFull(::System::Collections::Generic::List_1<T>* data);

  /// @brief Method ToStringFull, addr 0x223744c, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW ToStringFull(::System::Collections::IDictionary* origin);

  static inline ::System::Collections::Generic::List_1<::System::Object*>* getStaticF_keysWithNullValue();

  static inline void setStaticF_keysWithNullValue(::System::Collections::Generic::List_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions(Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions(Extensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::Extensions, 0x10>, "Size mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::Extensions);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::Extensions*, "Photon.Realtime", "Extensions");
