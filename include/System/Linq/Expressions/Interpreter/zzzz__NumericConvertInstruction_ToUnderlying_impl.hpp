#pragma once
#include "System/Linq/Expressions/Interpreter/zzzz__NumericConvertInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NumericConvertInstruction_ToUnderlying_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying.get_InstructionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying::*)()>(
    &::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying::get_InstructionName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1b5c7fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying::*)(
    ::System::TypeCode, bool)>(&::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1b5c83c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying::*)(::System::Object*)>(
        &::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying::Convert)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x1b5c86c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying*>::get(), 11));
    return ___internal_method;
  }
};
inline ::StringW System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying::get_InstructionName() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying*
System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying::New_ctor(::System::TypeCode to, bool isLiftedToNull) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying*>(to, isLiftedToNull));
}
inline void System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying::_ctor(::System::TypeCode to, bool isLiftedToNull) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, to, isLiftedToNull);
}
inline ::System::Object* System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying::Convert(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying::__NumericConvertInstruction__ToUnderlying() {}
