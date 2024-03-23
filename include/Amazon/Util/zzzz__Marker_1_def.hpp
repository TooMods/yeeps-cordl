#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Marker_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Util {
template <typename U> class Marker_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Util::Marker_1);
// Type: Amazon.Util::Marker`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// cpp template
template <typename U>
// Is value type: false
// CS Name: ::Amazon.Util::Marker`1<U>*
class CORDL_TYPE Marker_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Data))::System::Collections::Generic::List_1<U>* Data;

  __declspec(property(get = get_NextToken))::StringW NextToken;

  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::System::Collections::Generic::List_1<U>* data;

  /// @brief Field nextToken, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_nextToken, put = __cordl_internal_set_nextToken))::StringW nextToken;

  static inline ::Amazon::Util::Marker_1<U>* New_ctor(::System::Collections::Generic::List_1<U>* data, ::StringW nextToken);

  constexpr ::System::Collections::Generic::List_1<U>*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<U>*> const& __cordl_internal_get_data() const;

  constexpr ::StringW const& __cordl_internal_get_nextToken() const;

  constexpr ::StringW& __cordl_internal_get_nextToken();

  constexpr void __cordl_internal_set_data(::System::Collections::Generic::List_1<U>* value);

  constexpr void __cordl_internal_set_nextToken(::StringW value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<U>* data, ::StringW nextToken);

  /// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<U>* get_Data();

  /// @brief Method get_NextToken, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW get_NextToken();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Marker_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Marker_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Marker_1(Marker_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Marker_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Marker_1(Marker_1 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<U>* ___data;

  /// @brief Field nextToken, offset: 0x18, size: 0x8, def value: None
  ::StringW ___nextToken;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Util::Marker_1, "Amazon.Util", "Marker`1");
